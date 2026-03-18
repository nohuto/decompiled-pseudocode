/*
 * XREFs of ?ResumeSchedulerForVidPnSource@ADAPTER_RENDER@@QEAAXI@Z @ 0x1C01E70F4
 * Callers:
 *     ?Resume@CVidSchSuspendResume@@QEAAXXZ @ 0x1C001E980 (-Resume@CVidSchSuspendResume@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C0044CF4 (McTemplateK0pt_EtwWriteTransfer.c)
 */

void __fastcall ADAPTER_RENDER::ResumeSchedulerForVidPnSource(ADAPTER_RENDER *this, unsigned int a2)
{
  int v4; // ecx
  __int64 v5; // r8
  __int64 v6; // [rsp+20h] [rbp-38h]

  v4 = *((_DWORD *)this + 161);
  if ( (a2 & v4) != a2 )
  {
    __debugbreak();
    WdLogSingleEntry1(1LL, 2799LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(m_SourceMaskSchedulerSuspended & SourceMaskResumeScheduler) == SourceMaskResumeScheduler",
      2799LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v4 = *((_DWORD *)this + 161);
  }
  *((_DWORD *)this + 161) = v4 & ~a2;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 78) + 8LL) + 1000LL))(
    *((_QWORD *)this + 79),
    a2);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v6) = a2;
    McTemplateK0pt_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &ResumeSchedulerForVidPnSource,
      v5,
      *((_QWORD *)this + 2),
      v6);
  }
}
