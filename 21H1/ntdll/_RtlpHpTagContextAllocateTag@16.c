/*
 * XREFs of _RtlpHpTagContextAllocateTag@16 @ 0x4B36FD50
 * Callers:
 *     _RtlpHpTagContextGetTag@8 @ 0x4B36FF45 (_RtlpHpTagContextGetTag@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpTagContextFindFreeTag@4 @ 0x4B36FF0B (_RtlpHpTagContextFindFreeTag@4.c)
 *     _RtlpHpTagMappingComparison@8 @ 0x4B3701EA (_RtlpHpTagMappingComparison@8.c)
 *     _RtlpHpMetadataAlloc@20 @ 0x4B379349 (_RtlpHpMetadataAlloc@20.c)
 *     _RtlpHpMetadataFree@12 @ 0x4B379479 (_RtlpHpMetadataFree@12.c)
 */

__int16 __fastcall RtlpHpTagContextAllocateTag(int a1, _DWORD *a2, int a3, unsigned int a4)
{
  _DWORD *v5; // ebx
  __int16 v6; // di
  _DWORD *v7; // esi
  int v8; // esi
  int v9; // ecx
  int v10; // edx
  unsigned __int16 FreeTag; // ax
  volatile signed __int32 *v12; // esi
  volatile signed __int32 v13; // edx
  signed __int32 v14; // eax
  int v17; // [esp+10h] [ebp-8h]
  int v18; // [esp+14h] [ebp-4h]

  v5 = (_DWORD *)RtlpHpMetadataAlloc(0, RtlpHpEnvHandle, dword_4B3A446C);
  if ( !v5 )
    return 0;
  memset(v5, 0, 0x20u);
  v5[2] = *a2;
  v7 = a2 + 1;
  v5[3] = *v7++;
  v5[4] = *v7;
  v5[5] = v7[1];
  v5[6] = a4;
  v5[1] = a3;
  RtlAcquireSRWLockExclusive(&RtlpHpTagContext);
  v8 = 0;
  while ( 1 )
  {
    v9 = dword_4B3A46A8 & 0x1F;
    v17 = -1 << v9;
    v10 = a3 & (-1 << v9);
    if ( v8 )
      goto LABEL_7;
    if ( (unsigned int)dword_4B3A46A8 < 0x20 )
      break;
    v8 = dword_4B3A46AC
       + 4
       * ((37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * (unsigned __int8)v10)) + HIBYTE(v10) + 374026047) & (((unsigned int)dword_4B3A46A8 >> 5) - 1));
LABEL_7:
    v9 = -1 << v9;
    while ( 1 )
    {
      v8 = *(_DWORD *)v8;
      if ( (v8 & 1) != 0 )
        break;
      if ( v10 == (v17 & *(_DWORD *)(v8 + 4)) )
        goto LABEL_12;
    }
    v8 = 0;
LABEL_12:
    if ( !v8 )
      goto LABEL_18;
    if ( RtlpHpTagMappingComparison(v8, a2) )
      goto LABEL_16;
  }
  v8 = 0;
LABEL_16:
  if ( v8 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 24), a4);
    v6 = *(_WORD *)(v8 + 28);
    goto LABEL_23;
  }
LABEL_18:
  FreeTag = RtlpHpTagContextFindFreeTag(v9);
  v6 = FreeTag;
  if ( FreeTag )
  {
    *((_WORD *)v5 + 14) = FreeTag;
    *(_DWORD *)(dword_4B3A46B0 + 4 * FreeTag - 4) = v5;
    v18 = v5[1] & (-1 << (dword_4B3A46A8 & 0x1F));
    v12 = (volatile signed __int32 *)(dword_4B3A46AC
                                    + 4
                                    * ((HIBYTE(v18)
                                      + 37 * (BYTE2(v18) + 37 * (BYTE1(v18) + 37 * ((unsigned __int8)v18 + 11623883)))) & (((unsigned int)dword_4B3A46A8 >> 5) - 1)));
    v13 = *v12;
    v14 = *v12;
    for ( *v5 = *v12; ; *v5 = v14 )
    {
      v14 = _InterlockedCompareExchange(v12, (signed __int32)v5, v14);
      if ( v14 == v13 )
        break;
      v13 = v14;
    }
    ++dword_4B3A46A4;
    ++word_4B3A46B6;
    v5 = 0;
    word_4B3A46B4 = v6;
  }
LABEL_23:
  RtlReleaseSRWLockExclusive(&RtlpHpTagContext);
  if ( v5 )
    RtlpHpMetadataFree(RtlpHpEnvHandle, dword_4B3A446C);
  return v6;
}
