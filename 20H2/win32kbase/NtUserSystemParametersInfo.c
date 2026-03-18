/*
 * XREFs of NtUserSystemParametersInfo @ 0x1C01377E0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0045880 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     CheckAccess @ 0x1C0056DD0 (CheckAccess.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0059680 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32AllocPoolWithQuota @ 0x1C0059700 (Win32AllocPoolWithQuota.c)
 *     EtwTraceUIPISystemError @ 0x1C00774A0 (EtwTraceUIPISystemError.c)
 *     xxxSystemParametersInfo @ 0x1C008BBE0 (xxxSystemParametersInfo.c)
 *     PushW32ThreadLock @ 0x1C0096A30 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009715C (PopAndFreeAlwaysW32ThreadLock.c)
 *     SetLastNtError @ 0x1C00D234C (SetLastNtError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSystemParametersInfo(unsigned int a1, size_t Size, ULONG64 Src, char a4)
{
  __int64 v6; // r12
  unsigned int v8; // ebx
  struct tagTHREADINFO *v9; // rcx
  int v10; // eax
  __int64 CurrentProcessWin32Process; // rax
  bool v12; // zf
  unsigned int v13; // eax
  bool v14; // zf
  bool v15; // zf
  unsigned int v16; // eax
  __int64 v17; // r13
  unsigned int v18; // eax
  volatile void **v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _OWORD *v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // eax
  int v27; // eax
  const void *v28; // r15
  size_t v29; // rbx
  ULONG64 v30; // rdx
  _BYTE **v31; // rcx
  signed __int64 v32; // rax
  void *v33; // r15
  int v34; // r13d
  volatile void *v35; // xmm0_8
  volatile void **v36; // r9
  ULONG64 v37; // rdx
  __int64 v38; // rax
  ULONG64 v39; // r8
  _BYTE **v40; // rcx
  __int64 v41; // rax
  _OWORD *v42; // rdx
  __int64 v43; // rax
  _OWORD *v44; // rax
  __int64 v45; // rax
  volatile void **v46; // rdx
  _DWORD *v47; // r15
  char *v48; // rcx
  __int64 CurrentProcessWow64Process; // rax
  int v50; // edi
  int v51; // eax
  __int64 v52; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  struct tagPROCESSINFO *v58; // rax
  int v60; // [rsp+28h] [rbp-320h]
  volatile void **v61; // [rsp+30h] [rbp-318h]
  _DWORD *Address; // [rsp+38h] [rbp-310h]
  void *v63; // [rsp+48h] [rbp-300h]
  int v64; // [rsp+50h] [rbp-2F8h]
  unsigned int v65[4]; // [rsp+70h] [rbp-2D8h] BYREF
  __int128 v66; // [rsp+80h] [rbp-2C8h]
  __int128 v67; // [rsp+90h] [rbp-2B8h] BYREF
  __int64 v68; // [rsp+A0h] [rbp-2A8h]
  __int128 v69; // [rsp+A8h] [rbp-2A0h] BYREF
  __int64 v70; // [rsp+B8h] [rbp-290h]
  __int128 v71; // [rsp+D0h] [rbp-278h]
  volatile void *v72; // [rsp+E0h] [rbp-268h]
  _BYTE v73[608]; // [rsp+E8h] [rbp-260h] BYREF
  unsigned int v74; // [rsp+358h] [rbp+10h]
  unsigned int v75; // [rsp+368h] [rbp+20h]

  v74 = Size;
  v6 = (unsigned int)Size;
  v66 = 0LL;
  v8 = 0;
  Address = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v64 = 0;
  v65[0] = 0x2000;
  v65[1] = -1;
  EnterCrit(0, 1);
  v75 = a4 & 3;
  v9 = gptiCurrent;
  if ( (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0 )
  {
    v9 = *(struct tagTHREADINFO **)(*((_QWORD *)gptiCurrent + 53) + 768LL);
    v10 = *((_DWORD *)v9 + 6) & 8;
  }
  else
  {
    v10 = 0;
  }
  if ( !v10 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    if ( CheckAccess((unsigned int *)(CurrentProcessWin32Process + 880), v65) )
      goto LABEL_54;
  }
  if ( a1 <= 0x95 )
  {
    if ( a1 != 149 )
    {
      switch ( a1 )
      {
        case 2u:
        case 4u:
        case 6u:
        case 0xBu:
        case 0xDu:
        case 0xFu:
        case 0x11u:
        case 0x13u:
        case 0x14u:
        case 0x15u:
        case 0x17u:
        case 0x18u:
        case 0x1Au:
        case 0x1Cu:
        case 0x1Du:
        case 0x1Eu:
        case 0x20u:
        case 0x21u:
        case 0x22u:
        case 0x24u:
        case 0x25u:
        case 0x2Au:
        case 0x2Cu:
        case 0x2Eu:
        case 0x2Fu:
        case 0x31u:
        case 0x33u:
        case 0x35u:
        case 0x37u:
        case 0x39u:
        case 0x3Bu:
        case 0x3Du:
        case 0x41u:
        case 0x43u:
        case 0x45u:
        case 0x47u:
        case 0x49u:
        case 0x4Bu:
        case 0x4Cu:
        case 0x4Du:
        case 0x4Eu:
        case 0x51u:
        case 0x52u:
        case 0x55u:
        case 0x56u:
        case 0x57u:
        case 0x58u:
        case 0x5Au:
        case 0x5Bu:
        case 0x5Du:
        case 0x60u:
        case 0x61u:
        case 0x63u:
        case 0x65u:
        case 0x67u:
        case 0x69u:
        case 0x6Bu:
        case 0x6Du:
        case 0x6Fu:
        case 0x71u:
        case 0x75u:
        case 0x77u:
        case 0x93u:
          goto LABEL_316;
        default:
          goto LABEL_54;
      }
    }
    goto LABEL_316;
  }
  if ( a1 <= 0x101D )
  {
    if ( a1 == 4125 )
      goto LABEL_316;
    if ( a1 <= 0x1003 )
    {
      if ( a1 == 4099 )
        goto LABEL_316;
      if ( a1 <= 0xA6 )
      {
        if ( a1 == 166 || a1 == 151 || a1 == 153 || a1 == 155 )
          goto LABEL_316;
        v13 = a1 - 161;
        v12 = a1 == 161;
        goto LABEL_51;
      }
      if ( a1 == 169 || a1 == 171 || a1 == 173 || a1 == 175 )
        goto LABEL_316;
      v14 = a1 == 4097;
LABEL_53:
      if ( !v14 )
      {
LABEL_54:
        v17 = 4LL;
        goto LABEL_55;
      }
LABEL_316:
      v58 = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v9);
      EtwTraceUIPISystemError(v58, 0LL);
      v21 = 5LL;
      goto LABEL_317;
    }
    if ( a1 > 0x100F )
    {
      v15 = a1 == 4115;
      v16 = a1 - 4115;
    }
    else
    {
      if ( a1 == 4111 || a1 == 4101 )
        goto LABEL_316;
      v16 = a1 - 4103;
      v15 = a1 == 4103;
    }
    goto LABEL_48;
  }
  if ( a1 <= 0x2001 )
  {
    if ( a1 == 8193 )
      goto LABEL_316;
    if ( a1 <= 0x104B )
    {
      if ( a1 == 4171 || a1 == 4127 || a1 == 4135 || a1 == 4161 || a1 == 4163 )
        goto LABEL_316;
      v14 = a1 == 4169;
      goto LABEL_53;
    }
    v15 = a1 == 4173;
    v16 = a1 - 4173;
LABEL_48:
    if ( v15 )
      goto LABEL_316;
    v18 = v16 - 2;
    if ( !v18 )
      goto LABEL_316;
    v13 = v18 - 2;
    v12 = v13 == 0;
LABEL_51:
    if ( v12 )
      goto LABEL_316;
    v14 = v13 == 2;
    goto LABEL_53;
  }
  if ( a1 > 0x2015 )
  {
    v15 = a1 == 8215;
    v16 = a1 - 8215;
    goto LABEL_48;
  }
  switch ( a1 )
  {
    case 0x2015u:
      goto LABEL_316;
    case 0x2003u:
      goto LABEL_316;
    case 0x2005u:
      goto LABEL_316;
  }
  v17 = 4LL;
  if ( a1 == 8201 || a1 == 8207 || a1 == 8209 )
    goto LABEL_316;
LABEL_55:
  v19 = (volatile void **)Win32AllocPoolWithQuotaZInit(0x228uLL, 0x79747355u);
  v61 = v19;
  if ( !v19 )
  {
    v21 = 8LL;
LABEL_317:
    v50 = 0;
    UserSetLastError(v21, v20);
    goto LABEL_318;
  }
  PushW32ThreadLock((__int64)v19, (__int64)&v69, (__int64)Win32FreePool);
  if ( a1 <= 0x54 )
  {
    if ( a1 >= 0x53 )
      goto LABEL_305;
    if ( a1 <= 0x2E )
    {
      if ( a1 == 46 )
      {
        v8 = 108;
        goto LABEL_267;
      }
      if ( a1 <= 0x18 )
      {
        if ( a1 == 24 )
        {
LABEL_71:
          if ( (Src & 0xFFFFFFFFFFFF0000uLL) == 0 )
            goto LABEL_309;
LABEL_305:
          v63 = (void *)Src;
          if ( Src >= MmUserProbeAddress )
            Src = MmUserProbeAddress;
          *(_DWORD *)Src = *(_DWORD *)Src;
          v34 = 1;
          Src = (ULONG64)v61;
          LODWORD(v6) = v74;
          v8 = 4;
          v33 = v63;
          goto LABEL_311;
        }
        if ( a1 <= 0xE )
        {
          if ( a1 == 14 || a1 == 1 )
            goto LABEL_305;
          if ( a1 != 3 )
          {
            if ( a1 != 4 )
            {
              if ( a1 == 5 || a1 == 10 )
                goto LABEL_305;
              if ( a1 == 13 )
                goto LABEL_71;
              goto LABEL_279;
            }
            goto LABEL_73;
          }
          goto LABEL_75;
        }
        if ( a1 == 16 || a1 == 18 )
          goto LABEL_305;
        if ( a1 == 20 )
        {
          if ( !Src )
            Src = -1LL;
          if ( Src > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_82;
          goto LABEL_86;
        }
        v26 = a1 - 21;
        if ( a1 == 21 )
        {
          if ( (_DWORD)v6 == -1 )
            goto LABEL_309;
          if ( !Src )
          {
LABEL_82:
            LODWORD(v6) = -1;
            goto LABEL_309;
          }
LABEL_86:
          if ( Src >= MmUserProbeAddress )
            Src = MmUserProbeAddress;
          v27 = *(_DWORD *)Src;
          v60 = *(_DWORD *)Src;
          LODWORD(v66) = *(_DWORD *)Src;
          v28 = *(const void **)(Src + 8);
          *((_QWORD *)&v66 + 1) = v28;
          if ( ((unsigned __int8)v28 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v29 = (unsigned __int16)v27;
          v30 = (ULONG64)v28 + (unsigned __int16)v27 + 2;
          v31 = (_BYTE **)MmUserProbeAddress;
          if ( v30 < MmUserProbeAddress && (unsigned __int16)v27 <= HIWORD(v60) )
          {
            if ( (v27 & 1) != 0 )
              goto LABEL_95;
            if ( v30 > (unsigned __int64)v28 )
            {
LABEL_97:
              v32 = Win32AllocPoolWithQuota(v29 + 2, 0x79747355u);
              Src = v32;
              if ( !v32 )
                ExRaiseStatus(-1073741801);
              PushW32ThreadLock(v32, (__int64)&v67, (__int64)Win32FreePool);
              v64 = 1;
              memmove((void *)Src, v28, v29);
              *(_WORD *)(Src + 2 * (v29 >> 1)) = 0;
              LODWORD(v6) = v74;
              v8 = 0;
              v33 = 0LL;
              v34 = 0;
              goto LABEL_311;
            }
          }
          if ( (v27 & 1) == 0 )
          {
LABEL_96:
            **v31 = 0;
            goto LABEL_97;
          }
LABEL_95:
          MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress, v30, v24, v25);
          v31 = (_BYTE **)MmUserProbeAddress;
          goto LABEL_96;
        }
LABEL_106:
        if ( v26 == 1 )
          goto LABEL_305;
        goto LABEL_279;
      }
      if ( a1 <= 0x26 )
      {
        if ( a1 == 38 || a1 == 25 || a1 == 27 )
          goto LABEL_305;
        if ( a1 == 31 )
        {
          v8 = 92;
          goto LABEL_275;
        }
        v26 = a1 - 34;
        if ( a1 != 34 )
          goto LABEL_106;
        v8 = 92;
LABEL_267:
        if ( (Src & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v48 = (char *)(Src + v8);
        if ( (unsigned __int64)v48 > MmUserProbeAddress || (unsigned __int64)v48 < Src )
          *(_BYTE *)MmUserProbeAddress = 0;
        goto LABEL_272;
      }
      if ( a1 == 41 )
      {
        if ( (((_DWORD)v6 - 500) & 0xFFFFFFFB) != 0 )
          goto LABEL_293;
        v8 = v6;
        goto LABEL_275;
      }
      if ( a1 != 42 )
      {
        if ( a1 == 43 )
        {
          v8 = 20;
          goto LABEL_275;
        }
        if ( a1 != 44 )
        {
          if ( a1 != 45 )
            goto LABEL_279;
          v8 = 108;
          goto LABEL_275;
        }
        v8 = 20;
        goto LABEL_267;
      }
      if ( (((_DWORD)v6 - 500) & 0xFFFFFFFB) != 0 )
        goto LABEL_293;
      v8 = v6;
LABEL_266:
      if ( !v8 )
      {
LABEL_272:
        memmove(v61, (const void *)Src, v8);
        Src = (ULONG64)v61;
        goto LABEL_309;
      }
      goto LABEL_267;
    }
    if ( a1 <= 0x3C )
    {
      if ( a1 == 60 )
      {
LABEL_75:
        v8 = 12;
LABEL_275:
        v47 = v61;
LABEL_276:
        Address = (_DWORD *)Src;
        Src = (ULONG64)v47;
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v23);
        ProbeForWrite(Address, v8, CurrentProcessWow64Process != 0 ? 1 : 4);
        v34 = 1;
        *v47 = *Address;
        goto LABEL_310;
      }
      if ( a1 > 0x35 )
      {
        switch ( a1 )
        {
          case '6':
            v8 = 28;
            goto LABEL_275;
          case '7':
            v8 = 28;
            goto LABEL_267;
          case '8':
            goto LABEL_305;
          case ':':
            goto LABEL_133;
        }
        if ( a1 != 59 )
          goto LABEL_279;
      }
      else if ( a1 != 53 )
      {
        if ( a1 != 47 )
        {
          if ( a1 != 48 )
          {
            if ( a1 == 50 )
            {
              v8 = 24;
              goto LABEL_275;
            }
            if ( a1 == 51 )
            {
              v8 = 24;
              goto LABEL_267;
            }
            if ( a1 != 52 )
              goto LABEL_279;
LABEL_133:
            v8 = 8;
            goto LABEL_275;
          }
LABEL_136:
          v8 = 16;
          goto LABEL_275;
        }
LABEL_212:
        v8 = 16;
        goto LABEL_267;
      }
LABEL_142:
      v8 = 8;
      goto LABEL_267;
    }
    if ( a1 > 0x44 )
    {
      if ( a1 == 70 )
        goto LABEL_305;
      if ( a1 == 72 )
        goto LABEL_133;
      if ( a1 != 73 )
      {
        if ( a1 == 74 || a1 - 79 <= 1 )
          goto LABEL_305;
        goto LABEL_279;
      }
      goto LABEL_142;
    }
    switch ( a1 )
    {
      case 'D':
        goto LABEL_305;
      case '=':
LABEL_73:
        v8 = 12;
        goto LABEL_267;
      case '@':
        v8 = 56;
        goto LABEL_275;
      case 'A':
        v8 = 56;
        goto LABEL_267;
    }
    if ( a1 != 66 )
    {
      if ( a1 != 67 )
        goto LABEL_279;
      if ( Src + 24 < Src || Src + 24 > MmUserProbeAddress )
        Src = MmUserProbeAddress;
      v71 = *(_OWORD *)Src;
      v72 = *(volatile void **)(Src + 16);
      v35 = v72;
      v36 = v61;
      *(_OWORD *)v61 = v71;
      v61[2] = v35;
      Src = (ULONG64)v61;
      v37 = (ULONG64)v61[2];
      if ( (v37 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v38 = *((unsigned __int16 *)v61 + 4);
      v39 = v38 + v37 + 2;
      v40 = (_BYTE **)MmUserProbeAddress;
      if ( v39 < MmUserProbeAddress && (unsigned __int16)v38 <= *((_WORD *)v61 + 5) )
      {
        if ( (v38 & 1) != 0 )
          goto LABEL_162;
        if ( v39 > v37 )
          goto LABEL_164;
      }
      if ( (v38 & 1) == 0 )
      {
LABEL_163:
        **v40 = 0;
LABEL_164:
        if ( !*((_WORD *)v36 + 4) )
          v36[2] = 0LL;
        goto LABEL_309;
      }
LABEL_162:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress, v37, v39, v61);
      v40 = (_BYTE **)MmUserProbeAddress;
      v36 = v61;
      goto LABEL_163;
    }
    v8 = 16;
    v41 = PsGetCurrentProcessWow64Process(v23);
    ProbeForWrite((volatile void *)Src, 0x10uLL, v41 != 0 ? 1 : 4);
    Address = (_DWORD *)Src;
    *(_OWORD *)v61 = *(_OWORD *)Src;
    Src = (ULONG64)v61;
    ProbeForWrite(v61[1], 0x100uLL, 2u);
LABEL_167:
    v34 = 1;
LABEL_310:
    v33 = Address;
LABEL_311:
    v50 = xxxSystemParametersInfo(a1, v6, (void *)Src, v75);
    if ( v34 )
      memmove(v33, (const void *)Src, v8);
    goto LABEL_313;
  }
  if ( a1 <= 0x90 )
  {
    if ( a1 != 144 )
    {
      switch ( a1 )
      {
        case 0x59u:
          goto LABEL_133;
        case 0x5Au:
          goto LABEL_142;
        case 0x5Eu:
        case 0x5Fu:
        case 0x62u:
        case 0x64u:
        case 0x66u:
        case 0x68u:
        case 0x6Au:
        case 0x6Cu:
        case 0x6Eu:
        case 0x70u:
        case 0x72u:
        case 0x76u:
        case 0x78u:
        case 0x7Au:
        case 0x7Cu:
        case 0x7Eu:
        case 0x80u:
        case 0x82u:
        case 0x84u:
        case 0x86u:
        case 0x88u:
        case 0x8Au:
        case 0x8Cu:
        case 0x8Eu:
          goto LABEL_305;
        case 0x73u:
          Address = (_DWORD *)Src;
          Src = (ULONG64)v61;
          ProbeForWrite(Address, 2 * v6, 2u);
          if ( (unsigned int)v6 >= 0x104 )
            LODWORD(v6) = 260;
          v8 = 2 * v6;
          goto LABEL_167;
        case 0x74u:
          goto LABEL_75;
        case 0x75u:
          goto LABEL_73;
        default:
          goto LABEL_279;
      }
    }
    goto LABEL_305;
  }
  if ( a1 <= 0x1026 )
  {
    if ( a1 == 4134 )
      goto LABEL_305;
    if ( a1 > 0x9E )
    {
      if ( a1 > 0xA8 )
      {
        switch ( a1 )
        {
          case 0xAAu:
            goto LABEL_305;
          case 0xACu:
            if ( (_DWORD)v6 != 4 )
              goto LABEL_293;
            v8 = 4;
            goto LABEL_275;
          case 0xADu:
            if ( (_DWORD)v6 != 4 )
              goto LABEL_293;
            v8 = 4;
            break;
          case 0xAEu:
            if ( (_DWORD)v6 != 24 )
              goto LABEL_293;
            if ( ((PsGetCurrentProcessWow64Process(v23) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
              ExRaiseDatatypeMisalignment();
            v23 = Src + 4;
            v22 = (_OWORD *)MmUserProbeAddress;
            if ( Src + 4 > MmUserProbeAddress || v23 < Src )
              *(_BYTE *)MmUserProbeAddress = 0;
            if ( *(_DWORD *)Src )
              goto LABEL_293;
            v47 = v61;
            *(_DWORD *)v61 = 0;
            v8 = 24;
            goto LABEL_276;
          case 0xAFu:
            if ( (_DWORD)v6 != 24 )
              goto LABEL_293;
            if ( ((PsGetCurrentProcessWow64Process(v23) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
              ExRaiseDatatypeMisalignment();
            v22 = (_OWORD *)MmUserProbeAddress;
            if ( Src + 4 > MmUserProbeAddress || Src + 4 < Src )
              *(_BYTE *)MmUserProbeAddress = 0;
            if ( *(_DWORD *)Src )
              goto LABEL_293;
            v8 = 24;
            break;
          default:
            goto LABEL_279;
        }
        goto LABEL_266;
      }
      if ( a1 == 168 || a1 == 160 )
        goto LABEL_305;
      if ( a1 == 162 )
        goto LABEL_136;
      if ( a1 != 163 )
      {
        if ( a1 != 165 && a1 != 167 )
          goto LABEL_279;
        v8 = 12;
        if ( (_DWORD)v6 != 12 )
          goto LABEL_293;
        goto LABEL_275;
      }
      goto LABEL_212;
    }
    if ( a1 == 158 )
      goto LABEL_305;
    if ( a1 <= 0x98 )
    {
      switch ( a1 )
      {
        case 0x98u:
          v23 = 128LL;
          if ( (_DWORD)v6 != 128 )
            goto LABEL_293;
          v8 = 128;
          break;
        case 0x92u:
          v8 = 56;
          if ( (_DWORD)v6 != 56 )
            goto LABEL_293;
          break;
        case 0x93u:
          v8 = 56;
          if ( (_DWORD)v6 != 56 )
            goto LABEL_293;
          goto LABEL_267;
        case 0x94u:
          v8 = 32;
          if ( (_DWORD)v6 != 32 )
            goto LABEL_293;
          break;
        case 0x95u:
          v8 = 32;
          if ( (_DWORD)v6 != 32 )
            goto LABEL_293;
          goto LABEL_267;
        case 0x96u:
          v8 = 28;
          if ( (_DWORD)v6 != 28 )
            goto LABEL_293;
          break;
        case 0x97u:
          v8 = 28;
          if ( (_DWORD)v6 != 28 )
            goto LABEL_293;
          goto LABEL_267;
        default:
          goto LABEL_279;
      }
      goto LABEL_275;
    }
    if ( a1 == 153 )
    {
      if ( (_DWORD)v6 != 128 )
        goto LABEL_293;
      v8 = 128;
      goto LABEL_267;
    }
    if ( a1 != 154 )
    {
      if ( a1 == 155 )
      {
        v8 = 548;
        if ( (_DWORD)v6 == 548 )
        {
          if ( Src + 548 < Src || Src + 548 > MmUserProbeAddress )
            Src = MmUserProbeAddress;
          v42 = v73;
          v43 = 4LL;
          do
          {
            *v42 = *(_OWORD *)Src;
            v42[1] = *(_OWORD *)(Src + 16);
            v42[2] = *(_OWORD *)(Src + 32);
            v42[3] = *(_OWORD *)(Src + 48);
            v42[4] = *(_OWORD *)(Src + 64);
            v42[5] = *(_OWORD *)(Src + 80);
            v42[6] = *(_OWORD *)(Src + 96);
            v42 += 8;
            *(v42 - 1) = *(_OWORD *)(Src + 112);
            Src += 128LL;
            --v43;
          }
          while ( v43 );
          *v42 = *(_OWORD *)Src;
          v42[1] = *(_OWORD *)(Src + 16);
          *((_DWORD *)v42 + 8) = *(_DWORD *)(Src + 32);
          v22 = v61;
          v44 = v73;
          do
          {
            *v22 = *v44;
            v22[1] = v44[1];
            v22[2] = v44[2];
            v22[3] = v44[3];
            v22[4] = v44[4];
            v22[5] = v44[5];
            v22[6] = v44[6];
            v22 += 8;
            *(v22 - 1) = v44[7];
            v44 += 8;
            --v17;
          }
          while ( v17 );
          *v22 = *v44;
          v22[1] = v44[1];
          *((_DWORD *)v22 + 8) = *((_DWORD *)v44 + 8);
          Src = (ULONG64)v61;
          if ( *((_DWORD *)v61 + 6) <= 0x104u )
            goto LABEL_309;
        }
        goto LABEL_293;
      }
      if ( a1 == 156 )
      {
        if ( (_DWORD)v6 != 16 )
          goto LABEL_293;
        goto LABEL_136;
      }
      goto LABEL_212;
    }
    v8 = 548;
    if ( (_DWORD)v6 != 548 )
      goto LABEL_293;
    v45 = PsGetCurrentProcessWow64Process(v23);
    ProbeForWrite((volatile void *)Src, 0x224uLL, v45 != 0 ? 1 : 4);
    Address = (_DWORD *)Src;
    v46 = v61;
    do
    {
      *(_OWORD *)v46 = *(_OWORD *)Src;
      *((_OWORD *)v46 + 1) = *(_OWORD *)(Src + 16);
      *((_OWORD *)v46 + 2) = *(_OWORD *)(Src + 32);
      *((_OWORD *)v46 + 3) = *(_OWORD *)(Src + 48);
      *((_OWORD *)v46 + 4) = *(_OWORD *)(Src + 64);
      *((_OWORD *)v46 + 5) = *(_OWORD *)(Src + 80);
      *((_OWORD *)v46 + 6) = *(_OWORD *)(Src + 96);
      v46 += 16;
      *((_OWORD *)v46 - 1) = *(_OWORD *)(Src + 112);
      Src += 128LL;
      --v17;
    }
    while ( v17 );
    *(_OWORD *)v46 = *(_OWORD *)Src;
    *((_OWORD *)v46 + 1) = *(_OWORD *)(Src + 16);
    *((_DWORD *)v46 + 8) = *(_DWORD *)(Src + 32);
    Src = (ULONG64)v61;
    goto LABEL_167;
  }
  if ( a1 == 4135 )
    goto LABEL_309;
  if ( a1 == 8221 )
  {
    if ( Src > 2 )
      goto LABEL_293;
    goto LABEL_309;
  }
LABEL_279:
  if ( a1 < 0xB0 )
    goto LABEL_309;
  if ( a1 - 4096 > 0x53 && a1 - 0x2000 > 0x29
    || (_DWORD)v6 && (*((_DWORD *)gptiCurrent + 158) > 0x400u || a1 != 4159 || (_DWORD)v6 != 1) )
  {
    goto LABEL_293;
  }
  if ( (a1 & 1) == 0 )
    goto LABEL_305;
  if ( a1 != 8193 )
  {
    if ( a1 != 8203 )
    {
      if ( a1 != 8211 || (Src & 0xFFFFFFFE) == 0 )
        goto LABEL_309;
      goto LABEL_293;
    }
    if ( (Src & 0xFFFFFFFC) != 0 )
    {
LABEL_293:
      UserSetLastError(87LL, (__int64)v22);
      v50 = 0;
      goto LABEL_313;
    }
LABEL_309:
    v34 = 0;
    goto LABEL_310;
  }
  if ( qword_1C0250B50 )
    v51 = qword_1C0250B50();
  else
    v51 = -1073741637;
  if ( v51 >= 0 )
  {
    v52 = PsGetCurrentProcessWin32Process(v23);
    if ( qword_1C0250B58 ? qword_1C0250B58(v52) : 0 )
      goto LABEL_309;
  }
  UserSetLastError(5LL, (__int64)v22);
  v50 = 0;
LABEL_313:
  if ( v64 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v67);
  PopAndFreeAlwaysW32ThreadLock((__int64)&v69);
LABEL_318:
  UserSessionSwitchLeaveCrit(v55, v54, v56, v57);
  return v50;
}
