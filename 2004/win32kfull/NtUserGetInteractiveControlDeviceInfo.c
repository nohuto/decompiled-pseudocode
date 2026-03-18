/*
 * XREFs of NtUserGetInteractiveControlDeviceInfo @ 0x1C01FAAC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00C7554 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z @ 0x1C0252DFC (-GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z.c)
 */

__int64 __fastcall NtUserGetInteractiveControlDeviceInfo(unsigned int a1, _OWORD *Address)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // ebx
  __int64 v8; // rdx
  ULONG64 v9; // rcx
  __int64 v10; // r8
  __int64 CurrentProcessWow64Process; // rax
  InteractiveControlManager *v12; // rax
  __int128 v14; // [rsp+38h] [rbp-40h] BYREF
  __int128 v15; // [rsp+48h] [rbp-30h]
  __int64 v16; // [rsp+58h] [rbp-20h]

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  v7 = 0;
  if ( Address )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5);
    ProbeForWrite(Address, 0x28uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    v12 = InteractiveControlManager::Instance();
    if ( (int)InteractiveControlManager::GetDeviceInfo(v12, a1, (struct tagINTERACTIVECTRL_DEVICE_INFO *)&v14) >= 0 )
    {
      v9 = MmUserProbeAddress;
      if ( (unsigned __int64)Address >= MmUserProbeAddress )
        Address = (_OWORD *)MmUserProbeAddress;
      *Address = v14;
      Address[1] = v15;
      *((_QWORD *)Address + 4) = v16;
      v7 = 1;
    }
  }
  else
  {
    UserSetLastError(87LL, v4, v6);
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10);
  return v7;
}
