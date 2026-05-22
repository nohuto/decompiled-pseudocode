/*
 * XREFs of ?DeliverInput@MagnifierGestureTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18017E6F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_J@Z @ 0x180097A58 (--0-$extent_type@$0-0@details@gsl@@QEAA@_J@Z.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1800C94F0 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     ?PanGestureDetected@MagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@6@@Z @ 0x180100CE0 (-PanGestureDetected@MagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Win.c)
 *     ?ZoomGestureDetected@MagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@6@@Z @ 0x180101420 (-ZoomGestureDetected@MagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Wi.c)
 *     ?AveragePoint@@YA?AUPoint@Foundation@Windows@@PEBUInputInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@Z @ 0x18017E5D0 (-AveragePoint@@YA-AUPoint@Foundation@Windows@@PEBUInputInfo@@V-$ComPtr@VInputSite@@@WRL@Microsof.c)
 */

__int64 __fastcall MagnifierGestureTarget::DeliverInput(MagnifierGestureTarget *this, struct InputInfo *a2)
{
  int v4; // edi
  char *v5; // rsi
  int v6; // r14d
  __int64 v7; // rcx
  char *v8; // rcx
  int v9; // eax
  _BOOL8 v10; // r9
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned int v19; // edx
  const char *v21; // [rsp+28h] [rbp-18h]
  const char *v22; // [rsp+28h] [rbp-18h]
  __int64 v23; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v25; // [rsp+70h] [rbp+30h] BYREF
  __int64 v26; // [rsp+78h] [rbp+38h] BYREF

  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0x5C,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\magnifiertarget.cpp",
    (const char *)(*((_DWORD *)this + 10) == 2),
    (void *)"Shouldn't deliver input after completed",
    v21);
  v4 = 0;
  v5 = (char *)a2 + 216;
  v6 = 0;
  gsl::details::extent_type<-1>::extent_type<-1>(&v23, *((unsigned int *)a2 + 53));
  if ( v23 < 0 || a2 == (struct InputInfo *)-216LL && v23 )
  {
    _o_terminate(v7);
    __debugbreak();
    JUMPOUT(0x18017E874LL);
  }
  v8 = &v5[144 * v23];
  while ( v5 != v8 )
  {
    v9 = v6 + 1;
    if ( (v5[12] & 4) == 0 )
      v9 = v6;
    v5 += 144;
    v6 = v9;
  }
  if ( v6 )
  {
    LOBYTE(v4) = *((_BYTE *)this + 36) != 0;
    *((_DWORD *)this + 10) = v4;
  }
  else
  {
    v10 = *((_BYTE *)this + 36) == 0;
    *((_DWORD *)this + 10) = 2;
    wil::details::in1diag3::FailFast_IfMsg(
      retaddr,
      (void *)0x6B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\ma"
                    "gnifiertarget.cpp",
      (const char *)v10,
      (void *)"First delivered input shouldn't be completed",
      v22);
  }
  v11 = *((_DWORD *)this + 8) == 1;
  v25 = *((_QWORD *)this + 3);
  if ( v11 )
  {
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v25);
    v12 = AveragePoint((__int64)a2, &v25);
    v13 = *((unsigned int *)a2 + 53);
    v14 = *((_QWORD *)this + 2) + 8LL;
    v15 = *((_DWORD *)this + 10);
    v26 = v12;
    MagnifierControllerProxy::ZoomGestureDetected(v14, v15, v13, (const struct Windows::Foundation::Point *)&v26);
  }
  else
  {
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v25);
    v16 = AveragePoint((__int64)a2, &v25);
    v17 = *((unsigned int *)a2 + 53);
    v18 = *((_QWORD *)this + 2) + 8LL;
    v19 = *((_DWORD *)this + 10);
    v26 = v16;
    MagnifierControllerProxy::PanGestureDetected(v18, v19, v17, (const struct Windows::Foundation::Point *)&v26);
  }
  *((_BYTE *)this + 36) = 1;
  return 0LL;
}
