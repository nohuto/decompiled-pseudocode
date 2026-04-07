/*
 * XREFs of ?CreateSharedVisual@UdwmDcompVisual@@AEAAJPEAUIDCompositionDesktopDevicePartner@@AEAUSharedDwmDcompVisual@@_N@Z @ 0x180013254
 * Callers:
 *     ?InitializeDComp@UdwmDcompVisual@@AEAAJPEAUIDCompositionDesktopDevicePartner@@@Z @ 0x18001316C (-InitializeDComp@UdwmDcompVisual@@AEAAJPEAUIDCompositionDesktopDevicePartner@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011FE8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?CreateFromSharedHandle@UdwmTopVisual@@SAJPEAXPEAPEAV1@@Z @ 0x180013444 (-CreateFromSharedHandle@UdwmTopVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?CreateFromSharedHandle@UdwmBottomVisual@@SAJPEAXPEAPEAV1@@Z @ 0x180013500 (-CreateFromSharedHandle@UdwmBottomVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18003DD3C (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UdwmDcompVisual::CreateSharedVisual(
        UdwmDcompVisual *this,
        struct IDCompositionDesktopDevicePartner *a2,
        struct SharedDwmDcompVisual *a3,
        char a4)
{
  _QWORD *v7; // r15
  int v8; // esi
  void **v9; // r14
  int v10; // eax
  unsigned int v11; // ebx
  void *v12; // rcx
  int v13; // eax
  _QWORD *v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct UdwmTopVisual *v19; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+58h] [rbp+10h] BYREF

  v19 = this;
  if ( !a2 )
    return 0LL;
  if ( !a4 )
  {
    v15 = (_QWORD *)((char *)a3 + 8);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)a3 + 8);
    v8 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *, GUID *, _QWORD *))(*(_QWORD *)a2 + 216LL))(
           a2,
           &GUID_e8de1639_4331_4b26_bc5f_6a321d347a85,
           v15);
    if ( v8 < 0 )
    {
      v16 = 392LL;
    }
    else
    {
      v9 = (void **)((char *)a3 + 24);
      v8 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *, _QWORD, char *))(*(_QWORD *)a2 + 224LL))(
             a2,
             *v15,
             (char *)a3 + 24);
      if ( v8 >= 0 )
        goto LABEL_8;
      v16 = 393LL;
    }
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwmdcompvisual.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v7 = (_QWORD *)((char *)a3 + 16);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)a3 + 16);
  v8 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *, GUID *, _QWORD *))(*(_QWORD *)a2 + 216LL))(
         a2,
         &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89,
         v7);
  if ( v8 < 0 )
  {
    v16 = 378LL;
    goto LABEL_19;
  }
  v9 = (void **)((char *)a3 + 24);
  v8 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *, _QWORD, char *))(*(_QWORD *)a2 + 224LL))(
         a2,
         *v7,
         (char *)a3 + 24);
  if ( v8 < 0 )
  {
    v16 = 381LL;
    goto LABEL_19;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)a3 + 8);
  v8 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *, char *))(*(_QWORD *)a2 + 48LL))(
         a2,
         (char *)a3 + 8);
  if ( v8 < 0 )
  {
    v16 = 384LL;
    goto LABEL_19;
  }
  v8 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)a2 + 24LL))(a2);
  if ( v8 < 0 )
  {
    v16 = 385LL;
    goto LABEL_19;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v7 + 24LL))(*v7, *((_QWORD *)a3 + 1));
  if ( v8 < 0 )
  {
    v16 = 388LL;
    goto LABEL_19;
  }
LABEL_8:
  v10 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)a2 + 24LL))(a2);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18C,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwmdcompvisual.cpp",
      (const char *)(unsigned int)v10);
  }
  else
  {
    v20 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v12 = *v9;
    if ( a4 )
    {
      v13 = UdwmTopVisual::CreateFromSharedHandle(v12, &v19);
      v11 = v13;
      if ( v13 >= 0 )
        goto LABEL_11;
      v17 = 405LL;
    }
    else
    {
      v13 = UdwmBottomVisual::CreateFromSharedHandle(v12, &v19);
      v11 = v13;
      if ( v13 >= 0 )
      {
LABEL_11:
        *(_QWORD *)a3 = v19;
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        return 0LL;
      }
      v17 = 411LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwmdcompvisual.cpp",
      (const char *)(unsigned int)v13);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
  }
  return v11;
}
