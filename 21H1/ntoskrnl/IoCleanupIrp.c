/*
 * XREFs of IoCleanupIrp @ 0x14038EE70
 * Callers:
 *     <none>
 * Callees:
 *     IopFreeIrpExtension @ 0x1402ECCDC (IopFreeIrpExtension.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

void __fastcall IoCleanupIrp(ULONG_PTR BugCheckParameter1)
{
  bool v1; // zf

  if ( *(_WORD *)BugCheckParameter1 != 6 )
    KeBugCheckEx(0x44u, BugCheckParameter1, 0x257CuLL, 0LL, 0LL);
  v1 = (*(_BYTE *)(BugCheckParameter1 + 71) & 0x40) == 0;
  *(_WORD *)BugCheckParameter1 = 0;
  if ( !v1 )
    IopFreeIrpExtension(BugCheckParameter1, -1, 1);
}
