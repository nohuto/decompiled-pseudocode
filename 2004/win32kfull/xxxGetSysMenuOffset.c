/*
 * XREFs of xxxGetSysMenuOffset @ 0x1C02403E0
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetSysMenuPtr @ 0x1C00A050C (xxxGetSysMenuPtr.c)
 */

__int64 __fastcall xxxGetSysMenuOffset(_QWORD *a1)
{
  __int64 result; // rax

  result = xxxGetSysMenuPtr(a1);
  if ( result )
    return *(_QWORD *)(result + 48);
  return result;
}
