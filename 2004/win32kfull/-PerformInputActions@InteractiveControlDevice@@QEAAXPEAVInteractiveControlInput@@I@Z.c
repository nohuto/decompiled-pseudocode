/*
 * XREFs of ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C0258930
 * Callers:
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C0258B00 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00C7554 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     GetUserHandedness @ 0x1C01EEF40 (GetUserHandedness.c)
 *     ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C0257BCC (-CreateDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?DestroyDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C0257F88 (-DestroyDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C0257FE0 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 *     ?SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C0258D28 (-SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 */

void __fastcall InteractiveControlDevice::PerformInputActions(
        InteractiveControlDevice *this,
        struct InteractiveControlInput *a2,
        unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  _WORD v18[2]; // [rsp+30h] [rbp-30h] BYREF
  int v19; // [rsp+34h] [rbp-2Ch]
  __int64 v20; // [rsp+38h] [rbp-28h]
  _WORD v21[2]; // [rsp+40h] [rbp-20h] BYREF
  int v22; // [rsp+44h] [rbp-1Ch]
  __int64 v23; // [rsp+48h] [rbp-18h]

  v3 = 0;
  if ( (a3 & 0x240) != 0 )
    CInputGlobals::UpdateInputGlobals(
      gpInputGlobals,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      4LL);
  InteractiveControlDevice::DetectPressAndHoldGesture(this, a2, a3);
  if ( (a3 & 0x40) != 0 )
  {
    v18[0] = *((_WORD *)this + 196);
    v18[1] = 0;
    v19 = 0;
    v20 = 1LL;
    InteractiveControlDevice::SendHapticFeedbackOutput(this, (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)v18);
  }
  if ( (a3 & 0x80u) != 0
    && !*((_DWORD *)this + 15)
    && *((_DWORD *)InteractiveControlManager::Instance() + 21)
    && !*((_DWORD *)this + 16) )
  {
    v21[0] = *((_WORD *)this + 197);
    v21[1] = 0;
    v22 = 0;
    v23 = 1LL;
    InteractiveControlDevice::SendHapticFeedbackOutput(this, (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)v21);
  }
  if ( *((_QWORD *)this + 43) != -1LL )
  {
    if ( (unsigned int)GetUserHandedness(v8, v7, v9, v10) != *((_DWORD *)this + 84) )
    {
      InteractiveControlDevice::DestroyDeadzone(this);
      InteractiveControlDevice::CreateDeadzone(this, v11, v12, v13);
    }
    if ( (a3 & 0x400) != 0 || (a3 & 0x1000) != 0 )
    {
      v14 = *((_QWORD *)this + 30);
      if ( v14 )
      {
        v15 = *((_QWORD *)this + 43);
        if ( v15 != -1 )
          RIMUpdatePointerDeviceDeadzoneOrigin(v14 + 88, v15, *((_QWORD *)a2 + 8));
      }
      if ( (a3 & 0x400) != 0 )
        goto LABEL_20;
    }
    if ( (a3 & 0x800) != 0 )
    {
LABEL_20:
      v16 = *((_QWORD *)this + 30);
      if ( v16 )
      {
        v17 = *((_QWORD *)this + 43);
        if ( v17 != -1 )
        {
          LOBYTE(v3) = (*((_DWORD *)a2 + 18) & 2) != 0;
          RIMActivatePointerDeviceDeadzone(v16 + 88, v17, v3);
        }
      }
    }
  }
}
