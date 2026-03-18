/*
 * XREFs of ?PromoteToMouse@Pointer@InputTraceLogging@@SGXKGKG@Z @ 0x17D519
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YGXABUtagPOINTER_INFO@@GG@Z @ 0x17D9D9 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YGXABUtagPOINTER_INFO@@GG@Z.c)
 *     ?xxxPromotePointer@PointerPromotion@@YGHGKK@Z @ 0x17DB68 (-xxxPromotePointer@PointerPromotion@@YGHGKK@Z.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapperByVal@$01@@33@Z @ 0x17CBAC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$01@@U1@U1@@-$_tlgWriteTemplate@$$A6GJPBU_.c)
 */

void __userpurge InputTraceLogging::Pointer::PromoteToMouse(
        __int16 a1@<dx>,
        int a2@<ecx>,
        unsigned int a3,
        unsigned __int16 a4,
        unsigned int a5,
        unsigned __int16 a6)
{
  int v8; // ecx
  _WORD v9[3]; // [esp+12h] [ebp-Eh] BYREF
  int v10; // [esp+18h] [ebp-8h] BYREF
  int v11; // [esp+1Ch] [ebp-4h] BYREF

  if ( (unsigned int)dword_2689E8 > 4 && _tlgKeywordOn(&dword_2689E8, 32LL) )
  {
    *(_DWORD *)&v9[1] = a4;
    v10 = a3;
    v9[0] = a1;
    v11 = a2;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_2689E8,
      byte_25582E,
      v8,
      v8,
      (int)&v11,
      (int)v9,
      (int)&v10,
      (int)&v9[1]);
  }
}
