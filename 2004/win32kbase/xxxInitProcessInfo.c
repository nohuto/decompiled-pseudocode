/*
 * XREFs of xxxInitProcessInfo @ 0x1C00C2204
 * Callers:
 *     xxxUserProcessCallout @ 0x1C0072150 (xxxUserProcessCallout.c)
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x1C003EA00 (WPP_RECORDER_SF_qDD.c)
 *     SetAppStarting @ 0x1C003F130 (SetAppStarting.c)
 *     ?MarkImmersiveProcess@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@@Z @ 0x1C003F800 (-MarkImmersiveProcess@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@@Z.c)
 *     GetProcessLuid @ 0x1C0079F30 (GetProcessLuid.c)
 *     CitProcessCallout @ 0x1C009E2D8 (CitProcessCallout.c)
 *     WPP_RECORDER_SF_sq @ 0x1C00AE190 (WPP_RECORDER_SF_sq.c)
 *     xxxSetProcessInitState @ 0x1C00AE270 (xxxSetProcessInitState.c)
 *     ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C00BC78C (-CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     ?GetSpriteFillColor@@YAKXZ @ 0x1C00CEB18 (-GetSpriteFillColor@@YAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C01295F0 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall xxxInitProcessInfo(struct _W32PROCESS *a1, PACCESS_TOKEN Token, int a3, int a4, int a5)
{
  bool v6; // zf
  __int64 result; // rax
  NTSTATUS v11; // eax
  NTSTATUS v12; // edi
  int v13; // ecx
  unsigned int SpriteFillColor; // eax
  __int64 v15; // rcx
  void *v16; // rcx
  int v17; // edx
  int v18; // r8d
  int v19; // r9d
  int v20; // edi
  __int128 v21; // xmm0
  __int64 v22; // xmm1_8
  char v23; // al
  int v24; // eax
  const char *v26; // rax
  __int64 v27; // xmm1_8
  __int64 v28; // rcx
  int Win32KFilterSet; // eax
  int v30; // ecx
  int v31; // [rsp+20h] [rbp-50h]
  PVOID v32; // [rsp+40h] [rbp-30h] BYREF
  PVOID TokenInformation; // [rsp+48h] [rbp-28h] BYREF
  PVOID P; // [rsp+50h] [rbp-20h] BYREF
  __int128 v35; // [rsp+58h] [rbp-18h]
  __int64 v36; // [rsp+68h] [rbp-8h]
  int v37; // [rsp+90h] [rbp+20h] BYREF

  v6 = (*((_DWORD *)a1 + 3) & 0x8000) == 0;
  LODWORD(v32) = 0;
  TokenInformation = 0LL;
  P = 0LL;
  v37 = 0;
  if ( !v6 )
    return 1073741851LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0_EtwWriteTransfer(a1, &InitiateGuiProcessExecution, &W32kControlGuid);
  result = CheckProcessAndSessionState(a1);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)a1 + 3) |= 0x8000u;
    *((_QWORD *)a1 + 37) = 0LL;
    *((_QWORD *)a1 + 38) = 0LL;
    *((_DWORD *)a1 + 78) = 0;
    *((_DWORD *)a1 + 171) = 3;
    *((_DWORD *)a1 + 172) = 3;
    HIDWORD(TokenInformation) = a4;
    v11 = SeQueryInformationToken(Token, TokenIntegrityLevel, &TokenInformation);
    v12 = v11;
    if ( UIPrivelegeIsolation::fEnforce )
    {
      if ( v11 < 0 )
        return 3221225473LL;
      v13 = HIDWORD(TokenInformation);
      if ( HIDWORD(TokenInformation) )
      {
        if ( (_DWORD)TokenInformation != 4096 )
          return 3221225473LL;
      }
      *((_DWORD *)a1 + 220) = (_DWORD)TokenInformation;
      *((_DWORD *)a1 + 221) = v13;
    }
    if ( v11 >= 0 )
      v12 = SeQueryInformationToken(Token, TokenUIAccess, &v32);
    MarkImmersiveProcess((__int64)a1, (__int64)Token, a3);
    *((_DWORD *)a1 + 205) ^= (*((_DWORD *)a1 + 205) ^ (a5 << 7)) & 0x80;
    if ( v12 < 0 )
      return (unsigned int)v12;
    v12 = SeQueryInformationToken(Token, TokenAppContainerSid, &P);
    if ( v12 < 0 )
    {
      return (unsigned int)v12;
    }
    else
    {
      if ( *(_QWORD *)P && (int)RtlGetAppContainerSidType(*(_QWORD *)P, &v37) >= 0 )
        *((_DWORD *)a1 + 222) = v37;
      else
        *((_DWORD *)a1 + 222) = 0;
      ExFreePoolWithTag(P, 0);
      P = 0LL;
      if ( (_DWORD)v32 )
      {
        *((_DWORD *)a1 + 3) |= 0x80080000;
        *((_DWORD *)a1 + 205) |= 2u;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDD(
          (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
          4u,
          0x12u,
          0x12u,
          (__int64)&WPP_15558b1eb0723b696cc38695125fa388_Traceguids);
      SpriteFillColor = GetSpriteFillColor();
      v15 = *(_QWORD *)a1;
      *((_DWORD *)a1 + 273) = SpriteFillColor;
      if ( PsGetProcessWow64Process(v15) )
        *((_DWORD *)a1 + 3) |= 0x80u;
      v16 = *(void **)a1;
      *((_QWORD *)a1 + 113) = -1LL;
      *((_QWORD *)a1 + 114) = -1LL;
      xxxSetProcessInitState(v16, 128);
      SetAppStarting((__int64)a1);
      v20 = -1073741637;
      v21 = *(_OWORD *)((char *)a1 + 296);
      v22 = *((_QWORD *)a1 + 39);
      *((_QWORD *)a1 + 47) = gppiList;
      gppiList = (__int64)a1;
      v23 = *((_DWORD *)a1 + 205) & 0x30;
      v36 = v22;
      v35 = v21;
      if ( v23 != 16 && (gdwPUDFlags & 0x8000000) != 0 )
      {
        v24 = qword_1C02522C0 ? qword_1C02522C0() : -1073741637;
        if ( v24 >= 0 )
        {
          if ( qword_1C02522C8 ? qword_1C02522C8(*(_QWORD *)a1) : 0 )
            *((_DWORD *)a1 + 3) |= 0x100u;
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = "set";
        if ( (*((_DWORD *)a1 + 3) & 0x100) == 0 )
          v26 = "NOT";
        WPP_RECORDER_SF_sq((unsigned int)"NOT", v17, v18, v19, v31, (__int64)v26, (char)a1);
      }
      v27 = *((_QWORD *)a1 + 39);
      v35 = *(_OWORD *)((char *)a1 + 296);
      v36 = v27;
      GetProcessLuid(0LL, (PLUID)((char *)a1 + 780));
      *((_DWORD *)a1 + 100) = gcSysExpunge;
      *((_DWORD *)a1 + 190) = 0;
      CitProcessCallout((__int64)a1, 1);
      v28 = *((_DWORD *)a1 + 205) & 0xFFB87FFF;
      *((_WORD *)a1 + 142) = 96;
      *((_DWORD *)a1 + 205) = v28;
      *((_DWORD *)a1 + 70) = 24592;
      if ( (v28 & 0x30) == 0x20 )
      {
        LODWORD(v28) = v28 | 0x100000;
        *((_DWORD *)a1 + 205) = v28;
      }
      Win32KFilterSet = PsGetWin32KFilterSet(v28);
      v30 = 0;
      if ( Win32KFilterSet == 5 )
        v30 = 0x1000000;
      *((_DWORD *)a1 + 205) = v30 & 0xF7FFFFFF | *((_DWORD *)a1 + 205) & 0xF6FFFFFF;
      if ( *((_WORD *)gpsi + 3499) )
      {
        if ( qword_1C0251E78 )
          v20 = qword_1C0251E78();
        if ( v20 < 0 )
        {
          *((_WORD *)a1 + 142) = *((_WORD *)gpsi + 3499);
        }
        else if ( qword_1C0251E80 )
        {
          qword_1C0251E80(a1);
        }
      }
      return 0LL;
    }
  }
  return result;
}
