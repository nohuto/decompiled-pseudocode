/*
 * XREFs of _UserAssociateHwnd@8 @ 0x154249
 * Callers:
 *     _EngCreateWnd@20 @ 0x1E6AA4 (_EngCreateWnd@20.c)
 *     _EngDeleteWnd@4 @ 0x1E6EA9 (_EngDeleteWnd@4.c)
 * Callees:
 *     _InternalSetProp@16 @ 0xB4FE8 (_InternalSetProp@16.c)
 *     _InternalRemoveProp@12 @ 0xB50F2 (_InternalRemoveProp@12.c)
 */

int __fastcall UserAssociateHwnd(int a1, int a2)
{
  int v3; // esi
  int v4; // eax

  v3 = 0;
  v4 = ValidateHwnd(a1);
  if ( v4 )
  {
    if ( a2 )
    {
      if ( InternalSetProp(v4, (unsigned __int16)atomWndObj, a2, 5) )
      {
        ++gcountPWO;
        return 1;
      }
    }
    else if ( InternalRemoveProp(v4, atomWndObj, 1) )
    {
      --gcountPWO;
      return 1;
    }
  }
  return v3;
}
