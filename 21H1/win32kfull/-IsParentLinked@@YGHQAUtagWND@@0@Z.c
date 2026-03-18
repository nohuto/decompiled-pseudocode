/*
 * XREFs of ?IsParentLinked@@YGHQAUtagWND@@0@Z @ 0x9230C
 * Callers:
 *     _LinkWindow@12 @ 0x34D24 (_LinkWindow@12.c)
 * Callees:
 *     <none>
 */

int __fastcall IsParentLinked(int a1, int a2)
{
  int result; // eax
  int i; // edx

  result = 0;
  if ( a2 )
  {
    for ( i = *(_DWORD *)(a2 + 60); i; i = *(_DWORD *)(i + 48) )
    {
      if ( i == a1 )
        result = 1;
    }
  }
  return result;
}
