/*
 * XREFs of ?Initialize@CLegacyRemotingSwapChain@@IEAAJPEBG@Z @ 0x1800E4440
 * Callers:
 *     ?Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGPEAVIRenderTargetBitmap@@PEAXPEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1800E4378 (-Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGPEAVIRenderTargetBitmap@@PEAXPEAPEAVILe.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureBitmapDest@CLegacyRemotingSwapChain@@IEAAJXZ @ 0x1800E45E0 (-EnsureBitmapDest@CLegacyRemotingSwapChain@@IEAAJXZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E5FE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyRemotingSwapChain::Initialize(HMODULE *this, const unsigned __int16 *a2)
{
  __int64 v4; // rcx
  FARPROC ProcAddress; // r14
  int v6; // eax
  unsigned int v7; // ebx
  HANDLE CurrentProcess; // rax
  HMODULE v9; // rdi
  void *v10; // rbx
  HANDLE v11; // rax
  void (__fastcall ***v12)(_QWORD, int *); // rcx
  __int64 (__fastcall ***v13)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v14)(_QWORD, GUID *, HMODULE *); // rbx
  signed int LastError; // eax
  int v17; // r9d
  unsigned int v18; // [rsp+28h] [rbp-69h]
  HANDLE TargetHandle[2]; // [rsp+48h] [rbp-49h] BYREF
  __int128 v20; // [rsp+58h] [rbp-39h]
  _OWORD v21[2]; // [rsp+68h] [rbp-29h] BYREF
  int v22; // [rsp+88h] [rbp-9h] BYREF
  _BYTE v23[72]; // [rsp+90h] [rbp-1h] BYREF
  int v24; // [rsp+F8h] [rbp+67h] BYREF
  int v25; // [rsp+FCh] [rbp+6Bh]

  ProcAddress = GetProcAddress(this[13], "DwmIndirectCreate");
  if ( !ProcAddress )
  {
    v7 = -2147024809;
    v18 = 97;
LABEL_19:
    v17 = v7;
    goto LABEL_20;
  }
  *(_OWORD *)TargetHandle = 0LL;
  v20 = 0LL;
  v6 = CLegacyRemotingSwapChain::EnsureBitmapDest((CLegacyRemotingSwapChain *)this);
  v7 = v6;
  if ( v6 < 0 )
  {
    v18 = 59;
    goto LABEL_16;
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
    if ( (v7 & 0x80000000) == 0 )
      v7 = -2003304445;
    v18 = 70;
    goto LABEL_19;
  }
  v12 = (void (__fastcall ***)(_QWORD, int *))((char *)this[11] + *(int *)(*((_QWORD *)this[11] + 1) + 16LL) + 8);
  (**v12)(v12, &v24);
  DWORD2(v20) = v24;
  *(_QWORD *)&v20 = a2;
  HIDWORD(v20) = -v25;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(this + 14);
  v21[0] = *(_OWORD *)TargetHandle;
  v21[1] = v20;
  v6 = ((__int64 (__fastcall *)(_OWORD *, HMODULE *))ProcAddress)(v21, this + 14);
  v7 = v6;
  if ( v6 < 0 )
  {
    v18 = 82;
    goto LABEL_16;
  }
  v13 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))this[14];
  v14 = (__int64 (__fastcall *)(_QWORD, GUID *, HMODULE *))**v13;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(this + 15);
  v6 = v14(v13, &IID_IDWMRemotingIndirectEx, this + 15);
  v7 = v6;
  if ( v6 < 0 )
  {
    v18 = 85;
LABEL_16:
    v17 = v6;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v17, v18, 0LL);
    return v7;
  }
  if ( *((_DWORD *)g_pComposition + 238) == 6 )
  {
    v22 = 7;
    memset_0(v23, 0, 0x40uLL);
    (*(void (__fastcall **)(HMODULE, int *, __int64))(*(_QWORD *)this[15] + 56LL))(this[15], &v22, 1LL);
  }
  return v7;
}
