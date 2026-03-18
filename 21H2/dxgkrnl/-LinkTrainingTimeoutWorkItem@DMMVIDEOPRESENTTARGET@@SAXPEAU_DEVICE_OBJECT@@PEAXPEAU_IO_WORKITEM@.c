/*
 * XREFs of ?LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C03A0060
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000A6A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000A6FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DpiPollSingleDisplayChild @ 0x1C0387820 (DpiPollSingleDisplayChild.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C03A07E8 (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 *     ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z @ 0x1C03A4B10 (-HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::LinkTrainingTimeoutWorkItem(
        PVOID IoObject,
        volatile signed __int32 *Context,
        PIO_WORKITEM IoWorkItem)
{
  unsigned int v4; // r15d
  void *v5; // rbx
  signed __int32 v6; // eax
  __int64 v7; // r14
  __int64 v8; // rdx
  signed __int32 v9; // eax
  signed __int32 v10; // esi
  __int64 v11; // r8
  __int64 v12; // rcx
  VIDPN_MGR *v13; // rbx
  __int64 v14; // rax
  struct _IO_WORKITEM *v15; // rcx
  unsigned __int8 v16; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int8 v17[7]; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v19[10]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v20[144]; // [rsp+90h] [rbp-70h] BYREF

  v4 = 0;
  v16 = 0;
  v5 = 0LL;
  v6 = _InterlockedCompareExchange(Context + 38, 0, 5);
  if ( ((v6 - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( v6 != -1 )
    {
      if ( v6 != 5 )
        WdLogSingleEntry2(7LL, *(_QWORD *)Context, v6);
      return;
    }
    goto LABEL_25;
  }
  v7 = *(_QWORD *)Context;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, *(struct DXGADAPTER *const *)Context, 0LL);
  v8 = (int)COREADAPTERACCESS::AcquireExclusive((__int64)v20);
  v9 = _InterlockedCompareExchange(Context + 38, 0, 5);
  v10 = v9;
  if ( ((v9 - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( v9 != -1 && v9 != 5 )
    {
      v11 = v9;
      v12 = 7LL;
LABEL_9:
      WdLogSingleEntry2(v12, v7, v11);
    }
  }
  else
  {
    if ( (int)v8 < 0 )
    {
      v11 = v8;
      v12 = 2LL;
      goto LABEL_9;
    }
    v13 = *(VIDPN_MGR **)(*(_QWORD *)(v7 + 2792) + 104LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v18, (__int64)v13);
    v14 = *((_QWORD *)Context + 1);
    v17[0] = 0;
    v4 = *(_DWORD *)(v14 + 24);
    VIDPN_MGR::HandleLinkTrainingTimeout(v13, v4, v10 == 2, v17, &v16);
    if ( v17[0] )
    {
      if ( v10 != 2 )
        WdLogSingleEntry0(1LL);
      DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(*((DMMVIDEOPRESENTTARGET **)Context + 1), 0);
    }
    v5 = *(void **)(v7 + 216);
    if ( v5 )
    {
      ObfReferenceObject(*(PVOID *)(v7 + 216));
    }
    else
    {
      WdLogSingleEntry0(1LL);
      v16 = 0;
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v18 + 40));
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v20);
  if ( v16 )
  {
    memset(v19, 0, 0x48uLL);
    EtwActivityIdControl(3u, (LPGUID)&v19[1]);
    v19[8] = MEMORY[0xFFFFF78000000014];
    LODWORD(v19[3]) = 64;
    LOBYTE(v19[6]) = -1;
    WdLogSingleEntry2(7LL, v4, *(_QWORD *)Context);
    DpiPollSingleDisplayChild((__int64)v5, v4, (__int64)v19);
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( v10 == -1 )
  {
LABEL_25:
    if ( *(_QWORD *)Context )
      DXGADAPTER::ReleaseReferenceNoTracking(*(DXGADAPTER **)Context);
    v15 = (struct _IO_WORKITEM *)*((_QWORD *)Context + 18);
    if ( v15 )
      IoFreeWorkItem(v15);
    operator delete((void *)Context);
  }
}
