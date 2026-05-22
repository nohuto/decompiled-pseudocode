/*
 * XREFs of ?OnInputReport@GazeProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180188E50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AE40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000EDF8 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001054C (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@InputContext@@SAJPEAPEAV1@@Z @ 0x180023B74 (-Create@InputContext@@SAJPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?ConvertDisplayRelativeMicrometersToScreen@GazeProcessor@@IEAAJUtagPOINT@@PEAU2@1@Z @ 0x1801889B0 (-ConvertDisplayRelativeMicrometersToScreen@GazeProcessor@@IEAAJUtagPOINT@@PEAU2@1@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GazeProcessor::OnInputReport(GazeProcessor *this, struct InputInfo *a2)
{
  int v4; // edi
  int v5; // ebx
  __int64 v6; // rdx
  struct tagPOINT *v7; // r9
  unsigned int v8; // r14d
  int v9; // eax
  struct tagPOINT v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rcx
  struct tagPOINT v17; // [rsp+30h] [rbp-29h] BYREF
  int v18[2]; // [rsp+38h] [rbp-21h] BYREF
  struct tagPOINT v19; // [rsp+40h] [rbp-19h] BYREF
  __int128 v20; // [rsp+48h] [rbp-11h] BYREF
  __int128 v21; // [rsp+58h] [rbp-1h]
  _BYTE v22[24]; // [rsp+68h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v4 = 0;
  *(_QWORD *)v18 = 0LL;
  v17 = 0LL;
  if ( *(_DWORD *)a2 != 0x4000 )
  {
    v4 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
      (const char *)0x80070057LL);
LABEL_14:
    v8 = v4;
    goto LABEL_33;
  }
  if ( *((_BYTE *)this + 72) != 1 )
    goto LABEL_14;
  if ( *((_BYTE *)a2 + 60) )
  {
    v5 = GazeProcessor::ConvertDisplayRelativeMicrometersToScreen(
           (GazeProcessor *)((char *)this - 24),
           *(struct tagPOINT *)((char *)a2 + 52),
           (struct tagPOINT *)((char *)a2 + 44),
           &v17);
    if ( v5 < 0 )
    {
      v6 = 242LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
        (const char *)(unsigned int)v5);
      v4 = v5;
      goto LABEL_14;
    }
    *(_QWORD *)((char *)a2 + 52) = *(_QWORD *)((char *)a2 + 44);
  }
  if ( *((_BYTE *)a2 + 80) )
  {
    v7 = &v17;
    if ( *((_BYTE *)a2 + 60) )
      v7 = 0LL;
    v5 = GazeProcessor::ConvertDisplayRelativeMicrometersToScreen(
           (GazeProcessor *)((char *)this - 24),
           *(struct tagPOINT *)((char *)a2 + 72),
           (struct tagPOINT *)a2 + 8,
           v7);
    if ( v5 < 0 )
    {
      v6 = 254LL;
      goto LABEL_13;
    }
    *((_QWORD *)a2 + 9) = *((_QWORD *)a2 + 8);
  }
  v20 = 0LL;
  v21 = 0LL;
  memset(v22, 0, sizeof(v22));
  DWORD1(v20) = *((_DWORD *)a2 + 1);
  LODWORD(v20) = 16386;
  HIDWORD(v21) = 4;
  *(_DWORD *)&v22[8] = 1;
  *(struct tagPOINT *)&v22[12] = v17;
  v22[20] = 1;
  v17 = 0LL;
  v9 = InputContext::Create((struct InputContext **)&v17);
  v8 = v9;
  v10 = v17;
  if ( v9 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
    v13 = (_QWORD *)((char *)this + 304);
    (*(void (__fastcall **)(__int64, __int128 *, struct tagPOINT, _QWORD, int *))(*(_QWORD *)v12 + 56LL))(
      v12,
      &v20,
      v10,
      *((_QWORD *)this + 38),
      v18);
    v14 = *(_QWORD *)v18;
    if ( *(_QWORD *)v18 == *((_QWORD *)this + 38) )
    {
      if ( *(_QWORD *)v18 )
      {
        *((_DWORD *)a2 + 10) = 0;
        v9 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v14 + 24LL))(v14, a2);
        v8 = v9;
        if ( v9 < 0 )
        {
          v11 = 305LL;
          goto LABEL_37;
        }
      }
    }
    else
    {
      if ( *v13 )
      {
        *((_DWORD *)a2 + 10) = 2;
        v9 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(*(_QWORD *)*v13 + 24LL))(*v13, a2);
        v8 = v9;
        if ( v9 < 0 )
        {
          v11 = 288LL;
          goto LABEL_37;
        }
        v14 = *(_QWORD *)v18;
      }
      if ( v14 )
      {
        *((_DWORD *)a2 + 10) = 1;
        v9 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v14 + 24LL))(v14, a2);
        v8 = v9;
        if ( v9 < 0 )
        {
          v11 = 295LL;
          goto LABEL_37;
        }
      }
      if ( *((_QWORD *)this + 39) != v10 )
      {
        v19 = v10;
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v19);
        v15 = *((_QWORD *)this + 39);
        *((struct tagPOINT *)this + 39) = v10;
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)this + 38, (__int64 *)v18);
    }
    v8 = 0;
    goto LABEL_31;
  }
  v11 = 273LL;
LABEL_37:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
    (const char *)(unsigned int)v9);
LABEL_31:
  if ( v10 )
    (*(void (__fastcall **)(struct tagPOINT))(**(_QWORD **)&v10 + 16LL))(v10);
LABEL_33:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v18);
  return v8;
}
