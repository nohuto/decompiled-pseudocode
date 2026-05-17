/*
 * XREFs of _RtlLookupElementGenericTableFull@16 @ 0x4B2A7F10
 * Callers:
 *     _RtlLookupElementGenericTable@8 @ 0x4B2A7EE0 (_RtlLookupElementGenericTable@8.c)
 * Callees:
 *     FindNodeOrParent @ 0x4B2A7F4E (FindNodeOrParent.c)
 *     _RtlSplay@4 @ 0x4B2E8250 (_RtlSplay@4.c)
 */

int __stdcall RtlLookupElementGenericTableFull(_DWORD *a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int NodeOrParent; // eax

  NodeOrParent = FindNodeOrParent(a3);
  *a4 = NodeOrParent;
  if ( NodeOrParent != 1 )
    return 0;
  *a1 = RtlSplay(*a3);
  return *a3 + 24;
}
