/*
 * XREFs of ?StartVSync@BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x1C03BFB90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C0002624 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55___ @ 0x1C006D618 (DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55___.c)
 *     _DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1C006D638 (_DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_GUEST@1@PEAUPATH_IDENTIFIER_HOST@1@@Z @ 0x1C033D650 (-FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_GUEST@1@PEAUPATH_IDENTIFI.c)
 *     ?VmBusSendVsyncControl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IPEAX_N@Z @ 0x1C037F4C0 (-VmBusSendVsyncControl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IPEAX_N@Z.c)
 */

__int64 __fastcall BLTQUEUE_REMOTE_VSYNC_SOURCE::StartVSync(
        BLTQUEUE_REMOTE_VSYNC_SOURCE *this,
        struct _D3DDDI_RATIONAL a2,
        unsigned int a3)
{
  int v3; // edi
  __int64 v4; // r14
  DXGDODPRESENT *v7; // rcx
  struct DXGADAPTER *Adapter; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGADAPTER *v11; // rax
  BLTQUEUE_REMOTE_VSYNC_SOURCE *v12; // rcx
  struct DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v14; // rax
  struct DXGADAPTER *v15; // rax
  __int64 v16; // rdx
  DXG_GUEST_GLOBAL_VMBUS *v17; // rcx
  unsigned int v18; // ebx
  struct _LUID v19; // rbx
  unsigned int v20; // r15d
  struct DXGADAPTER *v21; // rax
  __int64 v22; // rdx
  struct _LUID v23; // [rsp+50h] [rbp-19h] BYREF
  unsigned int v24; // [rsp+58h] [rbp-11h]
  BLTQUEUE_REMOTE_VSYNC_SOURCE *v25; // [rsp+60h] [rbp-9h] BYREF
  int *v26; // [rsp+68h] [rbp-1h]
  int *v27; // [rsp+70h] [rbp+7h]
  _BYTE v28[64]; // [rsp+80h] [rbp+17h] BYREF
  int MappingFromGuestId; // [rsp+D0h] [rbp+67h] BYREF
  int v30; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = 0;
  v4 = a3;
  if ( *((_BYTE *)this + 104) )
    return 3221225473LL;
  v7 = (DXGDODPRESENT *)*((_QWORD *)this + 12);
  if ( !v7 )
  {
    *(_QWORD *)(((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdTrace)(0LL, a2) + 24) = 62LL;
    return 3221225473LL;
  }
  if ( a3 == -1 )
  {
    Adapter = DXGDODPRESENT::GetAdapter(v7);
    WdLogSingleEntry1(3LL, Adapter);
    return 3221225473LL;
  }
  if ( !*((_BYTE *)DXGGLOBAL_GetGlobal() + 304912) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9) + 24) = 76LL;
    return 3221225473LL;
  }
  MappingFromGuestId = 0;
  v26 = &MappingFromGuestId;
  v30 = 3;
  v27 = &v30;
  v25 = this;
  DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55_((__int64)v28, (__int64)&v25);
  v11 = DXGDODPRESENT::GetAdapter(*((DXGDODPRESENT **)this + 12));
  v26 = (int *)(unsigned int)v4;
  v12 = *(BLTQUEUE_REMOTE_VSYNC_SOURCE **)((char *)v11 + 404);
  v23 = 0LL;
  v24 = 0;
  v25 = v12;
  Global = DXGGLOBAL_GetGlobal();
  MappingFromGuestId = REMOTEMONITORMAPPING::FindMappingFromGuestId(
                         (struct _KTHREAD **)Global + 38108,
                         (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *)&v25,
                         (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)&v23);
  if ( MappingFromGuestId < 0 )
  {
    v14 = DXGDODPRESENT::GetAdapter(*((DXGDODPRESENT **)this + 12));
    WdLogSingleEntry2(2LL, v14, v4);
    v15 = DXGDODPRESENT::GetAdapter(*((DXGDODPRESENT **)this + 12));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to find host mapping for adapter 0x%I64x, target id 0x%I64x",
      (__int64)v15,
      v4,
      0LL,
      0LL,
      0LL);
LABEL_15:
    v18 = MappingFromGuestId;
    goto LABEL_16;
  }
  v17 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 218);
  if ( !v17 )
  {
    v18 = -1073741823;
    v3 = 1;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v16) + 24) = 107LL;
    MappingFromGuestId = -1073741823;
LABEL_16:
    v30 = v3;
    DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v28);
    return v18;
  }
  v19 = v23;
  v20 = v24;
  MappingFromGuestId = DXG_GUEST_GLOBAL_VMBUS::VmBusSendVsyncControl(v17, v23, v24, (char *)this + 72, 1);
  if ( MappingFromGuestId < 0 )
  {
    v21 = DXGDODPRESENT::GetAdapter(*((DXGDODPRESENT **)this + 12));
    WdLogSingleEntry3(3LL, v21, v4, v22);
    v3 = 2;
    goto LABEL_15;
  }
  KeSetTimerEx((PKTIMER)((char *)this + 8), (LARGE_INTEGER)-300000000LL, 0, 0LL);
  *((_BYTE *)this + 104) = 1;
  *(struct _LUID *)((char *)this + 108) = v19;
  *((_DWORD *)this + 29) = v20;
  DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v28);
  return (unsigned int)MappingFromGuestId;
}
