/*
 * XREFs of ?OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGW4ContextualProcessorDecision@@PEBUIInputTarget@@J@Z @ 0x18014CA80
 * Callers:
 *     ?MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x18014C494 (-MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualPr.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018FE0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z @ 0x1800872CC (-InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@435@Z @ 0x180149B24 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlg_ea_180149B24.c)
 */

char __fastcall InputTraceLogging::ContextualProcessing::OnInput(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  _QWORD *v9; // rax
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  const char *v13; // rax
  int v14; // ecx
  __int64 v15; // r8
  __int64 v16; // r9
  int v18; // [rsp+68h] [rbp+1Fh] BYREF
  int v19; // [rsp+6Ch] [rbp+23h] BYREF
  __int64 v20; // [rsp+70h] [rbp+27h] BYREF
  __int64 v21; // [rsp+78h] [rbp+2Fh] BYREF
  __int64 v22; // [rsp+80h] [rbp+37h] BYREF
  __int64 v23; // [rsp+88h] [rbp+3Fh] BYREF
  __int64 v24; // [rsp+90h] [rbp+47h] BYREF

  v9 = wil::details::static_lazy<InputTraceLogging>::get(
         a1,
         _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v9[1] > 4u )
  {
    LOBYTE(v9) = tlgKeywordOn(v9[1], 1024LL);
    if ( (_BYTE)v9 )
    {
      v18 = a5;
      v20 = a4;
      if ( a3 )
      {
        v10 = a3 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              if ( v12 == 1 )
                v13 = "Listen";
              else
                v13 = "UNKNOWN";
            }
            else
            {
              v13 = "Drop";
            }
          }
          else
          {
            v13 = "Send";
          }
        }
        else
        {
          v13 = "Buffer";
        }
      }
      else
      {
        v13 = "Ignore";
      }
      v14 = *(_DWORD *)a1;
      v21 = (__int64)v13;
      v19 = *(_DWORD *)(a1 + 4);
      v22 = a2;
      v23 = (__int64)InputTraceLogging::InputTypeToString(v14);
      v24 = *(_QWORD *)(a1 + 16);
      LOBYTE(v9) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                     v15,
                     (unsigned __int8 *)dword_1801CE76A,
                     v15,
                     v16,
                     (__int64)&v24,
                     (const unsigned __int16 **)&v23,
                     (__int64)&v19,
                     (const wchar_t **)&v22,
                     (const unsigned __int16 **)&v21,
                     (__int64)&v20,
                     (__int64)&v18);
    }
  }
  return (char)v9;
}
