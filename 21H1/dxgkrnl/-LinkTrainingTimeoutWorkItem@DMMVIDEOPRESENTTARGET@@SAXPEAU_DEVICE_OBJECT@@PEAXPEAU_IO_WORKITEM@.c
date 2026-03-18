/*
 * XREFs of ?LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C02E16F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000BEAC (--3@YAXPEAX@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0011608 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     DpiPollSingleDisplayChild @ 0x1C02C2494 (DpiPollSingleDisplayChild.c)
 *     ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z @ 0x1C02E0008 (-HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C02E1FDC (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::LinkTrainingTimeoutWorkItem(
        PVOID IoObject,
        volatile signed __int32 *Context,
        PIO_WORKITEM IoWorkItem)
{
  unsigned int v4; // r12d
  void *v5; // rbx
  signed __int32 v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  struct DXGADAPTER *v10; // r14
  unsigned int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // r15
  signed __int32 v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  VIDPN_MGR *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  struct _IO_WORKITEM *v27; // rcx
  unsigned __int8 v28[8]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v30[10]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v31[144]; // [rsp+98h] [rbp-70h] BYREF

  v4 = 0;
  v28[0] = 0;
  v5 = 0LL;
  v6 = _InterlockedCompareExchange(Context + 38, 0, 5);
  v7 = v6;
  v8 = (unsigned int)(v6 - 2);
  if ( (v8 & 0xFFFFFFFD) == 0 )
  {
    v10 = *(struct DXGADAPTER **)Context;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v31, *(struct DXGADAPTER *const *)Context, 0LL);
    v13 = (int)COREADAPTERACCESS::AcquireExclusive((__int64)v31, v11 + 2, v11);
    v14 = _InterlockedCompareExchange(Context + 38, 0, 5);
    v7 = v14;
    v15 = (unsigned int)(v14 - 2);
    if ( (v15 & 0xFFFFFFFD) != 0 )
    {
      if ( v14 != -1 && v14 != 5 )
      {
        v16 = WdLogNewEntry5_WdDmmEvent(v15);
        *(_QWORD *)(v16 + 24) = v10;
        *(_QWORD *)(v16 + 32) = v7;
        WdLogEvent5_WdDmmEvent(v16);
      }
    }
    else if ( (int)v13 >= 0 )
    {
      v18 = *(VIDPN_MGR **)(*((_QWORD *)v10 + 334) + 88LL);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v29, (__int64)v18);
      v19 = *((_QWORD *)Context + 1);
      v28[1] = 0;
      v4 = *(_DWORD *)(v19 + 24);
      VIDPN_MGR::HandleLinkTrainingTimeout(v18, v4, (_DWORD)v7 == 2, &v28[1], v28);
      if ( v28[1] )
      {
        if ( (_DWORD)v7 != 2 )
        {
          v22 = WdLogNewEntry5_WdAssertion(v21, v20);
          WdLogEvent5_WdAssertion(v22);
        }
        DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(*((DMMVIDEOPRESENTTARGET **)Context + 1), 0);
      }
      v5 = (void *)*((_QWORD *)v10 + 27);
      if ( v5 )
      {
        ObfReferenceObject(*((PVOID *)v10 + 27));
      }
      else
      {
        v23 = WdLogNewEntry5_WdAssertion(v21, v20);
        WdLogEvent5_WdAssertion(v23);
        v28[0] = 0;
      }
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v29 + 40), v24);
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v15, v12);
      *(_QWORD *)(v17 + 24) = v10;
      *(_QWORD *)(v17 + 32) = v13;
      WdLogEvent5_WdError(v17);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31, v12);
    if ( v28[0] )
    {
      memset(v30, 0, 0x48uLL);
      EtwActivityIdControl(3u, (LPGUID)&v30[1]);
      v30[8] = MEMORY[0xFFFFF78000000014];
      LODWORD(v30[3]) = 64;
      LOBYTE(v30[6]) = -1;
      v26 = WdLogNewEntry5_WdDmmEvent(v25);
      *(_QWORD *)(v26 + 24) = v4;
      *(_QWORD *)(v26 + 32) = *(_QWORD *)Context;
      WdLogEvent5_WdDmmEvent(v26);
      DpiPollSingleDisplayChild((__int64)v5, v4, (__int64)v30);
    }
    if ( v5 )
      ObfDereferenceObject(v5);
LABEL_23:
    if ( (_DWORD)v7 != -1 )
      return;
    goto LABEL_24;
  }
  if ( v6 != -1 )
  {
    if ( v6 != 5 )
    {
      v9 = WdLogNewEntry5_WdDmmEvent(v8);
      *(_QWORD *)(v9 + 24) = *(_QWORD *)Context;
      *(_QWORD *)(v9 + 32) = v7;
      WdLogEvent5_WdDmmEvent(v9);
    }
    goto LABEL_23;
  }
LABEL_24:
  if ( *(_QWORD *)Context )
    DXGADAPTER::ReleaseReferenceNoTracking(*(DXGADAPTER **)Context);
  v27 = (struct _IO_WORKITEM *)*((_QWORD *)Context + 18);
  if ( v27 )
    IoFreeWorkItem(v27);
  operator delete((void *)Context);
}
