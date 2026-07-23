/*
 * XREFs of IoGetSilo @ 0x1402F7080
 * Callers:
 *     IopAllocateFoExtensionsOnCreate @ 0x1406F68FC (IopAllocateFoExtensionsOnCreate.c)
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x14071A4C0 (IopAllocRealFileObject.c)
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
