/*
 * XREFs of _EtwpProviderArrivalCallback@8 @ 0x4B2F1DFF
 * Callers:
 *     _EtwpGetUmProcessImageInfo@8 @ 0x4B2F1D78 (_EtwpGetUmProcessImageInfo@8.c)
 * Callees:
 *     _RtlpxLookupFunctionTable@8 @ 0x4B2BD6C0 (_RtlpxLookupFunctionTable@8.c)
 *     _LdrGetDllFullName@8 @ 0x4B2CCBB0 (_LdrGetDllFullName@8.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _EtwpTrackDebugIdForSession@12 @ 0x4B2F1EA8 (_EtwpTrackDebugIdForSession@12.c)
 *     _EtwpFindDebugId@16 @ 0x4B2F1F5F (_EtwpFindDebugId@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _EtwpTrackBinaryForSession@12 @ 0x4B382FA7 (_EtwpTrackBinaryForSession@12.c)
 */

ULONG __fastcall EtwpProviderArrivalCallback(wchar_t *Buffer, int a2)
{
  int v2; // esi
  int DebugId; // ebx
  void *v5; // ecx
  int DllFullName; // eax
  int v9; // [esp+Ch] [ebp-22Ch] BYREF
  PVOID DllHandle; // [esp+10h] [ebp-228h]
  int v11; // [esp+14h] [ebp-224h]
  int v12; // [esp+18h] [ebp-220h]
  _UNICODE_STRING FullDllName; // [esp+1Ch] [ebp-21Ch] BYREF
  int v14; // [esp+24h] [ebp-214h] BYREF
  char v15; // [esp+28h] [ebp-210h] BYREF
  int savedregs; // [esp+238h] [ebp+0h] BYREF

  v2 = a2;
  DebugId = 0;
  v14 = a2;
  v5 = *(void **)(a2 + 28);
  FullDllName.Buffer = Buffer;
  if ( (unsigned int)v5 < dword_4B3A9374[0] || (unsigned int)v5 >= dword_4B3A9374[0] + dword_4B3A9378[0] )
  {
    RtlpxLookupFunctionTable(v5, (int)&v9, (int)&savedregs, (ULONG_PTR *)Buffer);
  }
  else
  {
    v9 = dword_4B3A9370[0];
    DllHandle = (PVOID)dword_4B3A9370[1];
    v11 = dword_4B3A9370[2];
    v12 = dword_4B3A9370[3];
    v2 = v14;
    Buffer = FullDllName.Buffer;
  }
  if ( !DllHandle )
    return 87;
  if ( (*(_WORD *)(v2 + 54) & 0x3FFF) != 2 )
  {
    if ( *(__int16 *)(v2 + 54) >= 0 )
      return DebugId;
    FullDllName.Buffer = (wchar_t *)&v15;
    FullDllName.MaximumLength = 260;
    DllFullName = LdrGetDllFullName(DllHandle, &FullDllName);
    if ( DllFullName < 0 )
      return RtlNtStatusToDosError(DllFullName);
    else
      return EtwpTrackBinaryForSession((void *)(v2 + 12));
  }
  DebugId = EtwpFindDebugId(DllHandle, (int)&v14, (int)&FullDllName.Buffer);
  if ( !DebugId )
    return EtwpTrackDebugIdForSession(Buffer, v14, FullDllName.Buffer);
  return DebugId;
}
