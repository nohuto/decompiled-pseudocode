/*
 * XREFs of CmpWorkItemInitialize @ 0x140833748
 * Callers:
 *     CmFcpInitializeChangeSubscription @ 0x14083347C (CmFcpInitializeChangeSubscription.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x1408335F0 (CmRegisterMachineHiveLoadedNotification.c)
 *     CmFcManagerInitialize @ 0x140B15B24 (CmFcManagerInitialize.c)
 * Callees:
 *     ExInitializePushLock @ 0x1402A0840 (ExInitializePushLock.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall CmpWorkItemInitialize(struct _EX_RUNDOWN_REF *a1, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  memset(a1, 0, 0x40uLL);
  a1->Count = 0LL;
  a1[2].Count = (unsigned __int64)CmpWorkItemWrapper;
  a1[3].Count = (unsigned __int64)a1;
  LODWORD(a1[5].Count) = 0;
  ExInitializePushLock(a1 + 4);
  HIDWORD(a1[5].Ptr) = a2;
  a1[6].Count = a3;
  a1[7].Count = a4;
}
