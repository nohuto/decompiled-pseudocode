/*
 * XREFs of ?CreateBridgeStream@CSharedStreamGroupProxy@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800E4F00
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800529B8 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800D8048 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::CreateBridgeStream(
        unsigned __int64 this,
        struct BRIDGE_STREAM_DESCRIPTOR *a2,
        struct IStreamGroupProxy *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  __int64 v4; // rax
  volatile int *v9; // rdx
  __int64 v10; // rcx
  int v11; // edi
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  _DWORD *v14; // r10
  int v16; // [rsp+30h] [rbp-59h] BYREF
  __int64 v17; // [rsp+38h] [rbp-51h] BYREF
  struct IStreamGroupProxy *v18; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-41h] BYREF
  char v20[32]; // [rsp+50h] [rbp-39h] BYREF
  int *v21; // [rsp+70h] [rbp-19h]
  int v22; // [rsp+78h] [rbp-11h]
  int v23; // [rsp+7Ch] [rbp-Dh]
  unsigned __int64 *v24; // [rsp+80h] [rbp-9h]
  int v25; // [rsp+88h] [rbp-1h]
  int v26; // [rsp+8Ch] [rbp+3h]
  struct IStreamGroupProxy **v27; // [rsp+90h] [rbp+7h]
  int v28; // [rsp+98h] [rbp+Fh]
  int v29; // [rsp+9Ch] [rbp+13h]

  v4 = *(_QWORD *)a3;
  v17 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *, __int64 *))(v4 + 248))(a3, &v17);
  if ( v11 >= 0 )
  {
    if ( v17 )
      v11 = (*(__int64 (__fastcall **)(_QWORD, struct BRIDGE_STREAM_DESCRIPTOR *, __int64, struct SYSTEM_AUDIO_STREAM *))(**(_QWORD **)(this + 80) + 96LL))(
              *(_QWORD *)(this + 80),
              a2,
              v17,
              a4);
    if ( v11 >= 0 )
    {
      *((_QWORD *)a4 + 6) = this & -(__int64)(this != 8);
      v12 = *(_QWORD *)(this + 264);
      while ( 1 )
      {
        v10 = (unsigned __int64)v12 >> 63;
        if ( v12 < 0 )
          break;
        if ( (_DWORD)v12 != 0x7FFFFFFF )
        {
          v10 = v12 + 1;
          v13 = v12;
          v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(this + 264), v12 + 1, v12);
          if ( v13 != v12 )
            continue;
        }
        goto LABEL_11;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v12 + 16), v9);
    }
  }
LABEL_11:
  v14 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                    v10,
                    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *v14 > 4u )
  {
    v18 = a3;
    v16 = v11;
    v22 = 4;
    v27 = &v18;
    v29 = 0;
    v26 = 0;
    v23 = 0;
    v24 = &v19;
    v19 = this & -(__int64)(this != 8);
    v21 = &v16;
    v28 = 8;
    v25 = 8;
    tlgWriteTransfer_EtwEventWriteTransfer((__int64)v14, byte_180168CBA, 0LL, 0LL, 5, (__int64)v20);
  }
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  return (unsigned int)v11;
}
