/*
 * XREFs of ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@H@Z @ 0x1800F40FC
 * Callers:
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18000C690 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4.c)
 *     ?EnforceEndpointExclusivity@CConstraintModelResourceManager@@UEAAJPEBG0KKW4AUDIO_DIRECTION@@@Z @ 0x1800F3CF0 (-EnforceEndpointExclusivity@CConstraintModelResourceManager@@UEAAJPEBG0KKW4AUDIO_DIRECTION@@@Z.c)
 *     ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x1800F4C60 (-QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEBGW4AUDIO_DIRECTION@@.c)
 * Callees:
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x1800F4200 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4_ea_1800F4200.c)
 *     WPP_SF_SSddSS @ 0x1800F620C (WPP_SF_SSddSS.c)
 */

__int64 __fastcall CConstraintModelResourceManager::InternalEnforceEndpointExclusivity(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7)
{
  const wchar_t *v11; // rdx
  const wchar_t *v12; // r9
  const wchar_t *v13; // rax

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v11 = L"Check";
    LODWORD(v12) = a2;
    if ( !a7 )
      v11 = L"Acquire";
    v13 = L"Render";
    if ( a6 )
      v13 = L"Capture";
    if ( !a2 )
      v12 = L"n/a";
    WPP_SF_SSddSS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      (_DWORD)v11,
      (unsigned int)L"n/a",
      (_DWORD)v12,
      a3,
      a4,
      a5,
      (__int64)v13,
      (__int64)v11);
  }
  return CConstraintModelResourceManager::InternalEnforceEndpointExclusivity(a1, a2, a3, a4, a5, a6, a7, 0);
}
