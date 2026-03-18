/*
 * XREFs of MiPrefetchControlArea @ 0x14070F6A0
 * Callers:
 *     MiWalkEntireImage @ 0x1402C8CD0 (MiWalkEntireImage.c)
 *     MiSetPagesModified @ 0x1405335B0 (MiSetPagesModified.c)
 *     MiValidateSectionCreate @ 0x14070EA48 (MiValidateSectionCreate.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D5DB0 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     MiPfPutPagesInTransition @ 0x14024CE50 (MiPfPutPagesInTransition.c)
 *     MiPfCompletePrefetchIos @ 0x1402D12F4 (MiPfCompletePrefetchIos.c)
 *     MiPfPrepareSequentialReadList @ 0x1406253C0 (MiPfPrepareSequentialReadList.c)
 *     MiReleaseReadListResources @ 0x140658424 (MiReleaseReadListResources.c)
 *     MiPfExecuteReadList @ 0x140658A14 (MiPfExecuteReadList.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPrefetchControlArea(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5,
        unsigned int a6)
{
  struct _KTHREAD *CurrentThread; // rbx
  int List; // edi
  int v8; // eax
  PVOID v9; // rcx
  PVOID P[3]; // [rsp+40h] [rbp-18h] BYREF

  P[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  List = MiPfPrepareSequentialReadList(0LL, a1, a2, 0LL, a3, a4, a6, P);
  if ( List >= 0 && P[0] )
  {
    ++BYTE6(CurrentThread[1].Queue);
    *((_DWORD *)P[0] + 26) = 0;
    v8 = MiPfPutPagesInTransition((__int64)P[0], 0LL, a5);
    v9 = P[0];
    List = v8;
    if ( v8 >= 0 && *((PVOID *)P[0] + 15) != (char *)P[0] + 120 )
    {
      MiPfExecuteReadList((__int64)P[0], a5, a6, 0LL);
      MiPfCompletePrefetchIos((_QWORD **)P[0] + 15, 0LL, 0LL);
      v9 = P[0];
    }
    MiReleaseReadListResources((__int64)v9);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    --BYTE6(CurrentThread[1].Queue);
    ExFreePoolWithTag(P[0], 0);
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return (unsigned int)List;
}
