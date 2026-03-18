/*
 * XREFs of _xxxDeleteMenu@12 @ 0x1A729B
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 * Callees:
 *     ?xxxRemoveDeleteMenuHelper@@YGHABV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1DF66 (-xxxRemoveDeleteMenuHelper@@YGHABV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 */

int __fastcall xxxDeleteMenu(int a1, unsigned int a2, __int16 a3)
{
  return xxxRemoveDeleteMenuHelper(a1, a2, a3, 1);
}
