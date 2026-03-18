/*
 * XREFs of ??$_tlgCreate1Sz@G@@YAXPEAU_EVENT_DATA_DESCRIPTOR@@PEBG@Z @ 0x1800ECE04
 * Callers:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByVal@$00@@U2@U1@U1@U3@U3@U3@U3@U3@U?$_tlgWrapperByRef@$0BA@@@U3@U?$_tlgWrapperArray@$03@@U5@U?$_tlgWrapperArray@$00@@U?$_tlgWrapperArray@$01@@U7@U5@U?$_tlgWrapperByVal@$07@@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U8@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByVal@$00@@43355555AEBU?$_tlgWrapperByRef@$0BA@@@5AEBU?$_tlgWrapperArray@$03@@7AEBU?$_tlgWrapperArray@$00@@AEBU?$_tlgWrapperArray@$01@@97AEBU?$_tlgWrapperByVal@$07@@7777777777777777777777777777777777777AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801CBD08 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapperByVal@$00@@U2@U1@U1@U3@U3.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByVal@$00@@U2@U1@U1@U3@U3@U3@U3@U3@U?$_tlgWrapperByRef@$0BA@@@U3@U?$_tlgWrapperArray@$03@@U5@U?$_tlgWrapperArray@$00@@U?$_tlgWrapperArray@$01@@U7@U5@U?$_tlgWrapperByVal@$07@@U5@U5@U5@U5@U5@U5@U5@U5@U6@U6@U5@U5@U5@U5@U5@U5@U5@U5@U7@U7@U7@U7@U8@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByVal@$00@@43355555AEBU?$_tlgWrapperByRef@$0BA@@@5AEBU?$_tlgWrapperArray@$03@@7AEBU?$_tlgWrapperArray@$00@@AEBU?$_tlgWrapperArray@$01@@97AEBU?$_tlgWrapperByVal@$07@@7777777788777777779999AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801CC88C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapperByVal@$00@@U_ea_1801CC88C.c)
 * Callees:
 *     <none>
 */

void __fastcall _tlgCreate1Sz<unsigned short>(__int64 a1, wchar_t *a2)
{
  __int64 v2; // rax
  int v3; // r8d

  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( a2[v2] );
    v3 = 2 * v2 + 2;
  }
  else
  {
    a2 = word_18032C468;
    v3 = 2;
  }
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = v3;
  *(_DWORD *)(a1 + 12) = 0;
}
