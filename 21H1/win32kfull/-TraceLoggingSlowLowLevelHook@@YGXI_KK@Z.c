/*
 * XREFs of ?TraceLoggingSlowLowLevelHook@@YGXI_KK@Z @ 0x186FE5
 * Callers:
 *     ??1CCheckLLHookTime@@QAE@XZ @ 0x1A4DD2 (--1CCheckLLHookTime@@QAE@XZ.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@33@Z @ 0x186077 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6GJPBU_.c)
 */

void __userpurge TraceLoggingSlowLowLevelHook(
        int a1@<edx>,
        int a2@<ecx>,
        char a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  int v7; // ecx
  _DWORD *v8; // [esp+8h] [ebp-20h] BYREF
  char *v9; // [esp+Ch] [ebp-1Ch] BYREF
  int v10; // [esp+10h] [ebp-18h] BYREF
  _DWORD *v11; // [esp+14h] [ebp-14h] BYREF
  _DWORD v12[2]; // [esp+18h] [ebp-10h] BYREF
  _DWORD v13[2]; // [esp+20h] [ebp-8h] BYREF

  if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 0x400000000000LL) )
  {
    v12[1] = 0;
    v13[1] = 0;
    v8 = v12;
    v9 = &a3;
    v11 = v13;
    v12[0] = a1;
    v13[0] = 0x1000000;
    v10 = a2;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<8>,_tlgWrapperByRef<8>>(
      v7,
      byte_255990,
      v7,
      v7,
      (int *)&v11,
      (int)&v10,
      (int *)&v9,
      (int *)&v8);
  }
}
