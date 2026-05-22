/*
 * XREFs of ?OnInputReport@HeatProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180189770
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FB28 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180090428 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall HeatProcessor::OnInputReport(HeatProcessor *this, struct InputInfo *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  int v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *(_DWORD *)a2 == 2048 )
  {
    v2 = *((_QWORD *)this + 10);
    if ( v2 )
    {
      v5[0] = *((_DWORD *)a2 + 1);
      v6 = *((_QWORD *)a2 + 2);
      v5[1] = *((_DWORD *)a2 + 2);
      v7 = *((_QWORD *)a2 + 9);
      v8 = *((_DWORD *)a2 + 16);
      v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 48LL))(v2, v5);
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          246LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
          (const char *)(unsigned int)v3);
    }
  }
  else
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      228LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
      (const char *)0x80070057LL);
  }
  return 0LL;
}
