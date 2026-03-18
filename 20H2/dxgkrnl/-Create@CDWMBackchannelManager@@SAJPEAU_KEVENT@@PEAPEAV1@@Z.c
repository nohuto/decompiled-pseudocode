/*
 * XREFs of ?Create@CDWMBackchannelManager@@SAJPEAU_KEVENT@@PEAPEAV1@@Z @ 0x1C006C7EC
 * Callers:
 *     ?Initialize@CFlipManager@@IEAAJXZ @ 0x1C006A624 (-Initialize@CFlipManager@@IEAAJXZ.c)
 * Callees:
 *     ??0CDWMBackchannelManager@@IEAA@PEAU_KEVENT@@@Z @ 0x1C006C6E0 (--0CDWMBackchannelManager@@IEAA@PEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall CDWMBackchannelManager::Create(struct _KEVENT *a1, struct CDWMBackchannelManager **a2)
{
  CDWMBackchannelManager *PoolWithQuotaTag; // rcx
  struct CDWMBackchannelManager *v5; // rax

  PoolWithQuotaTag = (CDWMBackchannelManager *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x38uLL, 0x6D624346u);
  v5 = 0LL;
  if ( PoolWithQuotaTag )
    v5 = CDWMBackchannelManager::CDWMBackchannelManager(PoolWithQuotaTag, a1);
  *a2 = v5;
  return v5 == 0LL ? 0xC0000017 : 0;
}
