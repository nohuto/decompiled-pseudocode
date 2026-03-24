/*
 * XREFs of CmFcpManagerAllocateChangeSubscription @ 0x14087E4E0
 * Callers:
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x14087DB3C (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     CmFcpInitializeChangeSubscription @ 0x14087E46C (CmFcpInitializeChangeSubscription.c)
 *     ExAllocatePool2 @ 0x1409B41B0 (ExAllocatePool2.c)
 */

char *__fastcall CmFcpManagerAllocateChangeSubscription(__int64 a1, unsigned __int64 a2, KSPIN_LOCK a3)
{
  unsigned __int32 v5; // eax
  char *Pool2; // rbx

  if ( byte_140C48232 )
  {
    Pool2 = (char *)ExAllocatePool2(64LL, 96LL, 1665559875LL);
    if ( !Pool2 )
      return Pool2;
LABEL_6:
    CmFcpInitializeChangeSubscription((__int64)Pool2, a2, a3);
    return Pool2;
  }
  v5 = _InterlockedIncrement(&dword_140C48234);
  if ( v5 <= 3 )
  {
    Pool2 = (char *)&unk_140C48328 + 96 * v5 - 96;
    goto LABEL_6;
  }
  return 0LL;
}
