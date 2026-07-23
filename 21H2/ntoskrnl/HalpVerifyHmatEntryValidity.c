/*
 * XREFs of HalpVerifyHmatEntryValidity @ 0x140A8E578
 * Callers:
 *     HalpNumaParseHmat @ 0x140A8E0E4 (HalpNumaParseHmat.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpVerifyHmatEntryValidity(__int64 a1)
{
  signed int v1; // edx
  unsigned int v2; // r8d
  int v3; // eax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned int v6; // edx
  unsigned __int64 v7; // r9
  unsigned int v8; // r10d
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx

  v1 = 0;
  v2 = 8;
  switch ( *(_WORD *)a1 )
  {
    case 0:
      v2 = 40;
      goto LABEL_23;
    case 1:
      v2 = 32;
      if ( *(_DWORD *)(a1 + 4) < 0x20u )
        break;
      v2 = -1;
      v5 = 4LL * *(unsigned int *)(a1 + 12);
      if ( v5 > 0xFFFFFFFF )
        goto LABEL_21;
      v6 = v5 + 32;
      if ( v6 < 0x20 )
        goto LABEL_21;
      v7 = 4LL * *(unsigned int *)(a1 + 16);
      if ( v7 > 0xFFFFFFFF )
        goto LABEL_21;
      v8 = v6 + v7;
      if ( v6 + (unsigned int)v7 < v6 )
        goto LABEL_21;
      v9 = *(unsigned int *)(a1 + 16) * (unsigned __int64)*(unsigned int *)(a1 + 12);
      if ( v9 > 0xFFFFFFFF )
        goto LABEL_21;
      v10 = 2LL * (unsigned int)v9;
      if ( v10 > 0xFFFFFFFF )
        goto LABEL_21;
      if ( v8 + (unsigned int)v10 >= v8 )
        v2 = v8 + v10;
      v1 = v8 + (unsigned int)v10 < v8 ? 0xC0000095 : 0;
LABEL_23:
      if ( v1 < 0 )
        return v1 >= 0;
      break;
    case 2:
      v2 = 32;
      if ( *(_DWORD *)(a1 + 4) >= 0x20u )
      {
        v3 = *(unsigned __int16 *)(a1 + 30);
        v2 = 2 * v3 + 32;
        if ( (unsigned int)(2 * v3) < 0xFFFFFFE0 )
        {
          if ( *(_QWORD *)(a1 + 16) >> 12 > (unsigned __int64)HalpNumaPageCount
            || (v4 = *(unsigned __int16 *)(a1 + 26), *(_QWORD *)(a1 + 16) < v4)
            || !(_WORD)v4 )
          {
            v1 = -1073741216;
            return v1 >= 0;
          }
          goto LABEL_23;
        }
LABEL_21:
        v1 = -1073741675;
        return v1 >= 0;
      }
      break;
  }
  if ( *(_DWORD *)(a1 + 4) < v2 )
    v1 = -1073741811;
  return v1 >= 0;
}
