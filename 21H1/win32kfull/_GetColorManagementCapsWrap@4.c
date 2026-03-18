/*
 * XREFs of _GetColorManagementCapsWrap@4 @ 0xAE84A
 * Callers:
 *     <none>
 * Callees:
 *     ?GetColorManagementCaps@@YGKAAVPDEVOBJ@@@Z @ 0xAE862 (-GetColorManagementCaps@@YGKAAVPDEVOBJ@@@Z.c)
 */

unsigned int __stdcall GetColorManagementCapsWrap(int a1)
{
  struct PDEVOBJ *savedregs; // [esp+0h] [ebp+0h]

  return GetColorManagementCaps(savedregs);
}
