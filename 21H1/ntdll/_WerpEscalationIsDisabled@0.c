/*
 * XREFs of _WerpEscalationIsDisabled@0 @ 0x4B33BB2C
 * Callers:
 *     _WerEscalationLazyInit@0 @ 0x4B33B780 (_WerEscalationLazyInit@0.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _WerpEscalationReadUlongFromKey@12 @ 0x4B33BC30 (_WerpEscalationReadUlongFromKey@12.c)
 */

BOOL __stdcall WerpEscalationIsDisabled()
{
  int v0; // esi
  _DWORD v2[6]; // [esp+8h] [ebp-28h] BYREF
  UNICODE_STRING DestinationString; // [esp+20h] [ebp-10h] BYREF
  int v4; // [esp+28h] [ebp-8h] BYREF
  HANDLE Handle; // [esp+2Ch] [ebp-4h] BYREF

  v0 = 0;
  Handle = 0;
  v4 = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\Windows Error Reporting\\Escalation");
  v2[0] = 24;
  v2[2] = &DestinationString;
  v2[1] = 0;
  v2[3] = 64;
  v2[4] = 0;
  v2[5] = 0;
  if ( ZwOpenKey((int)&Handle, 131097, (int)v2) >= 0
    && WerpEscalationReadUlongFromKey(Handle, L"DisableEscalation", &v4) >= 0 )
  {
    v0 = v4;
  }
  if ( Handle )
    NtClose(Handle);
  return v0 != 0;
}
