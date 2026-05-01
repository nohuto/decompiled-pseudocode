/*
 * XREFs of ?SetWindowingEnvironmentConfigInternal@CImmersiveApp@@UEAAJPEAUIWindowingEnvironmentConfig@@@Z @ 0x1800508A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDisplayRegionId@CImmersiveWindowCollection@CImmersiveApp@@QEAAJI@Z @ 0x180050410 (-SetDisplayRegionId@CImmersiveWindowCollection@CImmersiveApp@@QEAAJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::SetWindowingEnvironmentConfigInternal(
        CImmersiveApp *this,
        struct IWindowingEnvironmentConfig *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // r8
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v14; // [rsp+38h] [rbp+10h] BYREF
  __int64 v15; // [rsp+40h] [rbp+18h] BYREF

  if ( !a2 )
  {
    v5 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA34,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)0x80070057LL,
      v12);
    return v5;
  }
  if ( *((struct IWindowingEnvironmentConfig **)this + 85) != a2 )
  {
    (*(void (__fastcall **)(struct IWindowingEnvironmentConfig *))(*(_QWORD *)a2 + 8LL))(a2);
    v10 = *((_QWORD *)this + 85);
    *((_QWORD *)this + 85) = a2;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v15 = 0LL;
  v4 = (*(__int64 (__fastcall **)(CImmersiveApp *, __int64 *))(*(_QWORD *)this + 464LL))(this, &v15);
  v5 = v4;
  if ( v4 < 0 )
  {
    v11 = 2620LL;
  }
  else
  {
    if ( !v15 )
      goto LABEL_7;
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *))(**((_QWORD **)this + 85) + 80LL))(
           *((_QWORD *)this + 85),
           v15,
           &v14);
    v5 = v4;
    if ( v4 < 0 )
    {
      v11 = 2625LL;
      goto LABEL_18;
    }
    v7 = v14;
    if ( *((_DWORD *)this + 172) == v14
      || (*((_DWORD *)this + 172) = v14,
          v4 = CImmersiveApp::CImmersiveWindowCollection::SetDisplayRegionId(
                 (CImmersiveApp *)((char *)this + 184),
                 v7,
                 v6),
          v5 = v4,
          v4 >= 0) )
    {
LABEL_7:
      v5 = 0;
      goto LABEL_8;
    }
    v11 = 2629LL;
  }
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
    (const char *)(unsigned int)v4,
    v12);
LABEL_8:
  v8 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v5;
}
