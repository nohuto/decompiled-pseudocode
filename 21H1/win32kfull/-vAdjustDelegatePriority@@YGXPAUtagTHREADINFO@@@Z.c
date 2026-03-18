/*
 * XREFs of ?vAdjustDelegatePriority@@YGXPAUtagTHREADINFO@@@Z @ 0xA1CA0
 * Callers:
 *     _AdjustPwndPtiPqForDelegation@24 @ 0x47910 (_AdjustPwndPtiPqForDelegation@24.c)
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall vAdjustDelegatePriority(int this)
{
  int v2; // eax
  HANDLE ThreadProcessId; // esi
  _DWORD SystemInformation[3]; // [esp+4h] [ebp-Ch] BYREF

  v2 = *(_DWORD *)(this + 688);
  if ( (v2 & 0x2000) != 0
    && (v2 & 0x4000) == 0
    && (PsGetCurrentProcess() == _gpepCSRSS || (unsigned __int8)IsInputThread()) )
  {
    ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)this);
    SystemInformation[1] = PsGetThreadId(*(PETHREAD *)this);
    SystemInformation[0] = ThreadProcessId;
    SystemInformation[2] = 13;
    if ( ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, SystemInformation, 0xCu) >= 0 )
      *(_DWORD *)(this + 688) |= 0x4000u;
  }
}
