/*
 * XREFs of _RtlLookupElementGenericTableFullAvl@16 @ 0x4B2A7050
 * Callers:
 *     _RtlLookupElementGenericTableAvl@8 @ 0x4B2A7020 (_RtlLookupElementGenericTableAvl@8.c)
 * Callees:
 *     _FindNodeOrParent@12 @ 0x4B2A707D (_FindNodeOrParent@12.c)
 */

int __stdcall RtlLookupElementGenericTableFullAvl(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int NodeOrParent; // eax

  NodeOrParent = FindNodeOrParent(a3);
  *a4 = NodeOrParent;
  if ( NodeOrParent == 1 )
    return *a3 + 16;
  else
    return 0;
}
