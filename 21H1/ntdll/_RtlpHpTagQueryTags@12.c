/*
 * XREFs of _RtlpHpTagQueryTags@12 @ 0x4B370317
 * Callers:
 *     _RtlQueryHeapInformation@20 @ 0x4B356D50 (_RtlQueryHeapInformation@20.c)
 *     _RtlpExtendedHeapInformationWorkerThread@4 @ 0x4B357D30 (_RtlpExtendedHeapInformationWorkerThread@4.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlpHpTagMappingComparison@8 @ 0x4B3701EA (_RtlpHpTagMappingComparison@8.c)
 *     _RtlpHpTagQueryHeapsRemote@12 @ 0x4B370210 (_RtlpHpTagQueryHeapsRemote@12.c)
 */

NTSTATUS __fastcall RtlpHpTagQueryTags(int a1, unsigned int a2, _DWORD *a3)
{
  int v3; // edi
  int v4; // ecx
  int v5; // ebx
  char v6; // al
  __int16 v7; // cx
  __int16 v8; // cx
  unsigned __int8 *v9; // edx
  int v10; // edi
  int v11; // esi
  int v12; // eax
  int v13; // ecx
  int v14; // esi
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // esi
  int v18; // eax
  _DWORD *v19; // esi
  _DWORD *v20; // edx
  _DWORD *v21; // ecx
  _DWORD *i; // edx
  _DWORD *v23; // eax
  int v24; // eax
  int v26; // [esp+Ch] [ebp-14h]
  _DWORD *v27; // [esp+10h] [ebp-10h]
  int v28; // [esp+14h] [ebp-Ch]
  unsigned int v29; // [esp+18h] [ebp-8h]

  v3 = a1;
  if ( a2 < 0xC )
    return -1073741811;
  if ( *(_WORD *)a1 != 1 )
    return -1073741811;
  v4 = *(unsigned __int16 *)(a1 + 2);
  if ( (v4 & 0xFFFFFFFD) != 0 )
    return -1073741811;
  if ( *(_DWORD *)(v3 + 4) != -1 )
    return RtlpHpTagQueryHeapsRemote((void *)v3, a2, a3);
  if ( (v4 & 2) != 0 && a2 < 0x20 )
    return -1073741811;
  v5 = 0;
  v6 = (unsigned __int8)RtlpHpHeapFeatures >> 1;
  *(_DWORD *)(v3 + 8) = 0;
  v7 = *(_WORD *)(v3 + 2);
  if ( (v6 & 1) == 0 )
  {
    *(_WORD *)(v3 + 2) = v7 & 0xFFFE;
    *a3 = 12;
    return v5;
  }
  v8 = v7 | 1;
  *(_WORD *)(v3 + 2) = v8;
  v27 = (_DWORD *)(v3 + 12);
  if ( (v8 & 2) != 0 )
  {
    v9 = (unsigned __int8 *)(v3 + 12);
    v10 = 314159;
    v11 = 2;
    do
    {
      v12 = *v9;
      v13 = 37 * (v9[6] + 37 * (v9[5] + 37 * (v9[4] + 37 * (v9[3] + 37 * (v9[2] + 37 * v9[1])))));
      v9 += 8;
      v10 = 442596621 * v12 + v13 - 803794207 * v10 + *(v9 - 1);
      --v11;
    }
    while ( v11 );
    RtlAcquireSRWLockShared(&RtlpHpTagContext);
    v14 = 0;
    while ( 1 )
    {
      v15 = v10 & (-1 << (dword_4B3A46A8 & 0x1F));
      if ( v14 )
        goto LABEL_17;
      if ( !((unsigned int)dword_4B3A46A8 >> 5) )
        break;
      v14 = dword_4B3A46AC
          + 4
          * ((37 * (BYTE2(v15) + 37 * (BYTE1(v15) + 37 * (unsigned __int8)v15)) + HIBYTE(v15) + 374026047) & (((unsigned int)dword_4B3A46A8 >> 5) - 1));
LABEL_17:
      while ( 1 )
      {
        v14 = *(_DWORD *)v14;
        if ( (v14 & 1) != 0 )
          break;
        if ( v15 == ((-1 << (dword_4B3A46A8 & 0x1F)) & *(_DWORD *)(v14 + 4)) )
          goto LABEL_21;
      }
      v14 = 0;
LABEL_21:
      if ( !v14 || RtlpHpTagMappingComparison(v14, (void *)(a1 + 12)) )
        goto LABEL_25;
    }
    v14 = 0;
LABEL_25:
    *(_DWORD *)(a1 + 8) = 1;
    v16 = 0;
    if ( v14 )
      v16 = *(_DWORD *)(v14 + 24);
    *(_DWORD *)(a1 + 28) = v16;
    RtlReleaseSRWLockShared(&RtlpHpTagContext);
    *a3 = 32;
    return v5;
  }
  v17 = (a2 - 12) / 0x14;
  v29 = v3 + 12 + 20 * v17;
  RtlAcquireSRWLockShared(&RtlpHpTagContext);
  if ( dword_4B3A46A4 > v17 )
  {
    v5 = -1073741789;
    *a3 = 20 * dword_4B3A46A4 + 12;
    RtlReleaseSRWLockShared(&RtlpHpTagContext);
    return v5;
  }
  v18 = dword_4B3A46AC;
  v19 = (_DWORD *)(v3 + 12);
  v20 = (_DWORD *)dword_4B3A46AC;
  v28 = dword_4B3A46AC;
  v26 = dword_4B3A46AC;
  if ( v3 + 12 >= v29 )
    goto LABEL_45;
  do
  {
    if ( v20 )
    {
      v21 = (_DWORD *)*v20;
      if ( (*v20 & 0x80000002) == 0x80000002 )
        v21 = (_DWORD *)*v20;
      if ( ((unsigned __int8)v21 & 1) == 0 )
      {
        v20 = v21;
        v26 = (int)v21;
        goto LABEL_42;
      }
      v18 = v28;
    }
    for ( i = (_DWORD *)(v18 + 4); ; ++i )
    {
      if ( (unsigned int)i >= dword_4B3A46AC + 4 * ((unsigned int)dword_4B3A46A8 >> 5) )
      {
        v20 = (_DWORD *)v26;
        v21 = 0;
        goto LABEL_42;
      }
      v23 = (_DWORD *)*i;
      if ( (*i & 1) == 0 )
        break;
    }
    v28 = (int)i;
    v20 = (_DWORD *)*i;
    v26 = (int)v23;
    v21 = v23;
LABEL_42:
    if ( !v21 )
      break;
    *v27 = v21[2];
    v27[1] = v21[3];
    v27[2] = v21[4];
    v27[3] = v21[5];
    v27[4] = v21[6];
    v19 = v27 + 5;
    v18 = v28;
    v27 = v19;
  }
  while ( (unsigned int)v19 < v29 );
  v3 = a1;
LABEL_45:
  RtlReleaseSRWLockShared(&RtlpHpTagContext);
  v24 = ((int)v19 - v3 - 12) / 20;
  *(_DWORD *)(v3 + 8) = v24;
  *a3 = 20 * v24 + 12;
  return v5;
}
