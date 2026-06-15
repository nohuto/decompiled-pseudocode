/*
 * XREFs of ?ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z @ 0x140017450
 * Callers:
 *     <none>
 * Callees:
 *     ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x14001758C (-ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B180 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x14003BFDC (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 *     ?ConnectToRightSubmix@CFormatConverterPipe@@QEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@_N@Z @ 0x140044238 (-ConnectToRightSubmix@CFormatConverterPipe@@QEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@_N@Z.c)
 */

__int64 __fastcall CSubmixImpl::ConnectPipesToRightSubmix(
        CSubmixImpl *this,
        struct ISubmixInternal *a2,
        struct CPipeInstance *a3)
{
  const struct CPipeInstance *v6; // rsi
  CPipeInstance *v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  struct _RTL_CRITICAL_SECTION *v10; // rbp
  _QWORD *v11; // r14
  _QWORD *v12; // rbx
  CStreamInstance *v14; // rdi
  __int64 v15; // r9
  int v16; // eax
  unsigned int v17; // edi
  _QWORD *v18; // rax
  int v19; // eax
  unsigned int v20; // esi
  int v21; // eax
  unsigned int v22; // edi
  int v23; // eax
  unsigned int v24; // edi
  __int64 v25; // rdx
  int v26; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_QWORD *)this + 34) )
    goto LABEL_2;
  v19 = CFormatConverterPipe::ConnectToRightSubmix(
          (CSubmixImpl *)((char *)this + 272),
          a2,
          a3,
          *((_DWORD *)this + 64) == 2);
  v20 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x330,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v19,
      v26);
    return v20;
  }
  v6 = (const struct CPipeInstance *)*((_QWORD *)this + 34);
  if ( !v6 )
  {
LABEL_2:
    v6 = 0LL;
    if ( a3 )
      v6 = a3;
  }
  v7 = (CPipeInstance *)*((_QWORD *)this + 3);
  if ( v7 )
  {
    if ( v6 )
    {
      v21 = CPipeInstance::ConnectToRightPipe(v7, v6);
      v22 = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x33F,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v21,
          v26);
        return v22;
      }
      v23 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, _QWORD))(*(_QWORD *)a2 + 40LL))(
              a2,
              *((_QWORD *)this + 3));
      v24 = v23;
      if ( v23 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x342,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v23,
          v26);
        return v24;
      }
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, _QWORD))(*(_QWORD *)a2 + 24LL))(
             a2,
             *((_QWORD *)this + 3));
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x347,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v8,
          v26);
        return v9;
      }
    }
    *((_BYTE *)this + 312) = 1;
  }
  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v11 = (_QWORD *)*((_QWORD *)this + 9);
  if ( v11 )
  {
    while ( 1 )
    {
      v14 = (CStreamInstance *)v11[2];
      v11 = (_QWORD *)*v11;
      (*(void (__fastcall **)(CSubmixImpl *))(*(_QWORD *)this + 64LL))(this);
      v16 = CStreamInstance::ConnectToRightSubmix(v14, a2, v6, v15);
      v17 = v16;
      if ( v16 < 0 )
        break;
      if ( !v11 )
        goto LABEL_9;
    }
    v25 = 852LL;
  }
  else
  {
LABEL_9:
    v12 = (_QWORD *)*((_QWORD *)this + 15);
    if ( !v12 )
    {
LABEL_10:
      if ( v10 )
        LeaveCriticalSection(v10);
      return 0LL;
    }
    while ( 1 )
    {
      v18 = (_QWORD *)v12[2];
      v12 = (_QWORD *)*v12;
      v16 = (*(__int64 (__fastcall **)(_QWORD, struct ISubmixInternal *, const struct CPipeInstance *))(*(_QWORD *)*v18 + 144LL))(
              *v18,
              a2,
              v6);
      v17 = v16;
      if ( v16 < 0 )
        break;
      if ( !v12 )
        goto LABEL_10;
    }
    v25 = 860LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v25,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)(unsigned int)v16,
    v26);
  if ( v10 )
    LeaveCriticalSection(v10);
  return v17;
}
