/*
 * XREFs of ?UnregisterResources@CStreamInstance@@QEAAXPEAUIAudioStreamingResourceRegistration@@@Z @ 0x14004F300
 * Callers:
 *     ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x14001759C (-ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     wil::details::lambda_call__lambda_502d8130799b1bb814d4b13fc7bd91be___::_lambda_call__lambda_502d8130799b1bb814d4b13fc7bd91be___ @ 0x14004E760 (wil--details--lambda_call__lambda_502d8130799b1bb814d4b13fc7bd91be___--_lambda_call__lambda_502d.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CStreamInstance::UnregisterResources(
        CStreamInstance *this,
        struct IAudioStreamingResourceRegistration *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( *((_QWORD *)this + 11) )
  {
    (*(void (__fastcall **)(struct IAudioStreamingResourceRegistration *))(*(_QWORD *)a2 + 32LL))(a2);
    *((_QWORD *)this + 11) = 0LL;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}
