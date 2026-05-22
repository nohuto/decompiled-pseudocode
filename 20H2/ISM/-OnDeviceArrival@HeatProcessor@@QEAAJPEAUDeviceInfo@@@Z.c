/*
 * XREFs of ?OnDeviceArrival@HeatProcessor@@QEAAJPEAUDeviceInfo@@@Z @ 0x1801894C8
 * Callers:
 *     ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180189334 (-Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ?ShouldAttachDevice@HeatProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x1801898A0 (-ShouldAttachDevice@HeatProcessor@@UEAA_NPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FA98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HeatProcessor::OnDeviceArrival(
        HeatProcessor *this,
        struct DeviceInfo *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rcx
  int v5; // eax
  int v7; // [rsp+20h] [rbp-28h] BYREF
  __int16 v8; // [rsp+24h] [rbp-24h]
  __int16 v9; // [rsp+26h] [rbp-22h]
  __int16 v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+2Ch] [rbp-1Ch]
  __int64 v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      166LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
      a4);
    __debugbreak();
  }
  v4 = *((_QWORD *)this + 11);
  if ( v4 )
  {
    v7 = *(_DWORD *)a2;
    v8 = *((_WORD *)a2 + 16);
    v9 = *((_WORD *)a2 + 17);
    v10 = *((_WORD *)a2 + 18);
    v12 = *(_QWORD *)((char *)a2 + 20);
    v13 = *((_DWORD *)a2 + 7);
    v11 = 1;
    v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 24LL))(v4, &v7);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        176LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
        (const char *)(unsigned int)v5);
  }
  return 0LL;
}
