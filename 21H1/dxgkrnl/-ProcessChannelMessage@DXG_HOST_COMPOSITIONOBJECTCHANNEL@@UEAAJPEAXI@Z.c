/*
 * XREFs of ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C0288F90
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0008090 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C00080DC (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C000810C (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0011C24 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C0287908 (-BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSA.c)
 *     ?CreateCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C0287DEC (-CreateCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMES.c)
 *     ?EnqueueFlipExTokenCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN@@PEAU_DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN_RETURN@@@Z @ 0x1C02882A4 (-EnqueueFlipExTokenCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_E.c)
 *     ?ReleaseCompositionSurfaceReferenceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_RELEASECOMPOSITIONSURFACEREFERENCE@@PEAU_DXGCOMPOSITIONMESSAGE_RELEASECOMPOSITIONSURFACEREFERENCE_RETURN@@@Z @ 0x1C028966C (-ReleaseCompositionSurfaceReferenceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMP.c)
 *     ?UnbindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C028A01C (-UnbindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMES.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::ProcessChannelMessage(
        struct _KPROCESS **this,
        struct _DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v6; // rax
  __int64 v8; // rcx
  int v9; // eax
  struct _KPROCESS *v10; // rdx
  int v11; // eax
  __int64 v12; // r8
  int *v13; // rdx
  int v14; // eax
  struct _KPROCESS *v15; // rdx
  int v16; // eax
  struct _KPROCESS *v17; // rdx
  DXGPROCESS *v18; // rax
  __int64 v19; // rdx
  DXGPROCESS *v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  DXGPROCESS *v24; // rcx
  int v25; // eax
  struct _KPROCESS *v26; // rdx
  int v27; // eax
  struct _KPROCESS *v28; // rdx
  DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v30; // rdx
  DXGPROCESS *v31; // rdi
  struct _DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE *v32; // rdx
  __int64 v33; // r9
  __int64 v34; // rdx
  _BYTE v35[8]; // [rsp+20h] [rbp-39h] BYREF
  char v36; // [rsp+28h] [rbp-31h]
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-29h] BYREF
  char v38; // [rsp+60h] [rbp+7h]
  int v39; // [rsp+68h] [rbp+Fh] BYREF
  int v40; // [rsp+6Ch] [rbp+13h]
  __int64 v41; // [rsp+70h] [rbp+17h]
  int v42; // [rsp+78h] [rbp+1Fh] BYREF
  int CompositionSurfaceCallback; // [rsp+7Ch] [rbp+23h]
  __int64 v44; // [rsp+80h] [rbp+27h]
  __int64 v45; // [rsp+88h] [rbp+2Fh]

  v3 = (unsigned int)a3;
  if ( (unsigned int)a3 < 0xC )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3);
    v6[3] = v3;
LABEL_3:
    v6[4] = -1073741811LL;
LABEL_4:
    WdLogEvent5_WdWarning(v6);
    return 3221225485LL;
  }
  v8 = (unsigned int)(*((_DWORD *)a2 + 2) - 1);
  if ( *((_DWORD *)a2 + 2) == 1 )
  {
    if ( (_DWORD)a3 != 16 )
      goto LABEL_30;
    v27 = *((_DWORD *)a2 + 1);
    v28 = this[3];
    v45 = 0LL;
    v38 = 0;
    v42 = 1886220131;
    v44 = 2LL;
    CompositionSurfaceCallback = v27;
    CPROCESSATTACHHELPER::Attach(&ApcState, v28);
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)&v39);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v39);
    ProcessDxgProcess = (DXGPROCESS *)PsGetProcessDxgProcess(this[3]);
    v31 = ProcessDxgProcess;
    if ( ProcessDxgProcess )
      DXGPROCESS::AcquireReference(ProcessDxgProcess, v30);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v39, v30);
    if ( v31 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v35, *((struct DXGFASTMUTEX *const *)v31 + 13), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v35);
      if ( *((_DWORD *)v31 + 10) == 1 )
        CompositionSurfaceCallback = DXG_HOST_COMPOSITIONOBJECTCHANNEL::CreateCompositionSurfaceCallback(
                                       (DXG_HOST_COMPOSITIONOBJECTCHANNEL *)this,
                                       v32,
                                       (struct _DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN *)&v42,
                                       v33);
      if ( v36 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v35, (__int64)v32);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v39);
      v24 = v31;
      goto LABEL_39;
    }
LABEL_40:
    if ( (_BYTE)v41 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v39, v21);
    if ( v38 )
      KeUnstackDetachProcess(&ApcState);
    v13 = &v42;
    v12 = 24LL;
    goto LABEL_45;
  }
  v8 = (unsigned int)(*((_DWORD *)a2 + 2) - 3);
  if ( *((_DWORD *)a2 + 2) == 3 )
  {
    if ( (_DWORD)a3 == 16 )
    {
      v25 = *((_DWORD *)a2 + 1);
      v26 = this[3];
      v38 = 0;
      v41 = 4LL;
      v39 = 1886220131;
      v40 = v25;
      CPROCESSATTACHHELPER::Attach(&ApcState, v26);
      v11 = DXG_HOST_COMPOSITIONOBJECTCHANNEL::ReleaseCompositionSurfaceReferenceCallback(
              (DXG_HOST_COMPOSITIONOBJECTCHANNEL *)this,
              a2,
              (struct _DXGCOMPOSITIONMESSAGE_RELEASECOMPOSITIONSURFACEREFERENCE_RETURN *)&v39);
      goto LABEL_13;
    }
    goto LABEL_30;
  }
  v8 = (unsigned int)(*((_DWORD *)a2 + 2) - 5);
  if ( *((_DWORD *)a2 + 2) == 5 )
  {
    if ( (_DWORD)a3 != 1072 )
      goto LABEL_30;
    v16 = *((_DWORD *)a2 + 1);
    v17 = this[3];
    v45 = 0LL;
    v38 = 0;
    v44 = 6LL;
    v42 = 1886220131;
    CompositionSurfaceCallback = v16;
    CPROCESSATTACHHELPER::Attach(&ApcState, v17);
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)&v39);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v39);
    v18 = (DXGPROCESS *)PsGetProcessDxgProcess(this[3]);
    v20 = v18;
    if ( v18 )
      DXGPROCESS::AcquireReference(v18, v19);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v39, v19);
    if ( v20 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v35, *((struct DXGFASTMUTEX *const *)v20 + 13), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v35);
      if ( *((_DWORD *)v20 + 10) == 1 )
        CompositionSurfaceCallback = DXG_HOST_COMPOSITIONOBJECTCHANNEL::BindCompositionSurfaceCallback(
                                       (DXG_HOST_COMPOSITIONOBJECTCHANNEL *)this,
                                       a2,
                                       (struct _DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN *)&v42);
      if ( v36 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v35, v22);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v39);
      v24 = v20;
LABEL_39:
      DXGPROCESS::ReleaseReference(v24, v23);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v39, v34);
      goto LABEL_40;
    }
    goto LABEL_40;
  }
  v8 = (unsigned int)(*((_DWORD *)a2 + 2) - 7);
  if ( *((_DWORD *)a2 + 2) == 7 )
  {
    if ( (_DWORD)a3 == 24 )
    {
      v14 = *((_DWORD *)a2 + 1);
      v15 = this[3];
      v38 = 0;
      v41 = 8LL;
      v39 = 1886220131;
      v40 = v14;
      CPROCESSATTACHHELPER::Attach(&ApcState, v15);
      v11 = DXG_HOST_COMPOSITIONOBJECTCHANNEL::UnbindCompositionSurfaceCallback(
              (DXG_HOST_COMPOSITIONOBJECTCHANNEL *)this,
              a2,
              (struct _DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE_RETURN *)&v39);
      goto LABEL_13;
    }
LABEL_30:
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, a2, a3);
    v6[3] = *((int *)a2 + 2);
    v6[4] = v3;
    v6[5] = -1073741811LL;
    goto LABEL_4;
  }
  if ( *((_DWORD *)a2 + 2) != 9 )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, a2, a3);
    v6[3] = *((int *)a2 + 2);
    goto LABEL_3;
  }
  if ( (_DWORD)a3 != 488 )
    goto LABEL_30;
  v9 = *((_DWORD *)a2 + 1);
  v10 = this[3];
  v38 = 0;
  v41 = 10LL;
  v39 = 1886220131;
  v40 = v9;
  CPROCESSATTACHHELPER::Attach(&ApcState, v10);
  v11 = DXG_HOST_COMPOSITIONOBJECTCHANNEL::EnqueueFlipExTokenCallback(
          (DXG_HOST_COMPOSITIONOBJECTCHANNEL *)this,
          a2,
          (struct _DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN_RETURN *)&v39);
LABEL_13:
  v40 = v11;
  if ( v38 )
    KeUnstackDetachProcess(&ApcState);
  v12 = 16LL;
  v13 = &v39;
LABEL_45:
  (*(void (__fastcall **)(struct _KPROCESS *, int *, __int64))(*(_QWORD *)this[1] + 24LL))(this[1], v13, v12);
  return 0LL;
}
