/*
 * XREFs of ?ocslen@@YAHPEBG@Z @ 0x14005F7E0
 * Callers:
 *     ?Add@CExpansionVector@ATL@@QEAAHPEBG0@Z @ 0x14005C0F0 (-Add@CExpansionVector@ATL@@QEAAHPEBG0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ocslen(const unsigned __int16 *a1)
{
  __int64 result; // rax

  if ( !a1 )
    return 0LL;
  result = -1LL;
  do
    ++result;
  while ( a1[result] );
  return result;
}
