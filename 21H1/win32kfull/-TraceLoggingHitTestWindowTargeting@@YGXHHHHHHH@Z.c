/*
 * XREFs of ?TraceLoggingHitTestWindowTargeting@@YGXHHHHHHH@Z @ 0x1867EB
 * Callers:
 *     _TouchTargetChildTree@24 @ 0x17BA7D (_TouchTargetChildTree@24.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@444444@Z @ 0x1861A6 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@@-$_tlgWriteTemplat.c)
 */

void __userpurge TraceLoggingHitTestWindowTargeting(
        int a1@<edx>,
        int a2@<ecx>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v11; // ecx
  _DWORD v12[3]; // [esp+8h] [ebp-18h] BYREF
  _DWORD *v13; // [esp+14h] [ebp-Ch] BYREF
  int v14; // [esp+18h] [ebp-8h] BYREF
  int v15; // [esp+1Ch] [ebp-4h] BYREF

  if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 0x200000000000LL) )
  {
    v13 = v12;
    v12[1] = 0;
    v12[0] = 0x1000000;
    v15 = a1;
    v14 = a2;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v11,
      byte_255FBC,
      v11,
      v11,
      (int *)&v13,
      (int)&v14,
      (int)&v15,
      (int)&a3,
      (int)&a4,
      (int)&a5,
      (int)&a6,
      (int)&a7);
  }
}
