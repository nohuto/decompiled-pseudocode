/*
 * XREFs of ?ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAUInputInfo@@@Z @ 0x18007F384
 * Callers:
 *     ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18007EE90 (-Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011A40 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180075E0C (-GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     _lambda_3cd376e3a20bdc9f6b19457eb0f70b96_::operator() @ 0x18007D738 (_lambda_3cd376e3a20bdc9f6b19457eb0f70b96_--operator().c)
 */

char __fastcall MPCHandProcessor::ShouldRequestPrimary(MPCHandProcessor *this, struct InputInfo *a2)
{
  char v3; // bl
  bool v4; // si
  MPCHolographicInputManager *Instance; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  const char *v8; // r9
  struct IMPCInputPostProcessor *PostProcessor; // rax
  bool v10; // bp
  struct InputInfo *v12; // [rsp+20h] [rbp-188h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+28h] [rbp-180h] BYREF
  struct InputInfo **v14; // [rsp+30h] [rbp-178h]
  _BYTE v15[336]; // [rsp+40h] [rbp-168h] BYREF

  v12 = a2;
  v3 = 1;
  if ( byte_18020A368 )
  {
    v4 = (*(_DWORD *)a2 & 0x662600) != 0 && *((_DWORD *)a2 + 16) == 2 || *((_QWORD *)this + 574);
    PerformanceCount.QuadPart = (LONGLONG)this;
    v14 = &v12;
    memset_0(v15, 0, 0x148uLL);
    Instance = MPCHolographicInputManager::GetInstance();
    PostProcessor = MPCHolographicInputManager::GetPostProcessor(Instance, v6, v7, v8);
    (*(void (__fastcall **)(struct IMPCInputPostProcessor *, _QWORD, _BYTE *))(*(_QWORD *)PostProcessor + 72LL))(
      PostProcessor,
      *((unsigned int *)v12 + 1),
      v15);
    v10 = v15[322] != 0;
    if ( !v4 && !lambda_3cd376e3a20bdc9f6b19457eb0f70b96_::operator()((__int64 *)&PerformanceCount) && !v10 )
      return 0;
    QueryPerformanceCounter(&PerformanceCount);
    if ( PerformanceCount.QuadPart - MPCHandProcessor::m_lastKeyboardKeyPressTimeInTicks <= *((_QWORD *)this + 1430) )
      return 0;
  }
  else
  {
    byte_18020A368 = 1;
  }
  return v3;
}
