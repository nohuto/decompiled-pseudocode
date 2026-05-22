/*
 * XREFs of ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800B6520
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@WBI@EAAJPEAUInputInfo@@@Z @ 0x18004ABA0 (-DeliverInput@DWMInputTarget@@WBI@EAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@DWMInputTarget@@WCA@EAAJPEAUInputInfo@@@Z @ 0x18004ABB0 (-DeliverInput@DWMInputTarget@@WCA@EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x180018090 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x18003CC86 (_CxxThrowException_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x1800B61A8 (-AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x1800B67E0 (-DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ?DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z @ 0x1800B6888 (-DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?ScreenPointToRelative@CInputTransform@@SA?AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1800B6CF4 (-ScreenPointToRelative@CInputTransform@@SA-AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z @ 0x1800C4070 (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z.c)
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x1800F0D8C (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputTarget::DeliverInput(DWMInputTarget *this, struct InputInfo *a2)
{
  __int64 v5; // r8
  const char *v6; // r9
  int v7; // eax
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rdi
  float *v12; // rax
  float *v13; // rax
  const struct std::nothrow_t *v14; // rdx
  const struct std::nothrow_t *v15; // rdx
  unsigned __int64 v16; // [rsp+30h] [rbp-39h] BYREF
  int v17; // [rsp+38h] [rbp-31h] BYREF
  __int64 pExceptionObject; // [rsp+40h] [rbp-29h] BYREF
  void *v19[2]; // [rsp+48h] [rbp-21h]
  _BYTE v20[64]; // [rsp+60h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  (*(void (__fastcall **)(char *, int *))(*((_QWORD *)this + 5) + 40LL))((char *)this + 40, &v17);
  if ( (v17 & *(_DWORD *)a2) == 0 && v17 )
    return 2147549443LL;
  InputTraceLogging::ISM::DeliverInput(a2);
  v7 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x200003B) != 0 )
  {
    if ( *((_QWORD *)this + 15) )
    {
      v8 = DWMInputTarget::AddDwmInputRoutingData(this, a2, v5, v6);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x139,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
          (const char *)(unsigned int)v8);
        return v9;
      }
      v7 = *(_DWORD *)a2;
    }
    else
    {
      *(_QWORD *)((char *)a2 + 132) = 1065353216LL;
      *(_QWORD *)((char *)a2 + 140) = 0LL;
      *((_DWORD *)a2 + 37) = 0;
      *((_QWORD *)a2 + 19) = 1065353216LL;
      *((_QWORD *)a2 + 20) = 0LL;
      *((_DWORD *)a2 + 42) = 0;
      *(_QWORD *)((char *)a2 + 172) = 1065353216LL;
      *(_QWORD *)((char *)a2 + 180) = 0LL;
      *((_DWORD *)a2 + 47) = 0;
      *((_DWORD *)a2 + 48) = 1065353216;
    }
  }
  if ( v7 == 0x4000 )
  {
    v10 = *((_QWORD *)this + 15);
    if ( v10 )
    {
      if ( !*(_BYTE *)(v10 + 392) )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          355LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
          v6);
        __debugbreak();
      }
      v11 = v10 + 32;
      *((_QWORD *)a2 + 4) = *((_QWORD *)LegacyInputSinkData::GetCompositionInputQueue(
                                          (LegacyInputSinkData *)(v10 + 32),
                                          1u)
                            + 1);
      LegacyInputSinkData::GetTransform(v11, v20);
      if ( *((_BYTE *)a2 + 60) )
      {
        v16 = _mm_unpacklo_ps(
                (__m128)COERCE_UNSIGNED_INT((float)*((int *)a2 + 11)),
                (__m128)COERCE_UNSIGNED_INT((float)*((int *)a2 + 12))).m128_u64[0];
        v12 = (float *)CInputTransform::ScreenPointToRelative(&pExceptionObject, &v16, v20);
        LODWORD(v16) = (int)*v12;
        HIDWORD(v16) = (int)v12[1];
        *(_QWORD *)((char *)a2 + 52) = v16;
      }
      if ( *((_BYTE *)a2 + 80) )
      {
        v16 = _mm_unpacklo_ps(
                (__m128)COERCE_UNSIGNED_INT((float)*((int *)a2 + 16)),
                (__m128)COERCE_UNSIGNED_INT((float)*((int *)a2 + 17))).m128_u64[0];
        v13 = (float *)CInputTransform::ScreenPointToRelative(&pExceptionObject, &v16, v20);
        LODWORD(v16) = (int)*v13;
        HIDWORD(v16) = (int)v13[1];
        *(_QWORD *)((char *)a2 + 52) = v16;
      }
    }
  }
  InputEventPayloadBuffer::InputEventPayloadBuffer(&pExceptionObject, 5LL, a2);
  v9 = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, char *, void *, _QWORD))(*(_QWORD *)NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer
                                                                                        + 24LL))(
         NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer,
         (char *)this + 80,
         v19[0],
         (int)pExceptionObject);
  InputETW::InputTarget::DeliverInputReport(a2);
  if ( (v9 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x189,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      (const char *)v9);
    if ( v19[0] )
      operator delete(v19[0], v15);
    return v9;
  }
  if ( v19[0] )
    operator delete(v19[0], v14);
  return 0LL;
}
