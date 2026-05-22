/*
 * XREFs of ?OnHitTest@EdgyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180177CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ToCompositionInputType@@YA?AW4CompositionInputType@@W4InputType@@@Z @ 0x180018178 (-ToCompositionInputType@@YA-AW4CompositionInputType@@W4InputType@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureEdgeMetricsForDisplay@EdgyProcessor@@IEAAXPEBUHitTestInfo@@@Z @ 0x180177B74 (-EnsureEdgeMetricsForDisplay@EdgyProcessor@@IEAAXPEBUHitTestInfo@@@Z.c)
 *     ?QualifyEdgyHitTestInputReport@EdgyProcessor@@IEAA_NPEAUHitTestInfo@@PEAUEdgyPointerInfo@@@Z @ 0x180177F98 (-QualifyEdgyHitTestInputReport@EdgyProcessor@@IEAA_NPEAUHitTestInfo@@PEAUEdgyPointerInfo@@@Z.c)
 *     ?Create@EdgyProcessorTarget@@SAJPEAVEdgyProcessor@@AEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAXPEAPEAV1@@Z @ 0x18017A3D0 (-Create@EdgyProcessorTarget@@SAJPEAVEdgyProcessor@@AEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX.c)
 *     ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z @ 0x18017B2A4 (-UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z.c)
 *     ?OnHitTest@EdgyImpl@@QEAA_NAEBUEdgyPointerInfo@@AEBUD2D_VECTOR_2F@@@Z @ 0x18017BA08 (-OnHitTest@EdgyImpl@@QEAA_NAEBUEdgyPointerInfo@@AEBUD2D_VECTOR_2F@@@Z.c)
 *     ?Reset@EdgyImpl@@QEAAXXZ @ 0x18017BB38 (-Reset@EdgyImpl@@QEAAXXZ.c)
 */

__int64 __fastcall EdgyProcessor::OnHitTest(
        EdgyProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  int v4; // ebx
  __int64 *v8; // r14
  const struct HitTestInfo *v10; // rdx
  struct D2D_VECTOR_2F *v11; // rcx
  __int128 v12; // xmm1
  __int64 v13; // r12
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v17)(_QWORD, GUID *, __int64 *); // rbx
  __m256i v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+58h] [rbp-A8h]
  __int128 v22; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v23; // [rsp+70h] [rbp-90h]
  __int64 v24; // [rsp+80h] [rbp-80h]
  __int128 v25; // [rsp+90h] [rbp-70h]
  __int128 v26; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v27; // [rsp+B0h] [rbp-50h]
  __int128 v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+D0h] [rbp-30h]
  _BYTE v30[64]; // [rsp+E0h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  v19.m256i_i32[0] = -1;
  v4 = 0;
  *(_DWORD *)a4 = 0;
  *(_OWORD *)((char *)v19.m256i_i64 + 4) = 0uLL;
  v19.m256i_i64[3] = 0LL;
  v8 = (__int64 *)((char *)a4 + 8);
  if ( !*((_QWORD *)a4 + 1) && EdgyProcessor::QualifyEdgyHitTestInputReport(this, a2, (struct EdgyPointerInfo *)&v19) )
  {
    EdgyProcessor::EnsureEdgeMetricsForDisplay(v11, v10);
    if ( EdgyImpl::OnHitTest(
           (EdgyProcessor *)((char *)this + 80),
           (const struct EdgyPointerInfo *)&v19,
           (const struct D2D_VECTOR_2F *)this + 8) )
    {
      v12 = *(_OWORD *)&v19.m256i_u64[2];
      *(_OWORD *)((char *)this + 24) = *(_OWORD *)v19.m256i_i8;
      *(_OWORD *)((char *)this + 40) = v12;
      v13 = *(_QWORD *)(*((_QWORD *)a3 + 22) + 32LL);
      v26 = 0LL;
      v29 = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      memset_0(v30, 0, sizeof(v30));
      if ( v13 )
      {
        v14 = ToCompositionInputType(*(_DWORD *)a2);
        if ( (int)NtQueryCompositionInputQueueAndTransform(v13, v14, &v26, v30) >= 0 && (unsigned int)(v26 - 3) <= 1 )
        {
          v25 = v27;
          *(_OWORD *)v19.m256i_i8 = v28;
          v20 = v29;
          if ( (int)NtDuplicateCompositionInputSink(v13) >= 0 )
          {
            v15 = *((_QWORD *)this + 9);
            if ( v15 )
            {
              v22 = v25;
              v24 = v20;
              v23 = *(_OWORD *)v19.m256i_i8;
              EdgyProcessorTarget::UpdateInputTarget(v15, &v22, v21, (char *)this + 24);
            }
            else
            {
              Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 9);
              v22 = v25;
              v24 = v20;
              v23 = *(_OWORD *)v19.m256i_i8;
              v4 = EdgyProcessorTarget::Create(this, (char *)this + 24, &v22, v21, (char *)this + 72);
              if ( v4 < 0 )
                goto LABEL_15;
            }
            v16 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 9);
            v17 = **v16;
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v8);
            v4 = v17(v16, &GUID_00000000_0000_0000_c000_000000000046, v8);
            if ( v4 >= 0 )
              *(_DWORD *)a4 = 1;
          }
        }
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v8);
      *(_DWORD *)a4 = 0;
    }
  }
LABEL_15:
  if ( !*v8 )
    EdgyImpl::Reset((EdgyProcessor *)((char *)this + 80));
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF4,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyprocessor.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
