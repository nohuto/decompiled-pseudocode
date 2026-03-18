/*
 * XREFs of ?bGrow@EFSOBJ@@QAEHXZ @ 0x2293A6
 * Callers:
 *     ?WriteEFE@EFSOBJ@@QAEXABU_EFENTRY@@AAVPFEOBJ@@@Z @ 0x88F8C (-WriteEFE@EFSOBJ@@QAEXABU_EFENTRY@@AAVPFEOBJ@@@Z.c)
 * Callees:
 *     ??1EFSMEMOBJ@@QAE@XZ @ 0x88B8C (--1EFSMEMOBJ@@QAE@XZ.c)
 *     ??0EFSMEMOBJ@@QAE@PAVDCOBJ@@KKPAXPAK@Z @ 0x88BBA (--0EFSMEMOBJ@@QAE@PAVDCOBJ@@KKPAXPAK@Z.c)
 *     ?vXerox@EFSMEMOBJ@@QAEXPAVEFSTATE@@@Z @ 0x229505 (-vXerox@EFSMEMOBJ@@QAEXPAVEFSTATE@@@Z.c)
 */

int __thiscall EFSOBJ::bGrow(struct EFSTATE **this)
{
  struct EFSTATE *v2; // edx
  unsigned int v3; // eax
  struct EFSTATE *v5; // edi
  int v6; // esi
  struct EFSTATE *v7; // eax
  _DWORD v8[2]; // [esp+8h] [ebp-Ch] BYREF
  unsigned int v9; // [esp+10h] [ebp-4h] BYREF

  v2 = *this;
  v3 = (*((_DWORD *)*this + 7) - (int)*this - 40) >> 3;
  if ( v3 + 16 < v3 )
    return 0;
  v9 = *((_DWORD *)v2 + 3);
  EFSMEMOBJ::EFSMEMOBJ(
    (EFSMEMOBJ *)v8,
    *((struct DCOBJ **)v2 + 5),
    v3 + 16,
    *((_DWORD *)v2 + 1),
    *((void **)v2 + 2),
    &v9);
  v5 = (struct EFSTATE *)v8[0];
  if ( v8[0] )
  {
    EFSMEMOBJ::vXerox((EFSMEMOBJ *)v8, *this);
    v7 = *this;
    *this = v5;
    v8[0] = v7;
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  EFSMEMOBJ::~EFSMEMOBJ((EFSMEMOBJ *)v8);
  return v6;
}
