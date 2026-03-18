/*
 * XREFs of ?GreSetICMMode@@YGHPAUHDC__@@KK@Z @ 0x21BB11
 * Callers:
 *     _NtGdiSetIcmMode@12 @ 0x21C79C (_NtGdiSetIcmMode@12.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?vInit@DEVLOCKOBJ@@QAEXXZ @ 0x78C50 (-vInit@DEVLOCKOBJ@@QAEXXZ.c)
 */

int __userpurge GreSetICMMode@<eax>(int a1@<edx>, HDC a2@<ecx>, HDC a3, unsigned int a4, unsigned int a5)
{
  int v5; // ebx
  DEVLOCKOBJ *v6; // ecx
  int v7; // eax
  unsigned int v8; // esi
  int v9; // edx
  int v10; // edi
  int v11; // ecx
  int v12; // ebx
  int v13; // esi
  unsigned int v14; // edx
  int v15; // edi
  int v16; // eax
  signed __int32 v17; // esi
  int v18; // ecx
  int v19; // eax
  signed __int32 v20; // edx
  int v21; // ecx
  int v23; // [esp+18h] [ebp-50h]
  int v24; // [esp+1Ch] [ebp-4Ch]
  _DWORD v26[3]; // [esp+2Ch] [ebp-3Ch] BYREF
  _BYTE v27[20]; // [esp+38h] [ebp-30h] BYREF
  _DWORD v28[3]; // [esp+4Ch] [ebp-1Ch] BYREF
  __int16 v29; // [esp+58h] [ebp-10h]

  v5 = 0;
  v23 = 1;
  v26[1] = 0;
  v26[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v26, a2);
  if ( !v26[0] )
    return v5;
  memset(v28, 0, sizeof(v28));
  v29 = 256;
  DEVLOCKOBJ::vInit((DEVLOCKOBJ *)v27);
  if ( !DEVLOCKOBJ::bLock(v6, (struct XDCOBJ *)v26, 0) )
    goto LABEL_44;
  v7 = *(_DWORD *)(v26[0] + 36);
  v24 = *(_DWORD *)(v26[0] + 80);
  v8 = v24 & 0xF0000000;
  v9 = (unsigned __int8)v24;
  v10 = v24 & 0xF00;
  if ( a1 == 1 )
  {
    v10 = (int)a3;
    if ( !a3 )
    {
      v10 = 0;
      v12 = (unsigned __int8)v24;
      v9 = v24 & 0xF0;
      goto LABEL_31;
    }
    if ( a3 == (HDC)256 || a3 == (HDC)512 || a3 == (HDC)1024 )
    {
      v14 = ((unsigned int)a3 >> 8) & 0xF;
      if ( ((unsigned __int16)a3 & 0x200) == 0 )
      {
LABEL_29:
        v12 = (unsigned __int8)v24;
        v11 = v26[0];
        v9 = v24 & 0xF0 | v14;
        goto LABEL_33;
      }
      if ( v7 )
      {
        if ( (*(_DWORD *)(v7 + 1120) & 0x2000000) == 0 || *(_DWORD *)(v26[0] + 20) == 1 )
          v14 = 1;
        goto LABEL_29;
      }
    }
LABEL_10:
    v23 = 0;
    goto LABEL_44;
  }
  if ( a1 == 2 )
  {
    v11 = v26[0];
    v12 = (unsigned __int8)v24;
    if ( a3 )
      v9 = (unsigned __int8)v24 | 0x20;
    else
      v9 = v24 & 0xDF;
    goto LABEL_33;
  }
  if ( (unsigned int)(a1 - 3) > 1 )
    goto LABEL_10;
  if ( a3 == (HDC)8 || a3 == (HDC)16 )
  {
    v8 = 0x20000000;
    v12 = (unsigned __int8)v24;
LABEL_31:
    v11 = v26[0];
    goto LABEL_32;
  }
  if ( a3 != (HDC)32 && a3 != (HDC)773 || !v7 || (*(_DWORD *)(v7 + 1120) & 0x4000000) == 0 )
    goto LABEL_10;
  v11 = v26[0];
  v12 = (unsigned __int8)v24;
  v13 = *(_DWORD *)(v26[0] + 20);
  if ( v13 == 1 )
    v9 = (unsigned __int8)v24 | 0x10;
  v8 = v13 != 1 ? 0x10000000 : 0x20000000;
LABEL_32:
  if ( a1 != 4 )
  {
LABEL_33:
    if ( v12 != v9 || (v24 & 0xF00) != v10 || (*(_DWORD *)(v26[0] + 80) & 0xF0000000) != v8 )
    {
      *(_DWORD *)(v11 + 80) = v10 | v9 | v8;
      *(_DWORD *)(*(_DWORD *)(v26[0] + 1020) + 260) = v10 | v9 | v8 | *(_DWORD *)(*(_DWORD *)(v26[0] + 1020) + 260) & 0xF000;
      if ( v12 != v9 )
      {
        v15 = *(_DWORD *)(v26[0] + 504);
        v16 = *(_DWORD *)(v26[0] + 60);
        if ( v16 )
        {
          v17 = _InterlockedIncrement((volatile signed __int32 *)ulXlatePalUnique);
          v18 = *(_DWORD *)(v16 + 80);
          *(_DWORD *)(v16 + 24) = v17;
          if ( v18 != v16 )
            *(_DWORD *)(v18 + 24) = v17;
          if ( v15 )
          {
            v19 = *(_DWORD *)(v15 + 88);
            if ( v19 )
            {
              v20 = _InterlockedIncrement((volatile signed __int32 *)ulXlatePalUnique);
              v21 = *(_DWORD *)(v19 + 80);
              *(_DWORD *)(v19 + 24) = v20;
              if ( v21 != v19 )
                *(_DWORD *)(v21 + 24) = v20;
            }
          }
        }
      }
    }
  }
LABEL_44:
  XDCOBJ::vUnlockFast((XDCOBJ *)v26);
  v5 = v23;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v27);
  if ( v28[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v28);
  return v5;
}
