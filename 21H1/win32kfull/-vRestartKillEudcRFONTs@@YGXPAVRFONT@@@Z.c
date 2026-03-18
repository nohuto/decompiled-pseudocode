/*
 * XREFs of ?vRestartKillEudcRFONTs@@YGXPAVRFONT@@@Z @ 0x1D0FC5
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z @ 0xD0924 (-vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z.c)
 */

void __stdcall vRestartKillEudcRFONTs(struct RFONT *a1)
{
  struct _FONTOBJ *v2; // eax
  struct _FONTOBJ *v3; // [esp+4h] [ebp-Ch] BYREF
  PVOID v4[2]; // [esp+8h] [ebp-8h] BYREF

  while ( 1 )
  {
    v2 = (struct _FONTOBJ *)a1;
    if ( !a1 )
      break;
    a1 = (struct RFONT *)*((_DWORD *)a1 + 167);
    v3 = v2;
    v4[0] = v2[1].pvProducer;
    RFONTOBJ::vDeleteRFONT(&v3, 0, (struct PFFOBJ *)v4, 0);
    v3 = 0;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v3);
  }
}
