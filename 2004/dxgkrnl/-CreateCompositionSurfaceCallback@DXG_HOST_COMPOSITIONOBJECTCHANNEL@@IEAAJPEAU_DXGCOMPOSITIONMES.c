/*
 * XREFs of ?CreateCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C028C28C
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C028D430 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000CF90 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C00160A4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001A110 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CompositionSurfaceObject@@SAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAPEAX@Z @ 0x1C0065014 (-Create@CompositionSurfaceObject@@SAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAPEAX@Z.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::CreateCompositionSurfaceCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE *a2,
        struct _DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN *a3,
        __int64 a4)
{
  DxgkCompositionObject *v6; // rdi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 CurrentProcess; // rax
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // r15d
  __int64 v25; // rax
  struct _KPROCESS *v26; // rdx
  struct CompositionSurfaceObject *v28; // [rsp+40h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-51h] BYREF
  HANDLE v30; // [rsp+50h] [rbp-49h] BYREF
  struct _OBJECT_ATTRIBUTES v31; // [rsp+58h] [rbp-41h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-11h] BYREF
  char v33; // [rsp+B8h] [rbp+1Fh]

  v31.SecurityDescriptor = (PVOID)*((_QWORD *)this + 6);
  v30 = 0LL;
  Handle = 0LL;
  *(_QWORD *)&v31.Length = 48LL;
  v28 = 0LL;
  v6 = 0LL;
  memset(&v31.RootDirectory, 0, 24);
  v31.SecurityQualityOfService = 0LL;
  v7 = CompositionSurfaceObject::Create(0LL, &v31, 3u, a4, &v30);
  v11 = v7;
  if ( v7 >= 0 )
  {
    v13 = CompositionSurfaceObject::ResolveHandle(v30, 2u, v10, &v28);
    v11 = v13;
    if ( v13 >= 0
      && (CurrentProcess = PsGetCurrentProcess(v15, v14),
          v18 = ObDuplicateObject(CurrentProcess, v30, *((_QWORD *)this + 4), &Handle, 0, 0, 6, 1),
          v11 = v18,
          v18 >= 0) )
    {
      v6 = v28;
      v24 = (*(__int64 (__fastcall **)(_QWORD, struct CompositionSurfaceObject *, __int64))(**((_QWORD **)this + 1)
                                                                                          + 56LL))(
              *((_QWORD *)this + 1),
              v28,
              17LL);
      if ( v24 )
      {
        v6 = 0LL;
      }
      else
      {
        LODWORD(v11) = -1073741801;
        v25 = WdLogNewEntry5_WdLowResource(v21, v20, v22, v23);
        *(_QWORD *)(v25 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v25);
      }
      if ( (int)v11 >= 0 )
      {
        *((_QWORD *)a3 + 2) = Handle;
        *((_DWORD *)a3 + 3) = v24;
        goto LABEL_14;
      }
    }
    else
    {
      v19 = WdLogNewEntry5_WdWarning(v15, v14, v16);
      *(_QWORD *)(v19 + 24) = v11;
      WdLogEvent5_WdWarning(v19);
      v6 = v28;
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v12 + 24) = v11;
    WdLogEvent5_WdWarning(v12);
  }
  if ( Handle )
  {
    v26 = (struct _KPROCESS *)*((_QWORD *)this + 4);
    v33 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, v26);
    ObCloseHandle(Handle, 1);
    if ( v33 )
      KeUnstackDetachProcess(&ApcState);
  }
LABEL_14:
  if ( v30 )
    ObCloseHandle(v30, 1);
  if ( v6 )
    DxgkCompositionObject::Release(v6);
  *((_DWORD *)a3 + 1) = v11;
  return (unsigned int)v11;
}
