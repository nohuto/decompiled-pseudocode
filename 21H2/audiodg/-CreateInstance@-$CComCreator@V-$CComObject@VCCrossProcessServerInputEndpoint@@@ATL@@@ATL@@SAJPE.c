/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14005D4F4
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14005CD60 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCCrossProcessServerInputEndpoint@@@.c)
 * Callees:
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x14000AEE0 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140012460 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140016B64 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ??0?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140016BA0 (--0-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x14001EBA4 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ?InternalFinalConstructRelease@CCrossProcessServerInputEndpoint@@QEAAXXZ @ 0x14005D904 (-InternalFinalConstructRelease@CCrossProcessServerInputEndpoint@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CCrossProcessServerInputEndpoint>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r15
  unsigned int v6; // esi
  void *v7; // rax
  int v8; // r8d
  CCrossProcessServerInputEndpoint *v9; // rax
  volatile int *v10; // rdx
  CCrossProcessServerInputEndpoint *v11; // rdi
  int v12; // eax
  _QWORD v13[11]; // [rsp+0h] [rbp-58h] BYREF
  CCrossProcessServerInputEndpoint *v16; // [rsp+78h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = -2147024882;
  v7 = (void *)AERTGetDLLRTHeap();
  try
  {
    v9 = (CCrossProcessServerInputEndpoint *)AERTAllocate(0x2C0uLL, v7, v8);
    v13[4] = v9;
    if ( v9 )
      v11 = ATL::CComObject<CCrossProcessServerInputEndpoint>::CComObject<CCrossProcessServerInputEndpoint>(v9);
    else
      v11 = 0LL;
    v16 = v11;
  }
  catch ( ... )
  {
    v10 = (volatile int *)v13;
    v3 = a3;
    v4 = a2;
    v6 = -2147024882;
    v11 = v16;
  }
  if ( v11 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((CCrossProcessServerInputEndpoint *)((char *)v11 + 480), v10);
    v12 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)((char *)v11 + 488));
    if ( v12 >= 0 )
    {
      *((_BYTE *)v11 + 528) = 1;
      v12 = 0;
    }
    v6 = 0;
    if ( v12 < 0 )
      v6 = v12;
    CCrossProcessServerInputEndpoint::InternalFinalConstructRelease(v11);
    if ( v6
      || (v6 = (**(__int64 (__fastcall ***)(CCrossProcessServerInputEndpoint *, __int64, _QWORD *))v11)(v11, v4, v3)) != 0 )
    {
      (*(void (__fastcall **)(CCrossProcessServerInputEndpoint *, __int64))(*(_QWORD *)v11 + 64LL))(v11, 1LL);
    }
  }
  return v6;
}
