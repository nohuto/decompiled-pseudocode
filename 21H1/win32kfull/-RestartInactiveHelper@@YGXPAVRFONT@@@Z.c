/*
 * XREFs of ?RestartInactiveHelper@@YGXPAVRFONT@@@Z @ 0x208EC3
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z @ 0xD0924 (-vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z.c)
 */

void __stdcall RestartInactiveHelper(struct RFONT *a1)
{
  int v1; // [esp+0h] [ebp-8h] BYREF

  v1 = *((_DWORD *)a1 + 21);
  RFONTOBJ::vDeleteRFONT((struct _FONTOBJ **)&a1, 0, (struct PFFOBJ *)&v1, 0);
  a1 = 0;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a1);
}
