/*
 * XREFs of ?vRestartRemoveAllInactiveRFONTs@@YGXPAPAVRFONT@@@Z @ 0x209D83
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z @ 0xD0924 (-vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z.c)
 */

void __stdcall vRestartRemoveAllInactiveRFONTs(struct RFONT **a1)
{
  struct RFONT ***v1; // esi
  struct RFONT **v2; // eax

  v1 = (struct RFONT ***)a1;
  v2 = (struct RFONT **)*a1;
  if ( *a1 )
  {
    do
    {
      a1 = v2;
      RFONTOBJ::vDeleteRFONT((struct _FONTOBJ **)&a1, 0, 0, 0);
      a1 = 0;
      ++v1;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a1);
      v2 = *v1;
    }
    while ( *v1 );
  }
}
