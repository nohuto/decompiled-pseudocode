/*
 * XREFs of ?Detach@UserAtomicCheck@@QAEXXZ @ 0xAAF2E
 * Callers:
 *     ?xxxSendActivateAppMessage@@YGXABUtagAAS@@@Z @ 0x3C394 (-xxxSendActivateAppMessage@@YGXABUtagAAS@@@Z.c)
 *     _xxxCreateWindowStation@40 @ 0x8199E (_xxxCreateWindowStation@40.c)
 *     ?HandleRawInput@@YG?AW4RAW_INPUT_PROCESSING_RESULT@@PAXPAU_KEYBOARD_INPUT_DATA@@PBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0xB1E22 (-HandleRawInput@@YG-AW4RAW_INPUT_PROCESSING_RESULT@@PAXPAU_KEYBOARD_INPUT_DATA@@PBURAW_INPUT_SUP.c)
 *     _zzzReattachThreads@12 @ 0xC795C (_zzzReattachThreads@12.c)
 *     ?TopLevelTouchTarget@@YGPAUtagWND@@PAU1@PAUtagTOUCHTARGETINGCONTACT@@PAUtagPOINT@@2H@Z @ 0x179F56 (-TopLevelTouchTarget@@YGPAUtagWND@@PAU1@PAUtagTOUCHTARGETINGCONTACT@@PAUtagPOINT@@2H@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __thiscall UserAtomicCheck::Detach(UserAtomicCheck *this)
{
  int v2; // ecx
  int v3; // esi
  _DWORD *i; // eax

  if ( _gpresUser )
  {
    if ( UserIsUserCritSecInExclusive() )
    {
      *(_BYTE *)this = 1;
      --_gdwInAtomicOperation;
      if ( _gpAtomickCheckStacks )
      {
        v2 = 0;
        if ( _gdwAtomicCheckLogSize )
        {
          v3 = *((_DWORD *)this + 1);
          for ( i = (_DWORD *)_gpAtomickCheckStacks; *i != v3; i += 9 )
          {
            if ( (unsigned int)++v2 >= _gdwAtomicCheckLogSize )
              return;
          }
          *(_DWORD *)(36 * v2 + _gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
}
