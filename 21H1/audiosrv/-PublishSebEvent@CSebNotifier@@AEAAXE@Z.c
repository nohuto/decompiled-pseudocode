/*
 * XREFs of ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x1800461B4
 * Callers:
 *     _lambda_66d2f619b070ae3e79e6511eef39e0b9_::_lambda_invoker_cdecl_ @ 0x180047FC0 (_lambda_66d2f619b070ae3e79e6511eef39e0b9_--_lambda_invoker_cdecl_.c)
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x180064ED4 (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x1800B87D8 (--1CPowerReferenceManager@@QEAA@XZ.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800529B8 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180074AB0 (_alloca_probe.c)
 */

void __fastcall CSebNotifier::PublishSebEvent(CSebNotifier *this, unsigned __int8 a2)
{
  __int64 v4; // rcx
  int v5; // esi
  _DWORD *v6; // rcx
  unsigned __int8 v7; // [rsp+30h] [rbp-D0h] BYREF
  int v8; // [rsp+34h] [rbp-CCh] BYREF
  char v9[32]; // [rsp+40h] [rbp-C0h] BYREF
  char *v10; // [rsp+60h] [rbp-A0h]
  __int64 v11; // [rsp+68h] [rbp-98h]
  int *v12; // [rsp+70h] [rbp-90h]
  int v13; // [rsp+78h] [rbp-88h]
  int v14; // [rsp+7Ch] [rbp-84h]
  _DWORD v15[1024]; // [rsp+80h] [rbp-80h] BYREF

  if ( *((_BYTE *)this + 88) != a2 )
  {
    v15[1] = -1;
    if ( a2 > 1u )
      v15[0] = (a2 != 0 ? 3 : 1) | (a2 << 14);
    else
      v15[0] = a2 != 0 ? 3 : 1;
    v5 = RtlPublishWnfStateData(WNF_SEB_AUDIO_ACTIVITY, 0LL, v15, 8LL, 0LL);
    if ( v5 >= 0 )
      *((_BYTE *)this + 88) = a2;
    v6 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                     v4,
                     _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
    if ( *v6 > 4u )
    {
      v14 = 0;
      v12 = &v8;
      v13 = 4;
      v10 = (char *)&v7;
      v8 = v5;
      v7 = a2;
      v11 = 1LL;
      tlgWriteTransfer_EtwEventWriteTransfer((_DWORD)v6, (unsigned int)&unk_180169E9A, 0, 0, 4, (__int64)v9);
    }
  }
}
