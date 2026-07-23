/*
 * XREFs of _LdrpFindMessageInAlternateModule@20 @ 0x4B2B86EA
 * Callers:
 *     _LdrpResSearchResourceMappedFile@36 @ 0x4B2BACC0 (_LdrpResSearchResourceMappedFile@36.c)
 *     _LdrpLoadResourceFromAlternativeModule@20 @ 0x4B2BB980 (_LdrpLoadResourceFromAlternativeModule@20.c)
 * Callees:
 *     _LdrpAccessResourceDataNoMultipleLanguage@16 @ 0x4B2BD9F0 (_LdrpAccessResourceDataNoMultipleLanguage@16.c)
 */

int __fastcall LdrpFindMessageInAlternateModule(void *a1, int *a2, unsigned int a3, unsigned int a4, char a5)
{
  int result; // eax
  int v6; // ecx
  unsigned int *v7; // edx
  int v8; // [esp+8h] [ebp-4h] BYREF

  if ( !a1 || !a2 )
    return -1073741811;
  if ( !a5 )
  {
    result = LdrpAccessResourceDataNoMultipleLanguage(a1, (int)&v8, 0);
    if ( result < 0 )
      return result;
    a2 = (int *)v8;
  }
  v6 = *a2;
  v7 = (unsigned int *)(a2 + 1);
  if ( a5 && 12 * v6 + 4 > a3 )
    return -1073741701;
  if ( !v6 )
    return -1073741559;
  while ( 1 )
  {
    --v6;
    if ( a4 >= *v7 && a4 <= v7[1] )
      break;
    v7 += 3;
    if ( !v6 )
      return -1073741559;
  }
  return 0;
}
