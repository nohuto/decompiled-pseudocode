/*
 * XREFs of RtlLookupElementGenericTableFullAvl @ 0x18005BB70
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x18005BBDC (FindNodeOrParent.c)
 */

__int64 __fastcall RtlLookupElementGenericTableFullAvl(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int NodeOrParent; // eax

  NodeOrParent = FindNodeOrParent(a1, a2, a3);
  *a4 = NodeOrParent;
  if ( NodeOrParent == 1 )
    return *a3 + 32LL;
  else
    return 0LL;
}
