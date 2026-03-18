/*
 * XREFs of ?MakeITable@@YGHPAEPAURGBX@@H@Z @ 0xB7744
 * Callers:
 *     ?vInit256Rainbow@XEPALOBJ@@QAEXXZ @ 0xB7624 (-vInit256Rainbow@XEPALOBJ@@QAEXXZ.c)
 *     ?bGenColorXlate555@XEPALOBJ@@QAEHXZ @ 0x222EB1 (-bGenColorXlate555@XEPALOBJ@@QAEHXZ.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?inv_cmap@@YGXHPAURGBX@@HPAKPAE@Z @ 0xB7804 (-inv_cmap@@YGXHPAURGBX@@HPAKPAE@Z.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ?MakeITable256@@YGHPAE@Z @ 0x1FAC49 (-MakeITable256@@YGHPAE@Z.c)
 *     ?MakeITableDEF@@YGHPAE@Z @ 0x1FAC8A (-MakeITableDEF@@YGHPAE@Z.c)
 *     ?MakeITableMono@@YGHPAE@Z @ 0x1FACB1 (-MakeITableMono@@YGHPAE@Z.c)
 *     ?MakeITableVGA@@YGHPAE@Z @ 0x1FAD13 (-MakeITableVGA@@YGHPAE@Z.c)
 */

int __userpurge MakeITable@<eax>(
        int a1@<edx>,
        void *a2@<ecx>,
        unsigned int *a3@<ebx>,
        unsigned __int8 *a4,
        struct RGBX *a5,
        int a6)
{
  void *v6; // esi
  void *v7; // edi
  int v8; // ebx
  int i; // esi
  bool v10; // zf
  void *v11; // eax
  int v12; // ecx
  unsigned __int8 *v15; // [esp+0h] [ebp-1Ch]
  int v16; // [esp+8h] [ebp-14h] BYREF
  void *v17; // [esp+Ch] [ebp-10h]
  int v18; // [esp+10h] [ebp-Ch]
  int v19; // [esp+18h] [ebp-4h]

  v6 = a2;
  v19 = a1;
  v17 = a2;
  v7 = a2;
  if ( a1 )
  {
    v8 = 0;
    v16 = _ghsemPalette;
    GreAcquireSemaphore(_ghsemPalette);
    v18 = 20;
    if ( (int)a4 >= 20 )
    {
      for ( i = 0; i < (int)a4; ++i )
      {
        if ( *(_DWORD *)(v19 + 4 * i) != logDefaultPal[i % v18 + 1] )
          break;
      }
      v10 = i == (_DWORD)a4;
      v6 = v17;
      v7 = v17;
      v8 = 0;
      if ( v10 )
      {
        if ( gpDefITable )
        {
          memcpy(v17, gpDefITable, 0x8000u);
          v8 = 1;
LABEL_10:
          SEMOBJ::vUnlock((SEMOBJ *)&v16);
          return v8;
        }
        v7 = PALLOCMEM2(0x8000u, 1886221383, 0);
        if ( !v7 )
          v7 = v17;
      }
    }
    v11 = PALLOCMEM2((size_t)&loc_20000, 1886221383, 0);
    v17 = v11;
    if ( v11 )
    {
      inv_cmap(v12, (struct RGBX *)v11, (int)v7, a3, v15);
      Win32FreePool(v17);
      v8 = 1;
      if ( v7 != v6 )
      {
        memcpy(v6, v7, 0x8000u);
        gpDefITable = v7;
      }
    }
    else if ( v7 != v6 )
    {
      Win32FreePool(v7);
    }
    goto LABEL_10;
  }
  if ( a4 == (unsigned __int8 *)2 )
    return MakeITableMono(v15);
  if ( a4 == (unsigned __int8 *)16 )
    return MakeITableVGA(v15);
  if ( a4 == (unsigned __int8 *)20 )
    return MakeITableDEF(v15);
  if ( a4 == (unsigned __int8 *)256 )
    return MakeITable256(v15);
  return 0;
}
