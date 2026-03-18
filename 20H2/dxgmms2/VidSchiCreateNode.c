/*
 * XREFs of VidSchiCreateNode @ 0x1C008E49C
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C008D5F0 (VidSchInitializeAdapter.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C00068D0 (VidSchiInterlockedInsertTailList.c)
 *     memset @ 0x1C00185C0 (memset.c)
 */

unsigned int *__fastcall VidSchiCreateNode(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v4; // eax
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // r15
  size_t v9; // rbp
  unsigned int *PoolWithTag; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // esi
  unsigned int *v14; // rbx
  __int64 v15; // rbp
  BOOL v16; // eax
  int v17; // ecx
  unsigned int v18; // edx
  __int64 v19; // r8
  unsigned int v20; // edx
  __int64 v21; // r10
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // r14
  char *v27; // rbp
  __int64 v28; // rcx
  unsigned int *v29; // rcx
  unsigned int v30; // ecx
  unsigned int *result; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r8
  int v35; // eax
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rax

  v4 = 224 * *(_DWORD *)(a1 + 2532);
  v6 = a4;
  v7 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  v9 = v4 + 11248LL;
  if ( v9 < 0x2CD0 )
  {
    v32 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
    WdLogEvent5_WdAssertion(v32);
    return 0LL;
  }
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag((POOL_TYPE)512, v4 + 11248LL, 0x31616956u);
  v13 = 0;
  v14 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v33 = WdLogNewEntry5_WdWarning(v12, v11);
    WdLogEvent5_WdWarning(v33);
    return 0LL;
  }
  memset(PoolWithTag, 0, v9);
  *v14 = 828467542;
  *((_QWORD *)v14 + 3) = a1;
  v15 = 32LL;
  *((_WORD *)v14 + 2) = v6;
  *((_WORD *)v14 + 3) = v8;
  *((_WORD *)v14 + 4) = v7;
  *((_QWORD *)v14 + 216) = 0LL;
  *((_QWORD *)v14 + 217) = 0LL;
  if ( (_WORD)v7 == 0x7FFF )
  {
    v14[3] |= 0x10u;
  }
  else
  {
    v16 = *(_DWORD *)(a1 + 72) == 1
       || *(_WORD *)(360LL * (unsigned __int16)v8 + *(_QWORD *)(*(_QWORD *)(a1 + 16) + 2584LL) + 2) == (unsigned __int16)v7;
    v17 = 0;
    v18 = v16 | v14[3] & 0xFFFFFFFE;
    v14[3] = v18;
    v19 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 2584LL) + 360LL * (unsigned __int16)v8;
    if ( (*(_DWORD *)(v19 + 16) & 0x20) != 0 )
      LOBYTE(v17) = *(_DWORD *)(v19 + 24) == (unsigned __int16)v7;
    v20 = (4 * v17) | v18 & 0xFFFFFFFB;
    v14[3] = v20;
    v21 = 360 * v8;
    v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 2584LL) + 360 * v8 + 32);
    if ( v22 )
      v23 = 2 * (*(_BYTE *)(74 * v7 + v22 + 68) & 1);
    else
      v23 = 0;
    v24 = v23 | v20 & 0xFFFFFFFD;
    v14[3] = v24;
    if ( (v24 & 2) != 0 )
    {
      v34 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 2584LL) + v21 + 32);
      v35 = v34 ? 4 * (*(_BYTE *)(74 * v7 + v34 + 68) & 2) : 0;
      v24 = v35 | (unsigned int)v24 & 0xFFFFFFF7;
      v14[3] = v24;
      if ( (v24 & 2) != 0 )
      {
        v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 2584LL) + v21 + 32);
        if ( v36 )
          v37 = *(unsigned __int16 *)(74 * v7 + v36 + 70);
        else
          v37 = 0;
        if ( !v37 )
          v37 = 0xFFFF;
        v14[428] = v37;
        *(_WORD *)(a1 + 56) = 257;
        v24 = v14[3];
      }
    }
    if ( (v24 & 1) != 0 )
    {
      if ( (_DWORD)v8 )
      {
        v38 = ((unsigned int)v24 >> 1) & 1;
        if ( ((v24 & 2) != 0) != *(_BYTE *)(a1 + 55)
          || (v24 = ((unsigned int)v24 >> 3) & 1, (_BYTE)v24 != *(_BYTE *)(a1 + 58)) )
        {
          v39 = WdLogNewEntry5_WdCriticalError(v38, v24);
          *(_QWORD *)(v39 + 24) = 281LL;
          *(_QWORD *)(v39 + 32) = 20480LL;
          *(_QWORD *)(v39 + 40) = v8;
          *(_OWORD *)(v39 + 48) = 0LL;
          WdLogEvent5_WdCriticalError(v39);
          __debugbreak();
          JUMPOUT(0x1C00AC79ELL);
        }
      }
      else
      {
        *(_BYTE *)(a1 + 55) = (v24 & 2) != 0;
        *(_BYTE *)(a1 + 58) = (v14[3] & 8) != 0;
      }
    }
  }
  KeInitializeEvent((PRKEVENT)(v14 + 2800), SynchronizationEvent, 0);
  v25 = v14 + 512;
  do
  {
    v25[1] = v25;
    *v25 = v25;
    v25 += 2;
    --v15;
  }
  while ( v15 );
  v26 = 3LL;
  *((_QWORD *)v14 + 321) = v14 + 640;
  v27 = (char *)(v14 + 60);
  *((_QWORD *)v14 + 320) = v14 + 640;
  *((_QWORD *)v14 + 323) = v14 + 644;
  *((_QWORD *)v14 + 322) = v14 + 644;
  *((_QWORD *)v14 + 325) = v14 + 648;
  *((_QWORD *)v14 + 324) = v14 + 648;
  *((_QWORD *)v14 + 327) = v14 + 652;
  *((_QWORD *)v14 + 326) = v14 + 652;
  *((_QWORD *)v14 + 329) = v14 + 656;
  *((_QWORD *)v14 + 328) = v14 + 656;
  do
  {
    *(_OWORD *)v27 = 0LL;
    *((_OWORD *)v27 + 1) = 0LL;
    *((_OWORD *)v27 + 2) = 0LL;
    *((_QWORD *)v27 + 6) = 0LL;
    KeInitializeEvent((PRKEVENT)v27, SynchronizationEvent, 0);
    v27 += 56;
    --v26;
  }
  while ( v26 );
  *((_QWORD *)v14 + 52) = v14 + 102;
  *((_QWORD *)v14 + 51) = v14 + 102;
  *((_QWORD *)v14 + 54) = v14 + 106;
  *((_QWORD *)v14 + 53) = v14 + 106;
  *((_QWORD *)v14 + 212) = v14 + 422;
  *((_QWORD *)v14 + 211) = v14 + 422;
  *((_QWORD *)v14 + 1405) = v14 + 2808;
  *((_QWORD *)v14 + 1404) = v14 + 2808;
  if ( *(_DWORD *)(a1 + 2532) )
  {
    do
    {
      v28 = 56LL * v13;
      v14[v28 + 2812] = 912353622;
      VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(a1 + 1720), (__int64)(v14 + 2808), &v14[v28 + 2816], 0LL);
      ++v13;
    }
    while ( v13 < *(_DWORD *)(a1 + 2532) );
  }
  v29 = *(unsigned int **)(a1 + 2480);
  if ( (unsigned int)v6 < *(_DWORD *)(a1 + 2520) )
    v29 += v6;
  v30 = *v29;
  result = v14;
  v14[2806] = -1;
  v14[716] = v30;
  *((_BYTE *)v14 + 11228) = 1;
  return result;
}
