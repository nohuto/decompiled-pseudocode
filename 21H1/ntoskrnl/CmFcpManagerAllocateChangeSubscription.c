/*
 * XREFs of CmFcpManagerAllocateChangeSubscription @ 0x140879CE0
 * Callers:
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x14087933C (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     CmFcpInitializeChangeSubscription @ 0x140879C6C (CmFcpInitializeChangeSubscription.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

char *__fastcall CmFcpManagerAllocateChangeSubscription(__int64 a1, unsigned __int64 a2, KSPIN_LOCK a3)
{
  unsigned __int32 v5; // eax
  char *PoolWithTag; // rbx

  if ( byte_140C48212 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x60uLL, 0x63466D43u);
    if ( !PoolWithTag )
      return PoolWithTag;
LABEL_6:
    CmFcpInitializeChangeSubscription((__int64)PoolWithTag, a2, a3);
    return PoolWithTag;
  }
  v5 = _InterlockedIncrement(&dword_140C48214);
  if ( v5 <= 3 )
  {
    PoolWithTag = (char *)&unk_140C48308 + 96 * v5 - 96;
    goto LABEL_6;
  }
  return 0LL;
}
