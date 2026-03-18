/*
 * XREFs of ValidateOwnerDepth @ 0x1C01139D4
 * Callers:
 *     xxxSetWindowData @ 0x1C00B2618 (xxxSetWindowData.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall ValidateOwnerDepth(__int64 a1, __int64 a2)
{
  bool result; // al
  unsigned int v3; // r8d

  result = 0;
  v3 = 1;
  while ( a2 )
  {
    if ( a2 == a1 )
      return result;
    a2 = *(_QWORD *)(a2 + 120);
    ++v3;
  }
  return v3 <= gNestedWindowLimit;
}
