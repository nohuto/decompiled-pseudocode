/*
 * XREFs of ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x1405999C0
 * Callers:
 *     ?SmTrimWsStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@_K@Z @ 0x14059A0C0 (-SmTrimWsStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@_K@Z.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1402DE790 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x140599DC4 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStTrimWsStore(__int64 a1, __int64 a2)
{
  _DWORD *v4; // r9
  unsigned int v5; // edi
  _QWORD *v6; // r15
  bool v7; // zf
  _QWORD *v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v10; // r13d
  signed __int64 *v11; // r12
  __int64 v12; // r9
  unsigned int v13; // r14d
  unsigned int v14; // r10d
  __int64 v15; // rdx
  _DWORD *v16; // r11
  _DWORD *v17; // r8
  int v18; // edx
  int v19; // r10d
  _DWORD *v20; // r8
  unsigned int i; // eax
  unsigned int v22; // r15d
  __int64 v23; // r12
  __int64 v24; // rcx
  __int64 v25; // rbx
  unsigned int v26; // r14d
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rbx
  int v31; // [rsp+20h] [rbp-A9h]
  __int64 j; // [rsp+38h] [rbp-91h] BYREF
  _QWORD *v34; // [rsp+40h] [rbp-89h]
  _QWORD *v35; // [rsp+48h] [rbp-81h]
  _OWORD v36[3]; // [rsp+50h] [rbp-79h] BYREF
  _DWORD v37[8]; // [rsp+80h] [rbp-49h] BYREF
  _QWORD v38[8]; // [rsp+A0h] [rbp-29h] BYREF

  memset(v36, 0, sizeof(v36));
  memset(v38, 0, sizeof(v38));
  KiStackAttachProcess(*(_KPROCESS **)(a1 + 6584), 0LL, (__int64)v36, v4);
  if ( (*(_BYTE *)(a1 + 6021) & 8) != 0 )
  {
    v5 = 0;
    goto LABEL_58;
  }
  v6 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 6568), -1LL);
  v35 = v6;
  if ( v6 == (_QWORD *)-1LL )
  {
    v5 = -1073740682;
    goto LABEL_58;
  }
  v5 = 0;
  if ( !v6 || !*v6 || (v7 = a2 == 0, v8 = v6 + 1, !v7) )
    v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = 0;
  v34 = v8;
  --CurrentThread->SpecialApcDisable;
  v11 = (signed __int64 *)(a1 + 6024);
  ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
  if ( v8 )
  {
    v13 = 0;
    while ( 1 )
    {
      v14 = *(_DWORD *)v8;
      if ( *(_DWORD *)v8 <= v13 )
      {
LABEL_41:
        v6 = v35;
        v11 = (signed __int64 *)(a1 + 6024);
        break;
      }
      v15 = v8[1];
      v12 = v13;
      v16 = (_DWORD *)(v15 + 4 * ((unsigned __int64)(v14 - 1) >> 5));
      v17 = (_DWORD *)(v15 + 4 * ((unsigned __int64)v13 >> 5));
      if ( v17 != v16 && (*v17 | *((_DWORD *)qword_140011C70 + (v13 & 0x1F))) == -1 )
      {
        v12 = v13 - (v13 & 0x1F) + 32;
        for ( ++v17; v17 < v16 && *v17 == -1; ++v17 )
          v12 = (unsigned int)(v12 + 32);
      }
      for ( ; (unsigned int)v12 < v14; v12 = (unsigned int)(v12 + 1) )
      {
        if ( !_bittest((const signed __int32 *)v8[1], v12) )
          break;
      }
      v18 = 0;
      if ( v17 != v16 )
      {
        v19 = v12 & 0x1F;
        if ( (*v17 & ~*((_DWORD *)qword_140011C70 + (v12 & 0x1F))) == 0 )
        {
          v18 = 32 - v19;
          if ( v19 == 33 )
            goto LABEL_32;
          v20 = v17 + 1;
          while ( v20 < v16 && !*v20 )
          {
            ++v20;
            v18 += 32;
            if ( v18 == -1 )
              goto LABEL_32;
          }
        }
      }
      for ( i = v18 + v12; i < *(_DWORD *)v8; ++v18 )
      {
        if ( _bittest((const signed __int32 *)v8[1], i) )
          break;
        if ( v18 == -1 )
          break;
        ++i;
      }
LABEL_32:
      v13 = v12;
      if ( !v18 )
        goto LABEL_41;
      if ( (unsigned int)v12 < v18 + (int)v12 )
      {
        v22 = v18 + v12;
        v23 = 8LL * (unsigned int)v12;
        do
        {
          v24 = *(_QWORD *)(v23 + *(_QWORD *)(a1 + 6216));
          if ( (v24 & 0x7FFFFFFFFFFF0000LL) != 0 && v24 >= 0 )
          {
            v25 = v10;
            v37[v10++] = v13;
            v38[v25] = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v13, 0, v12, 4);
            if ( v10 == 8 )
            {
              SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(a1, (unsigned int)v37, (unsigned int)v38, 8, v31, 0LL);
              v10 = 0;
            }
          }
          ++v13;
          v23 += 8LL;
        }
        while ( v13 < v22 );
        v8 = v34;
      }
    }
  }
  v26 = 0;
  v27 = a2;
  for ( j = a2; v26 < *(_DWORD *)(a1 + 6212); ++v26 )
  {
    v28 = *(_QWORD *)(*(_QWORD *)(a1 + 6216) + 8LL * v26);
    if ( (v28 & 0x7FFFFFFFFFFF0000LL) != 0 && v28 >= 0 && (!v8 || _bittest64((const signed __int64 *)v8[1], v26)) )
    {
      v29 = v10;
      v37[v10++] = v26;
      v38[v29] = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v26, 0, v12, 4);
      v27 = a2;
      if ( v10 == 8 )
      {
        SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
          a1,
          (unsigned int)v37,
          (unsigned int)v38,
          8,
          v31,
          (unsigned __int64)&j & -(__int64)(a2 != 0));
        v27 = a2;
        v10 = 0;
        if ( a2 )
        {
          if ( !j )
            goto LABEL_55;
        }
      }
      v8 = v34;
    }
    else
    {
      v27 = a2;
    }
  }
  if ( v10 )
    SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
      a1,
      (unsigned int)v37,
      (unsigned int)v38,
      v10,
      v31,
      (unsigned __int64)&j & -(__int64)(v27 != 0));
LABEL_55:
  if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v11);
  KeAbPostRelease((ULONG_PTR)v11);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  _InterlockedExchange64((volatile __int64 *)(a1 + 6568), (__int64)v6);
LABEL_58:
  KiUnstackDetachProcess((__int64)v36, 0);
  return v5;
}
