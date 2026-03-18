/*
 * XREFs of PspDisablePrimaryTokenExchange @ 0x1406933A0
 * Callers:
 *     PspSystemThreadStartup @ 0x1403265A0 (PspSystemThreadStartup.c)
 *     PspUserThreadStartup @ 0x140692D10 (PspUserThreadStartup.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     MiDeleteProcessShadow @ 0x140236418 (MiDeleteProcessShadow.c)
 *     KeSynchronizeAddressPolicy @ 0x140320DA4 (KeSynchronizeAddressPolicy.c)
 *     PspLockUnlockProcessExclusive @ 0x140321794 (PspLockUnlockProcessExclusive.c)
 *     KeKvaShadowingActive @ 0x14032D974 (KeKvaShadowingActive.c)
 *     SeTokenIsAdmin @ 0x1405E34A0 (SeTokenIsAdmin.c)
 *     PsReferencePrimaryToken @ 0x14067EEB0 (PsReferencePrimaryToken.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B309C (PspOneDirectionSecurityDomainCombine.c)
 */

void __fastcall PspDisablePrimaryTokenExchange(__int64 a1)
{
  __int64 v1; // rsi
  struct _DMA_ADAPTER *v2; // rbx
  BOOL v3; // edi
  BOOL v4; // ebx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  if ( (*(_DWORD *)(v1 + 1120) & 0x8000) == 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(v1 + 1120), 0xFu);
    PspLockUnlockProcessExclusive(v1, a1);
  }
  if ( (*(_DWORD *)(v1 + 2172) & 0x400000) == 0 )
  {
    v2 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken((PEPROCESS)v1);
    v3 = SeTokenIsAdmin(v2) != 0;
    HalPutDmaAdapter(v2);
    if ( (*(_BYTE *)(v1 + 992) & 1) != 0 )
      v3 = 1;
    v4 = 0;
    if ( (*(_DWORD *)(v1 + 2172) & 0x800000) == 0 )
      v4 = v3;
    if ( v4 )
    {
      *(_QWORD *)(v1 + 2528) = 0LL;
      *(_QWORD *)(v1 + 2536) = 0LL;
    }
    if ( !(unsigned int)KeKvaShadowingActive() || (*(_DWORD *)(v1 + 2172) & 0x4000) != 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)(v1 + 2172), 0xEu);
    }
    else
    {
      if ( v4 )
      {
        *(_BYTE *)(v1 + 912) = 1;
        _InterlockedOr(v5, 0);
      }
      KeSynchronizeAddressPolicy(v1);
      if ( !_interlockedbittestandset((volatile signed __int32 *)(v1 + 2172), 0xEu)
        && *(_BYTE *)(v1 + 912) == 1
        && (PEPROCESS)v1 != PsInitialSystemProcess )
      {
        MiDeleteProcessShadow(v1, 1LL);
      }
    }
    if ( !_interlockedbittestandset((volatile signed __int32 *)(v1 + 2172), 0x16u) )
      PspOneDirectionSecurityDomainCombine((PVOID)v1);
  }
  _InterlockedOr(v5, 0);
}
