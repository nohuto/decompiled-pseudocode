/*
 * XREFs of ?vInit256Rainbow@XEPALOBJ@@QAEXXZ @ 0xB7624
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YGHKAAVDCOBJ@@AAVPDEVOBJ@@AAVSURFREF@@AAVXEPALOBJ@@PAUHDC__@@PAUHBITMAP__@@IIPAEPAUtagBITMAPINFO@@III@Z @ 0x4B706 (-GreGetDIBitsInternalWorker@@YGHKAAVDCOBJ@@AAVPDEVOBJ@@AAVSURFREF@@AAVXEPALOBJ@@PAUHDC__@@PAUHBI.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?vInit256Default@XEPALOBJ@@QAEXXZ @ 0xB7702 (-vInit256Default@XEPALOBJ@@QAEXXZ.c)
 *     ?MakeITable@@YGHPAEPAURGBX@@H@Z @ 0xB7744 (-MakeITable@@YGHPAEPAURGBX@@H@Z.c)
 */

void __thiscall XEPALOBJ::vInit256Rainbow(XEPALOBJ *this)
{
  char v1; // ah
  char v3; // al
  char v4; // cl
  unsigned int v5; // edx
  bool v6; // zf
  unsigned __int8 *v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  unsigned __int8 *v11; // edi
  struct RGBX *v12; // [esp+0h] [ebp-14h]
  int v13; // [esp+4h] [ebp-10h]
  int v14; // [esp+Ch] [ebp-8h]
  char v15; // [esp+11h] [ebp-3h]
  char v16; // [esp+12h] [ebp-2h]
  char v17; // [esp+13h] [ebp-1h]

  v1 = 0;
  v3 = 0;
  v15 = 0;
  v4 = 0;
  v17 = 0;
  v16 = 0;
  v5 = 0;
  HIBYTE(v14) = 0;
  do
  {
    LOBYTE(v14) = v1;
    BYTE2(v14) = v3;
    BYTE1(v14) = v4;
    *(_DWORD *)(v5 + *(_DWORD *)(*(_DWORD *)this + 76)) = v14;
    v4 = v16;
    v6 = v15 == -32;
    v1 = v15 + 32;
    v3 = v17;
    v15 += 32;
    if ( v6 )
    {
      v6 = v16 == -32;
      v4 = v16 + 32;
      v16 += 32;
      if ( v6 )
      {
        v3 = v17 + 64;
        v17 += 64;
      }
    }
    v5 += 4;
  }
  while ( v5 < 0x400 );
  XEPALOBJ::vInit256Default(this);
  v7 = gpRGBXlate;
  if ( !gpRGBXlate )
  {
    v11 = (unsigned __int8 *)PALLOCMEM2(0x8000u, 1650946631, 0);
    if ( !v11 )
    {
      *(_DWORD *)(*(_DWORD *)this + 72) = 0;
      return;
    }
    MakeITable((unsigned __int8 *)0x100, v12, v13);
    v7 = (unsigned __int8 *)_InterlockedCompareExchange((volatile signed __int32 *)gpRGBXlate, (signed __int32)v11, 0);
    if ( v7 )
      Win32FreePool(v11);
    else
      v7 = v11;
  }
  v8 = *(_DWORD *)this;
  v9 = *(_DWORD *)(*(_DWORD *)this + 80);
  if ( v9 == *(_DWORD *)this )
    v10 = *(_DWORD *)(v8 + 24);
  else
    v10 = *(_DWORD *)(v9 + 24);
  *(_DWORD *)(v8 + 28) = v10;
  *(_DWORD *)(*(_DWORD *)this + 72) = v7;
}
