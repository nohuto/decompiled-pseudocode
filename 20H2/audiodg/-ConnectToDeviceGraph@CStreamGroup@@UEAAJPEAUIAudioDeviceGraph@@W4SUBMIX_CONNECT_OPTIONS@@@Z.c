/*
 * XREFs of ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x140003540
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z @ 0x1400210DC (--4-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStreamGroup::ConnectToDeviceGraph(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  __int64 (__fastcall **v7)(_QWORD, GUID *, __int64 *); // rax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rdx
  __int64 v12; // r9
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 200);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
  v7 = *a2;
  v15 = 0LL;
  v8 = (*v7)(a2, &GUID_51181bd2_bd3f_43ae_b0d1_1cf3dfda303a, &v15);
  v9 = v8;
  if ( v8 < 0 )
  {
    v11 = 234LL;
LABEL_15:
    v12 = (unsigned int)v8;
    goto LABEL_16;
  }
  if ( !*(_QWORD *)(a1 + 328) )
  {
    if ( *(_BYTE *)(a1 + 337) )
    {
      wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=(a1 + 328, v15);
      goto LABEL_5;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(a1 + 24) + 224LL))(a1 + 24, v15, a3);
    v9 = v8;
    if ( v8 >= 0 )
    {
LABEL_5:
      v9 = 0;
      goto LABEL_6;
    }
    v11 = 242LL;
    goto LABEL_15;
  }
  v9 = -2005139410;
  v11 = 237LL;
  v12 = 2289827886LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
    (const char *)v12,
    v13);
LABEL_6:
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v3 )
    LeaveCriticalSection(v3);
  return v9;
}
