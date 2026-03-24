/*
 * XREFs of IoGetSilo @ 0x140362220
 * Callers:
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x1407030E0 (IopAllocRealFileObject.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14072044C (IopAllocateFoExtensionsOnCreate.c)
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
