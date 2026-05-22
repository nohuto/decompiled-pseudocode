/*
 * XREFs of ?OnRIMDeferredRead@RIMDeviceCollection@@CAJPEAXK0@Z @ 0x180022E40
 * Callers:
 *     <none>
 * Callees:
 *     ?ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ @ 0x180023058 (-ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FA98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180090388 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall RIMDeviceCollection::OnRIMDeferredRead(RIMDeviceCollection *a1, int a2, void *a3)
{
  int InputReportFromRIM; // eax
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v5 = 2147549183LL;
    v6 = 508LL;
    goto LABEL_8;
  }
  if ( !a1 )
  {
    v5 = 2147942487LL;
    v6 = 498LL;
LABEL_8:
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)v6,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)v5,
      v7);
    return 0LL;
  }
  *((_BYTE *)a1 + 2736) = 0;
  InputReportFromRIM = RIMDeviceCollection::ReadInputReportFromRIM(a1);
  if ( InputReportFromRIM < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1F7,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)InputReportFromRIM,
      v7);
  return 0LL;
}
