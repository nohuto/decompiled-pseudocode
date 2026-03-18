/*
 * XREFs of ?Present@CRenderTargetManager@@QEAAJXZ @ 0x18005AB04
 * Callers:
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x180060ED0 (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800D9FAC (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180215B3C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CRenderTargetManager::Present(CRenderTargetManager *this, __int64 a2)
{
  volatile signed __int32 **v2; // rdi
  unsigned int v3; // r13d
  volatile signed __int32 *v5; // rsi
  __int64 v6; // rax
  volatile signed __int32 *v7; // rdi
  int v8; // r15d
  volatile signed __int32 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 *v12; // r15
  unsigned __int64 v13; // rdi
  __int64 v14; // r13
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // r14d
  __int64 v19; // rax
  struct CRenderTarget **v20; // rsi
  struct CRenderTarget **v21; // rdi
  struct CRenderTarget **v22; // rdi
  __int64 result; // rax
  int v24; // eax
  int v25; // r14d
  BOOL v26; // eax
  char v27; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  __int16 Response; // [rsp+A0h] [rbp+40h] BYREF
  int v31; // [rsp+A8h] [rbp+48h]
  volatile signed __int32 *v32; // [rsp+B0h] [rbp+50h] BYREF

  v2 = (volatile signed __int32 **)*((_QWORD *)this + 1);
  v3 = 142213121;
  v5 = 0LL;
  v31 = 142213121;
  if ( v2 == *((volatile signed __int32 ***)this + 2) )
    goto LABEL_12;
  v6 = *(_QWORD *)&GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data1
     - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  v7 = *v2;
  v32 = 0LL;
  if ( *(_QWORD *)&GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v6 = *(_QWORD *)GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data4
       - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v6 )
  {
    v8 = (*(__int64 (__fastcall **)(volatile signed __int32 *, GUID *, volatile signed __int32 **))(*(_QWORD *)v7 + 40LL))(
           v7,
           &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9,
           &v32);
    if ( v8 < 0 )
    {
      v9 = 0LL;
      v32 = 0LL;
      goto LABEL_8;
    }
  }
  else
  {
    v32 = v7;
    v8 = 0;
  }
  if ( *((int *)v7 + 2) >= 0 )
    goto LABEL_7;
  while ( 1 )
  {
    while ( 1 )
    {
      v24 = IsKernelDebuggerPresent();
      Response = 63;
      v25 = v24;
      if ( !v24 )
      {
        v26 = IsDebuggerPresent();
        v27 = Response;
        if ( v26 )
          v27 = 103;
        LOBYTE(Response) = v27;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
        word_18028970C,
        word_18028970C,
        "Function: ",
        L"CMILCOMBase::InternalAddRef",
        ", ",
        L"onecoreuap\\windows\\dwm\\common\\shared\\milcom.cpp",
        25);
      if ( v25 )
      {
        DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
      }
      else
      {
        DbgPrintEx(
          0x65u,
          0,
          "(No kernel debugger is present.) Respond with:\n"
          "  g                    -- Go (continue)\n"
          "  eb 0x%p 'p';g  -- terminate Process\n"
          "  eb 0x%p 't';g  -- terminate Thread\n"
          " or regular debugging.\n",
          &Response,
          &Response);
        __debugbreak();
      }
      if ( (char)Response <= 98 )
        break;
      if ( (char)Response == 103 )
        goto LABEL_7;
      if ( (char)Response == 105 )
        goto LABEL_50;
      if ( (char)Response != 112 )
      {
        if ( (char)Response != 116 )
          goto LABEL_49;
        goto LABEL_47;
      }
LABEL_48:
      CurrentProcess = GetCurrentProcess();
      TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_49:
      DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
    }
    if ( (char)Response == 98 || (char)Response == 66 )
      break;
    if ( (char)Response == 71 )
      goto LABEL_7;
    if ( (char)Response != 73 )
    {
      if ( (char)Response != 80 )
      {
        if ( (char)Response != 84 )
          goto LABEL_49;
LABEL_47:
        CurrentThread = GetCurrentThread();
        TerminateThread(CurrentThread, 0xC0000001);
        goto LABEL_49;
      }
      goto LABEL_48;
    }
LABEL_50:
    DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
  }
  __debugbreak();
LABEL_7:
  _InterlockedIncrement(v7 + 2);
  v9 = v32;
LABEL_8:
  if ( v8 >= 0 )
    v5 = v9;
  if ( v9 )
  {
    v10 = (__int64)v9 + *(int *)(*((_QWORD *)v9 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
LABEL_12:
  *((_BYTE *)this + 132) = 1;
  v11 = 0LL;
  *((_BYTE *)this + 128) = 1;
  v12 = (__int64 *)*((_QWORD *)this + 1);
  v13 = (unsigned __int64)(*((_QWORD *)this + 2) - (_QWORD)v12 + 7LL) >> 3;
  if ( (unsigned __int64)v12 > *((_QWORD *)this + 2) )
    v13 = 0LL;
  if ( v13 )
  {
    do
    {
      v14 = *v12;
      LOBYTE(a2) = *((_BYTE *)this + 133);
      v15 = *v12 + *(int *)(*(_QWORD *)(*v12 + 72) + 12LL) + 72LL;
      v16 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 32LL))(v15, a2);
      v18 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xC6u, 0LL);
      }
      else if ( v16 != 142213121 )
      {
        *((_BYTE *)this + 132) = 0;
      }
      a2 = *(int *)(*(_QWORD *)(v14 + 72) + 12LL) + v14 + 72;
      if ( v5 )
        v19 = (__int64)v5 + *(int *)(*((_QWORD *)v5 + 1) + 12LL) + 8;
      else
        v19 = 0LL;
      v3 = v31;
      if ( a2 == v19 )
        v3 = v18;
      ++v12;
      ++v11;
      v31 = v3;
    }
    while ( v11 != v13 );
  }
  *((_BYTE *)this + 128) = 0;
  v20 = (struct CRenderTarget **)*((_QWORD *)this + 8);
  v21 = (struct CRenderTarget **)*((_QWORD *)this + 7);
  if ( v21 != v20 )
  {
    do
      CRenderTargetManager::RemoveRenderTarget(this, *v21++);
    while ( v21 != v20 );
    v20 = (struct CRenderTarget **)*((_QWORD *)this + 8);
  }
  v22 = (struct CRenderTarget **)*((_QWORD *)this + 7);
  if ( v22 != v20 )
  {
    do
    {
      if ( *v22 )
        (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)*v22 + 16LL))(*v22);
      ++v22;
    }
    while ( v22 != v20 );
    v22 = (struct CRenderTarget **)*((_QWORD *)this + 7);
  }
  *((_QWORD *)this + 8) = v22;
  result = v3;
  *((_BYTE *)this + 133) = 0;
  return result;
}
