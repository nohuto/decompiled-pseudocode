/*
 * XREFs of IoGetSilo @ 0x1402D9620
 * Callers:
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x140600890 (IopAllocRealFileObject.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x140674ADC (IopAllocateFoExtensionsOnCreate.c)
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
