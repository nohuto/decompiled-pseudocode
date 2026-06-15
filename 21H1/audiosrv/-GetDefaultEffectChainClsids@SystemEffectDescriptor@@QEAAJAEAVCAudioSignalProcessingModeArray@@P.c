/*
 * XREFs of ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18005C130
 * Callers:
 *     ?GetAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x18005B2A0 (-GetAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSy.c)
 *     _lambda_624ff53c6311d881d87aa48034e46cd1_::operator() @ 0x18005BF84 (_lambda_624ff53c6311d881d87aa48034e46cd1_--operator().c)
 *     _lambda_6391a63ce46c606b78be3aee92140f1a_::operator() @ 0x18011A414 (_lambda_6391a63ce46c606b78be3aee92140f1a_--operator().c)
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180124060 (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@.c)
 * Callees:
 *     ?Allocate@?$CHeapPtr@U_GUID@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800216E0 (-Allocate@-$CHeapPtr@U_GUID@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180038CF4 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800685BC (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     memcpy_0 @ 0x180074B4F (memcpy_0.c)
 */

__int64 __fastcall SystemEffectDescriptor::GetDefaultEffectChainClsids(
        SystemEffectDescriptor *this,
        struct CAudioSignalProcessingModeArray *a2,
        unsigned int *a3,
        struct _GUID **a4)
{
  __int64 v8; // rdx
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rdi
  __int64 v13; // rdx
  struct _GUID *v14; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID pv; // [rsp+40h] [rbp+8h] BYREF

  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)a2);
  *a3 = 0;
  v8 = *((_QWORD *)this + 2);
  if ( !v8 )
    return 0LL;
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(a2, v8);
  v9 = *((_QWORD *)this + 2);
  v10 = *(_DWORD *)(v9 + 8);
  if ( *((_DWORD *)a2 + 2) == v10 )
  {
    v11 = 40LL;
    if ( v10 <= 0 )
      v11 = 56LL;
    if ( !a4 )
      goto LABEL_6;
    v13 = *(int *)(v11 + v9 + 8);
    pv = 0LL;
    if ( ATL::CHeapPtr<_GUID,ATL::CComAllocator>::Allocate(&pv, v13) )
    {
      v14 = (struct _GUID *)pv;
      memcpy_0(pv, *(const void **)(v11 + v9), 16LL * *(int *)(v11 + v9 + 8));
      *a4 = v14;
      CoTaskMemFree(0LL);
LABEL_6:
      *a3 = *(_DWORD *)(v11 + v9 + 8);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC2,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL);
    CoTaskMemFree(pv);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBC,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL);
  }
  return 2147942414LL;
}
