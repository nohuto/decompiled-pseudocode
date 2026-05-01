/*
 * XREFs of _lambda_990521e561bc13f238039e7a89bd70b9_::operator() @ 0x18036B66C
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@4Collections@Foundation@6@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@KeyboardHosting@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@PEAI@Z @ 0x18036BA40 (-GetMany@-$SimpleVectorIterator@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows.c)
 * Callees:
 *     <none>
 */

unsigned int **__fastcall lambda_990521e561bc13f238039e7a89bd70b9_::operator()(unsigned int ***a1)
{
  unsigned int **result; // rax
  unsigned int v2; // r9d
  unsigned int *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx

  result = *a1;
  v2 = 0;
  v4 = **a1;
  if ( *v4 )
  {
    do
    {
      v5 = 14LL * v2++;
      v6 = (__int64)&(*a1[1])[v5];
      *(_OWORD *)v6 = 0LL;
      *(_OWORD *)(v6 + 16) = 0LL;
      *(_OWORD *)(v6 + 32) = 0LL;
      *(_QWORD *)(v6 + 48) = 0LL;
      result = *a1;
      v4 = **a1;
    }
    while ( v2 < *v4 );
  }
  *v4 = 0;
  return result;
}
