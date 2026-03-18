/*
 * XREFs of ?Initialize@InkProcessor@@SGJXZ @ 0xE8C30
 * Callers:
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 * Callees:
 *     ??0InkProcessor@@AAE@XZ @ 0xE8C70 (--0InkProcessor@@AAE@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x14061B (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 */

int __stdcall InkProcessor::Initialize()
{
  int v0; // esi
  InkProcessor *v1; // eax
  int v2; // ecx
  struct tagPOINTER_INFO **v3; // eax
  int v5; // [esp+4h] [ebp-4h] BYREF

  v0 = 0;
  if ( !InkProcessor::s_pInstance )
  {
    v1 = (InkProcessor *)Win32AllocPoolZInit(56, 1349217865);
    if ( v1 )
      v3 = (struct tagPOINTER_INFO **)InkProcessor::InkProcessor(v1);
    else
      v3 = 0;
    InkProcessor::s_pInstance = v3;
    if ( !v3 )
    {
      v0 = -1073741801;
      if ( (unsigned int)CallbackContext > 2 )
      {
        v5 = -1073741801;
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
          (int)&CallbackContext,
          (int)&unk_2558E4,
          v2,
          v2,
          (int)&v5);
      }
    }
  }
  return v0;
}
