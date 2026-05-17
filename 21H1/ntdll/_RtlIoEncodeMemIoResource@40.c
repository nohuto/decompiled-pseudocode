/*
 * XREFs of _RtlIoEncodeMemIoResource@40 @ 0x4B3564F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlIoEncodeMemIoResource(
        int a1,
        char a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned int v11; // edi
  unsigned int v12; // edi
  unsigned int v13; // eax
  __int16 v14; // bx
  unsigned int v15; // edi
  unsigned int v16; // eax
  __int16 v17; // di
  unsigned int v18; // eax
  __int16 v19; // [esp+8h] [ebp-Ch]
  unsigned int v20; // [esp+8h] [ebp-Ch]
  unsigned int v21; // [esp+10h] [ebp-4h]

  v8 = HIDWORD(a4);
  v9 = a4;
  if ( a2 != 3 && a2 != 7 && (a2 != 1 || HIDWORD(a3) || HIDWORD(a4)) )
    return -1073741811;
  *(_DWORD *)(a1 + 16) = a5;
  *(_DWORD *)(a1 + 20) = a6;
  *(_DWORD *)(a1 + 24) = a7;
  *(_DWORD *)(a1 + 28) = a8;
  if ( a2 == 1 )
  {
    *(_BYTE *)(a1 + 1) = 1;
LABEL_14:
    *(_DWORD *)(a1 + 8) = a3;
    *(_DWORD *)(a1 + 12) = v9;
    return 0;
  }
  v19 = *(_WORD *)(a1 + 4) & 0xF1FF;
  v9 = a4;
  *(_WORD *)(a1 + 4) = v19;
  if ( !HIDWORD(a3) && !HIDWORD(a4) )
  {
    *(_BYTE *)(a1 + 1) = 3;
    goto LABEL_14;
  }
  if ( a3 > 0xFFFFFFFF00LL )
  {
    if ( a3 > 0xFFFFFFFF0000LL )
    {
      if ( a3 <= 0xFFFFFFFF00000000uLL && !(_DWORD)a3 && a4 <= 0xFFFFFFFF00000000uLL )
      {
        v17 = v19;
        while ( v9 )
        {
          v20 = v9;
          v18 = v8;
          v8 = __PAIR64__(v8, v9) >> 31;
          v9 *= 2;
          if ( __PAIR64__(v8, v9) < __PAIR64__(v18, v20) )
            return -1073741823;
        }
        *(_DWORD *)(a1 + 8) = HIDWORD(a3);
        *(_DWORD *)(a1 + 12) = v8;
        *(_WORD *)(a1 + 4) = v17 | 0x800;
        goto LABEL_37;
      }
    }
    else
    {
      v21 = a3 >> 16;
      if ( a3 == (unsigned __int64)v21 << 16 && a4 <= 0xFFFFFFFF0000LL )
      {
        v11 = a4 >> 16;
        if ( a4 != (unsigned __int64)v11 << 16 )
        {
          do
          {
            v15 = v9;
            v16 = v8;
            v8 = __PAIR64__(v8, v9) >> 31;
            v9 *= 2;
            if ( __PAIR64__(v8, v9) < __PAIR64__(v16, v15) )
              return -1073741823;
            v11 = __PAIR64__(v8, v9) >> 16;
          }
          while ( __PAIR64__(v8, v9) != (unsigned __int64)v11 << 16 );
        }
        v14 = v19 | 0x400;
LABEL_22:
        *(_DWORD *)(a1 + 12) = v11;
        *(_DWORD *)(a1 + 8) = v21;
        *(_WORD *)(a1 + 4) = v14;
LABEL_37:
        *(_BYTE *)(a1 + 1) = 7;
        return 0;
      }
    }
  }
  else
  {
    v21 = a3 >> 8;
    if ( a3 == (unsigned __int64)v21 << 8 && a4 <= 0xFFFFFFFF00LL )
    {
      v11 = a4 >> 8;
      if ( a4 != (unsigned __int64)v11 << 8 )
      {
        do
        {
          v12 = v9;
          v13 = v8;
          v8 = __PAIR64__(v8, v9) >> 31;
          v9 *= 2;
          if ( __PAIR64__(v8, v9) < __PAIR64__(v13, v12) )
            return -1073741823;
          v11 = __PAIR64__(v8, v9) >> 8;
        }
        while ( __PAIR64__(v8, v9) != (unsigned __int64)v11 << 8 );
      }
      v14 = v19 | 0x200;
      goto LABEL_22;
    }
  }
  return -1073741823;
}
