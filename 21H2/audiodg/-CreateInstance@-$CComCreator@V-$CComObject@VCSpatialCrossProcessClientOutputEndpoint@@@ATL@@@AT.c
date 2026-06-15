/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14006635C
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400660B0 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCSpatialCrossProcessClientOutputEnd.c)
 * Callees:
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x14000AEE0 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140012460 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140016B64 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x14001EBA4 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x1400651D4 (--0-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ?InternalFinalConstructRelease@CSpatialCrossProcessClientOutputEndpoint@@QEAAXXZ @ 0x140066660 (-InternalFinalConstructRelease@CSpatialCrossProcessClientOutputEndpoint@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r15
  unsigned int v6; // esi
  void *v7; // rax
  int v8; // r8d
  CSpatialCrossProcessClientOutputEndpoint *v9; // rax
  volatile int *v10; // rdx
  CSpatialCrossProcessClientOutputEndpoint *v11; // rdi
  int v12; // eax
  _QWORD v13[11]; // [rsp+0h] [rbp-58h] BYREF
  CSpatialCrossProcessClientOutputEndpoint *v16; // [rsp+78h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = -2147024882;
  v7 = (void *)AERTGetDLLRTHeap();
  try
  {
    v9 = (CSpatialCrossProcessClientOutputEndpoint *)AERTAllocate(0x5C8uLL, v7, v8);
    v13[4] = v9;
    if ( v9 )
      v11 = ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::CComObject<CSpatialCrossProcessClientOutputEndpoint>(v9);
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
    Microsoft::WRL::Details::SafeUnknownIncrementReference(
      (CSpatialCrossProcessClientOutputEndpoint *)((char *)v11 + 1392),
      v10);
    v12 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)v11 + 35);
    if ( v12 >= 0 )
    {
      *((_BYTE *)v11 + 1440) = 1;
      v12 = 0;
    }
    v6 = 0;
    if ( v12 < 0 )
      v6 = v12;
    CSpatialCrossProcessClientOutputEndpoint::InternalFinalConstructRelease(v11);
    if ( v6
      || (v6 = (**(__int64 (__fastcall ***)(CSpatialCrossProcessClientOutputEndpoint *, __int64, _QWORD *))v11)(
                 v11,
                 v4,
                 v3)) != 0 )
    {
      (*(void (__fastcall **)(CSpatialCrossProcessClientOutputEndpoint *, __int64))(*(_QWORD *)v11 + 64LL))(v11, 1LL);
    }
  }
  return v6;
}
