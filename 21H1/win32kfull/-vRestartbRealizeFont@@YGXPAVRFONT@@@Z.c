/*
 * XREFs of ?vRestartbRealizeFont@@YGXPAVRFONT@@@Z @ 0x209DBD
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QAEXXZ @ 0xACDB4 (-vDeleteRFONTRef@PFFOBJ@@QAEXXZ.c)
 *     ?vDestroyFont@RFONTOBJ@@QAEXH@Z @ 0xD08C4 (-vDestroyFont@RFONTOBJ@@QAEXH@Z.c)
 *     ?Free@?$CTypeIsolation@$0DFAAA@$0DEI@@NSInstrumentation@@IAEXPAX@Z @ 0xD1070 (-Free@-$CTypeIsolation@$0DFAAA@$0DEI@@NSInstrumentation@@IAEXPAX@Z.c)
 */

void __stdcall vRestartbRealizeFont(struct RFONT *a1)
{
  struct RFONT *v1; // esi
  unsigned __int8 *v2; // ecx
  int v3; // [esp+4h] [ebp-8h] BYREF

  v1 = a1;
  v3 = *((_DWORD *)a1 + 21);
  RFONTOBJ::vDestroyFont((struct _FONTOBJ **)&a1, 0);
  PFFOBJ::vDeleteRFONTRef((PFFOBJ *)&v3);
  v2 = gpTypeIsolation[5];
  if ( v2 )
    NSInstrumentation::CTypeIsolation<217088,840>::Free(v2, v1);
  a1 = 0;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a1);
}
