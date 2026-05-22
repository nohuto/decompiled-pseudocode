/*
 * XREFs of ?OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z @ 0x180090A30
 * Callers:
 *     ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z @ 0x1800385D0 (-OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FAC8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800908E8 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?OnReadEvent@RIMDeviceCollection@@AEAAJXZ @ 0x180090A98 (-OnReadEvent@RIMDeviceCollection@@AEAAJXZ.c)
 */

__int64 __fastcall RIMDeviceCollection::OnReadCallbackStatic(RIMDeviceCollection *a1, int a2, void *a3)
{
  __int64 v3; // r9
  __int64 v4; // rdx
  int Event; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v3 = 2147549183LL;
    v4 = 436LL;
    goto LABEL_7;
  }
  if ( !a1 )
  {
    v3 = 2147942487LL;
    v4 = 427LL;
LABEL_7:
    wil::details::in1diag3::Log_Hr(
      retaddr,
      v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)v3);
    return 0LL;
  }
  Event = RIMDeviceCollection::OnReadEvent(a1);
  if ( Event < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      431LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)Event);
  return 0LL;
}
