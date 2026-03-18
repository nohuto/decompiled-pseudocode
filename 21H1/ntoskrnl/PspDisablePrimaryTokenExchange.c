/*
 * XREFs of PspDisablePrimaryTokenExchange @ 0x14064C7FC
 * Callers:
 *     PspSystemThreadStartup @ 0x140317E30 (PspSystemThreadStartup.c)
 *     PspUserThreadStartup @ 0x14064C130 (PspUserThreadStartup.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     MiDeleteProcessShadow @ 0x1402AD198 (MiDeleteProcessShadow.c)
 *     KeKvaShadowingActive @ 0x1402C1374 (KeKvaShadowingActive.c)
 *     KeSynchronizeAddressPolicy @ 0x1402C13BC (KeSynchronizeAddressPolicy.c)
 *     PspLockUnlockProcessExclusive @ 0x140313354 (PspLockUnlockProcessExclusive.c)
 *     PsReferencePrimaryToken @ 0x1405E13A0 (PsReferencePrimaryToken.c)
 *     SeTokenIsAdmin @ 0x14064BC20 (SeTokenIsAdmin.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x14064CB58 (PspOneDirectionSecurityDomainCombine.c)
 */

void __fastcall PspDisablePrimaryTokenExchange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  struct _DMA_ADAPTER *v5; // rbx
  BOOL v6; // edi
  BOOL v7; // ebx
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 184);
  if ( (*(_DWORD *)(v4 + 1120) & 0x8000) == 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(v4 + 1120), 0xFu);
    PspLockUnlockProcessExclusive(v4, a1, a3, a4);
  }
  if ( (*(_DWORD *)(v4 + 2172) & 0x400000) == 0 )
  {
    v5 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken((PEPROCESS)v4);
    v6 = SeTokenIsAdmin(v5) != 0;
    HalPutDmaAdapter(v5);
    if ( (*(_BYTE *)(v4 + 992) & 1) != 0 )
      v6 = 1;
    v7 = 0;
    if ( (*(_DWORD *)(v4 + 2172) & 0x800000) == 0 )
      v7 = v6;
    if ( v7 )
    {
      *(_QWORD *)(v4 + 2528) = 0LL;
      *(_QWORD *)(v4 + 2536) = 0LL;
    }
    if ( !(unsigned int)KeKvaShadowingActive() || (*(_DWORD *)(v4 + 2172) & 0x4000) != 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)(v4 + 2172), 0xEu);
    }
    else
    {
      if ( v7 )
      {
        *(_BYTE *)(v4 + 912) = 1;
        _InterlockedOr(v8, 0);
      }
      KeSynchronizeAddressPolicy(v4);
      if ( !_interlockedbittestandset((volatile signed __int32 *)(v4 + 2172), 0xEu)
        && *(_BYTE *)(v4 + 912) == 1
        && (PEPROCESS)v4 != PsInitialSystemProcess )
      {
        MiDeleteProcessShadow(v4, 1);
      }
    }
    if ( !_interlockedbittestandset((volatile signed __int32 *)(v4 + 2172), 0x16u) )
      PspOneDirectionSecurityDomainCombine((PVOID)v4);
  }
  _InterlockedOr(v8, 0);
}
