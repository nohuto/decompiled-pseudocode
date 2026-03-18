/*
 * XREFs of DxgkpAcquireKeyedMutexFromHandle @ 0x1C036263C
 * Callers:
 *     ?VmBusAcquireKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C03669B0 (-VmBusAcquireKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusOpenKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0370F90 (-VmBusOpenKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusReleaseKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0373810 (-VmBusReleaseKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C005583C (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkpAcquireKeyedMutexFromHandle(struct DXGPROCESS *a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 v5; // r8
  int v6; // edx
  __int64 v7; // rbx
  const wchar_t *v8; // r9
  __int64 v9; // rbx
  int *v11; // rbx
  __int64 v12; // rax
  _BYTE v13[32]; // [rsp+50h] [rbp-28h] BYREF

  v2 = a2;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v13, a1);
  v4 = ((unsigned int)v2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v4 >= *((_DWORD *)a1 + 74) )
    goto LABEL_7;
  v5 = *((_QWORD *)a1 + 35);
  v6 = *(_DWORD *)(v5 + 16 * v4 + 8);
  if ( (((unsigned int)v2 >> 25) & 0x60) != (*(_BYTE *)(v5 + 16 * v4 + 8) & 0x60)
    || (v6 & 0x2000) != 0
    || (v6 & 0x1F) == 0 )
  {
    goto LABEL_7;
  }
  if ( (v6 & 0x1F) != 0xD )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
    v7 = v2;
    WdLogSingleEntry1(2LL, v2);
    v8 = L"Invalid shared vm object handle: 0x%I64x";
    goto LABEL_8;
  }
  v11 = *(int **)(v5 + 16LL * (unsigned int)v4);
  if ( !v11 )
    goto LABEL_7;
  if ( *v11 == 4 )
  {
    v12 = *((_QWORD *)v11 + 1);
    v9 = *(_QWORD *)(v12 + 24);
    if ( v9 )
    {
      DXGKEYEDMUTEX::AcquireReference(*(DXGKEYEDMUTEX **)(v12 + 24));
      goto LABEL_9;
    }
    v7 = v2;
    WdLogSingleEntry1(2LL, v2);
    v8 = L"Cannot open keyed mutex from a shared resource which doesn't include a keyed mutex: 0x%I64x";
  }
  else
  {
    WdLogSingleEntry1(2LL, *v11);
    v7 = *v11;
    v8 = L"Invalid shared vm object type: 0x%I64x";
  }
LABEL_8:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v8, v7, 0LL, 0LL, 0LL, 0LL);
  v9 = 0LL;
LABEL_9:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  return v9;
}
