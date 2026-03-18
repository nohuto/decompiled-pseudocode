/*
 * XREFs of ?DxEngSyncPaletteTableWithDevice@@YGHPAUHPALETTE__@@PAUHDEV__@@@Z @ 0xF62D8
 * Callers:
 *     _NtGdiDdDDICreateDCFromMemory@4 @ 0x7BD76 (_NtGdiDdDDICreateDCFromMemory@4.c)
 * Callees:
 *     ??1DEVLOCKOBJ@@QAE@XZ @ 0x5A936 (--1DEVLOCKOBJ@@QAE@XZ.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ??0EPALOBJ@@QAE@PAUHPALETTE__@@@Z @ 0xA9642 (--0EPALOBJ@@QAE@PAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QAE@XZ @ 0xAAD84 (--1EPALOBJ@@QAE@XZ.c)
 *     ??0DEVLOCKOBJ@@QAE@AAVPDEVOBJ@@@Z @ 0xF5B9C (--0DEVLOCKOBJ@@QAE@AAVPDEVOBJ@@@Z.c)
 *     ?apalColorSet@XEPALOBJ@@QAEXPAVPALETTE@@@Z @ 0x1D37C0 (-apalColorSet@XEPALOBJ@@QAEXPAVPALETTE@@@Z.c)
 */

int __fastcall DxEngSyncPaletteTableWithDevice(HPALETTE a1, int a2)
{
  int v3; // esi
  int v5; // [esp+Ch] [ebp-3Ch] BYREF
  int v6; // [esp+10h] [ebp-38h] BYREF
  int v7; // [esp+14h] [ebp-34h] BYREF
  _BYTE v8[48]; // [esp+18h] [ebp-30h] BYREF

  v3 = 0;
  v6 = a2;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v5, a1);
  if ( a2 && v5 )
  {
    v7 = *(_DWORD *)(a2 + 40);
    GreAcquireSemaphore(v7);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v8, (struct PDEVOBJ *)&v6);
    v6 = _ghsemPalette;
    GreAcquireSemaphore(_ghsemPalette);
    XEPALOBJ::apalColorSet((XEPALOBJ *)&v5, *(struct PALETTE **)(a2 + 1112));
    v3 = 1;
    SEMOBJ::vUnlock((SEMOBJ *)&v6);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v8);
    SEMOBJ::vUnlock((SEMOBJ *)&v7);
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v5);
  return v3;
}
