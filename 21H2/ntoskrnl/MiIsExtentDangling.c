/*
 * XREFs of MiIsExtentDangling @ 0x1408D0258
 * Callers:
 *     FsRtlIsExtentDangling @ 0x14088C3C0 (FsRtlIsExtentDangling.c)
 *     MiAddPhysicalMemory @ 0x1408C4FF0 (MiAddPhysicalMemory.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     MiIsPfn @ 0x140353EA0 (MiIsPfn.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 */

unsigned __int64 __fastcall MiIsExtentDangling(unsigned __int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r14
  unsigned __int64 v7; // rdi
  _QWORD *v8; // r15
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rcx
  _QWORD *v13; // r8
  __int64 i; // rcx
  struct _KTHREAD *v15; // rdi

  v4 = a1 + a2;
  v5 = a2;
  v7 = a1;
  if ( a1 < a1 + a2 )
  {
    v8 = (_QWORD *)(48 * a1 - 0x57FFFFFFFD8LL);
    while ( !(unsigned int)MiIsPfn(v7) || (*v8 & 0x2000000000000LL) == 0 )
    {
      ++v7;
      v8 += 6;
      if ( v7 >= v4 )
        goto LABEL_8;
    }
    v4 = v7;
    v5 = v7 - a1;
  }
LABEL_8:
  if ( (a3 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C4CCE8, 0LL);
    v10 = (_QWORD *)qword_140C4CCE0;
    if ( qword_140C4CCE0 )
    {
      do
      {
        v11 = v10[4];
        if ( v5 + a1 <= v11 )
        {
          v10 = (_QWORD *)*v10;
        }
        else
        {
          if ( a1 < v10[5] + v11 )
            break;
          v10 = (_QWORD *)v10[1];
        }
      }
      while ( v10 );
      if ( v10 )
      {
        while ( 1 )
        {
          v12 = (_QWORD *)*v10;
          v13 = v10;
          if ( *v10 )
          {
            for ( ; v12[1]; v12 = (_QWORD *)v12[1] )
              ;
          }
          else
          {
            for ( i = v10[2]; ; i = v12[2] )
            {
              v12 = (_QWORD *)(i & 0xFFFFFFFFFFFFFFFCuLL);
              if ( !v12 || (_QWORD *)v12[1] == v13 )
                break;
              v13 = v12;
            }
          }
          if ( !v12 || v12[4] + v12[5] <= a1 )
            break;
          v10 = v12;
        }
        v4 = v10[4];
        if ( a1 >= v4 )
          v4 = a1;
      }
    }
    v15 = KeGetCurrentThread();
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C4CCE8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C4CCE8);
    KeAbPostRelease((ULONG_PTR)&qword_140C4CCE8);
    KiLeaveGuardedRegionUnsafe((__int64)v15);
  }
  return v4;
}
