/*
 * XREFs of ?LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C02E5C60
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00024A0 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0007384 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     DpiPollSingleDisplayChild @ 0x1C02C6A14 (DpiPollSingleDisplayChild.c)
 *     ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z @ 0x1C02E4588 (-HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C02E654C (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
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
  int v11; // r8d
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
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  struct _IO_WORKITEM *v28; // rcx
  unsigned __int8 v29[8]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v31[10]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v32[144]; // [rsp+98h] [rbp-70h] BYREF

  v4 = 0;
  v29[0] = 0;
  v5 = 0LL;
  v6 = _InterlockedCompareExchange(Context + 38, 0, 5);
  v7 = v6;
  v8 = (unsigned int)(v6 - 2);
  if ( (v8 & 0xFFFFFFFD) == 0 )
  {
    v10 = *(struct DXGADAPTER **)Context;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v32, *(struct DXGADAPTER *const *)Context, 0LL);
    v13 = (int)COREADAPTERACCESS::AcquireExclusive((__int64)v32, (unsigned int)(v11 + 2));
    v14 = _InterlockedCompareExchange(Context + 38, 0, 5);
    v7 = v14;
    v15 = (unsigned int)(v14 - 2);
    if ( (v15 & 0xFFFFFFFD) != 0 )
    {
      if ( v14 != -1 && v14 != 5 )
      {
        v16 = WdLogNewEntry5_WdDmmEvent(v15, v12);
        *(_QWORD *)(v16 + 24) = v10;
        *(_QWORD *)(v16 + 32) = v7;
        WdLogEvent5_WdDmmEvent(v16);
      }
    }
    else if ( (int)v13 >= 0 )
    {
      v18 = *(VIDPN_MGR **)(*((_QWORD *)v10 + 337) + 88LL);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v30, (__int64)v18);
      v19 = *((_QWORD *)Context + 1);
      v29[1] = 0;
      v4 = *(_DWORD *)(v19 + 24);
      VIDPN_MGR::HandleLinkTrainingTimeout(v18, v4, (_DWORD)v7 == 2, &v29[1], v29);
      if ( v29[1] )
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
        v29[0] = 0;
      }
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v30 + 40), v24);
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v15, v12);
      *(_QWORD *)(v17 + 24) = v10;
      *(_QWORD *)(v17 + 32) = v13;
      WdLogEvent5_WdError(v17);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32, v12);
    if ( v29[0] )
    {
      memset(v31, 0, 0x48uLL);
      EtwActivityIdControl(3u, (LPGUID)&v31[1]);
      v31[8] = MEMORY[0xFFFFF78000000014];
      LODWORD(v31[3]) = 64;
      LOBYTE(v31[6]) = -1;
      v27 = WdLogNewEntry5_WdDmmEvent(v26, v25);
      *(_QWORD *)(v27 + 24) = v4;
      *(_QWORD *)(v27 + 32) = *(_QWORD *)Context;
      WdLogEvent5_WdDmmEvent(v27);
      DpiPollSingleDisplayChild((__int64)v5, v4, (__int64)v31);
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
      v9 = WdLogNewEntry5_WdDmmEvent(v8, Context);
      *(_QWORD *)(v9 + 24) = *(_QWORD *)Context;
      *(_QWORD *)(v9 + 32) = v7;
      WdLogEvent5_WdDmmEvent(v9);
    }
    goto LABEL_23;
  }
LABEL_24:
  if ( *(_QWORD *)Context )
    DXGADAPTER::ReleaseReferenceNoTracking(*(DXGADAPTER **)Context);
  v28 = (struct _IO_WORKITEM *)*((_QWORD *)Context + 18);
  if ( v28 )
    IoFreeWorkItem(v28);
  operator delete((void *)Context);
}
