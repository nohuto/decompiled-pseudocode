/*
 * XREFs of ?ValidateDeviceFeatures@InkDevice@@ABEJXZ @ 0x1B1367
 * Callers:
 *     ?Initialize@InkDevice@@UAEJPAURawInputManagerDeviceObject@@@Z @ 0x1B0877 (-Initialize@InkDevice@@UAEJPAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x14061B (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 */

int __thiscall InkDevice::ValidateDeviceFeatures(InkDevice *this)
{
  int v1; // esi
  int v3; // [esp+4h] [ebp-4h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 17) == 1 )
  {
    if ( *((_DWORD *)this + 18) == 1 )
    {
      if ( *((_DWORD *)this + 23) == 1 )
      {
        if ( *((_DWORD *)this + 16) != 72 )
        {
          v1 = -1073741762;
          if ( (unsigned int)CallbackContext > 2 )
          {
            v3 = -1073741762;
            goto LABEL_13;
          }
        }
      }
      else
      {
        v1 = -1073741637;
        if ( (unsigned int)CallbackContext > 2 )
        {
          v3 = -1073741637;
          goto LABEL_13;
        }
      }
    }
    else
    {
      v1 = -1073741637;
      if ( (unsigned int)CallbackContext > 2 )
      {
        v3 = -1073741637;
        goto LABEL_13;
      }
    }
  }
  else
  {
    v1 = -1073741637;
    if ( (unsigned int)CallbackContext > 2 )
    {
      v3 = -1073741637;
LABEL_13:
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (int)&CallbackContext,
        byte_2558E4,
        (int)this,
        (int)this,
        (int)&v3);
    }
  }
  return v1;
}
