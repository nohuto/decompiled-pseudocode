/*
 * XREFs of ?_Atexit@@YAXP6AXXZ@Z @ 0x1800BAF80
 * Callers:
 *     ?_Setgloballocale@locale@std@@CAXPEAX@Z @ 0x1800B3480 (-_Setgloballocale@locale@std@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall _Atexit(void (*a1)(void))
{
  if ( !qword_18019C1B8 )
    abort();
  --qword_18019C1B8;
  qword_18019C500[qword_18019C1B8] = EncodePointer(a1);
}
