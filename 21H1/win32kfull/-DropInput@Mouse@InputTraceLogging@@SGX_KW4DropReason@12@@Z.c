/*
 * XREFs of ?DropInput@Mouse@InputTraceLogging@@SGX_KW4DropReason@12@@Z @ 0x178673
 * Callers:
 *     ?QueuePTPMouseEvent@@YGXPAXUtagPOINT@@K_K2PAU_PTPMouseLatencyTracker@@@Z @ 0xF3B5E (-QueuePTPMouseEvent@@YGXPAXUtagPOINT@@K_K2PAU_PTPMouseLatencyTracker@@@Z.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapSz@D@@@Z @ 0x146888 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 */

void __stdcall InputTraceLogging::Mouse::DropInput(int a1, int a2)
{
  int v2; // ecx
  _DWORD v3[3]; // [esp+4h] [ebp-10h] BYREF
  int v4; // [esp+10h] [ebp-4h] BYREF

  if ( (unsigned int)dword_2689E8 > 4 && _tlgKeywordOn(&dword_2689E8, 64LL) )
  {
    v3[0] = a1;
    v3[1] = a2;
    v4 = (int)v3;
    a2 = (int)"PTPQueueFull";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapSz<char>>(
      (int)&dword_2689E8,
      byte_25576B,
      v2,
      v2,
      &v4,
      (const char **)&a2);
  }
}
