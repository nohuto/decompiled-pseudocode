/*
 * XREFs of __SetTouchWindowFlags@8 @ 0x14A05E
 * Callers:
 *     _NtUserModifyWindowTouchCapability@12 @ 0x1670FA (_NtUserModifyWindowTouchCapability@12.c)
 * Callees:
 *     _InternalSetProp@16 @ 0xB4FE8 (_InternalSetProp@16.c)
 *     _InternalRemoveProp@12 @ 0xB50F2 (_InternalRemoveProp@12.c)
 */

int __fastcall _SetTouchWindowFlags(int a1, int a2)
{
  if ( a2 )
    return InternalSetProp(a1, (unsigned __int16)gatomTouchFlags, a2, 5);
  InternalRemoveProp(a1, gatomTouchFlags, 1);
  return 1;
}
