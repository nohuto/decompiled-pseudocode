/*
 * XREFs of ?VmBusDdiGetStandardAllocationDriverData@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023F470
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004548 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0025A44 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00409F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C0112914 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDdiGetStandardAllocationDriverData(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // r15
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // r12d
  __int64 v15; // rdx
  int *v16; // rbx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v24; // rax
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rcx
  int StandardAllocationDriverData; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // eax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *pCreateSharedPrimarySurfaceData; // rax
  __int64 v34; // rax
  _BYTE v35[8]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v36; // [rsp+28h] [rbp-58h]
  char v37; // [rsp+30h] [rbp-50h]
  _BYTE v38[8]; // [rsp+38h] [rbp-48h] BYREF
  DXGPUSHLOCK *v39; // [rsp+40h] [rbp-40h]
  int v40; // [rsp+48h] [rbp-38h]
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v41; // [rsp+50h] [rbp-30h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v39);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 1;
  v40 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v9 = CastToVmBusCommand<DXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC>((__int64)a1);
    if ( !v9 )
      goto LABEL_3;
    v11 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL);
    if ( *(_DWORD *)(v9 + 36) >= *(_DWORD *)(v11 + 280) )
    {
      v12 = WdLogNewEntry5_WdWarning(v11, v8, v10);
      *(_QWORD *)(v12 + 24) = 2509LL;
      WdLogEvent5_WdWarning(v12);
      goto LABEL_3;
    }
    v13 = *(_DWORD *)(v9 + 28) + 36;
    if ( *(_DWORD *)(v9 + 28) >= 0xFFFFFFDC )
      goto LABEL_3;
    v14 = v13 + *(_DWORD *)(v9 + 32);
    if ( v14 < v13 )
      goto LABEL_3;
    v16 = (int *)operator new(v14, 0x4B677844u, 1, (POOL_TYPE)512);
    if ( !v16 )
      goto LABEL_3;
    v18 = *((_QWORD *)a1 + 5);
    memset(&v41, 0, sizeof(v41));
    v19 = *(_QWORD *)(v18 + 16);
    v41.StandardAllocationType = *(_DWORD *)(v9 + 24);
    v41.PhysicalAdapterIndex = *(_DWORD *)(v9 + 36);
    v20 = (unsigned int)(*(_DWORD *)(v9 + 24) - 1);
    if ( *(_DWORD *)(v9 + 24) == 1 )
    {
      v24 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v9 + 40);
      if ( !*(_DWORD *)(v9 + 44)
        || !v24->Width
        || (v20 = *(unsigned int *)(v9 + 48), !(_DWORD)v20)
        || (int)v20 > 199
        || !*(_DWORD *)(v9 + 52)
        || !*(_DWORD *)(v9 + 56)
        || *(_DWORD *)(v9 + 60) )
      {
        v25 = WdLogNewEntry5_WdWarning(v20, v15, v17);
        *(_QWORD *)(v25 + 24) = 2601LL;
        goto LABEL_69;
      }
    }
    else
    {
      v21 = (unsigned int)(*(_DWORD *)(v9 + 24) - 2);
      if ( *(_DWORD *)(v9 + 24) == 2 )
      {
        v24 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v9 + 40);
        if ( !*(_DWORD *)(v9 + 44)
          || !v24->Width
          || *(_DWORD *)(v9 + 52)
          || (v21 = *(unsigned int *)(v9 + 48), !(_DWORD)v21)
          || (int)v21 > 199 )
        {
          v25 = WdLogNewEntry5_WdWarning(v21, v15, v17);
          *(_QWORD *)(v25 + 24) = 2560LL;
          goto LABEL_69;
        }
      }
      else
      {
        v22 = (unsigned int)(*(_DWORD *)(v9 + 24) - 3);
        if ( *(_DWORD *)(v9 + 24) == 3 )
        {
          v24 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v9 + 40);
          if ( !*(_DWORD *)(v9 + 44) || !v24->Width || *(_DWORD *)(v9 + 48) )
          {
            v25 = WdLogNewEntry5_WdWarning(v22, v15, v17);
            *(_QWORD *)(v25 + 24) = 2542LL;
            goto LABEL_69;
          }
        }
        else
        {
          if ( *(_DWORD *)(v9 + 24) != 4 )
          {
            v23 = WdLogNewEntry5_WdError(v22, v15);
            *(_QWORD *)(v23 + 24) = 2612LL;
            WdLogEvent5_WdError(v23);
LABEL_70:
            *v16 = -1073741811;
LABEL_71:
            VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v16, v14);
            operator delete[](v16);
            goto LABEL_4;
          }
          v24 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v9 + 40);
          if ( !*(_DWORD *)(v9 + 44)
            || !v24->Width
            || (v22 = *(unsigned int *)(v9 + 52), !(_DWORD)v22)
            || (int)v22 > 8
            || *(_DWORD *)(v9 + 60)
            || (v15 = *(unsigned int *)(v9 + 48), !(_DWORD)v15) && (_DWORD)v22 != 7
            || (int)v15 > 199
            || *(_DWORD *)(v9 + 56) )
          {
            v25 = WdLogNewEntry5_WdWarning(v22, v15, v17);
            *(_QWORD *)(v25 + 24) = 2581LL;
LABEL_69:
            WdLogEvent5_WdWarning(v25);
            goto LABEL_70;
          }
        }
      }
    }
    v41.pCreateSharedPrimarySurfaceData = v24;
    v36 = v19;
    v37 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
    if ( *(_DWORD *)(v19 + 200) != 1 )
    {
      *v16 = -1073741130;
      goto LABEL_45;
    }
    if ( !*(_DWORD *)(v9 + 28) )
    {
      LODWORD(v27) = 0;
      if ( !*(_DWORD *)(v9 + 32) )
        goto LABEL_54;
    }
    StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(
                                     *(ADAPTER_RENDER **)(v19 + 2704),
                                     &v41,
                                     v26);
    *v16 = StandardAllocationDriverData;
    if ( StandardAllocationDriverData < 0 )
    {
LABEL_50:
      v31 = WdLogNewEntry5_WdError(v30, v29);
      *(_QWORD *)(v31 + 24) = *v16;
LABEL_51:
      WdLogEvent5_WdError(v31);
      goto LABEL_45;
    }
    v27 = *(unsigned int *)(v9 + 28);
    if ( v41.AllocationPrivateDriverDataSize > (unsigned int)v27
      || v41.ResourcePrivateDriverDataSize > *(_DWORD *)(v9 + 32) )
    {
      v34 = WdLogNewEntry5_WdWarning(v27, v29, v26);
      *(_QWORD *)(v34 + 24) = 2640LL;
      WdLogEvent5_WdWarning(v34);
      *v16 = -1073741811;
    }
    else
    {
LABEL_54:
      v41.AllocationPrivateDriverDataSize = v27;
      if ( (_DWORD)v27 )
        v41.pAllocationPrivateDriverData = v16 + 9;
      v41.ResourcePrivateDriverDataSize = *(_DWORD *)(v9 + 32);
      if ( v41.ResourcePrivateDriverDataSize )
        v41.pResourcePrivateDriverData = (char *)v16 + (unsigned int)v27 + 36;
      v32 = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(*(ADAPTER_RENDER **)(v19 + 2704), &v41, v26);
      *v16 = v32;
      if ( v32 < 0 )
        goto LABEL_50;
      v16[1] = v41.AllocationPrivateDriverDataSize;
      v16[2] = v41.ResourcePrivateDriverDataSize;
      if ( v41.StandardAllocationType != D3DKMDT_STANDARDALLOCATION_SHAREDPRIMARYSURFACE )
      {
        if ( v41.StandardAllocationType == D3DKMDT_STANDARDALLOCATION_SHADOWSURFACE )
        {
          *(_OWORD *)(v16 + 3) = *(_OWORD *)v41.pCreateSharedPrimarySurfaceData;
          goto LABEL_45;
        }
        if ( v41.StandardAllocationType == D3DKMDT_STANDARDALLOCATION_STAGINGSURFACE )
        {
          pCreateSharedPrimarySurfaceData = v41.pCreateSharedPrimarySurfaceData;
          *(_QWORD *)(v16 + 3) = *(_QWORD *)v41.pCreateSharedPrimarySurfaceData;
          v16[5] = pCreateSharedPrimarySurfaceData->Format;
          goto LABEL_45;
        }
        if ( v41.StandardAllocationType != D3DKMDT_STANDARDALLOCATION_GDISURFACE )
        {
          v31 = WdLogNewEntry5_WdError((unsigned int)(v41.StandardAllocationType - 3), v29);
          *(_QWORD *)(v31 + 24) = 2681LL;
          goto LABEL_51;
        }
      }
      *(D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v16 + 3) = *v41.pCreateSharedPrimarySurfaceData;
    }
LABEL_45:
    if ( v37 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
    goto LABEL_71;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v6 + 24) = 2503LL;
  WdLogEvent5_WdError(v6);
LABEL_3:
  v5 = 0;
LABEL_4:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v38);
  return v5;
}
