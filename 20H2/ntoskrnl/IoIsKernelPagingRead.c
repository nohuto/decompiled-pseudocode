/*
 * XREFs of IoIsKernelPagingRead @ 0x1403183F0
 * Callers:
 *     <none>
 * Callees:
 *     IopIrpHasExtensionType @ 0x1402F42C0 (IopIrpHasExtensionType.c)
 */

_BOOL8 __fastcall IoIsKernelPagingRead(__int64 a1)
{
  char HasExtensionType; // al
  __int64 v2; // rcx
  __int16 v3; // dx

  HasExtensionType = IopIrpHasExtensionType(a1, 8u);
  LOBYTE(v3) = 0;
  if ( HasExtensionType )
    v3 = *(_WORD *)(*(_QWORD *)(v2 + 200) + 60LL);
  return (v3 & 1) == 0;
}
