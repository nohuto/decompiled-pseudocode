/*
 * XREFs of RtlLookupElementGenericTableFull @ 0x1800F78C0
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent_0 @ 0x180066858 (FindNodeOrParent_0.c)
 *     RtlSplay @ 0x1800668F0 (RtlSplay.c)
 */

__int64 __fastcall RtlLookupElementGenericTableFull(__int64 *a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int NodeOrParent_0; // eax

  NodeOrParent_0 = FindNodeOrParent_0(a1, a2, a3);
  *a4 = NodeOrParent_0;
  if ( NodeOrParent_0 != 1 )
    return 0LL;
  *a1 = (__int64)RtlSplay((_QWORD *)*a3);
  return *a3 + 40LL;
}
