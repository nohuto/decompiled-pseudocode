/*
 * XREFs of xxxGetSysMenuOffset @ 0x1C023F140
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetSysMenuPtr @ 0x1C005C1EC (xxxGetSysMenuPtr.c)
 */

__int64 __fastcall xxxGetSysMenuOffset(_QWORD *a1)
{
  __int64 result; // rax

  result = xxxGetSysMenuPtr(a1);
  if ( result )
    return *(_QWORD *)(result + 48);
  return result;
}
