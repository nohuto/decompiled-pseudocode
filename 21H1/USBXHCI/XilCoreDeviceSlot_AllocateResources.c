/*
 * XREFs of XilCoreDeviceSlot_AllocateResources @ 0x1C0014BA8
 * Callers:
 *     XilDeviceSlot_PrepareHardware @ 0x1C00144CC (XilDeviceSlot_PrepareHardware.c)
 * Callees:
 *     XilCoreCommonBuffer_AcquireBuffers @ 0x1C0009120 (XilCoreCommonBuffer_AcquireBuffers.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009878 (WPP_RECORDER_SF_.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C000DB70 (CommonBuffer_AcquireBuffer.c)
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_i @ 0x1C0014AE8 (WPP_RECORDER_SF_i.c)
 *     CommonBuffer_QueueWorkItem @ 0x1C0018168 (CommonBuffer_QueueWorkItem.c)
 *     memset @ 0x1C00194C0 (memset.c)
 *     XilCoreDeviceSlot_FreeResources @ 0x1C00501B4 (XilCoreDeviceSlot_FreeResources.c)
 */

__int64 __fastcall XilCoreDeviceSlot_AllocateResources(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 v3; // rdx
  void *v4; // rbp
  __int64 v5; // r14
  __int64 v6; // rax
  int v7; // edx
  int v8; // edx
  __int64 v9; // rax
  unsigned int v10; // edx
  int v11; // edx
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // rdx
  _QWORD *v15; // r9
  __int64 v16; // r10
  int v17; // eax
  SIZE_T v18; // rbx
  PVOID PoolWithTag; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  int v23; // r9d
  char v24; // [rsp+60h] [rbp+8h] BYREF

  v1 = (_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v4 = *(void **)(v3 + 120);
  v5 = *(_QWORD *)(v3 + 88);
  *(_QWORD *)(a1 + 48) = a1 + 40;
  *(_QWORD *)(a1 + 40) = a1 + 40;
  v6 = CommonBuffer_AcquireBuffer(v4, 4096, a1, 829713491);
  *(_QWORD *)(a1 + 24) = v6;
  if ( !v6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = 13;
LABEL_19:
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v7,
        10,
        v23,
        (__int64)&WPP_57b4ec5b2a77395746dfb5e96c966fbd_Traceguids);
    }
LABEL_20:
    v12 = -1073741670;
    goto LABEL_21;
  }
  v8 = *(_DWORD *)(v5 + 92);
  *(_DWORD *)(a1 + 20) = v8;
  if ( !v8 )
  {
LABEL_11:
    v17 = (unsigned __int8)*(_DWORD *)(v5 + 80);
    *(_DWORD *)(a1 + 16) = v17;
    v18 = 8LL * (unsigned int)(v17 + 1);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v18, 0x49434858u);
    *(_QWORD *)(a1 + 56) = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v18);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = *(_QWORD *)(a1 + 24);
        v21 = *(_QWORD *)(v20 + 16);
        LOBYTE(v20) = 4;
        WPP_RECORDER_SF_i(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 72LL),
          v20,
          10,
          17,
          (__int64)&WPP_57b4ec5b2a77395746dfb5e96c966fbd_Traceguids,
          v21);
      }
      v12 = 0;
      goto LABEL_15;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = 16;
      goto LABEL_19;
    }
    goto LABEL_20;
  }
  v9 = CommonBuffer_AcquireBuffer(v4, 8 * v8, a1, 846490707);
  *(_QWORD *)(a1 + 32) = v9;
  if ( !v9 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v23 = 14;
    goto LABEL_19;
  }
  v10 = *(_DWORD *)(a1 + 20);
  v24 = 0;
  v12 = XilCoreCommonBuffer_AcquireBuffers((__int64)v4 + 88, v10, 0x1000u, (int)v1, a1, 863267923, &v24);
  if ( v24 )
    CommonBuffer_QueueWorkItem(v4);
  if ( v12 >= 0 )
  {
    v13 = *(_QWORD *)(a1 + 32);
    v14 = 0LL;
    v15 = (_QWORD *)*v1;
    v16 = *(_QWORD *)(v13 + 16);
    if ( *(_DWORD *)(a1 + 20) )
    {
      do
      {
        *(_QWORD *)(v16 + 8 * v14) = v15[3];
        v14 = (unsigned int)(v14 + 1);
        v15 = (_QWORD *)*v15;
      }
      while ( (unsigned int)v14 < *(_DWORD *)(a1 + 20) );
      v13 = *(_QWORD *)(a1 + 32);
    }
    **(_QWORD **)(*(_QWORD *)(a1 + 24) + 16LL) = *(_QWORD *)(v13 + 24);
    goto LABEL_11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v11,
      10,
      15,
      (__int64)&WPP_57b4ec5b2a77395746dfb5e96c966fbd_Traceguids,
      v12);
  }
LABEL_15:
  if ( v12 < 0 )
LABEL_21:
    XilCoreDeviceSlot_FreeResources(a1);
  return (unsigned int)v12;
}
