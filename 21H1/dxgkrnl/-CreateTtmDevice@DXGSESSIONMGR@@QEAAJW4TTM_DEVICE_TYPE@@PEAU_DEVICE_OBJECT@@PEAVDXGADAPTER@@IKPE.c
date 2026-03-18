/*
 * XREFs of ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEAPEAX@Z @ 0x1C016D088
 * Callers:
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C016CF5C (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0CTTMDEVICE@@AEAA@W4TTM_DEVICE_TYPE@@@Z @ 0x1C016D020 (--0CTTMDEVICE@@AEAA@W4TTM_DEVICE_TYPE@@@Z.c)
 *     ?QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C016D178 (-QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     ?Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z @ 0x1C016D260 (-Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z.c)
 */

__int64 __fastcall DXGSESSIONMGR::CreateTtmDevice(
        __int64 a1,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        struct DXGADAPTER *a4,
        unsigned int a5,
        unsigned int a6,
        CTTMDEVICE **a7)
{
  PVOID v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  CTTMDEVICE *v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbp
  int v20; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax

  if ( a7 && (a3 || a4) && ((a5 + 3) & 0xFFFFFFFD) != 0 )
  {
    v10 = operator new[](0x398uLL, 0x4B677844u, PagedPool);
    if ( v10 )
      v15 = (CTTMDEVICE *)CTTMDEVICE::CTTMDEVICE((__int64)v10, 1299018836);
    else
      v15 = 0LL;
    if ( v15 )
    {
      v16 = CTTMDEVICE::Initialize(v15, a3, a4, a5, a6);
      v19 = v16;
      if ( v16 < 0
        || (v20 = CSERIALIZEDWORKQUEUE::QueueSerializedWorkItem(
                    (CSERIALIZEDWORKQUEUE *)(a1 + 376),
                    (void (*)(void *))DXGSESSIONMGR::CreateTtmDeviceWorker,
                    v15),
            v19 = v20,
            v20 < 0) )
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
        v24[3] = a5;
        v24[4] = a4;
        v24[5] = v19;
        WdLogEvent5_WdError(v24);
        return (unsigned int)v19;
      }
      else
      {
        *a7 = v15;
        return 0LL;
      }
    }
    else
    {
      v23 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
      *(_QWORD *)(v23 + 24) = a5;
      *(_QWORD *)(v23 + 32) = a4;
      WdLogEvent5_WdLowResource(v23);
      return 3221225495LL;
    }
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v22 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v22);
    return 3221225485LL;
  }
}
