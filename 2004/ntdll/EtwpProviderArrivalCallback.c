/*
 * XREFs of EtwpProviderArrivalCallback @ 0x180087274
 * Callers:
 *     EtwpGetUmProcessImageInfo @ 0x1800871D4 (EtwpGetUmProcessImageInfo.c)
 * Callees:
 *     LdrGetDllFullName @ 0x180010240 (LdrGetDllFullName.c)
 *     RtlpxLookupFunctionTable @ 0x180032F40 (RtlpxLookupFunctionTable.c)
 *     RtlNtStatusToDosError @ 0x1800507F0 (RtlNtStatusToDosError.c)
 *     EtwpTrackBinaryForSession @ 0x180087368 (EtwpTrackBinaryForSession.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     EtwpFindDebugId @ 0x1801116E0 (EtwpFindDebugId.c)
 *     EtwpTrackDebugIdForSession @ 0x1801117B4 (EtwpTrackDebugIdForSession.c)
 */

__int64 __fastcall EtwpProviderArrivalCallback(__int64 a1, __int64 a2, char *a3, char *a4)
{
  unsigned __int64 v5; // rcx
  unsigned int DebugId; // ebx
  wchar_t *Buffer; // rcx
  int DllFullName; // eax
  unsigned int v12; // [rsp+20h] [rbp-E0h] BYREF
  _UNICODE_STRING FullDllName; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+38h] [rbp-C8h]
  char v15; // [rsp+40h] [rbp-C0h] BYREF

  v5 = *(_QWORD *)(a2 + 48);
  DebugId = 0;
  if ( v5 < *((_QWORD *)&xmmword_18017F510 + 1)
    || v5 >= *((_QWORD *)&xmmword_18017F510 + 1) + (unsigned __int64)(unsigned int)qword_18017F520 )
  {
    RtlpxLookupFunctionTable(v5, (signed __int64)&FullDllName, a3, a4);
  }
  else
  {
    FullDllName = (_UNICODE_STRING)xmmword_18017F510;
    v14 = qword_18017F520;
  }
  Buffer = FullDllName.Buffer;
  if ( !FullDllName.Buffer )
    return 87;
  if ( (*(_WORD *)(a2 + 98) & 0x3FFF) == 2 )
  {
    DebugId = EtwpFindDebugId(FullDllName.Buffer, 0x3FFFLL, &FullDllName, &v12);
    if ( DebugId )
      return DebugId;
    return (unsigned int)EtwpTrackDebugIdForSession(a1, *(_QWORD *)&FullDllName.Length, v12);
  }
  if ( *(__int16 *)(a2 + 98) < 0 )
  {
    FullDllName.Buffer = (wchar_t *)&v15;
    FullDllName.MaximumLength = 260;
    DllFullName = LdrGetDllFullName(Buffer, &FullDllName);
    if ( DllFullName < 0 )
      return RtlNtStatusToDosError(DllFullName);
    else
      return (unsigned int)EtwpTrackBinaryForSession(a1, &FullDllName, a2 + 32);
  }
  return DebugId;
}
