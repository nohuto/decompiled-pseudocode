/*
 * XREFs of ?OnTitleBarColorUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x180057B20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_6e7ff48c8f0bb872ea8b34efa10246cb___ @ 0x180092864 (Windows--Internal--ComTaskPool--QueueTask__lambda_6e7ff48c8f0bb872ea8b34efa10246cb___.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x180136D20 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CApplicationManager::OnTitleBarColorUpdated(CApplicationManager *this, HWND a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rcx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  HWND v18; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h]
  char v20; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v22; // [rsp+90h] [rbp+40h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+50h] BYREF
  _QWORD *v24; // [rsp+A8h] [rbp+58h] BYREF

  v4 = -2147467261;
  v23 = 0LL;
  if ( *((_QWORD *)this + 33) )
  {
    v22 = 0LL;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v5 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    v22 = 0LL;
    v6 = 0LL;
    v7 = 0LL;
    if ( *((_QWORD *)this + 37) )
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(*((_QWORD *)this + 36) + 8 * v7);
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
        v9 = -1;
        v24 = 0LL;
        if ( (**(int (__fastcall ***)(__int64, GUID *, _QWORD **))v8)(
               v8,
               &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
               &v24) >= 0 )
        {
          v10 = *v24;
          v18 = a2;
          v19 = 0LL;
          v20 = 0;
          v9 = ((*(unsigned __int8 (__fastcall **)(_QWORD *, HWND *, _QWORD))(v10 + 296))(v24, &v18, 0LL) != 0) - 1;
          v11 = v19;
          if ( v19 )
          {
            v19 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          }
        }
        v12 = v24;
        if ( v24 )
        {
          v24 = 0LL;
          (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        if ( !v9 )
          break;
        if ( (unsigned __int64)++v7 >= *((_QWORD *)this + 37) )
          goto LABEL_14;
      }
      v6 = v7;
      v4 = 0;
    }
    else
    {
LABEL_14:
      v4 = -2147319765;
    }
    if ( v4 >= 0 )
    {
      v13 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 36) + 8 * v6);
      v4 = (**v13)(v13, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v22);
      if ( v4 >= 0 )
        v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 496LL))(v22, &v23);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v14 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    if ( v4 >= 0 )
    {
      v22 = v23;
      v23 = 0LL;
      v15 = Windows::Internal::ComTaskPool::QueueTask__lambda_6e7ff48c8f0bb872ea8b34efa10246cb___(v14, &v22);
      v4 = v15;
      if ( v15 >= 0 )
        v4 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2094,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v15,
          0);
      Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v22);
    }
  }
  v16 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return (unsigned int)v4;
}
