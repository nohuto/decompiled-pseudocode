/*
 * XREFs of ?VerifyAndSetCallType@TelephonyControllerCallInstance@@AEAAJPEAU_TelephonyInstanceData@@@Z @ 0x180144594
 * Callers:
 *     ?BeginCall@TelephonyControllerCallInstance@@UEAAJPEAU_TelephonyInstanceData@@@Z @ 0x180143E60 (-BeginCall@TelephonyControllerCallInstance@@UEAAJPEAU_TelephonyInstanceData@@@Z.c)
 *     ?EndCall@TelephonyControllerCallInstance@@UEAAJPEAU_TelephonyInstanceData@@@Z @ 0x180143FA0 (-EndCall@TelephonyControllerCallInstance@@UEAAJPEAU_TelephonyInstanceData@@@Z.c)
 *     ?Initialize@TelephonyControllerCallInstance@@IEAAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIKsControl@@PEAU_TelephonyInstanceData@@@Z @ 0x180144164 (-Initialize@TelephonyControllerCallInstance@@IEAAJAEAV-$unique_any_t@V-$unique_storage@U-$resour.c)
 *     ?ProviderChange@TelephonyControllerCallInstance@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z @ 0x180144200 (-ProviderChange@TelephonyControllerCallInstance@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyTyp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TelephonyControllerCallInstance::VerifyAndSetCallType(
        TelephonyControllerCallInstance *this,
        struct _TelephonyInstanceData *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( a2 )
  {
    if ( *(_DWORD *)a2 )
    {
      if ( *(_DWORD *)a2 == 1 )
      {
        *((_DWORD *)this + 10) = 1;
      }
      else if ( *(_DWORD *)a2 == 2 )
      {
        *((_DWORD *)this + 10) = 2;
      }
      else
      {
        return (unsigned int)-2147023728;
      }
    }
    else
    {
      *((_DWORD *)this + 10) = 0;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
