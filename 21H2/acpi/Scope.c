/*
 * XREFs of Scope @ 0x1C00228F0
 * Callers:
 *     <none>
 * Callees:
 *     GetNameSpaceObject @ 0x1C002183C (GetNameSpaceObject.c)
 *     PushScope @ 0x1C0022A38 (PushScope.c)
 */

__int64 __fastcall Scope(__int64 *a1, _QWORD *a2)
{
  __int64 result; // rax

  result = GetNameSpaceObject(*(_BYTE **)(a2[10] + 32LL), a1[10], a2 + 8, 0x80000000);
  if ( !(_DWORD)result )
    return PushScope((_DWORD)a1, a1[15], a2[5], 0, a2[8], a1[11], a1[40], a2[11]);
  return result;
}
