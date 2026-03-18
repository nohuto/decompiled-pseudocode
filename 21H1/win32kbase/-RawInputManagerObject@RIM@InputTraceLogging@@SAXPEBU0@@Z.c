/*
 * XREFs of ?RawInputManagerObject@RIM@InputTraceLogging@@SAXPEBU0@@Z @ 0x1C004F990
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C0037400 (RIMRegisterForInputWithCallbacks.c)
 *     _lambda_d1874fae19b79ef5393f0e0766cf3e96_::_lambda_invoker_cdecl_ @ 0x1C0159C20 (_lambda_d1874fae19b79ef5393f0e0766cf3e96_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@555@Z @ 0x1C015A0B4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@@-$_tlgWrit.c)
 */

void __fastcall InputTraceLogging::RIM::RawInputManagerObject(
        const struct RawInputManagerObject *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  const char *v12; // rax
  __int64 v13; // [rsp+50h] [rbp-20h] BYREF
  __int64 v14; // [rsp+58h] [rbp-18h] BYREF
  __int64 v15; // [rsp+60h] [rbp-10h] BYREF
  __int64 v16; // [rsp+88h] [rbp+18h] BYREF
  __int64 v17; // [rsp+90h] [rbp+20h] BYREF
  __int64 v18; // [rsp+98h] [rbp+28h] BYREF

  if ( (unsigned int)dword_1C024C960 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 256LL, a1, a4) )
  {
    v5 = *(_DWORD *)(v4 + 84);
    LODWORD(v16) = -(*(_DWORD *)(v4 + 884) & 1);
    LODWORD(v17) = *(_DWORD *)(v4 + 864);
    LODWORD(v18) = *(unsigned __int8 *)(v4 + 81);
    LODWORD(v13) = *(unsigned __int8 *)(v4 + 80);
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 2;
        if ( v8 )
        {
          v9 = v8 - 4;
          if ( v9 )
          {
            v10 = v9 - 8;
            if ( v10 )
            {
              v11 = v10 - 16;
              if ( v11 )
              {
                if ( v11 == 28 )
                  v12 = "AllHid";
                else
                  v12 = "UNKNOWN";
              }
              else
              {
                v12 = "GenericHid";
              }
            }
            else
            {
              v12 = "Touch";
            }
          }
          else
          {
            v12 = "Touchpad";
          }
        }
        else
        {
          v12 = "Pen";
        }
      }
      else
      {
        v12 = "Keyboard";
      }
    }
    else
    {
      v12 = "Mouse";
    }
    v14 = (__int64)v12;
    v15 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_1C024C960,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16);
  }
}
