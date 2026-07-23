/*
 * XREFs of PpmInstallNewIdleStates @ 0x1403C0480
 * Callers:
 *     PpmIdleInstallDefaultStates @ 0x1403C0460 (PpmIdleInstallDefaultStates.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140277170 (KeAddProcessorAffinityEx.c)
 *     KxAcquireSpinLock @ 0x1402773A0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     PpmDeepestHardwareIdleState @ 0x1403C09CC (PpmDeepestHardwareIdleState.c)
 *     PpmResetIdlePolicy @ 0x1403C0A08 (PpmResetIdlePolicy.c)
 *     PpmUpdateProcessorIdleAccounting @ 0x1403C0B98 (PpmUpdateProcessorIdleAccounting.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PpmInstallNewIdleStates(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v9; // rbp
  int v10; // esi
  _DWORD *v11; // rcx
  __int64 v12; // rdx
  bool v13; // zf
  int v14; // eax
  unsigned int v15; // r12d
  unsigned int v16; // ecx
  _QWORD *PoolWithTag; // rax
  _DWORD *v18; // rdi
  char *v19; // rdx
  char *v20; // rsi
  unsigned int v21; // r13d
  unsigned int *v22; // r12
  int *v23; // r14
  char *v24; // rsi
  char *v25; // r15
  int v26; // eax
  unsigned int *v27; // rcx
  char *v28; // rsi
  _DWORD *v29; // r14
  unsigned int v30; // eax
  __int64 v31; // rbp
  __int64 v32; // r13
  __int64 v33; // rcx
  __int64 v34; // rdx
  unsigned int v35; // r8d
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rdx
  char *v39; // rcx
  char v40; // [rsp+20h] [rbp-138h]
  unsigned int v41; // [rsp+24h] [rbp-134h]
  unsigned int v42; // [rsp+30h] [rbp-128h]
  size_t Size; // [rsp+40h] [rbp-118h]
  _QWORD *v45; // [rsp+48h] [rbp-110h]
  __int64 v46; // [rsp+50h] [rbp-108h]
  _DWORD v47[44]; // [rsp+60h] [rbp-F8h] BYREF

  memset(&v47[2], 0, 0xA0uLL);
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 0x8000);
  v46 = a1 + 0x8000;
  if ( v7 )
  {
    if ( a3 == 1 )
      return v6;
    v40 = *(_BYTE *)(v7 + 1);
    PpmUpdateProcessorIdleAccounting(a1 + 0x8000);
  }
  else
  {
    v40 = 0;
  }
  v9 = *(unsigned int *)(a2 + 116);
  if ( (_DWORD)v9 )
  {
    v10 = 0;
    if ( *(_BYTE *)(a2 + 19) == 1 )
    {
      v11 = (_DWORD *)(a2 + 120);
      v12 = (unsigned int)v9;
      do
      {
        v13 = (*v11 & 0x100) == 0;
        v14 = v10 + 1;
        v11 += 8;
        if ( !v13 )
          v14 = v10;
        v10 = v14;
        --v12;
      }
      while ( v12 );
    }
    v15 = (248 * v9 + 819) & 0xFFFFFFFC;
    v41 = v15 + 8 * *(_DWORD *)(a2 + 112);
    v42 = v41 + 24 * v10;
    v16 = (((v42 + 1000 * v9 + 47) & 0xFFFFFFF8) + 4 * v9 + 15) & 0xFFFFFFF8;
    if ( PpmIdleVetoList )
      v16 += (*(_DWORD *)PpmIdleVetoList * (_DWORD)v9) << 6;
    Size = v16;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x694D5050u);
    v45 = PoolWithTag;
    v18 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, Size);
      v18[9] = a3;
      *((_QWORD *)v18 + 5) = *(_QWORD *)(a2 + 72);
      *(_BYTE *)v18 = *(_BYTE *)(a2 + 19);
      *((_BYTE *)v18 + 2) = *(_BYTE *)(a2 + 16);
      *((_BYTE *)v18 + 8) = *(_BYTE *)(a2 + 18);
      v18[16] = 0;
      v18[8] = v9;
      *((_QWORD *)v18 + 51) = *(_QWORD *)(a2 + 24);
      *((_QWORD *)v18 + 54) = *(_QWORD *)(a2 + 40);
      *((_QWORD *)v18 + 55) = *(_QWORD *)(a2 + 48);
      *((_QWORD *)v18 + 56) = *(_QWORD *)(a2 + 56);
      *((_QWORD *)v18 + 53) = *(_QWORD *)(a2 + 80);
      *((_QWORD *)v18 + 52) = *(_QWORD *)(a2 + 64);
      *((_QWORD *)v18 + 57) = *(_QWORD *)(a2 + 88);
      *((_QWORD *)v18 + 58) = *(_QWORD *)(a2 + 32);
      *((_QWORD *)v18 + 59) = *(_QWORD *)(a2 + 96);
      *((_QWORD *)v18 + 60) = *(_QWORD *)(a2 + 104);
      *((_QWORD *)v18 + 61) = *(_QWORD *)(a2 + 8);
      v18[136] = *(_DWORD *)(a2 + 112);
      v18[198] = 1;
      *((_QWORD *)v18 + 69) = (char *)v18 + v15;
      *((_QWORD *)v18 + 101) = v18 + 200;
      if ( v10 )
      {
        v19 = (char *)v18 + v41;
        v18[190] = v10;
        *((_QWORD *)v18 + 96) = v19;
        v20 = &v19[24 * v10];
      }
      else
      {
        v20 = 0LL;
      }
      *((_QWORD *)v18 + 9) = 1310740LL;
      memset(v18 + 20, 0, 0xA0uLL);
      v21 = 0;
      v22 = (unsigned int *)(v20 + 4);
      v23 = (int *)(a2 + 120);
      v24 = (char *)(v18 + 246);
      v25 = (char *)v18 + ((((v42 + 1000 * (_DWORD)v9 + 47) & 0xFFFFFFF8) + 4 * (_DWORD)v9 + 15) & 0xFFFFFFF8);
      do
      {
        *(_OWORD *)v24 = *((_OWORD *)v23 + 1);
        *((_QWORD *)v24 - 21) = 1310721LL;
        memset(v24 - 160, 0, 0xA0uLL);
        v24[72] = ((unsigned int)*v23 >> 3) & 0xF;
        v24[74] = *(_BYTE *)v23 & 1;
        v24[75] = (*v23 & 4) != 0;
        v24[76] = (*v23 & 2) != 0;
        v26 = *v23;
        if ( *v23 < 0 )
        {
          *((_DWORD *)v24 + 7) = 1;
          v24[73] = 1;
          v26 = *v23;
        }
        v24[77] = (v26 & 0x80) != 0;
        v24[78] = BYTE1(*v23) & 1;
        v24[79] = (*v23 & 0x40000000) != 0;
        *((_DWORD *)v24 + 4) = v23[1];
        *((_DWORD *)v24 + 6) = v23[3];
        *((_DWORD *)v24 + 5) = v23[2];
        *((_QWORD *)v24 + 6) = v24 + 40;
        *((_QWORD *)v24 + 5) = v24 + 40;
        if ( v21 && PpmIdleDisableStatesAtBoot == 2 )
          *((_DWORD *)v24 + 8) = 0x80000000;
        v27 = (unsigned int *)PpmIdleVetoList;
        if ( PpmIdleVetoList )
        {
          *((_DWORD *)v24 + 15) = *(_DWORD *)PpmIdleVetoList;
          *((_QWORD *)v24 + 8) = v25;
          v25 += 64 * (unsigned __int64)*v27;
        }
        if ( v22 != (unsigned int *)4 && (*v23 & 0x100) == 0 )
        {
          v22 -= 6;
          *((_BYTE *)v22 - 3) = 1;
          *v22 = v21;
        }
        ++v21;
        v24 += 248;
        v23 += 8;
      }
      while ( v21 < (unsigned int)v9 );
      v28 = (char *)v45 + v42;
      v13 = PpmIdleVetoList == 0;
      v45[93] = (char *)v45 + ((v42 + 1000 * (_DWORD)v9 + 47) & 0xFFFFFFF8);
      *(_DWORD *)v28 = v9;
      if ( !v13 )
      {
        v37 = v28 + 200;
        v38 = v9;
        v39 = (char *)(v45 + 127);
        do
        {
          *v37 = v39;
          v39 += 248;
          v37 += 125;
          --v38;
        }
        while ( v38 );
      }
      KxAcquireSpinLock(&PpmIdleVetoLock);
      v29 = *(_DWORD **)v46;
      *(_QWORD *)v46 = v45;
      KxReleaseSpinLock(&PpmIdleVetoLock);
      if ( v40 )
        *((_DWORD *)v45 + 7) = v29[7];
      if ( !v29 || (v30 = v29[4], v30 >= (unsigned int)v9) )
        v30 = 0;
      *((_DWORD *)v45 + 4) = v30;
      *((_BYTE *)v45 + 1) = v40;
      v31 = *(_QWORD *)(v46 + 8);
      *(_QWORD *)(v46 + 8) = v28;
      if ( v31 )
      {
        v34 = *(_QWORD *)(v31 + 24);
        v35 = 0;
        for ( *((_QWORD *)v28 + 3) = v34; v35 < *(_DWORD *)v31; *((_QWORD *)v28 + 3) = v34 )
        {
          v36 = v35++;
          v34 += *(_QWORD *)(1000 * v36 + v31 + 40);
        }
        v32 = a1;
      }
      else
      {
        v32 = a1;
        *((_QWORD *)v28 + 3) = KeMaximumIncrement * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 24) + 652LL);
      }
      PpmResetIdlePolicy(v46);
      if ( v31 )
        *((_DWORD *)v28 + 2) = *(_DWORD *)(v31 + 8) + 1;
      v47[0] = 1310721;
      memset(&v47[1], 0, 0xA4uLL);
      KeAddProcessorAffinityEx(v47, *(_DWORD *)(v32 + 36));
      LOBYTE(v33) = PpmDeepestHardwareIdleState(v45);
      ((void (__fastcall *)(__int64, _DWORD *))off_140C006A8[0])(v33, v47);
      if ( *((_DWORD *)v45 + 9) != 1 && *(_BYTE *)v45 == 1 )
        PpmIdleDurationExpirationTimeout = (unsigned int)(10000 * PpmIdleDurationExpirationTimeoutMs);
      if ( v29 )
        ExFreePoolWithTag(v29, 0x694D5050u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
