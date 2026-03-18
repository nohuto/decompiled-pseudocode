/*
 * XREFs of ?BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C02DEB54
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C02E0840 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00138D4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001EF50 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C006C430 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C033C4C4 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 *     ?IsIFlipFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C035162C (-IsIFlipFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::BindCompositionSurfaceCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE *a2,
        struct _DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN *a3)
{
  __int64 RemoteBundleObject; // rsi
  DxgkCompositionObject *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // eax
  __int64 v12; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGFASTMUTEX *v14; // rax
  DxgkCompositionObject *v15; // rax
  struct _KPROCESS *v16; // rdx
  bool v17; // zf
  __int64 v18; // rax
  char v19; // bl
  __int64 v20; // r12
  HANDLE v21; // rcx
  NTSTATUS v22; // esi
  __int64 v23; // rax
  HANDLE v24; // rcx
  __int64 v25; // r12
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // r8
  int v31; // eax
  __int64 v32; // rbx
  HANDLE v33; // rcx
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v36[16]; // [rsp+58h] [rbp-A8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-98h] BYREF
  char v38; // [rsp+98h] [rbp-68h]
  HANDLE Handle[32]; // [rsp+A0h] [rbp-60h] BYREF

  LODWORD(RemoteBundleObject) = -1073741811;
  v7 = 0LL;
  memset(Handle, 0, sizeof(Handle));
  v11 = *((_DWORD *)a2 + 47);
  v12 = 31LL;
  if ( v11 < 0x1F )
    v12 = v11;
  *((_DWORD *)a2 + 47) = v12;
  Current = DXGPROCESS::GetCurrent(v12, v8, v9, v10);
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 216LL))() )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    goto LABEL_36;
  }
  v14 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v36, v14, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v36);
  v15 = (DxgkCompositionObject *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 1) + 72LL))(
                                   *((_QWORD *)this + 1),
                                   *((unsigned int *)a2 + 3),
                                   17LL);
  if ( v15 )
  {
    v7 = v15;
    DxgkCompositionObject::AddRef(v15);
  }
  else
  {
    WdLogSingleEntry2(3LL, *((unsigned int *)a2 + 3), -1073741811LL);
  }
  if ( v36[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v36);
  if ( !v7 )
  {
LABEL_36:
    WdLogSingleEntry2(3LL, *((unsigned int *)a2 + 3), (int)RemoteBundleObject);
    goto LABEL_37;
  }
  v16 = (struct _KPROCESS *)*((_QWORD *)this + 5);
  v38 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, v16);
  RemoteBundleObject = (int)DxgkExtractRemoteBundleObject(
                              *((_DWORD *)a2 + 334),
                              *((_DWORD *)a2 + 47) + 1,
                              Handle,
                              *((struct _EPROCESS **)this + 3));
  if ( v38 )
    KeUnstackDetachProcess(&ApcState);
  if ( (int)RemoteBundleObject < 0 )
  {
    WdLogSingleEntry1(3LL, RemoteBundleObject);
    goto LABEL_33;
  }
  v17 = DXGVAILOBJECT::IsIFlipFeatureEnabled() == 0;
  v18 = *((unsigned int *)a2 + 47);
  v19 = !v17;
  v20 = 0LL;
  if ( !(_DWORD)v18 )
  {
LABEL_20:
    v24 = Handle[v18];
    v25 = *((_QWORD *)a2 + 4);
    v26 = *((_DWORD *)a2 + 44) & 0xFFFFFFEF;
    *((_QWORD *)a2 + 150) = v24;
    LODWORD(v24) = v19 & 1;
    v27 = (unsigned int)((_DWORD)v24 << 6);
    v28 = (unsigned int)v27 | (v26 | (16 * (_DWORD)v24)) & 0xFFFFFFBF;
    *((_DWORD *)a2 + 44) = v28;
    v29 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v27);
    v29[3] = *((unsigned int *)a2 + 3);
    v29[4] = v7;
    v29[5] = *((int *)a2 + 4);
    v29[6] = *((_QWORD *)a2 + 4);
    LOBYTE(v30) = *((_DWORD *)a2 + 4) != 0;
    v31 = (*(__int64 (__fastcall **)(_QWORD *, char *, __int64, char *))(*((_QWORD *)v7 + 4) + 24LL))(
            (_QWORD *)v7 + 4,
            (char *)a2 + 24,
            v30,
            (char *)a3 + 16);
    RemoteBundleObject = v31;
    if ( v31 >= 0 )
    {
      if ( v25 != *((_QWORD *)a3 + 2) )
        WdLogSingleEntry4(3LL, *((unsigned int *)a2 + 3), v7, *((_QWORD *)a2 + 4), *((_QWORD *)a3 + 2));
    }
    else
    {
      WdLogSingleEntry5(2LL, *((unsigned int *)a2 + 3), v7, *((int *)a2 + 4), *((_QWORD *)a2 + 4), v31);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"PairedBind(0x%I64x = 0x%I64x, 0x%I64x, 0x%I64x) failed. Returning 0x%I64x",
        *((unsigned int *)a2 + 3),
        (__int64)v7,
        *((int *)a2 + 4),
        *((_QWORD *)a2 + 4),
        RemoteBundleObject);
    }
    goto LABEL_27;
  }
  while ( 1 )
  {
    v21 = Handle[v20];
    *((_QWORD *)a2 + 4 * (unsigned int)v20 + 24) = v21;
    if ( v19 )
      break;
LABEL_19:
    v18 = *((unsigned int *)a2 + 47);
    v20 = (unsigned int)(v20 + 1);
    if ( (unsigned int)v20 >= (unsigned int)v18 )
      goto LABEL_20;
  }
  Object = 0LL;
  v22 = ObReferenceObjectByHandle(v21, 0xF0000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
  if ( v22 >= 0 )
  {
    v23 = *((_QWORD *)Object + 2);
    if ( v23 )
    {
      if ( *(_DWORD *)(v23 + 132) == 1 )
      {
        v19 &= (*(_DWORD *)(*(_QWORD *)(v23 + 136) - 44LL) & 0x2000) != 0;
        ObfDereferenceObject(Object);
        goto LABEL_19;
      }
    }
  }
  if ( Object )
    ObfDereferenceObject(Object);
  LODWORD(RemoteBundleObject) = -1073741811;
LABEL_27:
  v32 = 0LL;
  if ( *((_DWORD *)a2 + 47) != -1 )
  {
    do
    {
      v33 = Handle[v32];
      if ( v33 )
        ObCloseHandle(v33, 1);
      v32 = (unsigned int)(v32 + 1);
    }
    while ( (unsigned int)v32 < *((_DWORD *)a2 + 47) + 1 );
  }
LABEL_33:
  DxgkCompositionObject::Release(v7);
  if ( (int)RemoteBundleObject < 0 )
    goto LABEL_36;
LABEL_37:
  *((_DWORD *)a3 + 1) = RemoteBundleObject;
  return (unsigned int)RemoteBundleObject;
}
