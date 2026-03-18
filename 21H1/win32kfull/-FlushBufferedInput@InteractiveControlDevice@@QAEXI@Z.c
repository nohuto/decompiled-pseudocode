/*
 * XREFs of ?FlushBufferedInput@InteractiveControlDevice@@QAEXI@Z @ 0x1B1E80
 * Callers:
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QAEXPAVInteractiveControlInput@@I@Z @ 0x1B1BC0 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QAEXPAVInteractiveControlInput@@I@Z.c)
 *     ?OnTimerNotification@InteractiveControlDevice@@QAEJXZ @ 0x1B22CF (-OnTimerNotification@InteractiveControlDevice@@QAEJXZ.c)
 * Callees:
 *     ?DetermineMessageCreationFlags@InteractiveControlDevice@@QAEIPAVInteractiveControlInput@@0@Z @ 0x1B1CCA (-DetermineMessageCreationFlags@InteractiveControlDevice@@QAEIPAVInteractiveControlInput@@0@Z.c)
 *     ?UpdateInputTarget@InteractiveControlDevice@@QAEPAUtagWND@@I@Z @ 0x1B2D2A (-UpdateInputTarget@InteractiveControlDevice@@QAEPAUtagWND@@I@Z.c)
 *     ?GenerateMessages@InteractiveControlInput@@QAEJPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x1B2F74 (-GenerateMessages@InteractiveControlInput@@QAEJPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I.c)
 */

void __thiscall InteractiveControlDevice::FlushBufferedInput(InteractiveControlDevice *this, unsigned int a2)
{
  struct InteractiveControlInput **v3; // edi
  struct InteractiveControlInput *v4; // ecx
  unsigned int v5; // ebx
  struct InteractiveControlInput *v6; // eax
  unsigned int v7; // eax
  struct tagWND *updated; // eax
  unsigned int v9; // [esp+10h] [ebp-4h]
  unsigned int v10; // [esp+1Ch] [ebp+8h]

  v3 = (struct InteractiveControlInput **)*((_DWORD *)this + 73);
  if ( v3 && *((_DWORD *)this + 72) )
  {
    v4 = *v3;
    if ( v3 != (struct InteractiveControlInput **)((char *)this + 8) )
    {
      v5 = ~a2;
      do
      {
        v6 = (struct InteractiveControlInput *)v3;
        v3 = (struct InteractiveControlInput **)v3[1];
        v10 = (unsigned int)v6;
        v7 = v5 & InteractiveControlDevice::DetermineMessageCreationFlags(this, v4, v6);
        v9 = v7;
        if ( v7 )
        {
          updated = InteractiveControlDevice::UpdateInputTarget(this, v7);
          InteractiveControlInput::GenerateMessages(v10, updated, *((_DWORD *)this + 9), v9);
        }
        v4 = (struct InteractiveControlInput *)v10;
      }
      while ( v3 != (struct InteractiveControlInput **)((char *)this + 8) );
    }
    *((_DWORD *)this + 72) = 0;
    *((_DWORD *)this + 73) = 0;
  }
}
