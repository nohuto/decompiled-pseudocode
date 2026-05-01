/*
 * XREFs of ?SetWindowingEnvironmentConfigInternal@CImmersiveApp@@UEAAJPEAUIWindowingEnvironmentConfig@@@Z @ 0x1800636D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDisplayRegionId@CImmersiveWindowCollection@CImmersiveApp@@QEAAJI@Z @ 0x1800637D4 (-SetDisplayRegionId@CImmersiveWindowCollection@CImmersiveApp@@QEAAJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::SetWindowingEnvironmentConfigInternal(
        CImmersiveApp *this,
        struct IWindowingEnvironmentConfig *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v13; // [rsp+38h] [rbp+10h] BYREF
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  if ( !a2 )
  {
    v5 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA34,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)0x80070057LL,
      v11);
    return v5;
  }
  if ( *((struct IWindowingEnvironmentConfig **)this + 85) != a2 )
  {
    (*(void (__fastcall **)(struct IWindowingEnvironmentConfig *))(*(_QWORD *)a2 + 8LL))(a2);
    v9 = *((_QWORD *)this + 85);
    *((_QWORD *)this + 85) = a2;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v14 = 0LL;
  v4 = (*(__int64 (__fastcall **)(CImmersiveApp *, __int64 *))(*(_QWORD *)this + 464LL))(this, &v14);
  v5 = v4;
  if ( v4 < 0 )
  {
    v10 = 2620LL;
  }
  else
  {
    if ( !v14 )
      goto LABEL_7;
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *))(**((_QWORD **)this + 85) + 80LL))(
           *((_QWORD *)this + 85),
           v14,
           &v13);
    v5 = v4;
    if ( v4 < 0 )
    {
      v10 = 2625LL;
      goto LABEL_18;
    }
    v6 = v13;
    if ( *((_DWORD *)this + 172) == v13
      || (*((_DWORD *)this + 172) = v13,
          v4 = CImmersiveApp::CImmersiveWindowCollection::SetDisplayRegionId((CImmersiveApp *)((char *)this + 184), v6),
          v5 = v4,
          v4 >= 0) )
    {
LABEL_7:
      v5 = 0;
      goto LABEL_8;
    }
    v10 = 2629LL;
  }
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
    (const char *)(unsigned int)v4,
    v11);
LABEL_8:
  v7 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v5;
}
