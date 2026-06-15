/*
 * XREFs of ?PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ @ 0x180064FFC
 * Callers:
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x180064418 (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x1800B7C08 (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     ?UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K_N1@Z @ 0x1800EF768 (-UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K_N1@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008418 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180052318 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 *     _alloca_probe @ 0x1800740F0 (_alloca_probe.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800EF3D8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUAPPLICATION.c)
 */

void __fastcall CCaptureNotifier::PublishCaptureAudioStatus(CCaptureNotifier *this)
{
  _QWORD *v2; // r10
  unsigned int v3; // r11d
  _DWORD *v4; // rax
  unsigned int v5; // edi
  int v6; // ebx
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  int v9; // edx
  char v10; // cl
  __int64 v11; // rax
  _DWORD *v12; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v13[32]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD *v14; // [rsp+58h] [rbp-A8h]
  __int64 v15; // [rsp+60h] [rbp-A0h]
  int v16; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v17[1023]; // [rsp+74h] [rbp-8Ch] BYREF

  memset_0(v17, 0, sizeof(v17));
  v2 = (_QWORD *)*((_QWORD *)this + 10);
  v16 = 2;
  v3 = 0;
  v4 = (_DWORD *)*v2;
  v5 = 8;
  v12 = (_DWORD *)*v2;
  while ( v4 != (_DWORD *)v2 )
  {
    if ( v4[8] )
    {
      if ( v3 >= 0x331 )
        break;
      v9 = v4[7];
      v10 = v4[9] != 0;
      if ( v4[10] )
        v10 |= 2u;
      v11 = v5;
      v5 += 5;
      *(_DWORD *)((char *)&v17[-1] + v11) = v9;
      *((_BYTE *)v17 + v11) = v10;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,APPLICATION_REF_DATA>>>,std::_Iterator_base0>::operator++(&v12);
    v4 = v12;
  }
  v17[0] = v3;
  v6 = RtlPublishWnfStateData(WNF_AUDC_CAPTURE, 0LL, &v16, 4096LL, 0LL);
  v8 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                               v7,
                               _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                 + 1);
  if ( *v8 > 4u )
  {
    LODWORD(v12) = v6;
    v14 = &v12;
    v15 = 4LL;
    tlgWriteTransfer_EtwEventWriteTransfer((__int64)v8, byte_180168BC1, 0LL, 0LL, 3, (__int64)v13);
  }
}
