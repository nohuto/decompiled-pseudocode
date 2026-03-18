/*
 * XREFs of ?Initialize@CLegacyRemotingSwapChain@@IEAAJPEBG@Z @ 0x1800FDC94
 * Callers:
 *     ?Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGAEBU_UNSIGNED_RATIO@@PEAVIRenderTargetBitmap@@PEAXPEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1800FDBBC (-Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGAEBU_UNSIGNED_RATIO@@PEAVIRenderTargetB.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureBitmapDest@CLegacyRemotingSwapChain@@IEAAJXZ @ 0x1800FDE40 (-EnsureBitmapDest@CLegacyRemotingSwapChain@@IEAAJXZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FFDD8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyRemotingSwapChain::Initialize(HMODULE *this, const unsigned __int16 *a2)
{
  __int64 v4; // rcx
  FARPROC ProcAddress; // rsi
  int v6; // eax
  signed int v7; // ebx
  HANDLE CurrentProcess; // rax
  HMODULE v9; // rdi
  void *v10; // rbx
  HANDLE v11; // rax
  void (__fastcall ***v12)(_QWORD, int *); // rcx
  char *v13; // rdi
  __int64 (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // rsi
  __int64 (__fastcall *v15)(_QWORD, GUID *, HMODULE *); // rdi
  signed int LastError; // eax
  int v18; // r9d
  unsigned int v19; // [rsp+20h] [rbp-60h]
  HANDLE TargetHandle[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v21; // [rsp+50h] [rbp-30h]
  _OWORD v22[2]; // [rsp+60h] [rbp-20h] BYREF
  int v23; // [rsp+A0h] [rbp+20h] BYREF
  int v24; // [rsp+A4h] [rbp+24h]

  ProcAddress = GetProcAddress(this[12], "DwmIndirectCreate");
  if ( !ProcAddress )
  {
    v7 = -2147024809;
    v19 = 91;
LABEL_17:
    v18 = v7;
    goto LABEL_18;
  }
  *(_OWORD *)TargetHandle = 0LL;
  v21 = 0LL;
  v6 = CLegacyRemotingSwapChain::EnsureBitmapDest((CLegacyRemotingSwapChain *)this);
  v7 = v6;
  if ( v6 < 0 )
  {
    v19 = 61;
    goto LABEL_14;
  }
  SetLastError(0);
  CurrentProcess = GetCurrentProcess();
  v9 = this[25];
  v10 = CurrentProcess;
  v11 = GetCurrentProcess();
  if ( !DuplicateHandle(v11, v9, v10, TargetHandle, 0, 0, 2u) )
  {
    LastError = GetLastError();
    v7 = LastError;
    if ( LastError > 0 )
      v7 = (unsigned __int16)LastError | 0x80070000;
    if ( v7 >= 0 )
      v7 = -2003304445;
    v19 = 72;
    goto LABEL_17;
  }
  v12 = (void (__fastcall ***)(_QWORD, int *))((char *)this[10] + *(int *)(*((_QWORD *)this[10] + 1) + 16LL) + 8);
  (**v12)(v12, &v23);
  v13 = (char *)(this + 13);
  DWORD2(v21) = v23;
  *(_QWORD *)&v21 = a2;
  HIDWORD(v21) = -v24;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(this + 13);
  v22[0] = *(_OWORD *)TargetHandle;
  v22[1] = v21;
  v6 = ((__int64 (__fastcall *)(_OWORD *, HMODULE *))ProcAddress)(v22, this + 13);
  v7 = v6;
  if ( v6 < 0 )
  {
    v19 = 84;
    goto LABEL_14;
  }
  v14 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))v13;
  v15 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, HMODULE *))v13;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(this + 14);
  v6 = v15(v14, &IID_IDWMRemotingIndirectEx, this + 14);
  v7 = v6;
  if ( v6 < 0 )
  {
    v19 = 87;
LABEL_14:
    v18 = v6;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0LL, v18, v19);
  }
  return (unsigned int)v7;
}
