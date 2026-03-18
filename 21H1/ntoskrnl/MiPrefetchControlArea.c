/*
 * XREFs of MiPrefetchControlArea @ 0x1406CA620
 * Callers:
 *     MiWalkEntireImage @ 0x140284670 (MiWalkEntireImage.c)
 *     MiSetPagesModified @ 0x14052F590 (MiSetPagesModified.c)
 *     MiValidateSectionCreate @ 0x1406C9BB0 (MiValidateSectionCreate.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408CEC20 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     MiPfPutPagesInTransition @ 0x1402BA1E0 (MiPfPutPagesInTransition.c)
 *     MiPfCompletePrefetchIos @ 0x1402BC504 (MiPfCompletePrefetchIos.c)
 *     MiPfPrepareSequentialReadList @ 0x14062E990 (MiPfPrepareSequentialReadList.c)
 *     MiReleaseReadListResources @ 0x14063E46C (MiReleaseReadListResources.c)
 *     MiPfExecuteReadList @ 0x14063F024 (MiPfExecuteReadList.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  __int64 v7; // rdx
  int List; // edi
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  PVOID v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  PVOID P[3]; // [rsp+40h] [rbp-18h] BYREF

  P[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  List = MiPfPrepareSequentialReadList(0LL, a1, a2, 0LL, a3, a4, a6, P);
  if ( List >= 0 && P[0] )
  {
    ++BYTE6(CurrentThread[1].Queue);
    *((_DWORD *)P[0] + 26) = 0;
    v11 = MiPfPutPagesInTransition((__int64)P[0], 0LL, a5);
    v12 = P[0];
    List = v11;
    if ( v11 >= 0 && *((PVOID *)P[0] + 15) != (char *)P[0] + 120 )
    {
      MiPfExecuteReadList((__int64)P[0], a5, a6, 0LL);
      MiPfCompletePrefetchIos((_QWORD **)P[0] + 15, 0LL, 0LL);
      v12 = P[0];
    }
    MiReleaseReadListResources((__int64)v12);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v13, v14, v15);
    --BYTE6(CurrentThread[1].Queue);
    ExFreePoolWithTag(P[0], 0);
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v7, v9, v10);
  }
  return (unsigned int)List;
}
