/*
 * XREFs of HalGetDmaTransferInfoInternal @ 0x14039FB98
 * Callers:
 *     HalpBuildScatterGatherList @ 0x14039F584 (HalpBuildScatterGatherList.c)
 *     HalGetDmaTransferInfo @ 0x1404C64B0 (HalGetDmaTransferInfo.c)
 * Callees:
 *     HalpDmaGetAdapterCacheAlignment @ 0x1404B8E90 (HalpDmaGetAdapterCacheAlignment.c)
 */

__int64 __fastcall HalGetDmaTransferInfoInternal(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5,
        _DWORD *a6)
{
  _DWORD *v6; // rbx
  __int64 *v8; // r10
  int v10; // edi
  unsigned __int64 v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // rdx
  int v14; // r9d
  int v15; // r15d
  __int64 v16; // r11
  char v17; // di
  __int64 v18; // r13
  unsigned int v19; // eax
  unsigned int v20; // ebx
  unsigned int v21; // r14d
  char v22; // bp
  unsigned __int64 v23; // r10
  __int64 *v24; // r15
  unsigned int v25; // r12d
  __int64 v26; // rax
  __int64 v27; // r8
  unsigned int v28; // eax
  int v29; // edi
  int AdapterCacheAlignment; // eax
  int v32; // [rsp+20h] [rbp-68h]
  __int64 v33; // [rsp+28h] [rbp-60h]
  __int64 *v34; // [rsp+30h] [rbp-58h]
  __int64 v35; // [rsp+30h] [rbp-58h]
  int v36; // [rsp+38h] [rbp-50h]
  __int64 v37; // [rsp+40h] [rbp-48h]
  __int64 *v38; // [rsp+98h] [rbp+10h]
  unsigned int v39; // [rsp+A8h] [rbp+20h]
  int v40; // [rsp+B0h] [rbp+28h]

  v6 = a6;
  v8 = a2;
  v10 = *a6;
  v32 = *a6;
  if ( *a6 > 2u )
    return 3221225659LL;
  if ( a2 )
  {
    do
    {
      v11 = *((unsigned int *)v8 + 10);
      if ( a3 < v11 )
        break;
      v8 = (__int64 *)*v8;
      a3 -= v11;
    }
    while ( v8 );
    v38 = v8;
    if ( v8 )
    {
      v12 = *(_DWORD *)(a1 + 440);
      v13 = 0LL;
      v14 = 0;
      v15 = 0;
      v16 = 0LL;
      if ( v12 < 0x40 )
        v16 = ~((1LL << v12) - 1);
      if ( a4 )
      {
        do
        {
          if ( !v8 )
            break;
          v17 = 0;
          v18 = 0LL;
          v19 = a4;
          if ( *((_DWORD *)v8 + 10) - (int)a3 <= a4 )
            v19 = *((_DWORD *)v8 + 10) - a3;
          v20 = v19;
          a4 -= v19;
          v21 = ((_WORD)a3 + *((_WORD *)v8 + 22)) & 0xFFF;
          v39 = a4;
          v34 = &v8[((unsigned __int64)(unsigned int)(a3 + *((_DWORD *)v8 + 11)) >> 12) + 6];
          v15 += (v19 + (unsigned __int64)(((_WORD)a3 + *((_WORD *)v8 + 22)) & 0xFFF) + 4095) >> 12;
          v40 = v15;
          if ( v19 )
          {
            v22 = *(_BYTE *)(a1 + 434);
            v23 = *(_QWORD *)(a1 + 136);
            v24 = v34;
            do
            {
              v25 = v13 + 1;
              v26 = v20;
              if ( 4096 - v21 <= v20 )
                v26 = 4096 - v21;
              if ( v22 )
                v25 = v13;
              v35 = v26;
              v27 = *v24 << 12;
              v37 = v21;
              v33 = v27;
              v36 = v27 + v21;
              if ( (v23 >= v27 + (unsigned __int64)v21 + v26 - 1 || *(_DWORD *)(a1 + 512) == 2)
                && (*(_BYTE *)(a1 + 437)
                 || (AdapterCacheAlignment = HalpDmaGetAdapterCacheAlignment(a1, v13, v27),
                     v27 = v33,
                     ((AdapterCacheAlignment - 1) & v36) == 0)
                 && ((AdapterCacheAlignment - 1) & (unsigned int)v35) == 0) )
              {
                if ( v21
                  || v27 != v18 + 1
                  || ((v27 ^ v18) & v16) != 0
                  || ((v27 ^ v18) & 0x100000000LL) != 0
                  || (v13 = v25, v17) )
                {
                  ++v14;
                  v13 = v25;
                  v17 = 0;
                }
              }
              else
              {
                ++v14;
                v13 = v25 + 1;
                v17 = 1;
                if ( !v22 )
                  v13 = v25;
              }
              ++v24;
              v21 = 0;
              v18 = v27 + v35 + v37 - 1;
              v20 -= v35;
            }
            while ( v20 );
            v8 = v38;
            a4 = v39;
            v15 = v40;
          }
          v8 = (__int64 *)*v8;
          LODWORD(a3) = 0;
          v38 = v8;
        }
        while ( a4 );
        v6 = a6;
        v10 = v32;
      }
      if ( !*(_BYTE *)(a1 + 434) && (v14 != 1 || (_DWORD)v13) )
      {
        v14 = 1;
        LODWORD(v13) = v15;
      }
      v28 = 24 * v14 + 208;
      if ( v28 < 0xA8 )
        v28 = 168;
      v29 = v10 - 1;
      if ( !v29 )
        goto LABEL_31;
      if ( v29 == 1 )
      {
        v6[4] = v15;
LABEL_31:
        v6[1] = v13;
        v6[2] = v14;
        v6[3] = v28;
        return 0LL;
      }
      return 3221225659LL;
    }
  }
  return 3221225485LL;
}
