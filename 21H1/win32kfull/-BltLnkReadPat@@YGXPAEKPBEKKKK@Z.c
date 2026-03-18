/*
 * XREFs of ?BltLnkReadPat@@YGXPAEKPBEKKKK@Z @ 0x2489C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall BltLnkReadPat(
        unsigned __int8 *a1,
        unsigned int a2,
        const unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v8; // edx
  unsigned int v10; // ecx

  v8 = a6;
  switch ( a7 )
  {
    case 2u:
      v8 = 2 * a6;
      break;
    case 3u:
      v8 = 3 * a6;
      break;
    case 4u:
      v8 = 4 * a6;
      break;
  }
  for ( ; v8; --v8 )
  {
    v10 = a4 != a5 ? a5 : 0;
    *a1++ = a3[v10];
    a5 = v10 + 1;
  }
}
