/*
 * XREFs of _RtlpValidateRemoteDebugInformation@16 @ 0x4B337DB3
 * Callers:
 *     _RtlQueryProcessDebugInformation@12 @ 0x4B336B50 (_RtlQueryProcessDebugInformation@12.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _RtlpValidateRange@20 @ 0x4B337CC0 (_RtlpValidateRange@20.c)
 */

int __fastcall RtlpValidateRemoteDebugInformation(_DWORD *a1, int a2, unsigned int a3, unsigned int a4)
{
  int v5; // esi
  PVOID Heap; // eax
  bool v8; // zf
  _DWORD *v9; // ecx
  int v10; // eax
  _WORD *v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned __int16 *v15; // edx
  int v16; // ecx
  _DWORD *v17; // ecx
  unsigned __int64 v18; // [esp-8h] [ebp-30h]
  __int64 v19; // [esp-8h] [ebp-30h]
  __int64 v20; // [esp-8h] [ebp-30h]
  __int64 v21; // [esp-8h] [ebp-30h]
  SIZE_T v22; // [esp-4h] [ebp-2Ch]
  _RTL_BITMAP BitMapHeader; // [esp+Ch] [ebp-1Ch] BYREF
  PVOID BaseAddress; // [esp+14h] [ebp-14h]
  int v25; // [esp+18h] [ebp-10h]
  _WORD *v26; // [esp+1Ch] [ebp-Ch]
  int v27; // [esp+20h] [ebp-8h]
  ULONG NumberToSet; // [esp+24h] [ebp-4h] BYREF

  v25 = a2;
  if ( a1[14] || a1[12] || a1[15] || a1[18] )
  {
    if ( !a4 )
      return -1073741823;
    LODWORD(v22) = ((a4 + 31) >> 3) & 0x1FFFFFFC;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v22);
    BaseAddress = Heap;
    if ( !Heap )
      return -1073741670;
    v8 = a1[14] == 0;
    BitMapHeader.SizeOfBitMap = a4;
    BitMapHeader.Buffer = (unsigned int *)Heap;
    if ( !v8 )
    {
      NumberToSet = 4;
      if ( !RtlpValidateRange(a3, a4, a1[14], 4u, &BitMapHeader) )
        goto LABEL_12;
      v18 = (unsigned __int64)*(unsigned int *)a1[14] << 6;
      if ( RtlULongLongToUInt((int *)&NumberToSet, v18, SHIDWORD(v18)) < 0
        || !RtlpValidateRange(a3, a4, a1[14] + 4, NumberToSet, &BitMapHeader) )
      {
        goto LABEL_12;
      }
      v9 = (_DWORD *)a1[14];
      v10 = 0;
      v11 = 0;
      v26 = 0;
      if ( *v9 )
      {
        v27 = 0;
        do
        {
          v12 = *(_DWORD *)((char *)v9 + v10 + 28);
          if ( v12 )
          {
            if ( RtlULongLongToUInt((int *)&NumberToSet, 16 * v12, v12 >> 28) < 0
              || !RtlpValidateRange(a3, a4, *(_DWORD *)(v27 + a1[14] + 64), NumberToSet, &BitMapHeader) )
            {
              goto LABEL_12;
            }
            v10 = v27;
            v11 = v26;
          }
          v13 = *(_DWORD *)(v10 + a1[14] + 24);
          if ( v13 )
          {
            if ( RtlULongLongToUInt((int *)&NumberToSet, v13 << 6, v13 >> 26) < 0
              || !RtlpValidateRange(a3, a4, *(_DWORD *)(v27 + a1[14] + 60), NumberToSet, &BitMapHeader) )
            {
              goto LABEL_12;
            }
            v10 = v27;
            v11 = v26;
          }
          v10 += 64;
          v11 = (_WORD *)((char *)v11 + 1);
          v9 = (_DWORD *)a1[14];
          v26 = v11;
          v27 = v10;
        }
        while ( (unsigned int)v11 < *v9 );
      }
    }
    v14 = a1[12];
    v26 = (_WORD *)v14;
    if ( !v14 )
      goto LABEL_37;
    if ( (v25 & 0x100) != 0 )
    {
      while ( RtlpValidateRange(a3, a4, v14, 2u, &BitMapHeader) )
      {
        v15 = v26;
        if ( *v26 )
        {
          if ( !RtlpValidateRange(a3, a4, (unsigned int)(v26 + 1), 0x12Au, &BitMapHeader) )
            goto LABEL_12;
          v15 = v26;
        }
        v16 = *v15;
        v14 = (unsigned int)v15 + v16;
        v26 = (_WORD *)v14;
        if ( !(_WORD)v16 )
          goto LABEL_37;
      }
      goto LABEL_12;
    }
    NumberToSet = 4;
    if ( RtlpValidateRange(a3, a4, v14, 4u, &BitMapHeader) )
    {
      v19 = 284LL * *(unsigned int *)a1[12];
      if ( RtlULongLongToUInt((int *)&NumberToSet, v19, SHIDWORD(v19)) >= 0 )
      {
        if ( RtlpValidateRange(a3, a4, a1[12] + 4, NumberToSet, &BitMapHeader) )
        {
LABEL_37:
          if ( !a1[15]
            || (NumberToSet = 4, RtlpValidateRange(a3, a4, a1[15], 4u, &BitMapHeader))
            && (v20 = 36LL * *(unsigned int *)a1[15], RtlULongLongToUInt((int *)&NumberToSet, v20, SHIDWORD(v20)) >= 0)
            && RtlpValidateRange(a3, a4, a1[15] + 4, NumberToSet, &BitMapHeader) )
          {
            if ( !a1[13]
              || (NumberToSet = 16, RtlpValidateRange(a3, a4, a1[13], 0x10u, &BitMapHeader))
              && (v21 = 140LL * *(unsigned int *)(a1[13] + 12),
                  RtlULongLongToUInt((int *)&NumberToSet, v21, SHIDWORD(v21)) >= 0)
              && RtlpValidateRange(a3, a4, a1[13] + 16, NumberToSet, &BitMapHeader) )
            {
              if ( !a1[18]
                || RtlpValidateRange(a3, a4, a1[18], 8u, &BitMapHeader)
                && (v17 = (_DWORD *)a1[18], *v17 >= 8u)
                && RtlpValidateRange(a3, a4, (unsigned int)(v17 + 2), *v17 - 8, &BitMapHeader) )
              {
                v5 = 0;
                goto LABEL_50;
              }
            }
          }
        }
      }
    }
LABEL_12:
    v5 = -1073741823;
LABEL_50:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    return v5;
  }
  return 0;
}
