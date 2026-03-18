/*
 * XREFs of _NtGdiModifyWorldTransform@12 @ 0x21DA7A
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bModifyWorldTransform@XDCOBJ@@QAEHPBU_XFORML@@K@Z @ 0x21C828 (-bModifyWorldTransform@XDCOBJ@@QAEHPBU_XFORML@@K@Z.c)
 */

int __stdcall NtGdiModifyWorldTransform(HDC a1, struct _XFORML *a2, unsigned int a3)
{
  int v3; // ebx
  _DWORD v5[3]; // [esp+8h] [ebp-28h] BYREF
  struct _XFORML v6; // [esp+14h] [ebp-1Ch] BYREF

  v3 = 0;
  memset(v5, 0, sizeof(v5));
  XDCOBJ::vLock((XDCOBJ *)v5, a1);
  if ( v5[0] )
  {
    memset(&v6, 0, sizeof(v6));
    if ( a2 )
      v3 = ProbeAndConvertXFORM(a2, &v6);
    else
      v3 = a3 == 1;
    if ( v3 )
      v3 = XDCOBJ::bModifyWorldTransform((XDCOBJ *)v5, &v6, a3);
    if ( v5[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  }
  return v3;
}
