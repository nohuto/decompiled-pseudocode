/*
 * XREFs of _HT_HalftoneBitmap@24 @ 0x1BAB42
 * Callers:
 *     _EngHTBlt@48 @ 0x2271FF (_EngHTBlt@48.c)
 * Callees:
 *     _CheckABInfo @ 0x1B9FE1 (_CheckABInfo.c)
 *     _SanityCheckDimension @ 0x1BAE20 (_SanityCheckDimension.c)
 *     _AAHalftoneBitmap @ 0x1BAE67 (_AAHalftoneBitmap.c)
 *     _pDCIAdjClr @ 0x1BEB31 (_pDCIAdjClr.c)
 */

int __stdcall HT_HalftoneBitmap(int a1, int a2, int a3, unsigned __int16 *a4)
{
  unsigned __int16 *v4; // esi
  int v5; // ebx
  unsigned __int8 v6; // cl
  int v7; // eax
  int v8; // eax
  char v9; // al
  __int16 v10; // di
  int result; // eax
  int v12; // eax
  int v13; // ecx
  char *v14; // edi
  bool v15; // zf
  char *v16; // edx
  unsigned __int16 v17; // si
  int v18; // eax
  PVOID v19; // eax
  char v20; // cl
  int v22; // [esp+10h] [ebp-28h]
  int v23; // [esp+18h] [ebp-20h]
  int v24; // [esp+1Ch] [ebp-1Ch] BYREF
  PVOID pv; // [esp+20h] [ebp-18h] BYREF
  int v26; // [esp+24h] [ebp-14h]
  int v27; // [esp+28h] [ebp-10h] BYREF
  int v28; // [esp+2Ch] [ebp-Ch] BYREF
  int v29; // [esp+30h] [ebp-8h]
  unsigned __int8 v30; // [esp+36h] [ebp-2h]
  unsigned __int8 v31; // [esp+37h] [ebp-1h]
  char *v32; // [esp+40h] [ebp+8h]

  v4 = a4;
  v5 = 0;
  v31 = *(_BYTE *)(a3 + 6);
  v6 = *(_BYTE *)(a1 + 6);
  v7 = *a4;
  pv = 0;
  v28 = 0;
  v30 = v6;
  v26 = v7;
  v27 = 0;
  v24 = 0;
  LOWORD(v23) = 0;
  v29 = 0;
  if ( !v6
    || (v29 = 0, v6 > 3u)
    || (v29 = (unsigned __int16)(1 << byte_258A08[v6]), (v8 = *(_DWORD *)(a1 + 24)) != 0)
    && (v23 = *(_DWORD *)(v8 + 8)) != 0 )
  {
    if ( !SanityCheckDimension(*((_DWORD *)a4 + 2), *((_DWORD *)a4 + 4))
      || !SanityCheckDimension(*((_DWORD *)a4 + 3), *((_DWORD *)a4 + 5))
      || !SanityCheckDimension(*((_DWORD *)a4 + 6), *((_DWORD *)a4 + 8))
      || !SanityCheckDimension(*((_DWORD *)a4 + 7), *((_DWORD *)a4 + 9)) )
    {
      return -2;
    }
    v9 = v26;
    if ( (v26 & 1) != 0 )
    {
      if ( !SanityCheckDimension(*((_DWORD *)a4 + 10), *((_DWORD *)a4 + 12))
        || !SanityCheckDimension(*((_DWORD *)a4 + 11), *((_DWORD *)a4 + 13)) )
      {
        return -2;
      }
      v9 = v26;
    }
    if ( (v9 & 0x10) == 0
      || SanityCheckDimension(*((_DWORD *)a4 + 14), *((_DWORD *)a4 + 16))
      && SanityCheckDimension(*((_DWORD *)a4 + 15), *((_DWORD *)a4 + 17)) )
    {
      v10 = v26;
      if ( (v26 & 0x200) != 0 )
      {
        result = CheckABInfo((int)a4, v30, v31, (__int16 *)&v27, (unsigned __int16 *)&v24);
        v28 = result;
        if ( result <= 0 )
          return result;
        v5 = v27;
      }
      BYTE2(v27) = *((_BYTE *)a4 + 3);
      LOWORD(v27) = 1024;
      HIBYTE(v27) = v31;
      if ( (v10 & 2) != 0 )
        v5 |= 4u;
      if ( (v10 & 4) != 0 )
        v5 |= 2u;
      if ( (v10 & 0x20) != 0 || v31 == 1 )
        v5 |= 1u;
      if ( (v10 & 0x80u) != 0 )
        v5 |= 8u;
      if ( (v10 & 0x100) != 0 )
        v5 |= 0x20u;
      v12 = pDCIAdjClr(&pv, 4 * ((unsigned __int16)v29 + (unsigned __int16)v24) + 412, v5, v27, &v28);
      v13 = v12;
      v22 = v12;
      if ( !v12 )
        return v28;
      v14 = (char *)pv + 296;
      v15 = (_WORD)v29 == 0;
      *((_DWORD *)pv + 74) = v12;
      v16 = v14 + 412;
      *((_DWORD *)v14 + 1) = pv;
      *((_DWORD *)v14 + 3) = a1;
      *((_DWORD *)v14 + 4) = a2;
      *((_DWORD *)v14 + 5) = a3;
      *((_DWORD *)v14 + 2) = a4;
      *((_DWORD *)v14 + 6) = v14 + 56;
      v32 = v14 + 412;
      if ( !v15 )
      {
        v17 = v29;
        *((_WORD *)v14 + 33) = v23;
        v18 = v17;
        v4 = a4;
        *((_DWORD *)v14 + 29) = v16;
        v16 += 4 * v18;
        v32 = v16;
      }
      if ( (v5 & 0x80u) != 0 )
      {
        if ( !*(_DWORD *)(v13 + 7016) )
        {
          v19 = EngAllocMem(1u, 0xB00u, 0x35345448u);
          v13 = v22;
          *(_DWORD *)(v22 + 7016) = v19;
          if ( !v19 )
          {
            EngReleaseSemaphore(*(HSEMAPHORE *)(v22 + 4));
            return -2;
          }
          v16 = v32;
        }
        if ( (v5 & 0x100) != 0 )
        {
          *(_WORD *)(v13 + 7012) = *(_WORD *)(v13 + 7014);
          *(_WORD *)(v13 + 7014) = *(unsigned __int8 *)(*((_DWORD *)v4 + 1) + 1);
        }
        if ( (_WORD)v24 )
        {
          *((_DWORD *)v14 + 43) = v16;
          *((_WORD *)v14 + 61) = *(_WORD *)(*((_DWORD *)v4 + 1) + 2);
        }
      }
      v20 = v26;
      v14[105] = v30;
      v14[161] = v31;
      if ( (v20 & 0x40) != 0 )
        *((_DWORD *)v14 + 4) = 0;
      v28 = AAHalftoneBitmap(v14);
      EngFreeMem(pv);
      return v28;
    }
    return -2;
  }
  return -18;
}
