/*
 * XREFs of RtlpHpLfhSubsegmentWalk @ 0x180002D40
 * Callers:
 *     RtlpHpSegWalk @ 0x1800026A8 (RtlpHpSegWalk.c)
 * Callees:
 *     RtlpHpLfhSubsegmentSizeBlockInternal @ 0x180002410 (RtlpHpLfhSubsegmentSizeBlockInternal.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentWalk(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5, _DWORD *a6, int *a7)
{
  int v8; // r10d
  unsigned int v9; // eax
  unsigned int v10; // r9d
  unsigned int v11; // edx
  __int64 i; // r12
  unsigned __int64 v13; // r8
  unsigned __int64 j; // r9
  _QWORD *v15; // rdi
  __int64 k; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdi
  char v19; // cl
  unsigned int v20; // edi
  __int64 v21; // r14
  unsigned int v22; // r13d
  __int64 v23; // rbp
  __int16 *v24; // rcx
  unsigned int v25; // eax
  _DWORD *v26; // r9
  int v27; // edx
  __int64 v28; // rcx
  unsigned __int64 v30; // r8
  int v31; // r8d
  __int64 v32; // rcx
  unsigned int v33; // r10d
  unsigned int v34; // eax
  char v35; // cl
  unsigned __int64 v36; // rdx
  int v37; // r10d
  unsigned __int64 v38; // [rsp+20h] [rbp-48h]
  __int64 v39; // [rsp+28h] [rbp-40h]
  unsigned int v40; // [rsp+78h] [rbp+10h]
  __int64 v41; // [rsp+80h] [rbp+18h]

  v8 = a3;
  v9 = DWORD2(RtlpHpHeapGlobals) ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v10 = *(unsigned __int16 *)(a2 + 34) + *(unsigned __int8 *)(a2 + 39);
  v40 = v9;
  if ( a3 == a2 )
  {
    v11 = 0;
  }
  else
  {
    v31 = (unsigned __int16)v9;
    v32 = *(_QWORD *)(a1
                    + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v9 + 15) >> 4]
                    + 128);
    v33 = v8 - HIWORD(v9) - a2;
    v34 = *(_DWORD *)(v32 + 72);
    v35 = *(_BYTE *)(v32 + 76);
    if ( v34 )
    {
      v36 = (v33 * (unsigned __int64)v34) >> v35;
      v37 = v33 - v36 * v31;
    }
    else
    {
      LODWORD(v36) = v33 >> v35;
      v37 = ((1 << v35) - 1) & v33;
    }
    if ( v37 )
      return 0LL;
    v11 = v36 + 1;
    if ( v11 >= v10 )
      return 0LL;
  }
  v38 = 2 * v10;
  v39 = a2 + 48;
  for ( i = 2 * v11; ; i = (unsigned int)(i + 2) )
  {
    v13 = v38 - 1;
    for ( j = (unsigned int)i & (unsigned __int64)-(__int64)((unsigned int)i < v38); ; j = 0LL )
    {
      if ( v13 - j == -1LL )
        goto LABEL_29;
      v15 = (_QWORD *)(v39 + 8 * (j >> 6));
      for ( k = ~*v15 | ((1LL << (j & 0x3F)) - 1); k == -1; k = ~*v15 )
      {
        if ( (unsigned __int64)++v15 > v39 + 8 * (v13 >> 6) )
          goto LABEL_29;
      }
      _BitScanForward64(&v17, ~k);
      v18 = v17 + (((__int64)v15 - v39) >> 3 << 6);
      if ( v18 > v13 )
      {
LABEL_29:
        LODWORD(v18) = -1;
      }
      else if ( v18 != -1LL )
      {
        break;
      }
      if ( !j )
        break;
      v30 = i + 1;
      if ( i + 1 > v38 )
        v30 = v38;
      v13 = v30 - 1;
    }
    if ( (_DWORD)v18 == -1 || (unsigned int)v18 < (unsigned int)i )
      break;
    v19 = *(_BYTE *)(a2 + 44);
    v20 = (unsigned int)v18 >> 1;
    v21 = (HIWORD(v40) + v20 * (unsigned __int16)v40) >> v19;
    v41 = a2 + *(unsigned __int16 *)(a2 + 46);
    v22 = ((HIWORD(v40) + v20 * (unsigned __int16)v40 + (unsigned __int16)v40 - 1) >> v19) + 1;
    v23 = a2 + HIWORD(v40) + v20 * (unsigned __int16)v40;
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a2 + 24));
    if ( (unsigned int)v21 < v22 )
    {
      v24 = (__int16 *)(v41 + 2 * v21);
      while ( *v24 >= 0 )
      {
        LODWORD(v21) = v21 + 1;
        ++v24;
        if ( (unsigned int)v21 >= v22 )
          goto LABEL_18;
      }
      LODWORD(v21) = -1;
    }
LABEL_18:
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a2 + 24));
    if ( (_DWORD)v21 != -1 )
    {
      v25 = RtlpHpLfhSubsegmentSizeBlockInternal(a2, v23, v20, a7);
      v27 = 0;
      *a5 = v25;
      if ( *v26 )
      {
        v28 = v25 + v23 + 16;
        if ( (a4 & 0x10000000) == 0 )
          v28 = v25 + v23;
        if ( ((v28 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16 > v23 + (unsigned __int64)(unsigned __int16)v40 )
          v27 = 1;
      }
      if ( v25 > (unsigned __int64)(unsigned __int16)v40 || v27 )
      {
        *v26 = 0;
        *a5 = (unsigned __int16)v40;
        *a6 = 0;
      }
      else
      {
        *a6 = (unsigned __int16)v40 - v25;
      }
      return v23;
    }
  }
  return 0LL;
}
