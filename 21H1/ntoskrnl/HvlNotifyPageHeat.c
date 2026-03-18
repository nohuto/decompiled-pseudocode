/*
 * XREFs of HvlNotifyPageHeat @ 0x1405C3A90
 * Callers:
 *     MiNotifyPageHeat @ 0x14055A2D4 (MiNotifyPageHeat.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x1404F5274 (HvlpHvToNtStatus.c)
 *     KeWaitPhysicalFaultCompletion @ 0x14051E45C (KeWaitPhysicalFaultCompletion.c)
 */

__int64 __fastcall HvlNotifyPageHeat(int a1, char a2, unsigned int a3, __int64 a4)
{
  int v4; // r12d
  __int64 v7; // rbx
  unsigned int v8; // esi
  __int64 v9; // r15
  _QWORD *v10; // r14
  int v11; // edi
  _QWORD *v12; // rax
  unsigned int v13; // edx
  _QWORD *v14; // rcx
  __int64 v15; // r9
  unsigned int v16; // r10d
  _QWORD *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r11
  __int64 v20; // rax
  unsigned __int64 v21; // r8
  __int64 v22; // rax
  unsigned __int16 v23; // bx
  _QWORD *v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  unsigned int v27; // edi
  __int64 *v28; // rbx
  __int64 v29; // [rsp+20h] [rbp-60h]
  __int16 v30; // [rsp+34h] [rbp-4Ch]
  _QWORD *v31; // [rsp+38h] [rbp-48h]
  __int128 v32; // [rsp+40h] [rbp-40h] BYREF
  __int128 v33; // [rsp+50h] [rbp-30h]
  __int128 v34; // [rsp+60h] [rbp-20h] BYREF
  __int128 v35; // [rsp+70h] [rbp-10h]

  v4 = 0;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  if ( !a1 )
  {
    if ( (HvlEnlightenments & 0x400000) != 0 )
    {
      v7 = 0LL;
      goto LABEL_9;
    }
    return 3221225659LL;
  }
  if ( a1 != 1 )
    return 3221225485LL;
  if ( (HvlEnlightenments & 0x200000) == 0 )
    return 3221225659LL;
  v7 = 1LL;
LABEL_9:
  v8 = 0;
  if ( a2 && (HvlpFlags & 0x200000) != 0 )
  {
    v29 = a4;
    v9 = a4;
    v10 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v34, 2, 0LL, 0LL);
    v11 = 32774;
  }
  else
  {
    v9 = 0LL;
    v29 = 0LL;
    v10 = 0LL;
    v11 = 32771;
  }
  v12 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v32, 1, 0LL, 0LL);
  v13 = a3;
  v14 = v12;
  v31 = v12;
  v15 = 0LL;
  *v12 = v7;
  do
  {
    v16 = 0;
    if ( v13 >= 0x1FF )
      v13 = 511;
    if ( v13 )
    {
      v17 = v14 + 1;
      do
      {
        v18 = v16 + v4;
        *v17 = 0LL;
        v15 = *(_QWORD *)(a4 + 8 * v18) & 0x3FFLL;
        v19 = (unsigned int)v18;
        *v17 = v15;
        v20 = *(_QWORD *)(a4 + 8 * v18);
        if ( (v20 & 0xC00) != 0 )
        {
          v15 |= 0x800uLL;
          *v17 = v15;
          v21 = v15 | *(_QWORD *)(a4 + 8 * v19) & 0xFFFFFFFFFFE00000uLL;
          *v17 = v21;
          if ( (*(_DWORD *)(a4 + 8 * v19) & 0xC00) == 0x800LL )
            *v17 = v21 | 0x1000;
        }
        else
        {
          *v17 = v15 | v20 & 0xFFFFFFFFFFFFF000uLL;
        }
        ++v16;
        ++v17;
      }
      while ( v16 < v13 );
      v9 = v29;
    }
    v22 = HvcallInitiateHypercall(v11, *((__int64 *)&v33 + 1), *((__int64 *)&v35 + 1), v15);
    v15 = 0LL;
    v30 = WORD2(v22);
    v23 = v22;
    if ( (_WORD)v22 )
      break;
    if ( v10 && (v22 & 0xFFF00000000LL) != 0 )
    {
      v24 = v10;
      v25 = WORD2(v22) & 0xFFF;
      do
      {
        if ( *v24 )
        {
          v26 = v8++;
          *(_QWORD *)(v9 + 8 * v26) = *v24;
        }
        ++v24;
        --v25;
      }
      while ( v25 );
    }
    v14 = v31;
    v4 += v30 & 0xFFF;
    v13 = a3 - v4;
  }
  while ( a3 != v4 );
  HvlpReleaseHypercallPage((__int64)&v32);
  if ( v10 )
    HvlpReleaseHypercallPage((__int64)&v34);
  if ( v23 )
    v27 = HvlpHvToNtStatus(v23);
  else
    v27 = 0;
  if ( v8 )
  {
    v28 = (__int64 *)(v9 + 8LL * v8);
    do
    {
      KeWaitPhysicalFaultCompletion(*--v28);
      --v8;
    }
    while ( v8 );
  }
  return v27;
}
