/*
 * XREFs of vKillEudcRFONTs @ 0xCDC40
 * Callers:
 *     bUnloadEudcFont @ 0xCD8F6 (bUnloadEudcFont.c)
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z @ 0xD0924 (-vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z.c)
 */

void __fastcall vKillEudcRFONTs(int a1)
{
  int i; // esi
  int v2; // [esp+Ch] [ebp-1Ch] BYREF
  int v3; // [esp+10h] [ebp-18h] BYREF
  _BYTE v4[16]; // [esp+18h] [ebp-10h] BYREF

  for ( i = a1; i; a1 = i )
  {
    i = *(_DWORD *)(i + 668);
    v3 = *(_DWORD *)(a1 + 84);
    memset(v4, 0, sizeof(v4));
    v2 = a1;
    PushThreadGuardedObject(v4, a1, vRestartKillEudcRFONTs);
    RFONTOBJ::vDeleteRFONT((RFONTOBJ *)&v2, 0, (struct PFFOBJ *)&v3, (struct RFONT *)1);
    PopThreadGuardedObject(v4);
    v2 = 0;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v2);
  }
}
