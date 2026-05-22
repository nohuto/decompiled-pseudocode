/*
 * XREFs of ?IsStartOfCapture@MPCSixDofProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x18018D6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall MPCSixDofProcessor::IsStartOfCapture(MPCSixDofProcessor *this, struct InputInfo *a2)
{
  char v3; // bl
  DWORD v5; // [rsp+60h] [rbp+18h] BYREF

  v3 = 1;
  if ( !byte_18020A4EC )
  {
    v5 = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\DWM",
      L"CaptureDisabledFor6dof",
      0x10u,
      0LL,
      &dword_18020A4F0,
      &v5);
    byte_18020A4EC = 1;
  }
  if ( dword_18020A4F0 || (*((_BYTE *)a2 + 728) & 0x3F) == 0 )
    return 0;
  return v3;
}
