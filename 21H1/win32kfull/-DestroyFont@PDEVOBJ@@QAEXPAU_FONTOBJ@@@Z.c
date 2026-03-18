/*
 * XREFs of ?DestroyFont@PDEVOBJ@@QAEXPAU_FONTOBJ@@@Z @ 0xD0B8E
 * Callers:
 *     ?vDestroyFont@RFONTOBJ@@QAEXH@Z @ 0xD08C4 (-vDestroyFont@RFONTOBJ@@QAEXH@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z @ 0xD0924 (-vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z.c)
 *     ?MulDestroyFont@@YGXPAU_FONTOBJ@@@Z @ 0x202E06 (-MulDestroyFont@@YGXPAU_FONTOBJ@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     _UnmapPrintKView@4 @ 0xD0C72 (_UnmapPrintKView@4.c)
 */

void __thiscall PDEVOBJ::DestroyFont(PDEVOBJ *this, struct _FONTOBJ *a2)
{
  struct _FONTOBJ *v3; // edi
  int v4; // esi
  int v5; // [esp+Ch] [ebp-4h] BYREF

  v5 = _ghsemPublicPFT;
  GreAcquireSemaphore(_ghsemPublicPFT);
  v3 = a2;
  v4 = *((_DWORD *)a2[1].pvProducer + 12);
  SEMOBJ::vUnlock((SEMOBJ *)&v5);
  if ( v4 == 1 )
    UnmapPrintKView(*((_DWORD *)v3[1].pvProducer + 14));
  (*(void (__stdcall **)(struct _FONTOBJ *))(*(_DWORD *)this + 2072))(v3);
  a2 = 0;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a2);
}
