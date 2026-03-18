/*
 * XREFs of VslPrepareDriverForPatch @ 0x1404F754C
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C48A8 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

NTSTATUS __fastcall VslPrepareDriverForPatch(__int64 a1)
{
  NTSTATUS result; // eax
  volatile signed __int32 *v3; // rcx
  _QWORD v4[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v4, 0, 0x68uLL);
  _InterlockedIncrement(&dword_140C473F8);
  v4[1] = a1;
  result = VslpEnterIumSecureMode(2u, 72, 0, (__int64)v4);
  v3 = (volatile signed __int32 *)&unk_140C473FC;
  if ( result < 0 )
    v3 = (volatile signed __int32 *)&unk_140C47400;
  _InterlockedIncrement(v3);
  return result;
}
