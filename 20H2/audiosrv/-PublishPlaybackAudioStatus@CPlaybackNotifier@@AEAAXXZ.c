/*
 * XREFs of ?PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ @ 0x1800650E4
 * Callers:
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x180064418 (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x1800B7C08 (--1CPowerReferenceManager@@QEAA@XZ.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008418 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180044CFC (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180052318 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 *     _alloca_probe @ 0x1800740F0 (_alloca_probe.c)
 */

void __fastcall CPlaybackNotifier::PublishPlaybackAudioStatus(CPlaybackNotifier *this)
{
  __int64 *v2; // r10
  unsigned int v3; // r11d
  __int64 *v4; // rax
  unsigned int v5; // edi
  int v6; // ebx
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 *v11; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v12[32]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 **v13; // [rsp+58h] [rbp-A8h]
  int v14; // [rsp+60h] [rbp-A0h]
  int v15; // [rsp+64h] [rbp-9Ch]
  int v16; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v17[1023]; // [rsp+74h] [rbp-8Ch] BYREF

  memset_0(v17, 0, sizeof(v17));
  v2 = (__int64 *)*((_QWORD *)this + 10);
  v3 = 0;
  v16 = 1;
  v4 = (__int64 *)*v2;
  v5 = 8;
  v11 = (__int64 *)*v2;
  while ( v4 != v2 )
  {
    v9 = v4 + 4;
    if ( *((_DWORD *)v4 + 16) )
    {
      if ( v3 >= 0x24 )
        break;
      if ( (unsigned __int64)v4[7] >= 8 )
        v9 = (__int64 *)*v9;
      v10 = v5;
      v5 += 112;
      *(_OWORD *)((char *)&v17[-1] + v10) = *(_OWORD *)v9;
      *(_OWORD *)((char *)&v17[3] + v10) = *((_OWORD *)v9 + 1);
      *(_OWORD *)((char *)&v17[7] + v10) = *((_OWORD *)v9 + 2);
      *(_OWORD *)((char *)&v17[11] + v10) = *((_OWORD *)v9 + 3);
      *(_OWORD *)((char *)&v17[15] + v10) = *((_OWORD *)v9 + 4);
      *(_OWORD *)((char *)&v17[19] + v10) = *((_OWORD *)v9 + 5);
      *(_OWORD *)((char *)&v17[23] + v10) = *((_OWORD *)v9 + 6);
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>,std::_Iterator_base0>::operator++(&v11);
    v4 = v11;
  }
  v17[0] = v3;
  v6 = RtlPublishWnfStateData(WNF_AUDC_RENDER, 0LL, &v16, 4096LL, 0LL);
  v8 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                               v7,
                               _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                 + 1);
  if ( *v8 > 4u )
  {
    v15 = 0;
    v13 = &v11;
    LODWORD(v11) = v6;
    v14 = 4;
    tlgWriteTransfer_EtwEventWriteTransfer((__int64)v8, (unsigned __int8 *)&unk_180168BF4, 0LL, 0LL, 3, (__int64)v12);
  }
}
