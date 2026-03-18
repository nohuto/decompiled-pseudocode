/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapSz@D@@@Z @ 0x146888
 * Callers:
 *     ?xxxMouseEventDirect@@YGHKKKK_K0KH@Z @ 0xAF5BA (-xxxMouseEventDirect@@YGHKKKK_K0KH@Z.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SGX_KW4DropReason@12@@Z @ 0x178673 (-DropInput@Mouse@InputTraceLogging@@SGX_KW4DropReason@12@@Z.c)
 *     _OnPTPMouseOperation@0 @ 0x178BB9 (_OnPTPMouseOperation@0.c)
 *     ?xxxSendMousePromotion@@YGXABUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x17DC6B (-xxxSendMousePromotion@@YGXABUtagMOUSE_PROMOTION_ENTRY@@H@Z.c)
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AAEJFPAUtagWND@@@Z @ 0x1B38DC (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AAEJFPAUtagWND@@@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapSz<char>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int *a5,
        const char **a6)
{
  char *v6; // esi
  int v8; // ecx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+Ch] [ebp-44h] BYREF
  int v11; // [esp+2Ch] [ebp-24h]
  int v12; // [esp+30h] [ebp-20h]
  int v13; // [esp+34h] [ebp-1Ch]
  int v14; // [esp+38h] [ebp-18h]
  char *v15; // [esp+3Ch] [ebp-14h]
  int v16; // [esp+40h] [ebp-10h]
  int v17; // [esp+44h] [ebp-Ch]
  int v18; // [esp+48h] [ebp-8h]

  v6 = (char *)*a6;
  if ( *a6 )
  {
    v8 = &(*a6)[strlen(*a6) + 1] - v6;
  }
  else
  {
    v6 = byte_FC858;
    v8 = 1;
  }
  v15 = v6;
  v16 = 0;
  v17 = v8;
  v11 = *a5;
  v18 = 0;
  v12 = 0;
  v13 = 8;
  v14 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 4u, &UserData);
}
