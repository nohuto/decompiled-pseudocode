/*
 * XREFs of PfCheckDeprioritizeImage @ 0x14067AC0C
 * Callers:
 *     PfProcessCreateNotification @ 0x14067A904 (PfProcessCreateNotification.c)
 *     CcUnmapVacb @ 0x140701758 (CcUnmapVacb.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
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
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C50410, 0LL);
  if ( (_DWORD)qword_140C50404 )
  {
    v3 = 0LL;
    v4 = (37
        * (BYTE6(v1)
         + 37
         * (BYTE5(v1)
          + 37
          * (BYTE4(v1) + 37 * (BYTE3(v1) + 37 * (BYTE2(v1) + 37 * (BYTE1(v1) + 37 * ((unsigned __int8)v1 + 11623883)))))))
        + HIBYTE(v1)) & (unsigned int)(qword_140C50404 - 1);
    v5 = *(_QWORD *)((v4 << dword_140C50400) + qword_140C503F8);
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
                                          + HIBYTE(v1)) & (unsigned int)(qword_140C50404 - 1)) << dword_140C50400)
                     + qword_140C503F8);
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
        v4 = (unsigned int)(qword_140C50404 - 1) & (v3 + v4);
        v5 = *(_QWORD *)((v4 << dword_140C50400) + qword_140C503F8);
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
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C50410, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C50410);
  KeAbPostRelease((ULONG_PTR)&qword_140C50410);
  KeLeaveCriticalRegion();
  return v6;
}
