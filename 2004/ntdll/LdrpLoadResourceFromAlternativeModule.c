/*
 * XREFs of LdrpLoadResourceFromAlternativeModule @ 0x1800356C0
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180033BCC (LdrpSearchResourceSection_U.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     LdrpSearchResourceSection_U @ 0x180033BCC (LdrpSearchResourceSection_U.c)
 *     LdrpGetRcConfig @ 0x180034A90 (LdrpGetRcConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034EA0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSetThreadPreferredLangList @ 0x180036318 (LdrpSetThreadPreferredLangList.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x180037EF8 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlCultureNameToLCID @ 0x18003B850 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     DbgPrintEx @ 0x1800502F0 (DbgPrintEx.c)
 *     LdrpFindMessageInAlternateModule @ 0x180069018 (LdrpFindMessageInAlternateModule.c)
 *     LdrpIsReparsePoint @ 0x180069ED4 (LdrpIsReparsePoint.c)
 *     LdrpCompareServiceChecksum @ 0x18007DC5C (LdrpCompareServiceChecksum.c)
 *     LdrpGetParentLangId @ 0x18007E0F4 (LdrpGetParentLangId.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     LdrpMUIEtwOutput @ 0x1800E1354 (LdrpMUIEtwOutput.c)
 */

__int64 __fastcall LdrpLoadResourceFromAlternativeModule(PVOID BaseOfImage, __int64 a2, DWORD a3, ULONG a4, _QWORD *a5)
{
  PVOID v5; // r10
  unsigned int v6; // ecx
  unsigned int v8; // eax
  unsigned int MessageInAlternateModule; // esi
  LANGID v11; // bx
  int v12; // r12d
  __int64 v13; // rdx
  unsigned int v14; // r14d
  _DWORD *v15; // r8
  char v16; // r11
  __int64 v17; // r9
  int v18; // edi
  int v19; // r13d
  int v20; // ecx
  int v21; // ecx
  __int64 v22; // rcx
  char v23; // al
  unsigned __int16 *MergedPrefLanguages; // rcx
  NTSTATUS v25; // eax
  _QWORD *v26; // rdi
  __int64 v27; // rdx
  int v28; // eax
  PVOID v29; // rdi
  __int64 v30; // rcx
  int IsReparsePoint; // eax
  char v33; // al
  int ParentLangId; // eax
  _WORD *v35; // rax
  _DWORD *RcConfig; // rax
  BOOLEAN v37; // al
  char v38; // [rsp+30h] [rbp-D0h]
  _WORD v39[2]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v40; // [rsp+38h] [rbp-C8h]
  _BYTE v41[2]; // [rsp+3Ah] [rbp-C6h] BYREF
  unsigned int v42; // [rsp+3Ch] [rbp-C4h]
  char v43; // [rsp+40h] [rbp-C0h]
  PVOID DllHandle; // [rsp+48h] [rbp-B8h]
  _DWORD *v45; // [rsp+50h] [rbp-B0h]
  unsigned int v46; // [rsp+58h] [rbp-A8h]
  PVOID ResourceDllBase; // [rsp+60h] [rbp-A0h] BYREF
  DWORD Lcid[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v49; // [rsp+70h] [rbp-90h]
  _QWORD *v50; // [rsp+78h] [rbp-88h]
  ULONG_PTR ResourceOffset; // [rsp+80h] [rbp-80h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  _WORD v53[64]; // [rsp+A0h] [rbp-60h] BYREF

  v5 = BaseOfImage;
  DllHandle = BaseOfImage;
  v6 = 0;
  v50 = a5;
  Lcid[1] = a3;
  v8 = a3 - 3;
  v49 = a2;
  ResourceDllBase = 0LL;
  v39[0] = 0;
  MessageInAlternateModule = -1073020927;
  v43 = 0;
  v11 = 0;
  v42 = 0;
  v12 = 0;
  v46 = 0;
  v13 = 0LL;
  v45 = 0LL;
  v14 = 0;
  v38 = 0;
  v15 = 0LL;
  v16 = 0;
  if ( v8 > 1 )
    return (unsigned int)-1073741583;
  v17 = *(unsigned __int16 *)(a2 + 16);
  v40 = v17;
  v41[0] = 0;
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        v18 = v12;
        v19 = a4 & 0x1000000;
        if ( (a4 & 0x1000000) != 0 )
        {
          v11 = -3346;
          v39[0] = -3346;
          goto LABEL_20;
        }
        v20 = v12++;
        if ( !v20 )
          break;
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = (unsigned int)(v21 - 1);
          if ( !(_DWORD)v22 )
          {
            v11 = 0;
            v39[0] = 0;
            v23 = LdrpSetThreadPreferredLangList(v22, v13, v15);
            v6 = 0;
            if ( v23 )
            {
              MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages;
              if ( v14 < MergedPrefLanguages[2] )
                GetLCIDFromLangListNodeWithLICCheck(
                  (_DWORD)MergedPrefLanguages,
                  NtCurrentTeb()->MergedPrefLanguages,
                  v14,
                  (unsigned int)v39,
                  (__int64)v41);
              v11 = v39[0];
              v6 = 0;
            }
            if ( !v11 )
            {
              v11 = -4370;
              v39[0] = -4370;
LABEL_47:
              v15 = v45;
              goto LABEL_48;
            }
            if ( v41[0] && (a4 & 0x100000) != 0 )
            {
              v11 = -4370;
              v39[0] = -4370;
            }
            ++v14;
            v12 = v18;
            v46 = v14;
            goto LABEL_14;
          }
          if ( (_DWORD)v22 == 1 )
          {
            v6 = 0;
            if ( v15 || (RcConfig = LdrpGetRcConfig(v5, v13, 0, 1), v6 = 0, v45 = RcConfig, (v15 = RcConfig) != 0LL) )
            {
              if ( *v15 == -20054323 && (v15[6] & 2) != 0 && v15[31] )
              {
                RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v15 + (unsigned int)v15[31]));
                v37 = RtlCultureNameToLCID(&DestinationString, Lcid);
                v6 = 0;
                if ( v37 )
                {
                  v11 = Lcid[0];
                  v39[0] = Lcid[0];
                  if ( (a4 & 0x100000) != 0 )
                  {
                    GetLCIDFromLangListNodeWithLICCheck(
                      0,
                      NtCurrentTeb()->MergedPrefLanguages,
                      0,
                      (unsigned int)v39,
                      (__int64)v41);
                    v15 = v45;
                    v6 = 0;
                    v5 = DllHandle;
                    v17 = v40;
                    v16 = v38;
                    if ( v41[0] )
                    {
                      v11 = -4370;
                      v39[0] = -4370;
                    }
                    else
                    {
                      v11 = v39[0];
                    }
                    goto LABEL_15;
                  }
LABEL_14:
                  v16 = v38;
                  v17 = v40;
                  v5 = DllHandle;
                  v15 = v45;
LABEL_15:
                  v13 = v42;
                  goto LABEL_20;
                }
                v15 = v45;
                MessageInAlternateModule = -1073020923;
              }
            }
            v11 = -4370;
            v39[0] = -4370;
LABEL_48:
            v13 = v42;
            v5 = DllHandle;
            v17 = v40;
            v16 = v38;
          }
          else
          {
            if ( v16 )
              return MessageInAlternateModule;
            if ( v43 )
              return MessageInAlternateModule;
            IsReparsePoint = LdrpIsReparsePoint(v5, v13, v15, v17);
            v6 = 0;
            if ( IsReparsePoint < 0 )
              return MessageInAlternateModule;
            v15 = v45;
            v16 = 1;
            v5 = DllHandle;
            a4 |= 0x400000u;
            v17 = v40;
            v12 = 0;
            v38 = 1;
            v13 = 0LL;
            v42 = 0;
            v14 = 0;
            v46 = 0;
          }
        }
        else
        {
          if ( v11 == 0xEEEE )
            goto LABEL_37;
          if ( (a4 & 4) != 0 )
          {
            v11 = -4370;
            v39[0] = -4370;
            v12 = -2;
            goto LABEL_73;
          }
          if ( (v17 & 0x3FF) == 0 )
          {
LABEL_37:
            v6 = 0;
            goto LABEL_38;
          }
          ParentLangId = LdrpGetParentLangId(v11, v39, v15);
          v15 = v45;
          v6 = 0;
          v13 = v42;
          v5 = DllHandle;
          v17 = v40;
          v16 = v38;
          if ( ParentLangId >= 0 )
          {
            v11 = v39[0];
            if ( v39[0] )
            {
              v12 = v18;
              goto LABEL_20;
            }
          }
          v12 = -2;
LABEL_38:
          v11 = -4370;
          v39[0] = -4370;
        }
      }
      if ( (v17 & 0xF3FF) != 0 || (_WORD)v17 == 3072 )
      {
        v11 = v17;
        v39[0] = v17;
      }
      else
      {
        v11 = -4370;
        v39[0] = -4370;
      }
      v6 = 0;
