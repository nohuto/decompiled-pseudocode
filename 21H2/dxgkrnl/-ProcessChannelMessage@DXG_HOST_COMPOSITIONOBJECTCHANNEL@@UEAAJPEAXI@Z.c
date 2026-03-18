/*
 * XREFs of ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C02E0840
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0009278 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C00092A8 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C000C1D8 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00138D4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C02DEB54 (-BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSA.c)
 *     ?CreateCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C02DF1F4 (-CreateCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMES.c)
 *     ?EnqueueFlipExTokenCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN@@PEAU_DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN_RETURN@@@Z @ 0x1C02DF6F4 (-EnqueueFlipExTokenCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_E.c)
 *     ?QueryStatsCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_QUERYSTATS@@PEAU_DXGCOMPOSITIONMESSAGE_QUERYSTATS_RETURN@@@Z @ 0x1C02E0D24 (-QueryStatsCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_QUERYSTAT.c)
 *     ?ReleaseCompositionSurfaceReferenceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_RELEASECOMPOSITIONSURFACEREFERENCE@@PEAU_DXGCOMPOSITIONMESSAGE_RELEASECOMPOSITIONSURFACEREFERENCE_RETURN@@@Z @ 0x1C02E1188 (-ReleaseCompositionSurfaceReferenceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMP.c)
 *     ?UnbindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C02E1E2C (-UnbindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMES.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::ProcessChannelMessage(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE *a2,
        unsigned int a3)
{
  __int64 v5; // rdx
  __int64 v7; // rdx
  struct _KPROCESS *v8; // rdx
  DXGPROCESS *v9; // rax
  DXGPROCESS *v10; // r14
  __int64 v11; // r8
  int *v12; // rdx
  int v13; // eax
  struct _KPROCESS *v14; // rdx
  int v15; // eax
  int v16; // eax
  struct _KPROCESS *v17; // rdx
  int v18; // eax
  struct _KPROCESS *v19; // rdx
  DXGPROCESS *v20; // rax
  DXGPROCESS *v21; // r14
  DXGPROCESS *v22; // rcx
  int v23; // eax
  struct _KPROCESS *v24; // rdx
  int v25; // eax
  struct _KPROCESS *v26; // rdx
  DXGPROCESS *ProcessDxgProcess; // rax
  DXGPROCESS *v28; // rsi
  struct _DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE *v29; // rdx
  __int64 v30; // r9
  _BYTE v31[8]; // [rsp+20h] [rbp-99h] BYREF
  char v32; // [rsp+28h] [rbp-91h]
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-89h] BYREF
  char v34; // [rsp+60h] [rbp-59h]
  int v35; // [rsp+68h] [rbp-51h] BYREF
  int v36; // [rsp+6Ch] [rbp-4Dh]
  __int64 v37; // [rsp+70h] [rbp-49h]
  int v38; // [rsp+78h] [rbp-41h] BYREF
  int CompositionSurfaceCallback; // [rsp+7Ch] [rbp-3Dh]
  __int64 v40; // [rsp+80h] [rbp-39h]
  __int64 v41; // [rsp+88h] [rbp-31h]
  _DWORD v42[20]; // [rsp+90h] [rbp-29h] BYREF

  if ( a3 < 0xC )
  {
    v5 = a3;
LABEL_3:
    WdLogSingleEntry2(3LL, v5, -1073741811LL);
    return 3221225485LL;
  }
  v5 = *((int *)a2 + 2);
  switch ( (_DWORD)v5 )
  {
    case 1:
      if ( a3 != 16 )
      {
        v7 = 1LL;
        goto LABEL_50;
      }
      v25 = *((_DWORD *)a2 + 1);
      v26 = (struct _KPROCESS *)*((_QWORD *)this + 3);
      v41 = 0LL;
      v34 = 0;
      v38 = 1886220131;
      v40 = 2LL;
      CompositionSurfaceCallback = v25;
      CPROCESSATTACHHELPER::Attach(&ApcState, v26);
      DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)&v35);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v35);
      ProcessDxgProcess = (DXGPROCESS *)PsGetProcessDxgProcess(*((_QWORD *)this + 3));
      v28 = ProcessDxgProcess;
      if ( ProcessDxgProcess )
        DXGPROCESS::AcquireReference(ProcessDxgProcess);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v35);
      if ( !v28 )
        goto LABEL_60;
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v31, (DXGPROCESS *)((char *)v28 + 104), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v31);
      if ( *((_DWORD *)v28 + 10) == 1 )
        CompositionSurfaceCallback = DXG_HOST_COMPOSITIONOBJECTCHANNEL::CreateCompositionSurfaceCallback(
                                       this,
                                       v29,
                                       (struct _DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN *)&v38,
                                       v30);
      if ( v32 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v31);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v35);
      v22 = v28;
LABEL_59:
      DXGPROCESS::ReleaseReference(v22);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v35);
LABEL_60:
      if ( (_BYTE)v37 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v35);
      if ( v34 )
        KeUnstackDetachProcess(&ApcState);
      v12 = &v38;
      v11 = 24LL;
      goto LABEL_65;
    case 3:
      if ( a3 != 16 )
      {
        v7 = 3LL;
        goto LABEL_50;
      }
      v23 = *((_DWORD *)a2 + 1);
      v24 = (struct _KPROCESS *)*((_QWORD *)this + 3);
      v34 = 0;
      v37 = 4LL;
      v35 = 1886220131;
      v36 = v23;
      CPROCESSATTACHHELPER::Attach(&ApcState, v24);
      v15 = DXG_HOST_COMPOSITIONOBJECTCHANNEL::ReleaseCompositionSurfaceReferenceCallback(
              this,
              a2,
              (struct _DXGCOMPOSITIONMESSAGE_RELEASECOMPOSITIONSURFACEREFERENCE_RETURN *)&v35);
LABEL_29:
      v36 = v15;
      if ( v34 )
        KeUnstackDetachProcess(&ApcState);
      v11 = 16LL;
      v12 = &v35;
      goto LABEL_65;
    case 5:
      if ( a3 != 1344 )
      {
        v7 = 5LL;
        goto LABEL_50;
      }
      v18 = *((_DWORD *)a2 + 1);
      v19 = (struct _KPROCESS *)*((_QWORD *)this + 3);
      v41 = 0LL;
      v34 = 0;
      v40 = 6LL;
      v38 = 1886220131;
      CompositionSurfaceCallback = v18;
      CPROCESSATTACHHELPER::Attach(&ApcState, v19);
      DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)&v35);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v35);
      v20 = (DXGPROCESS *)PsGetProcessDxgProcess(*((_QWORD *)this + 3));
      v21 = v20;
      if ( v20 )
        DXGPROCESS::AcquireReference(v20);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v35);
      if ( !v21 )
        goto LABEL_60;
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v31, (DXGPROCESS *)((char *)v21 + 104), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v31);
      if ( *((_DWORD *)v21 + 10) == 1 )
        CompositionSurfaceCallback = DXG_HOST_COMPOSITIONOBJECTCHANNEL::BindCompositionSurfaceCallback(
                                       this,
                                       a2,
                                       (struct _DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN *)&v38);
      if ( v32 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v31);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v35);
      v22 = v21;
      goto LABEL_59;
    case 7:
      if ( a3 != 24 )
      {
        v7 = 7LL;
        goto LABEL_50;
      }
      v16 = *((_DWORD *)a2 + 1);
      v17 = (struct _KPROCESS *)*((_QWORD *)this + 3);
      v34 = 0;
      v37 = 8LL;
      v35 = 1886220131;
      v36 = v16;
      CPROCESSATTACHHELPER::Attach(&ApcState, v17);
      v15 = DXG_HOST_COMPOSITIONOBJECTCHANNEL::UnbindCompositionSurfaceCallback(
              this,
              a2,
              (struct _DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE_RETURN *)&v35);
      goto LABEL_29;
    case 9:
      if ( a3 != 488 )
      {
        v7 = 9LL;
        goto LABEL_50;
      }
      v13 = *((_DWORD *)a2 + 1);
      v14 = (struct _KPROCESS *)*((_QWORD *)this + 3);
      v34 = 0;
      v37 = 10LL;
      v35 = 1886220131;
      v36 = v13;
      CPROCESSATTACHHELPER::Attach(&ApcState, v14);
      v15 = DXG_HOST_COMPOSITIONOBJECTCHANNEL::EnqueueFlipExTokenCallback(
              this,
              a2,
              (struct _DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN_RETURN *)&v35);
      goto LABEL_29;
  }
  if ( (_DWORD)v5 != 11 )
    goto LABEL_3;
  if ( a3 != 16 )
  {
    v7 = 11LL;
LABEL_50:
    WdLogSingleEntry3(3LL, v7, a3, -1073741811LL);
    return 3221225485LL;
  }
  memset(v42, 0, sizeof(v42));
  v42[0] = 1886220131;
  v42[2] = 12;
  memset(&v42[4], 0, 0x40uLL);
  v8 = (struct _KPROCESS *)*((_QWORD *)this + 3);
  v42[1] = *((_DWORD *)a2 + 1);
  v34 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, v8);
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)&v35);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v35);
  v9 = (DXGPROCESS *)PsGetProcessDxgProcess(*((_QWORD *)this + 3));
  v10 = v9;
  if ( v9 )
    DXGPROCESS::AcquireReference(v9);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v35);
  if ( v10 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v31, (DXGPROCESS *)((char *)v10 + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v31);
    if ( *((_DWORD *)v10 + 10) == 1 )
      v42[1] = DXG_HOST_COMPOSITIONOBJECTCHANNEL::QueryStatsCallback(
                 this,
                 a2,
                 (struct _DXGCOMPOSITIONMESSAGE_QUERYSTATS_RETURN *)v42);
    if ( v32 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v31);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v35);
    DXGPROCESS::ReleaseReference(v10);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v35);
  }
  if ( (_BYTE)v37 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v35);
  if ( v34 )
    KeUnstackDetachProcess(&ApcState);
  v11 = 80LL;
  v12 = v42;
LABEL_65:
  (*(void (__fastcall **)(_QWORD, int *, __int64))(**((_QWORD **)this + 1) + 24LL))(*((_QWORD *)this + 1), v12, v11);
  return 0LL;
}
