/*
 * XREFs of DestroyProcessInfoEditionRundown @ 0x1C0056DF0
 * Callers:
 *     <none>
 * Callees:
 *     ProcessDpiAwarenessFromKernelDpiAwarenessContext @ 0x1C0056F40 (ProcessDpiAwarenessFromKernelDpiAwarenessContext.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@444444444444@Z @ 0x1C02253BC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U2@U2@U2@U2@U2@U2.c)
 */

void __fastcall DestroyProcessInfoEditionRundown(unsigned int *a1)
{
  unsigned int v2; // ebx
  int v3; // eax
  int v4; // r8d
  int v5; // r9d
  unsigned int v6; // [rsp+A0h] [rbp+7h] BYREF
  int v7; // [rsp+A4h] [rbp+Bh] BYREF
  unsigned int v8; // [rsp+A8h] [rbp+Fh] BYREF
  unsigned int v9; // [rsp+ACh] [rbp+13h] BYREF
  unsigned int v10; // [rsp+B0h] [rbp+17h] BYREF
  unsigned int v11; // [rsp+B4h] [rbp+1Bh] BYREF
  unsigned int v12; // [rsp+B8h] [rbp+1Fh] BYREF
  unsigned int v13; // [rsp+BCh] [rbp+23h] BYREF
  unsigned int v14; // [rsp+C0h] [rbp+27h] BYREF
  const char *v15; // [rsp+C8h] [rbp+2Fh] BYREF
  __int64 v16[4]; // [rsp+D0h] [rbp+37h] BYREF
  int v17; // [rsp+100h] [rbp+67h] BYREF
  int v18; // [rsp+108h] [rbp+6Fh] BYREF
  int v19; // [rsp+110h] [rbp+77h] BYREF
  unsigned int v20; // [rsp+118h] [rbp+7Fh] BYREF

  if ( a1 && a1[234] )
  {
    if ( (unsigned int)dword_1C032B3F8 > 5
      && (qword_1C032B408 & 0x400000000000LL) != 0
      && (qword_1C032B410 & 0x400000000000LL) == qword_1C032B410 )
    {
      v2 = a1[247];
      v3 = ProcessDpiAwarenessFromKernelDpiAwarenessContext(a1[70]);
      v16[0] = 0x1000000LL;
      v20 = a1[245];
      v6 = a1[246];
      v8 = a1[243];
      v9 = a1[242];
      v10 = a1[241];
      v11 = a1[240];
      v12 = a1[244];
      v13 = a1[239];
      v15 = "ATTRI_DEPRECATED";
      v14 = a1[234];
      v17 = -__CFSHR__(v2, 3);
      v7 = v3;
      v18 = -__CFSHR__(v2, 2);
      v19 = -(v2 & 1);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v18,
        (unsigned int)&unk_1C02F1FA2,
        v4,
        v5,
        (__int64)v16,
        (__int64)&v14,
        (__int64)&v15,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v6,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17);
    }
    a1[234] = 0;
  }
}
