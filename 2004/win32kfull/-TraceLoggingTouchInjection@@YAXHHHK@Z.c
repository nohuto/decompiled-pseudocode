/*
 * XREFs of ?TraceLoggingTouchInjection@@YAXHHHK@Z @ 0x1C02262F8
 * Callers:
 *     NtUserInitializeTouchInjection @ 0x1C01FE480 (NtUserInitializeTouchInjection.c)
 *     NtUserInjectTouchInput @ 0x1C01FE850 (NtUserInjectTouchInput.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x1C0224B7C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U3@U3@@-$_tlgWriteTe.c)
 */

void __fastcall TraceLoggingTouchInjection(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rax
  void **v5; // [rsp+28h] [rbp-48h]
  int *v6; // [rsp+30h] [rbp-40h]
  int *v7; // [rsp+38h] [rbp-38h]
  int v8; // [rsp+50h] [rbp-20h] BYREF
  int v9; // [rsp+54h] [rbp-1Ch] BYREF
  __int64 v10; // [rsp+58h] [rbp-18h] BYREF
  _QWORD v11[2]; // [rsp+60h] [rbp-10h] BYREF
  int v12; // [rsp+80h] [rbp+10h] BYREF

  if ( (_DWORD)a1 == 1 )
  {
    if ( (unsigned int)dword_1C032B3F8 > 5
      && (qword_1C032B408 & 0x200000000000LL) != 0
      && (qword_1C032B410 & 0x200000000000LL) == qword_1C032B410 )
    {
      v9 = a2;
      v10 = (__int64)"InjectTouchInput";
      v8 = a3;
      v7 = &v8;
      v6 = &v9;
      v5 = (void **)&v10;
      v4 = v11;
      v11[0] = 0x1000000LL;
LABEL_10:
      v12 = a4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        a1,
        byte_1C02F1A6A,
        a3,
        a4,
        (__int64)v4,
        v5,
        (__int64)v6,
        (__int64)v7,
        (__int64)&v12);
    }
  }
  else if ( (unsigned int)dword_1C032B3F8 > 5
         && (qword_1C032B408 & 0x200000000000LL) != 0
         && (qword_1C032B410 & 0x200000000000LL) == qword_1C032B410 )
  {
    v8 = a2;
    v11[0] = "InitializeTouchInjection";
    v9 = a3;
    v7 = &v9;
    v6 = &v8;
    v5 = (void **)v11;
    v4 = &v10;
    v10 = 0x1000000LL;
    goto LABEL_10;
  }
}
