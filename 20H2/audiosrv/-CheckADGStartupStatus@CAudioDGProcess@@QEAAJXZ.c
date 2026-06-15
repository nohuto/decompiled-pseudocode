/*
 * XREFs of ?CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ @ 0x18004CA74
 * Callers:
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x18004C970 (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     ?WpRpcBindingFree@details@wil@@YAXPEAX@Z @ 0x180047744 (-WpRpcBindingFree@details@wil@@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AudioDGGetStartupStatus_RPC_WithWait@@YAJPEAX@Z @ 0x18004CAD4 (-AudioDGGetStartupStatus_RPC_WithWait@@YAJPEAX@Z.c)
 *     ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x18004CB68 (-GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::CheckADGStartupStatus(HANDLE *this)
{
  int ADGProcessBindingHandle; // eax
  signed int v3; // ebx
  void *v4; // rdx
  DWORD v6; // eax
  signed int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWORD ExitCode; // [rsp+38h] [rbp+10h] BYREF
  RPC_BINDING_HANDLE Binding; // [rsp+40h] [rbp+18h] BYREF

  Binding = 0LL;
  ADGProcessBindingHandle = CAudioDGProcess::GetADGProcessBindingHandle(&Binding);
  v3 = ADGProcessBindingHandle;
  if ( ADGProcessBindingHandle < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDF,
      (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
      (const char *)(unsigned int)ADGProcessBindingHandle);
  }
  else
  {
    while ( 1 )
    {
      v3 = AudioDGGetStartupStatus_RPC_WithWait(Binding);
      if ( v3 >= 0 )
        break;
      v6 = WaitForSingleObjectEx(this[11], 0, 0);
      if ( v6 != 258 )
      {
        if ( !v6 )
        {
          v7 = GetExitCodeProcess(this[11], &ExitCode) ? ExitCode : GetLastError();
          if ( v7 != 259 )
          {
            if ( v7 > 0 )
              v3 = (unsigned __int16)v7 | 0x80070000;
            else
              v3 = v7;
          }
        }
        break;
      }
    }
  }
  if ( Binding )
    wil::details::WpRpcBindingFree((wil::details *)Binding, v4);
  return (unsigned int)v3;
}
