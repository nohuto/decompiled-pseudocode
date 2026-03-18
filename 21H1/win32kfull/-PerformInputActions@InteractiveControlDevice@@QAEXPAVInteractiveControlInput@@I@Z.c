/*
 * XREFs of ?PerformInputActions@InteractiveControlDevice@@QAEXPAVInteractiveControlInput@@I@Z @ 0x1B2345
 * Callers:
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QAEJPAXK@Z @ 0x1B24C8 (-QueueAndGenerateInput@InteractiveControlDevice@@QAEJPAXK@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _GetUserHandedness@0 @ 0x159192 (_GetUserHandedness@0.c)
 *     ?ActivateDeadzone@InteractiveControlDevice@@QAEJH@Z @ 0x1B1791 (-ActivateDeadzone@InteractiveControlDevice@@QAEJH@Z.c)
 *     ?CreateDeadzone@InteractiveControlDevice@@QAEJXZ @ 0x1B18A2 (-CreateDeadzone@InteractiveControlDevice@@QAEJXZ.c)
 *     ?DestroyDeadzone@InteractiveControlDevice@@QAEJXZ @ 0x1B1B81 (-DestroyDeadzone@InteractiveControlDevice@@QAEJXZ.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QAEXPAVInteractiveControlInput@@I@Z @ 0x1B1BC0 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QAEXPAVInteractiveControlInput@@I@Z.c)
 *     ?SendHapticFeedbackOutput@InteractiveControlDevice@@QAEJABU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1B269C (-SendHapticFeedbackOutput@InteractiveControlDevice@@QAEJABU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 *     ?SetDeadzoneLocation@InteractiveControlDevice@@QAEJUtagPOINT@@@Z @ 0x1B2AFC (-SetDeadzoneLocation@InteractiveControlDevice@@QAEJUtagPOINT@@@Z.c)
 */

void __thiscall InteractiveControlDevice::PerformInputActions(
        InteractiveControlDevice *this,
        struct InteractiveControlInput *a2,
        unsigned int a3)
{
  unsigned int v3; // ebx
  InteractiveControlDevice *v4; // edi
  int v5; // esi
  unsigned int v6; // edx
  unsigned __int64 v7; // kr00_8
  unsigned int v8; // [esp+18h] [ebp-28h]
  _WORD v9[2]; // [esp+1Ch] [ebp-24h] BYREF
  int v10; // [esp+20h] [ebp-20h]
  int v11; // [esp+24h] [ebp-1Ch]
  int v12; // [esp+28h] [ebp-18h]
  _WORD v13[2]; // [esp+2Ch] [ebp-14h] BYREF
  int v14; // [esp+30h] [ebp-10h]
  int v15; // [esp+34h] [ebp-Ch]
  int v16; // [esp+38h] [ebp-8h]

  v3 = a3;
  v4 = this;
  if ( (a3 & 0x240) != 0 )
  {
    v5 = MEMORY[0xFFDF0004];
    v8 = MEMORY[0xFFDF0324];
    v6 = MEMORY[0xFFDF0320];
    if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
    {
      do
      {
        _mm_pause();
        v6 = MEMORY[0xFFDF0320];
        v8 = MEMORY[0xFFDF0324];
      }
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
      v4 = this;
      v3 = a3;
      v5 = MEMORY[0xFFDF0004];
    }
    v7 = (((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)v8) << 8)
       + (((unsigned int)v5 * (unsigned __int64)v6) >> 24);
    CInputGlobals::UpdateInputGlobals(_gpInputGlobals, v7, HIDWORD(v7), 4, 0, 0, 2);
  }
  InteractiveControlDevice::DetectPressAndHoldGesture(v4, a2, v3);
  if ( (v3 & 0x40) != 0 )
  {
    v15 = 1;
    v14 = 0;
    v16 = 0;
    v13[1] = 0;
    v13[0] = *((_WORD *)v4 + 154);
    InteractiveControlDevice::SendHapticFeedbackOutput(v4, (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)v13);
  }
  if ( (v3 & 0x80u) != 0
    && !*((_DWORD *)v4 + 8)
    && *((_DWORD *)InteractiveControlManager::Instance() + 12)
    && !*((_DWORD *)v4 + 9) )
  {
    v10 = 0;
    v9[1] = 0;
    v9[0] = *((_WORD *)v4 + 155);
    v12 = 0;
    v11 = 1;
    InteractiveControlDevice::SendHapticFeedbackOutput(v4, (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)v9);
  }
  if ( *((_DWORD *)v4 + 69) != -1 )
  {
    if ( GetUserHandedness() != *((_DWORD *)v4 + 68) )
    {
      InteractiveControlDevice::DestroyDeadzone(v4);
      InteractiveControlDevice::CreateDeadzone(v4);
    }
    if ( (v3 & 0x1400) != 0 )
      InteractiveControlDevice::SetDeadzoneLocation(v4, *(struct tagPOINT *)((char *)a2 + 44));
    if ( (v3 & 0xC00) != 0 )
      InteractiveControlDevice::ActivateDeadzone(v4, (*((_DWORD *)a2 + 13) >> 1) & 1);
  }
}
