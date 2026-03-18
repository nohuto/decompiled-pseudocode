/*
 * XREFs of ?TraceLoggingMiPSuppressedForWindow@@YGXQBUtagWND@@IH@Z @ 0x186A5C
 * Callers:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@33@Z @ 0x1406B6 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUI.c)
 */

void __userpurge TraceLoggingMiPSuppressedForWindow(
        int a1@<edx>,
        int a2@<ecx>,
        const struct tagWND *a3,
        unsigned int a4,
        int a5)
{
  const struct tagWND *v5; // [esp+4h] [ebp-Ch] BYREF
  int v6; // [esp+8h] [ebp-8h] BYREF
  int v7; // [esp+Ch] [ebp-4h] BYREF

  if ( (unsigned int)dword_266280 > 5 )
  {
    v5 = a3;
    v6 = a1;
    v7 = a2;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      a2,
      byte_25590D,
      a2,
      a2,
      (int)&v7,
      (int)&v6,
      (int)&v5);
  }
}
