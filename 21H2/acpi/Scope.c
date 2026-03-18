/*
 * XREFs of Scope @ 0x1C0019A40
 * Callers:
 *     <none>
 * Callees:
 *     PushScope @ 0x1C0018570 (PushScope.c)
 *     GetNameSpaceObject @ 0x1C0019AC8 (GetNameSpaceObject.c)
 */

__int64 __fastcall Scope(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  result = GetNameSpaceObject(*(void **)(*(_QWORD *)(a2 + 80) + 32LL));
  if ( !(_DWORD)result )
    return PushScope(
             (__int64)a1,
             a1[15],
             *(_SLIST_ENTRY **)(a2 + 40),
             0LL,
             *(_QWORD *)(a2 + 64),
             a1[11],
             a1[40],
             *(_QWORD *)(a2 + 88));
  return result;
}
