/*
 * XREFs of VslDetermineHotPatchUndoTableSize @ 0x14088C594
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1408C57B4 (MiApplyDriverHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x1408CB0A0 (MiUnapplyDriverHotPatch.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402E56B0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

NTSTATUS __fastcall VslDetermineHotPatchUndoTableSize(__int64 a1, _DWORD *a2)
{
  NTSTATUS result; // eax
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v5, 0, 0x68uLL);
  v5[1] = a1;
  result = VslpEnterIumSecureMode(2u, 68, 0, (__int64)v5);
  if ( result >= 0 )
    *a2 = v5[2];
  return result;
}
