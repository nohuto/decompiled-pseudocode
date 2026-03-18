/*
 * XREFs of ?InitializeMmcssTask@CKst@@AEAAJXZ @ 0x18002A558
 * Callers:
 *     ?Initialize@CKst@@EEAAJXZ @ 0x1800F8AE0 (-Initialize@CKst@@EEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180027CD0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0CMmcssTask@@QEAA@XZ @ 0x18002BBE0 (--0CMmcssTask@@QEAA@XZ.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x18003D624 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180193D74 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GCMmcssTask@@QEAAPEAXI@Z @ 0x180276EF0 (--_GCMmcssTask@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CKst::InitializeMmcssTask(CKst *this)
{
  CMmcssTask *v2; // rax
  CMmcssTask *v3; // rdi
  HRESULT v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  unsigned int v8; // edx
  int v9[33]; // [rsp+20h] [rbp-A8h] BYREF
  int v10; // [rsp+A4h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v2 = (CMmcssTask *)DefaultHeap::Alloc(0x58uLL);
  if ( v2 )
    v3 = CMmcssTask::CMmcssTask(v2);
  else
    v3 = 0LL;
  memset_0(v9, 0, 0x90uLL);
  v4 = StringCchCopyW((unsigned __int16 *)v9, 0x40uLL, (size_t *)L"Capture");
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5E,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kst.cpp",
      (const char *)(unsigned int)v4,
      v9[0]);
  v10 = 1;
  v5 = CMmcssTask::Set(v3, (const struct DWM_MMTASK *)v9, 0);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x63,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kst.cpp",
      (const char *)(unsigned int)v5);
    if ( v3 )
      CMmcssTask::`scalar deleting destructor'(v3, v8);
  }
  else
  {
    *((_QWORD *)this + 6) = v3;
    return 0;
  }
  return v6;
}
