/*
 * XREFs of ?AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z @ 0x1800F3260
 * Callers:
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18000C690 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4.c)
 *     ?AcquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x1800F3070 (-AcquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z.c)
 *     ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x1800F4C60 (-QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEBGW4AUDIO_DIRECTION@@.c)
 *     ?ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEA_K@Z @ 0x1800F531C (-ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEA_K@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800340C0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180056810 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     WPP_SF_d @ 0x1800BC05C (WPP_SF_d.c)
 *     ?GetRmResourceSet@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKPEAURmResourceInfo@@@Z @ 0x1800F4080 (-GetRmResourceSet@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKPEAURmResourceInfo@.c)
 *     ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800F4A2C (-ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     WPP_SF_dI @ 0x1800F638C (WPP_SF_dI.c)
 */

__int64 __fastcall CConstraintModelResourceManager::AcquireResourceHandle(
        CConstraintModelResourceManager *this,
        struct _ResourceInfo *a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned __int64 *a6)
{
  unsigned int v7; // r14d
  struct RmResourceInfo *v10; // rax
  CConstraintModelResourceManager *v11; // rcx
  __int64 v12; // r8
  struct RmResourceInfo *v13; // rdi
  int RmResourceSet; // ebx
  DWORD CurrentProcessId; // eax
  DWORD v16; // eax
  int v17; // r15d
  int v19; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-21h] BYREF
  HANDLE Handles; // [rsp+60h] [rbp-19h] BYREF
  __int128 v22; // [rsp+68h] [rbp-11h] BYREF

  v20 = 0LL;
  v19 = 0;
  v7 = 100;
  if ( a4 <= 0x64 )
    v7 = a4;
  v10 = (struct RmResourceInfo *)operator new(saturated_mul(a3, 0x18uLL));
  v13 = v10;
  if ( v10 )
  {
    RmResourceSet = CConstraintModelResourceManager::GetRmResourceSet(v11, a2, a3, v7, v10);
    if ( RmResourceSet >= 0 )
    {
      if ( !a5 )
        goto LABEL_11;
      CurrentProcessId = GetCurrentProcessId();
      RmResourceSet = RmAvailabilityCheck(a3, v13, v7, CurrentProcessId);
    }
  }
  else
  {
    RmResourceSet = -2147024882;
  }
  if ( a5 )
  {
    if ( v13 )
      operator delete(v13);
    return (unsigned int)RmResourceSet;
  }
LABEL_11:
  if ( RmResourceSet < 0
    || (v16 = GetCurrentProcessId(),
        RmResourceSet = RmAcquireResources(a3, v13, v7, v16, this, *((_QWORD *)this + 13), 0, 0, &v19, &v20),
        RmResourceSet < 0) )
  {
    RmResourceSet = -2005139335;
  }
  else if ( v19 )
  {
    v17 = 0;
    while ( 1 )
    {
      Handles = (HANDLE)*((_QWORD *)this + 13);
      if ( WaitForMultipleObjects(1u, &Handles, 0, 0x3E8u) )
      {
        RmResourceSet = -2005139335;
      }
      else
      {
        CConstraintModelResourceManager::ProcessRevokedResources(this);
        v22 = 0LL;
        while ( (int)RmGetNotification(v20, &v22) >= 0 )
        {
          if ( (_DWORD)v22 )
          {
            if ( (_DWORD)v22 == 1 )
              RmResourceSet = -2005139335;
          }
          else
          {
            v17 = 1;
          }
        }
      }
      if ( RmResourceSet < 0 )
        break;
      if ( v17 )
        goto LABEL_29;
    }
    RmReleaseResources(v20);
  }
  else
  {
LABEL_29:
    *a6 = v20;
  }
  if ( v13 )
    operator delete(v13);
  if ( RmResourceSet < 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xFu,
        (__int64)&WPP_4eb83dabec2331805ae9d1ae37e3a182_Traceguids,
        RmResourceSet);
    }
  }
  else if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dI(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, v12, v7, *a6);
  }
  return (unsigned int)RmResourceSet;
}
