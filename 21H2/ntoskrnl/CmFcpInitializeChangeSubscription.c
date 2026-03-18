/*
 * XREFs of CmFcpInitializeChangeSubscription @ 0x14083347C
 * Callers:
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x140833350 (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     MmIsSessionAddress @ 0x140359DE0 (MmIsSessionAddress.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpWorkItemInitialize @ 0x140833748 (CmpWorkItemInitialize.c)
 */

__int64 __fastcall CmFcpInitializeChangeSubscription(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  memset((void *)a1, 0, 0x60uLL);
  CmpWorkItemInitialize(a1 + 16, 4LL, CmFcpChangeSubscriptionWrapper, a3);
  result = MmIsSessionAddress(a2);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a1 + 88) |= 1u;
    result = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    *(_DWORD *)(a1 + 92) = result;
  }
  *(_QWORD *)(a1 + 80) = a2;
  return result;
}
