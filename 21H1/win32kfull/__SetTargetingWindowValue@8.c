/*
 * XREFs of __SetTargetingWindowValue@8 @ 0xB3A30
 * Callers:
 *     _NtUserRegisterTouchHitTestingWindow@8 @ 0xB39E8 (_NtUserRegisterTouchHitTestingWindow@8.c)
 * Callees:
 *     _InternalSetProp@16 @ 0xB4FE8 (_InternalSetProp@16.c)
 *     _InternalRemoveProp@12 @ 0xB50F2 (_InternalRemoveProp@12.c)
 */

int __fastcall _SetTargetingWindowValue(int a1, int a2)
{
  if ( _gSqmIsOptedIn )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 8635, 1);
        return InternalSetProp(a2, 5);
      }
      if ( a2 == 2 )
      {
        WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 8636, 1);
        return InternalSetProp(a2, 5);
      }
    }
    else
    {
      WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 8295, 1);
    }
  }
  if ( a2 )
    return InternalSetProp(a2, 5);
  InternalRemoveProp(1);
  return 1;
}
