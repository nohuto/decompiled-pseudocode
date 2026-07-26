/*
 * XREFs of ?NdisTraceLoggingStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C008C2F8
 * Callers:
 *     ?ndisNblTrackerWatchdogTimer@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C0008980 (-ndisNblTrackerWatchdogTimer@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C00236A4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x1C008B32C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U_tlgWrapperBinary@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU_tlgWrapperBinary@@5@Z @ 0x1C008B3B8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U_tlgWrapperBinary@@U3@@-$_tlgWrite.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@@Z @ 0x1C008B484 (--$Write@U-$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

void __fastcall NdisTraceLoggingStuckNbl(struct _NDIS_NBL_TRACKER *a1)
{
  __int16 v1; // r9
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r10
  unsigned __int8 *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r10
  __int16 v16; // ax
  __int64 v17; // [rsp+40h] [rbp-20h] BYREF
  __int16 v18; // [rsp+48h] [rbp-18h]
  __int64 v19; // [rsp+50h] [rbp-10h] BYREF
  __int16 v20; // [rsp+58h] [rbp-8h]
  int v21; // [rsp+70h] [rbp+10h] BYREF
  __int64 v22; // [rsp+78h] [rbp+18h] BYREF

  v1 = *((_WORD *)a1 + 8);
  if ( !v1 )
  {
LABEL_6:
    if ( (unsigned int)dword_1C00E3108 > 5 && tlgKeywordOn((__int64)&dword_1C00E3108, 0x400000000000LL) )
    {
      v6 = (unsigned __int8 *)&unk_1C00CF9D9;
      v7 = *(_QWORD *)(v5 + 24) + 4008LL;
      v21 = v4;
LABEL_9:
      v22 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
        v2,
        v6,
        v3,
        v4,
        (__int64)&v21,
        &v22);
      return;
    }
    return;
  }
  if ( v1 != 1 )
  {
    if ( v1 == 2 )
    {
      if ( (unsigned int)dword_1C00E3108 > 5 && tlgKeywordOn((__int64)&dword_1C00E3108, 0x400000000000LL) )
      {
        v11 = *(_QWORD *)(v10 + 24);
        v21 = 2;
        v12 = *(_QWORD *)(v11 + 24);
        v17 = *(_QWORD *)(v12 + 80);
        v18 = *(_WORD *)(v12 + 72) & 0xFFFE;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperBinary>(
          65534LL,
          byte_1C00CF671,
          v8,
          v9,
          (__int64)&v21,
          &v17);
      }
      return;
    }
    if ( v1 <= 2 || v1 > 5 )
      return;
    goto LABEL_6;
  }
  if ( *((_QWORD *)a1->Context + 2) )
  {
    if ( (unsigned int)dword_1C00E3108 > 5 && tlgKeywordOn((__int64)&dword_1C00E3108, 0x400000000000LL) )
    {
      v17 = *(_QWORD *)(v15 + 152);
      v18 = *(_WORD *)(v15 + 144) & 0xFFFE;
      v19 = *(_QWORD *)(v15 + 120);
      v16 = *(_WORD *)(v15 + 112) & 0xFFFE;
      v21 = 1;
      v20 = v16;
      v22 = v14 + 672;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperBinary,_tlgWrapperBinary>(
        65534LL,
        byte_1C00CF6E5,
        v13,
        v14,
        (__int64)&v21,
        &v22,
        &v19,
        &v17);
    }
  }
  else if ( (unsigned int)dword_1C00E3108 > 5 && tlgKeywordOn((__int64)&dword_1C00E3108, 0x400000000000LL) )
  {
    v7 = v4 + 672;
    v21 = 1;
    v6 = (unsigned __int8 *)&unk_1C00CF744;
    goto LABEL_9;
  }
}
