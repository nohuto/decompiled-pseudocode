/*
 * XREFs of ?SetFocus@InteractiveControlDevice@@QAEXPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1B2B32
 * Callers:
 *     ?ClearDeviceFocus@InteractiveControlManager@@QAEJK@Z @ 0x1ADB4B (-ClearDeviceFocus@InteractiveControlManager@@QAEJK@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1AE299 (-OnDeviceAttach@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 *     ?SetDeviceFocus@InteractiveControlManager@@QAEJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PAUtagWND@@@Z @ 0x1AE851 (-SetDeviceFocus@InteractiveControlManager@@QAEJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PAUtagWND@@.c)
 *     ?Deinitialize@InteractiveControlDevice@@QAEXXZ @ 0x1B1A87 (-Deinitialize@InteractiveControlDevice@@QAEXXZ.c)
 * Callees:
 *     ?GetPreviousInputReport@InteractiveControlDevice@@QAEHPAU_LIST_ENTRY@@PAPAVInteractiveControlInput@@@Z @ 0x1B1F2D (-GetPreviousInputReport@InteractiveControlDevice@@QAEHPAU_LIST_ENTRY@@PAPAVInteractiveControlInp.c)
 *     ?QueueInput@InteractiveControlDevice@@QAEXPAU_LIST_ENTRY@@PAVInteractiveControlInput@@@Z @ 0x1B265C (-QueueInput@InteractiveControlDevice@@QAEXPAU_LIST_ENTRY@@PAVInteractiveControlInput@@@Z.c)
 *     ?SetMessagePromotionType@InteractiveControlDevice@@IAEXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1B2CE5 (-SetMessagePromotionType@InteractiveControlDevice@@IAEXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 *     ??0InteractiveControlInput@@QAE@PAVInteractiveControlDevice@@@Z @ 0x1B2DCB (--0InteractiveControlInput@@QAE@PAVInteractiveControlDevice@@@Z.c)
 *     ?GenerateMessages@InteractiveControlInput@@QAEJPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x1B2F74 (-GenerateMessages@InteractiveControlInput@@QAEJPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I.c)
 */

struct _LIST_ENTRY *__thiscall InteractiveControlDevice::SetFocus(
        struct _LIST_ENTRY *this,
        struct _LIST_ENTRY *a2,
        struct _LIST_ENTRY *a3,
        int a4)
{
  InteractiveControlInput *v5; // edi
  struct _LIST_ENTRY *result; // eax
  int v7; // edx
  struct _LIST_ENTRY *Flink; // eax
  struct _LIST_ENTRY *v9; // ecx
  int v10; // eax
  struct InteractiveControlInput *v11; // esi
  InteractiveControlInput *v12; // eax
  InteractiveControlInput *v13; // eax
  struct _LIST_ENTRY *v14; // [esp+10h] [ebp-Ch]
  struct _LIST_ENTRY *Blink; // [esp+14h] [ebp-8h]
  struct InteractiveControlInput *v16; // [esp+18h] [ebp-4h] BYREF

  v5 = 0;
  result = this + 1;
  v14 = 0;
  v16 = 0;
  Blink = this + 1;
  if ( this[36].Flink )
  {
    result = this[36].Blink;
    if ( result )
      Blink = this[36].Blink;
    else
      result = this + 1;
  }
  if ( a2 != this[2].Blink )
  {
    if ( InteractiveControlDevice::GetPreviousInputReport((InteractiveControlDevice *)this, result, &v16) )
    {
      Flink = 0;
      if ( a2 )
        Flink = a2->Flink;
      v9 = (struct _LIST_ENTRY *)*((_DWORD *)v16 + 2);
      if ( v9 != Flink )
      {
        v10 = ValidateHwnd(v9);
        v11 = v16;
        if ( v10 )
          InteractiveControlInput::GenerateMessages(v16, v10, this[4].Blink, 16);
        v12 = (InteractiveControlInput *)Win32AllocPool(68, 1819440195);
        if ( v12 )
        {
          v5 = InteractiveControlInput::InteractiveControlInput(v12, (struct InteractiveControlDevice *)this);
          v14 = (struct _LIST_ENTRY *)v5;
        }
        qmemcpy((char *)v5 + 32, (char *)v11 + 32, 0x1Cu);
        InteractiveControlDevice::QueueInput((InteractiveControlDevice *)this, Blink, v14);
        InteractiveControlInput::GenerateMessages(v14, a2, a3, 8);
      }
    }
    else
    {
      v13 = (InteractiveControlInput *)Win32AllocPool(68, 1819440195);
      if ( v13 )
        v5 = InteractiveControlInput::InteractiveControlInput(v13, (struct InteractiveControlDevice *)this);
      InteractiveControlDevice::QueueInput((InteractiveControlDevice *)this, Blink, (struct _LIST_ENTRY *)v5);
      InteractiveControlInput::GenerateMessages(v5, a2, a3, 8);
    }
    result = (struct _LIST_ENTRY *)HMAssignmentLock(v9, v7);
  }
  if ( a4 )
  {
    result = a3;
    if ( a3 != this[4].Blink )
      return (struct _LIST_ENTRY *)InteractiveControlDevice::SetMessagePromotionType(this, a3);
  }
  return result;
}
