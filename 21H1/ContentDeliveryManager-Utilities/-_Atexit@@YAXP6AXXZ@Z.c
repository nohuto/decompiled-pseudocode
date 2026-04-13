/*
 * XREFs of ?_Atexit@@YAXP6AXXZ@Z @ 0x1800B6870
 * Callers:
 *     ?_Setgloballocale@locale@std@@CAXPEAX@Z @ 0x1800AED70 (-_Setgloballocale@locale@std@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall _Atexit(void (*a1)(void))
{
  if ( !qword_1801931C8 )
    abort();
  --qword_1801931C8;
  qword_180193500[qword_1801931C8] = EncodePointer(a1);
}
