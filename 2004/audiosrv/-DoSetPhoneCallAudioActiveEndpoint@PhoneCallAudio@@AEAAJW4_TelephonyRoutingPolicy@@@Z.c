/*
 * XREFs of ?DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x18010F914
 * Callers:
 *     ?SetRoutingPolicy@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x180110AA0 (-SetRoutingPolicy@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x180110BD0 (-StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x1800676D0 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     memset_0 @ 0x18006B69C (memset_0.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x180111E2C (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z @ 0x180113B0C (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z.c)
 *     ?UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_JPEAU_DynamicRoutingRule@@@Z @ 0x180113F78 (-UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_JPEAU_DynamicRoutingRule@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PhoneCallAudio::DoSetPhoneCallAudioActiveEndpoint(__int64 a1, int a2)
{
  int v4; // edi
  int v5; // edi
  unsigned int v6; // ebx
  int v7; // ebx
  char v8; // di
  __int64 v9; // r8
  struct IAudioProcess *v10; // rdx
  int updated; // eax
  __int64 v12; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+30h] [rbp-D8h]
  __int64 v16; // [rsp+38h] [rbp-D0h]
  int v17; // [rsp+40h] [rbp-C8h]
  _DWORD v18[5]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v19[268]; // [rsp+5Ch] [rbp-ACh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)(a1 + 80));
  if ( !a2 )
  {
    v7 = 4;
    goto LABEL_10;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v7 = 6;
    goto LABEL_10;
  }
  v5 = v4 - 4;
  if ( !v5 )
  {
    v7 = 5;
LABEL_10:
    *(_DWORD *)(a1 + 76) = v7;
    goto LABEL_11;
  }
  if ( v5 != 2 )
  {
    v6 = -2147024809;
    goto LABEL_20;
  }
  *(_DWORD *)(a1 + 76) = 2;
  v7 = 2;
LABEL_11:
  memset_0(v19, 0, 0x100uLL);
  v18[0] = 2;
  v18[3] = v7;
  v18[2] = 3;
  v8 = 1;
  v18[4] = 1;
  v18[1] = 2;
  v16 = a1;
  LOBYTE(v17) = 1;
  v9 = *(_QWORD *)(a1 + 152);
  v10 = *(struct IAudioProcess **)(a1 + 136);
  if ( v9 )
  {
    updated = DynamicAudioEndpointManager::UpdateRule(
                g_DynamicAudioEndpointManager,
                v10,
                v9,
                (struct _DynamicRoutingRule *)v18);
    v6 = updated;
    if ( updated < 0 )
    {
      v12 = 370LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
        (const char *)(unsigned int)updated);
      goto LABEL_18;
    }
  }
  else
  {
    updated = DynamicAudioEndpointManager::AddRule(
                g_DynamicAudioEndpointManager,
                v10,
                (struct _DynamicRoutingRule *)v18,
                (__int64 *)(a1 + 152));
    v6 = updated;
    if ( updated < 0 )
    {
      v12 = 374LL;
      goto LABEL_16;
    }
  }
  v6 = 0;
  v8 = 0;
LABEL_18:
  if ( v8 )
  {
    DynamicAudioEndpointManager::RemoveRule(
      g_DynamicAudioEndpointManager,
      *(struct IAudioProcess **)(a1 + 136),
      *(_QWORD *)(a1 + 152));
    *(_QWORD *)(a1 + 152) = 0LL;
  }
LABEL_20:
  if ( (_BYTE)v15 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
