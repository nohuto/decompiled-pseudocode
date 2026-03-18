/*
 * XREFs of IoGetSilo @ 0x14027B350
 * Callers:
 *     IopAllocateFoExtensionsOnCreate @ 0x14065867C (IopAllocateFoExtensionsOnCreate.c)
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x140678970 (IopAllocRealFileObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoGetSilo(__int64 a1)
{
  _QWORD *v1; // rax

  v1 = *(_QWORD **)(a1 + 208);
  if ( v1 )
  {
    if ( v1 == IopRevocationExtension )
      return 0LL;
    v1 = (_QWORD *)v1[8];
  }
  if ( !v1 )
    return 0LL;
  return v1[1];
}
