/*
 * XREFs of ?SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ @ 0x14006471C
 * Callers:
 *     ?PulseEndpoint@CSpatialCrossProcessServerInputEndpoint@@UEAAXXZ @ 0x140064DD0 (-PulseEndpoint@CSpatialCrossProcessServerInputEndpoint@@UEAAXXZ.c)
 * Callees:
 *     ??$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessEvent@@$$QEAPEAX@Z @ 0x140013810 (--$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEA.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140039F08 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14003FB64 (-reset@-$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     McTemplateU0pqp_EventWriteTransfer @ 0x140058B30 (McTemplateU0pqp_EventWriteTransfer.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x140062BC8 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 */

char __fastcall CSpatialCrossProcessServerEndpoint::SignalCompletionEvent(
        CSpatialCrossProcessServerEndpoint *this,
        __int64 a2)
{
  __int64 v2; // rax
  char v3; // si
  _QWORD *v5; // rbx
  int v6; // eax
  __int64 v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 169);
  v3 = 0;
  if ( v2 )
  {
    _InterlockedExchange64((volatile __int64 *)this + 168, v2);
    v5 = (_QWORD *)((char *)this + 1336);
    v10 = *((_QWORD *)this + 168);
    wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::reset((__int64 *)this + 167);
    v6 = Microsoft::WRL::Details::MakeAndInitialize<CStandardEvent,ICrossProcessEvent,void *>(v5, &v10);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        201LL,
        (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpserverendpoint.cpp",
        (const char *)(unsigned int)v6);
    v7 = *((_QWORD *)this + 161);
    *((_QWORD *)this + 169) = 0LL;
    _InterlockedOr((volatile signed __int32 *)(v7 + 64), 0x20u);
  }
  if ( *((_QWORD *)this + 167) && CSpatialCrossProcessBaseEndpoint::IsRunning(this) )
  {
    SetEvent(*((HANDLE *)this + 168));
    v3 = 1;
  }
  if ( (byte_140085401 & 4) != 0 )
    McTemplateU0pqp_EventWriteTransfer(
      *((_QWORD *)this + 168),
      a2,
      (__int64)this,
      *((_DWORD *)this + 341),
      *((_QWORD *)this + 168));
  return v3;
}
