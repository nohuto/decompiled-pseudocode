/*
 * XREFs of VslFreePoolTransferObject @ 0x1404F70E0
 * Callers:
 *     VslFinishSecureImageValidation @ 0x1404F92C0 (VslFinishSecureImageValidation.c)
 *     PsDispatchIumService @ 0x14057D8B4 (PsDispatchIumService.c)
 * Callees:
 *     VslpUnlockPagesForTransfer @ 0x140391744 (VslpUnlockPagesForTransfer.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslFreePoolTransferObject(__int64 **P, _QWORD *a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rdi

  v3 = *P;
  v4 = v3[4] + *((unsigned int *)v3 + 11);
  if ( a2 )
    *a2 = *((unsigned int *)v3 + 10);
  VslpUnlockPagesForTransfer(P);
  ExFreePoolWithTag(P, 0);
  return v4;
}
