/*
 * XREFs of PfCheckDeprioritizeImage @ 0x1406CC31C
 * Callers:
 *     PfProcessCreateNotification @ 0x1406CC014 (PfProcessCreateNotification.c)
 *     CcUnmapVacb @ 0x1406EA378 (CcUnmapVacb.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 */

_BOOL8 __fastcall PfCheckDeprioritizeImage(unsigned int a1)
{
  __int64 v1; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // r10
  __int64 v5; // rax
  BOOL v6; // ebx
  __int64 v8; // rcx

  v1 = a1;
  if ( !a1 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C503D0, 0LL);
  if ( (_DWORD)qword_140C503C4 )
  {
    v3 = 0LL;
    v4 = (37
        * (BYTE6(v1)
         + 37
         * (BYTE5(v1)
          + 37
          * (BYTE4(v1) + 37 * (BYTE3(v1) + 37 * (BYTE2(v1) + 37 * (BYTE1(v1) + 37 * ((unsigned __int8)v1 + 11623883)))))))
        + HIBYTE(v1)) & (unsigned int)(qword_140C503C4 - 1);
    v5 = *(_QWORD *)((v4 << dword_140C503C0) + qword_140C503B8);
    if ( v5 )
    {
      v8 = *(_QWORD *)(((unsigned __int64)((37
                                          * (BYTE6(v1)
                                           + 37
                                           * (BYTE5(v1)
                                            + 37
                                            * (BYTE4(v1)
                                             + 37
                                             * (BYTE3(v1)
                                              + 37
                                              * (BYTE2(v1) + 37 * (BYTE1(v1) + 37 * ((unsigned __int8)v1 + 11623883)))))))
                                          + HIBYTE(v1)) & (unsigned int)(qword_140C503C4 - 1)) << dword_140C503C0)
                     + qword_140C503B8);
      do
      {
        v5 = v8;
        if ( v8 == (unsigned int)v1 )
          break;
        if ( !v3 )
        {
          v3 = 2654435761LL * (unsigned int)v1 + 1;
          if ( ((-79 * (_BYTE)v1) & 1) != 0 )
            v3 = 2654435761LL * (unsigned int)v1;
        }
        v4 = (unsigned int)(qword_140C503C4 - 1) & (v3 + v4);
        v5 = *(_QWORD *)((v4 << dword_140C503C0) + qword_140C503B8);
        v8 = v5;
      }
      while ( v5 );
    }
  }
  else
  {
    v5 = 0LL;
  }
  v6 = v5 != 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C503D0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C503D0);
  KeAbPostRelease((ULONG_PTR)&qword_140C503D0);
  KeLeaveCriticalRegion();
  return v6;
}
