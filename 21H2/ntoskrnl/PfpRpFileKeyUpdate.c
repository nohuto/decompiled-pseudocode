/*
 * XREFs of PfpRpFileKeyUpdate @ 0x1406F0FC0
 * Callers:
 *     PfFileInfoNotify @ 0x140328350 (PfFileInfoNotify.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     RtlUpcaseUnicodeChar @ 0x1406F14F0 (RtlUpcaseUnicodeChar.c)
 *     PfpRpRehashIfNeeded @ 0x1406F17C0 (PfpRpRehashIfNeeded.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfpRpFileKeyUpdate(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // r14d
  int v5; // eax
  PVOID v8; // r12
  _QWORD *v9; // rdi
  unsigned int v10; // eax
  WCHAR *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rsi
  WCHAR *j; // rbp
  unsigned __int8 v15; // al
  struct _KTHREAD *CurrentThread; // rax
  int v17; // r11d
  __int64 v18; // r10
  __int64 v19; // r9
  __int64 v20; // rdx
  void *v21; // rsi
  unsigned int v22; // r10d
  char v23; // al
  unsigned __int64 v24; // r9
  _QWORD *v25; // rcx
  unsigned __int64 v27; // r10
  _QWORD *i; // rdx
  _QWORD *v29; // rcx
  void *v30; // rcx
  PVOID PoolWithTag; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v32; // [rsp+28h] [rbp-60h]
  unsigned __int64 v33; // [rsp+30h] [rbp-58h]
  unsigned __int64 v34; // [rsp+38h] [rbp-50h]
  PEX_RUNDOWN_REF RunRef; // [rsp+40h] [rbp-48h]
  unsigned int v36; // [rsp+90h] [rbp+8h]
  _QWORD *P; // [rsp+98h] [rbp+10h]
  __int64 v38; // [rsp+A8h] [rbp+20h]

  v3 = 0;
  v38 = *(_QWORD *)(a2 + 16);
  v5 = *(_DWORD *)(a1 + 152);
  P = 0LL;
  PoolWithTag = 0LL;
  v8 = 0LL;
  v36 = 0;
  v9 = 0LL;
  if ( (v5 & 1) == 0 )
    return 3221225600LL;
  RunRef = (PEX_RUNDOWN_REF)(a1 + 136);
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 136)) )
    return 3221225600LL;
  if ( !a3 )
  {
    v13 = 0LL;
LABEL_9:
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 48, 0LL);
    if ( a3 )
    {
      v17 = *(_DWORD *)(a1 + 4) >> 5;
      v18 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
      v19 = v38 & v18;
      v34 = (v38 & (unsigned __int64)v18) >> 32;
      v33 = (v38 & (unsigned __int64)v18) >> 24;
      v32 = (v38 & (unsigned __int64)v18) >> 16;
      if ( v17 )
      {
        v20 = *(_QWORD *)(a1 + 8)
            + 8
            * ((((v38 & (unsigned __int64)v18) >> 56)
              + 37
              * ((unsigned __int8)((v38 & (unsigned __int64)v18) >> 48)
               + 37
               * ((unsigned __int8)((unsigned __int16)((v38 & (unsigned __int64)v18) >> 32) >> 8)
                + 37
                * ((unsigned __int8)v34
                 + 37
                 * ((unsigned __int8)v33
                  + 37
                  * ((unsigned __int8)v32
                   + 37
                   * ((unsigned __int8)((unsigned __int16)(v38 & v18) >> 8)
                    + 37 * ((unsigned int)(unsigned __int8)v19 + 11623883)))))))) & (unsigned int)(v17 - 1));
        while ( 1 )
        {
          v20 = *(_QWORD *)v20;
          if ( (v20 & 1) != 0 )
            break;
          if ( v19 == (v18 & *(_QWORD *)(v20 + 8)) )
          {
            *(_QWORD *)(v20 + 16) = v13;
            goto LABEL_15;
          }
        }
      }
      *P = 0LL;
      P[1] = v38;
      P[2] = v13;
      if ( (unsigned int)PfpRpRehashIfNeeded(a1, &PoolWithTag, v36) )
      {
        v22 = *(_DWORD *)(a1 + 4);
        v21 = 0LL;
        v23 = v22 & 0x1F;
        v24 = P[1] & (-1LL << (v22 & 0x1F));
        v25 = (_QWORD *)(*(_QWORD *)(a1 + 8)
                       + 8
                       * ((HIBYTE(v24)
                         + 37
                         * ((unsigned __int8)((P[1] & (unsigned __int64)(-1LL << v23)) >> 48)
                          + 37
                          * ((unsigned __int8)((unsigned __int16)((P[1] & (unsigned __int64)(-1LL << v23)) >> 32) >> 8)
                           + 37
                           * ((unsigned __int8)((P[1] & (unsigned __int64)(-1LL << v23)) >> 32)
                            + 37
                            * ((((_DWORD)P[1] & (unsigned int)(-1 << v23)) >> 24)
                             + 37
                             * ((unsigned __int8)(((_DWORD)P[1] & (unsigned int)(-1 << v23)) >> 16)
                              + 37
                              * (37 * ((unsigned __int8)v24 + 11623883)
                               + (unsigned __int8)((unsigned __int16)(P[1] & (-1 << v23)) >> 8)))))))) & ((v22 >> 5) - 1)));
        *P = *v25;
        *v25 = P;
        ++*(_DWORD *)a1;
      }
      else
      {
        v3 = -1073741670;
        v21 = P;
      }
    }
    else
    {
LABEL_28:
      if ( *(_DWORD *)a1 )
      {
        v27 = v38 & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
        for ( i = (_QWORD *)(*(_QWORD *)(a1 + 8)
                           + 8
                           * ((37
                             * (BYTE6(v27)
                              + 37
                              * (BYTE5(v27)
                               + 37
                               * (BYTE4(v27)
                                + 37
                                * ((((unsigned int)v38 & (-1 << (*(_DWORD *)(a1 + 4) & 0x1F))) >> 24)
                                 + 37
                                 * ((unsigned __int8)(((unsigned int)v38 & (-1 << (*(_DWORD *)(a1 + 4) & 0x1F))) >> 16)
                                  + 37
                                  * ((unsigned __int8)((unsigned __int16)(v38 & (-1 << (*(_DWORD *)(a1 + 4) & 0x1F))) >> 8)
                                   + 37 * ((unsigned __int8)v27 + 11623883)))))))
                             + HIBYTE(v27)) & ((*(_DWORD *)(a1 + 4) >> 5) - 1))); ; i = (_QWORD *)*i )
        {
          v29 = (_QWORD *)*i;
          if ( (*i & 1) != 0 )
            break;
          if ( ((-1LL << (*(_DWORD *)(a1 + 4) & 0x1F)) & v29[1]) == v27 )
          {
            *i = *v29;
            --*(_DWORD *)a1;
            *v29 |= 0x8000000000000002uLL;
            if ( *(_QWORD **)(a1 + 16) == v29 )
              *(_QWORD *)(a1 + 16) = a1 + 24;
            *v29 = v9;
            v9 = v29;
            goto LABEL_28;
          }
        }
      }
LABEL_15:
      v21 = P;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 48);
    KeAbPostRelease(a1 + 48);
    KeLeaveCriticalRegion();
    v8 = PoolWithTag;
    goto LABEL_21;
  }
  P = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x4B466650u);
  if ( P )
  {
    v10 = 2 * (*(_DWORD *)(a1 + 4) >> 5);
    if ( *(_DWORD *)a1 >= v10 )
    {
      v36 = 2 * (*(_DWORD *)(a1 + 4) >> 5);
      if ( !v10 )
      {
        v10 = 64;
        v36 = 64;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v10, 0x48466650u);
      v8 = PoolWithTag;
      if ( !PoolWithTag )
        v36 = 0;
    }
    v11 = *(WCHAR **)(a2 + 24);
    v12 = *(unsigned __int16 *)(a2 + 34);
    v13 = 314159LL;
    for ( j = &v11[v12]; v11 < j; v13 = 37 * (v15 + 37 * v13) )
      v15 = RtlUpcaseUnicodeChar(*v11++);
    if ( v13 )
      goto LABEL_9;
    v21 = P;
    v3 = -1073741747;
  }
  else
  {
    v3 = -1073741670;
    v21 = 0LL;
  }
LABEL_21:
  ExReleaseRundownProtection(RunRef);
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  while ( v9 )
  {
    v30 = v9;
    v9 = (_QWORD *)*v9;
    ExFreePoolWithTag(v30, 0);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return v3;
}
