/*
 * XREFs of _EtwpUseDescriptorType@16 @ 0x4B380958
 * Callers:
 *     _EtwEventSetInformation@20 @ 0x4B2B0A60 (_EtwEventSetInformation@20.c)
 * Callees:
 *     _RtlSetLastWin32Error@4 @ 0x4B2DAB00 (_RtlSetLastWin32Error@4.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _ZwTraceControl@24 @ 0x4B2F45B0 (_ZwTraceControl@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

LONG __thiscall EtwpUseDescriptorType(char *this, int a2, __int16 a3)
{
  char v3; // bl
  LONG v4; // esi
  NTSTATUS v5; // eax
  int v7; // [esp-4h] [ebp-2Ch]
  ULONG ReturnLength; // [esp+Ch] [ebp-1Ch] BYREF
  _DWORD InputBuffer[2]; // [esp+10h] [ebp-18h] BYREF
  char v10; // [esp+18h] [ebp-10h]

  if ( !a3 || (a2 & 1) != 0 || a3 != *(_WORD *)(a2 + 52) )
  {
    v7 = 6;
    goto LABEL_11;
  }
  v3 = *this;
  if ( *this != 1 && v3 )
  {
    v7 = 87;
LABEL_11:
    v4 = v7;
LABEL_12:
    RtlSetLastWin32Error(v4);
    return v4;
  }
  v4 = 0;
  InputBuffer[0] = *(_DWORD *)(a2 + 48);
  InputBuffer[1] = 0;
  v10 = v3;
  v5 = ZwTraceControl(EtwUseDescriptorTypeCode, InputBuffer, 0x10u, 0, 0, &ReturnLength);
  if ( v5 )
  {
    v4 = RtlNtStatusToDosError(v5);
    if ( v4 )
      goto LABEL_12;
  }
  *(_WORD *)(a2 + 54) = *(_WORD *)(a2 + 54) & 0xBFFF | ((v3 & 1) << 14);
  return v4;
}
