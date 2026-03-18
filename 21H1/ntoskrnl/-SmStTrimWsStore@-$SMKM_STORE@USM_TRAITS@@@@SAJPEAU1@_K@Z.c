/*
 * XREFs of ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x140593E00
 * Callers:
 *     ?SmTrimWsStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@_K@Z @ 0x140594500 (-SmTrimWsStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@_K@Z.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1402C3A24 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x140594204 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStTrimWsStore(__int64 a1, __int64 a2)
{
  _DWORD *v4; // r9
  __int64 v5; // r8
  _DWORD *v6; // r9
  unsigned int v7; // edi
  _QWORD *v8; // r15
  bool v9; // zf
  _QWORD *v10; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v12; // r13d
  signed __int64 *v13; // r12
  __int64 v14; // r9
  unsigned int v15; // r14d
  unsigned int v16; // r10d
  __int64 v17; // rdx
  _DWORD *v18; // r11
  _DWORD *v19; // r8
  int v20; // edx
  int v21; // r10d
  _DWORD *v22; // r8
  unsigned int i; // eax
  unsigned int v24; // r15d
  __int64 v25; // r12
  __int64 v26; // rcx
  __int64 v27; // rbx
  unsigned int v28; // r14d
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  int v36; // [rsp+20h] [rbp-A9h]
  __int64 j; // [rsp+38h] [rbp-91h] BYREF
  _QWORD *v39; // [rsp+40h] [rbp-89h]
  _QWORD *v40; // [rsp+48h] [rbp-81h]
  _OWORD v41[3]; // [rsp+50h] [rbp-79h] BYREF
  _DWORD v42[8]; // [rsp+80h] [rbp-49h] BYREF
  _QWORD v43[8]; // [rsp+A0h] [rbp-29h] BYREF

  memset(v41, 0, sizeof(v41));
  memset(v43, 0, sizeof(v43));
  KiStackAttachProcess(*(_KPROCESS **)(a1 + 6584), 0LL, (__int64)v41, v4);
  if ( (*(_BYTE *)(a1 + 6021) & 8) != 0 )
  {
    v7 = 0;
    goto LABEL_58;
  }
  v8 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 6568), -1LL);
  v40 = v8;
  if ( v8 == (_QWORD *)-1LL )
  {
    v7 = -1073740682;
    goto LABEL_58;
  }
  v7 = 0;
  if ( !v8 || !*v8 || (v9 = a2 == 0, v10 = v8 + 1, !v9) )
    v10 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = 0;
  v39 = v10;
  --CurrentThread->SpecialApcDisable;
  v13 = (signed __int64 *)(a1 + 6024);
  ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
  if ( v10 )
  {
    v15 = 0;
    while ( 1 )
    {
      v16 = *(_DWORD *)v10;
      if ( *(_DWORD *)v10 <= v15 )
      {
LABEL_41:
        v8 = v40;
        v13 = (signed __int64 *)(a1 + 6024);
        break;
      }
      v17 = v10[1];
      v14 = v15;
      v18 = (_DWORD *)(v17 + 4 * ((unsigned __int64)(v16 - 1) >> 5));
      v19 = (_DWORD *)(v17 + 4 * ((unsigned __int64)v15 >> 5));
      if ( v19 != v18 && (*v19 | *((_DWORD *)qword_140011AC0 + (v15 & 0x1F))) == -1 )
      {
        v14 = v15 - (v15 & 0x1F) + 32;
        for ( ++v19; v19 < v18 && *v19 == -1; ++v19 )
          v14 = (unsigned int)(v14 + 32);
      }
      for ( ; (unsigned int)v14 < v16; v14 = (unsigned int)(v14 + 1) )
      {
        if ( !_bittest((const signed __int32 *)v10[1], v14) )
          break;
      }
      v20 = 0;
      if ( v19 != v18 )
      {
        v21 = v14 & 0x1F;
        if ( (*v19 & ~*((_DWORD *)qword_140011AC0 + (v14 & 0x1F))) == 0 )
        {
          v20 = 32 - v21;
          if ( v21 == 33 )
            goto LABEL_32;
          v22 = v19 + 1;
          while ( v22 < v18 && !*v22 )
          {
            ++v22;
            v20 += 32;
            if ( v20 == -1 )
              goto LABEL_32;
          }
        }
      }
      for ( i = v20 + v14; i < *(_DWORD *)v10; ++v20 )
      {
        if ( _bittest((const signed __int32 *)v10[1], i) )
          break;
        if ( v20 == -1 )
          break;
        ++i;
      }
LABEL_32:
      v15 = v14;
      if ( !v20 )
        goto LABEL_41;
      if ( (unsigned int)v14 < v20 + (int)v14 )
      {
        v24 = v20 + v14;
        v25 = 8LL * (unsigned int)v14;
        do
        {
          v26 = *(_QWORD *)(v25 + *(_QWORD *)(a1 + 6216));
          if ( (v26 & 0x7FFFFFFFFFFF0000LL) != 0 && v26 >= 0 )
          {
            v27 = v12;
            v42[v12++] = v15;
            v43[v27] = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v15, 0, v14, 4);
            if ( v12 == 8 )
            {
              SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(a1, (unsigned int)v42, (unsigned int)v43, 8, v36, 0LL);
              v12 = 0;
            }
          }
          ++v15;
          v25 += 8LL;
        }
        while ( v15 < v24 );
        v10 = v39;
      }
    }
  }
  v28 = 0;
  v29 = a2;
  for ( j = a2; v28 < *(_DWORD *)(a1 + 6212); ++v28 )
  {
    v30 = *(_QWORD *)(*(_QWORD *)(a1 + 6216) + 8LL * v28);
    if ( (v30 & 0x7FFFFFFFFFFF0000LL) != 0 && v30 >= 0 && (!v10 || _bittest64((const signed __int64 *)v10[1], v28)) )
    {
      v31 = v12;
      v42[v12++] = v28;
      v43[v31] = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v28, 0, v14, 4);
      v29 = a2;
      if ( v12 == 8 )
      {
        SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
          a1,
          (unsigned int)v42,
          (unsigned int)v43,
          8,
          v36,
          (unsigned __int64)&j & -(__int64)(a2 != 0));
        v29 = a2;
        v12 = 0;
        if ( a2 )
        {
          if ( !j )
            goto LABEL_55;
        }
      }
      v10 = v39;
    }
    else
    {
      v29 = a2;
    }
  }
  if ( v12 )
    SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
      a1,
      (unsigned int)v42,
      (unsigned int)v43,
      v12,
      v36,
      (unsigned __int64)&j & -(__int64)(v29 != 0));
LABEL_55:
  if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v13);
  KeAbPostRelease((ULONG_PTR)v13);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v32, v33, v34);
  _InterlockedExchange64((volatile __int64 *)(a1 + 6568), (__int64)v8);
LABEL_58:
  KiUnstackDetachProcess((__int64)v41, 0LL, v5, v6);
  return v7;
}
