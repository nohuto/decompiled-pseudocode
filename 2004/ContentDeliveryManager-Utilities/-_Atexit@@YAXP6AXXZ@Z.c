/*
 * XREFs of ?_Atexit@@YAXP6AXXZ@Z @ 0x1800B8ED0
 * Callers:
 *     ?_Setgloballocale@locale@std@@CAXPEAX@Z @ 0x1800B13D0 (-_Setgloballocale@locale@std@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall _Atexit(void (*a1)(void))
{
  if ( !qword_1801981C8 )
    abort();
  --qword_1801981C8;
  qword_180198510[qword_1801981C8] = EncodePointer(a1);
}
