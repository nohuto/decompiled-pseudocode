/*
 * XREFs of ?OnTitleBarHitTestVisualUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x180036980
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CApplicationManager::OnTitleBarHitTestVisualUpdated(CApplicationManager *this, HWND a2)
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
  __int64 v17; // rcx
  __int64 v19; // rdx
  _QWORD v20[4]; // [rsp+20h] [rbp-40h] BYREF
  HWND v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+48h] [rbp-18h]
  char v23; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  __int64 v25; // [rsp+A0h] [rbp+40h] BYREF
  _QWORD *v26; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+58h] BYREF

  v4 = -2147467261;
  v20[0] = 0LL;
  if ( *((_QWORD *)this + 33) )
  {
    v25 = 0LL;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v5 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    v25 = 0LL;
    v20[1] = 0LL;
    v6 = 0LL;
    v7 = 0LL;
    if ( *((_QWORD *)this + 37) )
    {
      v20[2] = 0LL;
      while ( 1 )
      {
        v8 = *(_QWORD *)(*((_QWORD *)this + 36) + 8 * v7);
        v20[3] = v8;
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
        v9 = -1;
        v26 = 0LL;
        if ( (**(int (__fastcall ***)(__int64, GUID *, _QWORD **))v8)(
               v8,
               &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
               &v26) >= 0 )
        {
          v10 = *v26;
          v21 = a2;
          v22 = 0LL;
          v23 = 0;
          v9 = ((*(unsigned __int8 (__fastcall **)(_QWORD *, HWND *, _QWORD))(v10 + 296))(v26, &v21, 0LL) != 0) - 1;
          v11 = v22;
          if ( v22 )
          {
            v22 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          }
        }
        v12 = v26;
        if ( v26 )
        {
          v26 = 0LL;
          (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        if ( !v9 )
          break;
        if ( (unsigned __int64)++v7 >= *((_QWORD *)this + 37) )
          goto LABEL_30;
      }
      v6 = v7;
      v4 = 0;
    }
    else
    {
LABEL_30:
      v4 = -2147319765;
    }
    if ( v4 >= 0 )
    {
      v13 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 36) + 8 * v6);
      v4 = (**v13)(v13, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v25);
      if ( v4 >= 0 )
        v4 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v25 + 496LL))(v25, v20);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v14 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    if ( v4 >= 0 )
    {
      v27 = 0LL;
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v20[0] + 144LL))(v20[0], &v27);
      v4 = v15;
      if ( v15 < 0 )
      {
        v19 = 8364LL;
      }
      else
      {
        v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 80LL))(v27);
        v4 = v15;
        if ( v15 >= 0 )
        {
          v4 = 0;
          goto LABEL_24;
        }
        v19 = 8365LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v15,
        v20[0]);
LABEL_24:
      v16 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
  }
  v17 = v20[0];
  if ( v20[0] )
  {
    v20[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return (unsigned int)v4;
}
