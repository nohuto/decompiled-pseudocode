/*
 * XREFs of ?VmBusReadDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0373350
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C6C4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?ReadCurrentFile@CDriverStoreCopy@@QEAAJPEAX_KK@Z @ 0x1C0304104 (-ReadCurrentFile@CDriverStoreCopy@@QEAAJPEAX_KK@Z.c)
 *     MapGpadl @ 0x1C0383ED0 (MapGpadl.c)
 *     UnmapGpadl @ 0x1C0384100 (UnmapGpadl.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusReadDriverStoreFile(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  union _LARGE_INTEGER *v4; // rsi
  struct _KTHREAD **v5; // rdx
  __int64 v6; // rax
  PMDL v7; // r10
  unsigned __int64 LowPart; // rdx
  unsigned __int64 v9; // rax
  PVOID MappedSystemVa; // rdx
  PVOID v11; // rax
  _BYTE v13[8]; // [rsp+50h] [rbp-30h] BYREF
  DXGPUSHLOCK *v14; // [rsp+58h] [rbp-28h]
  int v15; // [rsp+60h] [rbp-20h]
  _BYTE v16[8]; // [rsp+68h] [rbp-18h] BYREF
  DXGPUSHLOCK *v17; // [rsp+70h] [rbp-10h]
  int v18; // [rsp+78h] [rbp-8h]
  int CurrentFile; // [rsp+A0h] [rbp+20h] BYREF
  PMDL MemoryDescriptorList; // [rsp+A8h] [rbp+28h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v17);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v18 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    WdLogSingleEntry1(2LL, 5701LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      5701LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_20;
  }
  v4 = (union _LARGE_INTEGER *)CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( !v4 )
    goto LABEL_20;
  v5 = (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 56LL);
  MemoryDescriptorList = 0LL;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, v5, 0);
  DXGPUSHLOCK::AcquireExclusive(v14);
  v6 = *((_QWORD *)a1 + 10);
  v15 = 2;
  if ( !*(_QWORD *)(v6 + 336) )
  {
    CurrentFile = -1073741811;
LABEL_16:
    v7 = MemoryDescriptorList;
    goto LABEL_17;
  }
  CurrentFile = MapGpadl(*((_QWORD *)a1 + 12), (unsigned int)v4[4].HighPart, v4[4].LowPart, &MemoryDescriptorList);
  if ( CurrentFile < 0 )
    goto LABEL_16;
  v7 = MemoryDescriptorList;
  LowPart = v4[4].LowPart;
  if ( (unsigned int)LowPart > MemoryDescriptorList->ByteCount )
    goto LABEL_17;
  v9 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 336LL) + 1584LL);
  if ( LowPart > v9 || v4[3].QuadPart > v9 - LowPart )
    goto LABEL_17;
  if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
  {
    MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
  }
  else
  {
    v11 = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
    v7 = MemoryDescriptorList;
    MappedSystemVa = v11;
  }
  if ( MappedSystemVa )
  {
    CurrentFile = CDriverStoreCopy::ReadCurrentFile(
                    *(const WCHAR **)(*((_QWORD *)a1 + 10) + 336LL),
                    MappedSystemVa,
                    v4[3],
                    v4[4].LowPart);
    goto LABEL_16;
  }
  CurrentFile = -1073741801;
LABEL_17:
  if ( v7 )
    UnmapGpadl(*((_QWORD *)a1 + 12), (unsigned int)v4[4].HighPart, v4[4].LowPart);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &CurrentFile, 4u);
  v3 = 1;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
LABEL_20:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  return v3;
}
