/*
 * XREFs of ?AddMapping@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER_GUEST@1@@Z @ 0x1C033D404
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1C02EC214 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?VmBusSendUpdateMonitorMapping@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@I_NI@Z @ 0x1C037F384 (-VmBusSendUpdateMonitorMapping@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@I_NI@Z.c)
 */

__int64 __fastcall REMOTEMONITORMAPPING::AddMapping(
        struct _KTHREAD **this,
        struct _LUID *a2,
        struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *a3)
{
  __int64 v6; // r9
  __int64 v7; // rax
  _QWORD *v8; // rbx
  __int64 HighPart; // rbx
  int v10; // edx
  const wchar_t *v11; // r9
  __int64 v12; // rbp
  __int128 v13; // xmm0
  DXG_GUEST_GLOBAL_VMBUS *v14; // rcx
  __int64 LowPart; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  int updated; // eax
  struct _KTHREAD *v20; // rax
  _BYTE v21[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v22; // [rsp+58h] [rbp-20h]
  int v23; // [rsp+60h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21, this + 2, 0);
  DXGPUSHLOCK::AcquireExclusive(v22);
  v23 = 2;
  v7 = operator new[](0x30uLL, 0x4B677844u, 256LL, v6);
  v8 = (_QWORD *)v7;
  if ( !v7 )
  {
    HighPart = 92LL;
    WdLogSingleEntry1(6LL, 92LL);
    v10 = 262145;
    v11 = L"Failed to allocate new entry";
    LODWORD(v12) = -1073741801;
LABEL_5:
    LowPart = 0LL;
    v16 = 0LL;
    v17 = 0LL;
LABEL_8:
    DxgkLogInternalTriageEvent(0LL, v10, -1, (__int64)v11, HighPart, LowPart, v16, v17, 0LL);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
    return (unsigned int)v12;
  }
  *(struct _LUID *)(v7 + 16) = *a2;
  v13 = *(_OWORD *)a3;
  *(_DWORD *)(v7 + 24) = a2[1].LowPart;
  *(_OWORD *)(v7 + 28) = v13;
  v14 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 218);
  if ( !v14 )
  {
    operator delete(v8);
    HighPart = 104LL;
    WdLogSingleEntry1(2LL, 104LL);
    v10 = 0x40000;
    v11 = L"VmBus not connected so cannot redirect";
    LODWORD(v12) = -1073741823;
    goto LABEL_5;
  }
  updated = DXG_GUEST_GLOBAL_VMBUS::VmBusSendUpdateMonitorMapping(v14, *a2, a2[1].LowPart, 1, *((_DWORD *)a3 + 3));
  v12 = updated;
  if ( updated < 0 )
  {
    operator delete(v8);
    v17 = v12;
    WdLogSingleEntry4(2LL, a2->HighPart, a2->LowPart, a2[1].LowPart, v12);
    LowPart = a2->LowPart;
    v11 = L"Host failed to update monitor mapping for Adapter LUID 0x%08I64x%08I64x, target id 0x%I64x, status 0x%I64x";
    v16 = a2[1].LowPart;
    v10 = 0x40000;
    HighPart = a2->HighPart;
    goto LABEL_8;
  }
  v20 = *this;
  if ( *((struct _KTHREAD ***)*this + 1) != this )
    __fastfail(3u);
  *v8 = v20;
  v8[1] = this;
  *((_QWORD *)v20 + 1) = v8;
  *this = (struct _KTHREAD *)v8;
  *((_BYTE *)this + 48) = 1;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  return 0LL;
}
