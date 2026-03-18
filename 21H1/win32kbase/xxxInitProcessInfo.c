/*
 * XREFs of xxxInitProcessInfo @ 0x1C006A66C
 * Callers:
 *     xxxUserProcessCallout @ 0x1C0066B70 (xxxUserProcessCallout.c)
 * Callees:
 *     ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C000A878 (-CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     GetProcessLuid @ 0x1C00147D0 (GetProcessLuid.c)
 *     SetAppStarting @ 0x1C0030750 (SetAppStarting.c)
 *     ?MarkImmersiveProcess@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@@Z @ 0x1C0030C60 (-MarkImmersiveProcess@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@@Z.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0056F80 (WPP_RECORDER_SF_qDD.c)
 *     CitProcessCallout @ 0x1C006AF60 (CitProcessCallout.c)
 *     WPP_RECORDER_SF_sq @ 0x1C00A04A0 (WPP_RECORDER_SF_sq.c)
 *     xxxSetProcessInitState @ 0x1C00A0580 (xxxSetProcessInitState.c)
 *     ?GetSpriteFillColor@@YAKXZ @ 0x1C00CE018 (-GetSpriteFillColor@@YAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C012F5E0 (McTemplateK0_EtwWriteTransfer.c)
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
  __int64 v16; // rcx
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
  __int64 v28; // rdx
  unsigned int v29; // ecx
  int Win32KFilterSet; // eax
  int v31; // ecx
  int v32; // [rsp+20h] [rbp-50h]
  PVOID v33; // [rsp+40h] [rbp-30h] BYREF
  PVOID TokenInformation; // [rsp+48h] [rbp-28h] BYREF
  PVOID P; // [rsp+50h] [rbp-20h] BYREF
  __int128 v36; // [rsp+58h] [rbp-18h]
  __int64 v37; // [rsp+68h] [rbp-8h]
  int v38; // [rsp+90h] [rbp+20h] BYREF

  v6 = (*((_DWORD *)a1 + 3) & 0x8000) == 0;
  LODWORD(v33) = 0;
  TokenInformation = 0LL;
  P = 0LL;
  v38 = 0;
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
      v12 = SeQueryInformationToken(Token, TokenUIAccess, &v33);
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
      if ( *(_QWORD *)P && (int)RtlGetAppContainerSidType(*(_QWORD *)P, &v38) >= 0 )
        *((_DWORD *)a1 + 222) = v38;
      else
        *((_DWORD *)a1 + 222) = 0;
      ExFreePoolWithTag(P, 0);
      P = 0LL;
      if ( (_DWORD)v33 )
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
          (__int64)&WPP_b90bd84c38ec3dda007edf3579337c68_Traceguids);
      SpriteFillColor = GetSpriteFillColor();
      v15 = *(_QWORD *)a1;
      *((_DWORD *)a1 + 273) = SpriteFillColor;
      if ( PsGetProcessWow64Process(v15) )
        *((_DWORD *)a1 + 3) |= 0x80u;
      v16 = *(_QWORD *)a1;
      *((_QWORD *)a1 + 113) = -1LL;
      *((_QWORD *)a1 + 114) = -1LL;
      xxxSetProcessInitState(v16, 128LL);
      SetAppStarting((__int64)a1);
      v20 = -1073741637;
      v21 = *(_OWORD *)((char *)a1 + 296);
      v22 = *((_QWORD *)a1 + 39);
      *((_QWORD *)a1 + 47) = gppiList;
      gppiList = (__int64)a1;
      v23 = *((_DWORD *)a1 + 205) & 0x30;
      v37 = v22;
      v36 = v21;
      if ( v23 != 16 && (gdwPUDFlags & 0x8000000) != 0 )
      {
        v24 = qword_1C0258280 ? qword_1C0258280() : -1073741637;
        if ( v24 >= 0 )
        {
          if ( qword_1C0258288 ? qword_1C0258288(*(_QWORD *)a1) : 0 )
            *((_DWORD *)a1 + 3) |= 0x100u;
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = "set";
        if ( (*((_DWORD *)a1 + 3) & 0x100) == 0 )
          v26 = "NOT";
        WPP_RECORDER_SF_sq((unsigned int)"NOT", v17, v18, v19, v32, (__int64)v26, (char)a1);
      }
      v27 = *((_QWORD *)a1 + 39);
      v36 = *(_OWORD *)((char *)a1 + 296);
      v37 = v27;
      GetProcessLuid(0LL, (PLUID)((char *)a1 + 780));
      LOBYTE(v28) = 1;
      *((_DWORD *)a1 + 100) = gcSysExpunge;
      *((_DWORD *)a1 + 190) = 0;
      CitProcessCallout(a1, v28);
      v29 = *((_DWORD *)a1 + 205) & 0xFFB87FFF;
      *((_WORD *)a1 + 142) = 96;
      *((_DWORD *)a1 + 205) = v29;
      *((_DWORD *)a1 + 70) = 24592;
      if ( (v29 & 0x30) == 0x20 )
        *((_DWORD *)a1 + 205) = v29 | 0x100000;
      Win32KFilterSet = PsGetWin32KFilterSet();
      v31 = 0;
      if ( Win32KFilterSet == 5 )
        v31 = 0x1000000;
      *((_DWORD *)a1 + 205) = v31 & 0xF7FFFFFF | *((_DWORD *)a1 + 205) & 0xF6FFFFFF;
      if ( *((_WORD *)gpsi + 3499) )
      {
        if ( qword_1C0257E38 )
          v20 = qword_1C0257E38();
        if ( v20 < 0 )
        {
          *((_WORD *)a1 + 142) = *((_WORD *)gpsi + 3499);
        }
        else if ( qword_1C0257E40 )
        {
          qword_1C0257E40(a1);
        }
      }
      return 0LL;
    }
  }
  return result;
}
