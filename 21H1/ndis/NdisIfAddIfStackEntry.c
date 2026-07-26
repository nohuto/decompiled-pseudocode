/*
 * XREFs of NdisIfAddIfStackEntry @ 0x1C0025470
 * Callers:
 *     ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0067D70 (-ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012CDE8 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z @ 0x1C002563C (-ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z.c)
 *     WPP_RECORDER_SF_llL @ 0x1C0025BDC (WPP_RECORDER_SF_llL.c)
 *     ndisIfFindStackEntry @ 0x1C0025C80 (ndisIfFindStackEntry.c)
 *     ndisIfStackTablePathExist @ 0x1C0025CB0 (ndisIfStackTablePathExist.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0025D20 (WPP_RECORDER_SF_dd_ea_1C0025D20.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005E4F0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

NDIS_STATUS __stdcall NdisIfAddIfStackEntry(NET_IFINDEX HigherLayerIfIndex, NET_IFINDEX LowerLayerIfIndex)
{
  ULONG_PTR v2; // rdi
  ULONG_PTR v3; // rsi
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rbx
  KIRQL v6; // r14
  unsigned int v7; // ecx
  struct _NDIS_IF_BLOCK *Interface; // rax
  __int64 v9; // r10
  _QWORD *v10; // rcx
  NDIS_STATUS v11; // ebp
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  int v16; // [rsp+20h] [rbp-38h]
  ULONG VerifierFlags; // [rsp+70h] [rbp+18h] BYREF

  v2 = LowerLayerIfIndex;
  v3 = HigherLayerIfIndex;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      LowerLayerIfIndex,
      22,
      10,
      (struct _GUID *)&WPP_97b9fb6a84ce353ae77a2fb1f333ded7_Traceguids,
      HigherLayerIfIndex,
      LowerLayerIfIndex);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6669444Eu);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  PoolWithTag[3] = 0LL;
  PoolWithTag[4] = 0LL;
  *((_DWORD *)PoolWithTag + 4) = v3;
  *((_DWORD *)PoolWithTag + 5) = v2;
  v6 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  KeAcquireSpinLockAtDpcLevel(&qword_1C00E4A10);
  if ( (_DWORD)v3 == (_DWORD)v2 || (unsigned __int8)ndisIfStackTablePathExist((unsigned int)v3, (unsigned int)v2, 0LL) )
  {
    if ( MmIsDriverVerifying((struct _DRIVER_OBJECT *)ndisDriverObject) )
    {
      VerifierFlags = 0;
      if ( MmIsVerifierEnabled(&VerifierFlags) < 0 || (VerifierFlags & 0x400000) == 0 )
        ndisBugCheckEx(0x1BuLL, v3, v2, 0LL);
    }
    v11 = -1073741811;
    goto LABEL_12;
  }
  if ( ndisIfFindStackEntry((unsigned int)v3, (unsigned int)v2) )
  {
    ExFreePoolWithTag(v5, 0);
    v5 = 0LL;
  }
  else
  {
    ndisIfFindInterface(v7);
    Interface = ndisIfFindInterface(v2);
    if ( !v9 || !Interface )
    {
      v11 = -1071448021;
      goto LABEL_12;
    }
    v5[3] = v9;
    v5[4] = Interface;
    v10 = qword_1C00E4A00;
    if ( *((PVOID **)qword_1C00E4A00 + 1) != &qword_1C00E4A00 )
      __fastfail(3u);
    *v5 = qword_1C00E4A00;
    v5[1] = &qword_1C00E4A00;
    v10[1] = v5;
    qword_1C00E4A00 = v5;
    ++*(_DWORD *)(v9 + 1296);
    ++Interface->HigherLayerIfCount;
  }
  v11 = 0;
LABEL_12:
  KeReleaseSpinLockFromDpcLevel(&qword_1C00E4A10);
  KeReleaseSpinLock(&ndisIfListLock, v6);
  if ( v11 )
    ExFreePoolWithTag(v5, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_llL(*((_QWORD *)WPP_GLOBAL_Control + 8), v12, v13, v14, v16, v3, v2, v11);
  return v11;
}