LABEL_20:
      ;
    }
    while ( v11 == 0xEEEE );
    if ( !(_DWORD)v13 )
      break;
    v35 = v53;
    while ( *v35 != v11 )
    {
      ++v6;
      ++v35;
      if ( v6 >= (unsigned int)v13 )
        goto LABEL_22;
    }
LABEL_73:
    v6 = 0;
  }
LABEL_22:
  if ( (unsigned int)v13 >= 0x40 )
    return MessageInAlternateModule;
  ResourceOffset = 0LL;
  v42 = v13 + 1;
  v53[(unsigned int)v13] = v11;
  v25 = LdrLoadAlternateResourceModuleEx(v5, v11, &ResourceDllBase, &ResourceOffset, a4);
  v6 = 0;
  MessageInAlternateModule = v25;
  if ( v25 < 0 )
  {
    if ( v25 == -1073741772 || v25 == -1073741766 )
      MessageInAlternateModule = -1073020927;
    if ( v19 )
      return MessageInAlternateModule;
    goto LABEL_47;
  }
  v26 = v50;
  v27 = v49;
  v43 = 1;
  *(_QWORD *)(v49 + 16) = v11;
  v28 = LdrpSearchResourceSection_U(ResourceDllBase, v27, 3u, 0x2000030u, (__int64)v26);
  MessageInAlternateModule = v28;
  if ( (a4 & 0x40) == 0 )
  {
LABEL_25:
    if ( (MessageInAlternateModule & 0x80000000) == 0 )
      goto LABEL_26;
LABEL_54:
    v33 = LdrpCompareServiceChecksum(DllHandle, ResourceDllBase);
    v6 = 0;
    if ( v33 )
      return MessageInAlternateModule;
LABEL_87:
    if ( v19 )
      return MessageInAlternateModule;
    v14 = v46;
    goto LABEL_47;
  }
  if ( v28 < 0 )
    goto LABEL_54;
  MessageInAlternateModule = LdrpFindMessageInAlternateModule(
                               (_DWORD)ResourceDllBase,
                               *v26,
                               0,
                               *(_DWORD *)(v49 + 24),
                               0);
  if ( (MessageInAlternateModule & 0x80000000) != 0 )
  {
    *v26 = 0LL;
    goto LABEL_25;
  }
LABEL_26:
  v29 = ResourceDllBase;
  if ( *v50 <= (unsigned __int64)ResourceDllBase
    || ResourceOffset && *v50 >= (unsigned __int64)ResourceDllBase + ResourceOffset )
  {
    *v50 = 0LL;
    MessageInAlternateModule = -1073741701;
    DbgPrintEx(0x55u, 2u, "'LDR: %s(), invalid image format of MUI file \n", "LdrpLoadResourceFromAlternativeModule");
    v6 = 0;
    goto LABEL_87;
  }
  if ( RtlGetCurrentServiceSessionId() )
  {
    v29 = ResourceDllBase;
    v30 = (__int64)NtCurrentPeb()->SharedData + 555;
  }
  else
  {
    v30 = 2147353477LL;
  }
  if ( (*(_BYTE *)v30 & 2) != 0 )
    LdrpMUIEtwOutput(v29);
  if ( NtCurrentTeb()->ResourceRetValue )
    *(_QWORD *)NtCurrentTeb()->ResourceRetValue = DllHandle;
  return MessageInAlternateModule;
}
