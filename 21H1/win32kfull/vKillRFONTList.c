/*
 * XREFs of vKillRFONTList @ 0x1D0F5D
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QAEHPAVPFF@@PAPAV2@K@Z @ 0xCDA6C (-bUnloadWorkhorse@PFTOBJ@@QAEHPAVPFF@@PAPAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QAEHH@Z @ 0xCDD06 (-bUnloadAllButPermanentFonts@PFTOBJ@@QAEHH@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QAEXXZ @ 0xACDB4 (-vDeleteRFONTRef@PFFOBJ@@QAEXXZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z @ 0xD0924 (-vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z.c)
 */

void __fastcall vKillRFONTList(PFFOBJ *this, struct _FONTOBJ *a2)
{
  struct _FONTOBJ *i; // esi
  _BYTE v4[16]; // [esp+Ch] [ebp-14h] BYREF
  struct _FONTOBJ *v5; // [esp+1Ch] [ebp-4h] BYREF

  for ( i = a2; i; a2 = i )
  {
    i = (struct _FONTOBJ *)i[15].cxMax;
    v5 = a2;
    memset(v4, 0, sizeof(v4));
    PushThreadGuardedObject(v4, a2, vRestartKillEudcRFONTs);
    RFONTOBJ::vDeleteRFONT(&v5, 0, 0, (struct RFONT *)1);
    PopThreadGuardedObject(v4);
    PFFOBJ::vDeleteRFONTRef(this);
    v5 = 0;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5);
  }
}
