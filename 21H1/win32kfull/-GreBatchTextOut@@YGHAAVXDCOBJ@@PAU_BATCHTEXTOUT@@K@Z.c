/*
 * XREFs of ?GreBatchTextOut@@YGHAAVXDCOBJ@@PAU_BATCHTEXTOUT@@K@Z @ 0x615F0
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YGXPAX@Z @ 0x5EBA0 (-NtGdiFlushUserBatchInternal@@YGXPAX@Z.c)
 * Callees:
 *     ?GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z @ 0x61F50 (-GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __userpurge GreBatchTextOut@<eax>(
        char *a1@<edx>,
        int *a2@<ecx>,
        struct XDCOBJ *MaxCount,
        struct _BATCHTEXTOUT *a4,
        unsigned int a5)
{
  int v7; // esi
  int v8; // edx
  unsigned int v9; // ebx
  char *v10; // ecx
  unsigned int v11; // edi
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  int *v14; // ebx
  int v15; // eax
  int v16; // ecx
  int v17; // edi
  int v18; // ecx
  int v19; // edi
  int v20; // ecx
  int v21; // edx
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  int v25; // edx
  int v26; // eax
  int v27; // eax
  void *v29; // [esp+0h] [ebp-58h]
  unsigned int v30; // [esp+4h] [ebp-54h]
  int v31; // [esp+10h] [ebp-48h]
  int v32; // [esp+14h] [ebp-44h]
  int v33; // [esp+18h] [ebp-40h]
  int v34; // [esp+1Ch] [ebp-3Ch]
  int v35; // [esp+20h] [ebp-38h]
  int v36; // [esp+24h] [ebp-34h]
  int v37; // [esp+28h] [ebp-30h]
  int v38; // [esp+28h] [ebp-30h]
  int v39; // [esp+2Ch] [ebp-2Ch]
  int v40; // [esp+30h] [ebp-28h]
  int v42; // [esp+34h] [ebp-24h]
  unsigned __int16 *v43; // [esp+38h] [ebp-20h]
  int v44; // [esp+3Ch] [ebp-1Ch]
  int v45; // [esp+3Ch] [ebp-1Ch]
  struct tagRECT *MaxCounta; // [esp+60h] [ebp+8h]

  if ( (unsigned int)MaxCount < 0x50 )
    return 0;
  if ( !a1 )
    return 0;
  v7 = AllocFreeTmpBuffer(MaxCount);
  if ( !v7 )
    return 0;
  if ( (char *)MaxCount + (int)a1 < a1
    || (struct XDCOBJ *)((char *)MaxCount + (int)a1) > (struct XDCOBJ *)_MmUserProbeAddress )
  {
    *(_BYTE *)_MmUserProbeAddress = 0;
  }
  memcpy((void *)v7, a1, (size_t)MaxCount);
  v40 = 0;
  v39 = -1;
  v43 = 0;
  v8 = *(_DWORD *)(v7 + 32);
  v44 = v8;
  v35 = v8;
  MaxCounta = *(struct tagRECT **)(v7 + 56);
  v9 = *(_DWORD *)(v7 + 60);
  v10 = (char *)MaxCount - 80;
  if ( (unsigned int)MaxCounta > ((unsigned int)MaxCount - 80) >> 1 )
  {
LABEL_43:
    FreeTmpBuffer(v7);
    return 0;
  }
  if ( v9 )
  {
    v11 = 4;
    if ( (v8 & 0x2000) != 0 )
      v11 = 8;
    if ( v9 <= (unsigned int)v10 )
    {
      v12 = (unsigned int)&v10[-v9];
      v13 = v11 == 4 ? v12 >> 2 : v12 / v11;
      if ( (unsigned int)MaxCounta <= v13 && v9 == ((v9 + 3) & 0xFFFFFFFC) )
      {
        v43 = (unsigned __int16 *)(v9 + v7 + 80);
        goto LABEL_16;
      }
    }
    goto LABEL_43;
  }
LABEL_16:
  v14 = a2;
  v15 = *a2;
  v16 = *(_DWORD *)(*a2 + 1020);
  v42 = *(_DWORD *)(v16 + 204);
  v34 = *(_DWORD *)(v16 + 208);
  v17 = *(_DWORD *)(v7 + 4);
  if ( v42 != v17 )
  {
    *(_DWORD *)(v16 + 204) = v17;
    *(_DWORD *)(*(_DWORD *)(*v14 + 1020) + 208) = *(_DWORD *)(v7 + 16);
    *(_DWORD *)(*(_DWORD *)(*v14 + 1020) + 184) |= 7u;
    v15 = *v14;
  }
  v18 = *(_DWORD *)(v15 + 1020);
  v33 = *(_DWORD *)(v18 + 196);
  v32 = *(_DWORD *)(v18 + 200);
  v19 = *(_DWORD *)(v7 + 8);
  if ( v33 != v19 )
  {
    *(_DWORD *)(v18 + 196) = v19;
    *(_DWORD *)(*(_DWORD *)(*v14 + 1020) + 200) = *(_DWORD *)(v7 + 20);
    *(_DWORD *)(*(_DWORD *)(*v14 + 1020) + 184) |= 0xBu;
    v15 = *v14;
  }
  v20 = *(_DWORD *)(v15 + 1020);
  v21 = *(_DWORD *)(v7 + 64);
  if ( *(_DWORD *)(v20 + 300) != v21 )
  {
    v40 = *(_DWORD *)(v20 + 300);
    *(_DWORD *)(v20 + 300) = v21;
    *(_DWORD *)(*(_DWORD *)(*v14 + 1020) + 184) |= 0x10u;
    *(_DWORD *)(*(_DWORD *)(*v14 + 1020) + 184) &= ~0x20u;
    v15 = *v14;
  }
  v22 = *(_DWORD *)(v15 + 1020);
  v37 = *(_DWORD *)(v7 + 68);
  v23 = v44;
  if ( *(_DWORD *)(v22 + 280) != v37 )
  {
    v39 = *(_DWORD *)(v22 + 280);
    *(_DWORD *)(v22 + 280) = v37;
    v15 = *v14;
  }
  v36 = *(_DWORD *)(v15 + 1020);
  v31 = *(_DWORD *)(v36 + 324);
  v45 = *(_DWORD *)(v36 + 328);
  v38 = *(_DWORD *)(v7 + 72);
  if ( v31 != v38 || *(_DWORD *)(v36 + 328) != *(_DWORD *)(v7 + 76) )
  {
    *(_DWORD *)(v36 + 324) = v38;
    *(_DWORD *)(*(_DWORD *)(*v14 + 1020) + 328) = *(_DWORD *)(v7 + 76);
    *(_DWORD *)(*(_DWORD *)(*v14 + 1020) + 340) |= 0x2010u;
  }
  if ( v23 < 0 )
    v23 &= ~0x80000000;
  GreExtTextOutWLocked(
    *(struct XDCOBJ **)(v7 + 28),
    v23,
    v35 < 0 ? 0 : v7 + 36,
    v7 + 80,
    MaxCounta,
    v43,
    *(_DWORD *)(v7 + 12),
    0,
    *(_DWORD *)(v7 + 52),
    v29,
    v30);
  v24 = *v14;
  v25 = *(_DWORD *)(*v14 + 1020);
  if ( *(_DWORD *)(v25 + 204) != v42 )
  {
    *(_DWORD *)(v25 + 204) = v42;
    *(_DWORD *)(*(_DWORD *)(*v14 + 1020) + 208) = v34;
    *(_DWORD *)(*(_DWORD *)(*v14 + 1020) + 184) |= 7u;
    v24 = *v14;
  }
  v26 = *(_DWORD *)(v24 + 1020);
  if ( *(_DWORD *)(v26 + 196) != v33 )
  {
    *(_DWORD *)(v26 + 196) = v33;
    *(_DWORD *)(*(_DWORD *)(*v14 + 1020) + 200) = v32;
    *(_DWORD *)(*(_DWORD *)(*v14 + 1020) + 184) |= 0xBu;
  }
  if ( v40 )
  {
    *(_DWORD *)(*(_DWORD *)(*v14 + 1020) + 300) = v40;
    *(_DWORD *)(*(_DWORD *)(*v14 + 1020) + 184) |= 0x10u;
    *(_DWORD *)(*(_DWORD *)(*v14 + 1020) + 184) &= ~0x20u;
  }
  if ( v39 != -1 )
    *(_DWORD *)(*(_DWORD *)(*v14 + 1020) + 280) = v39;
  v27 = *(_DWORD *)(*v14 + 1020);
  if ( v31 != *(_DWORD *)(v27 + 324) || v45 != *(_DWORD *)(v27 + 328) )
  {
    *(_DWORD *)(v27 + 324) = v31;
    *(_DWORD *)(*(_DWORD *)(*v14 + 1020) + 328) = v45;
    *(_DWORD *)(*(_DWORD *)(*v14 + 1020) + 340) |= 0x2010u;
  }
  FreeTmpBuffer(v7);
  return 1;
}
