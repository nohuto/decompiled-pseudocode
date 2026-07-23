/*
 * XREFs of WerEscalationLazyInit @ 0x1800DE408
 * Callers:
 *     WerReportSQMEvent @ 0x1800DE7A0 (WerReportSQMEvent.c)
 * Callees:
 *     NLS_UPCASE @ 0x180016160 (NLS_UPCASE.c)
 *     RtlLengthSidAsUnicodeString @ 0x180036D50 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x180037250 (RtlConvertSidToUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x180037990 (RtlAppendUnicodeToString.c)
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x18006AD44 (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x18009D3B0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009D470 (ZwFreeVirtualMemory.c)
 *     NtQueryInformationToken @ 0x18009D4D0 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x18009F5A0 (NtOpenProcessToken.c)
 *     StringCchCopyW @ 0x1800DE2FC (StringCchCopyW.c)
 *     WerpEscalationIsDisabled @ 0x1800DE84C (WerpEscalationIsDisabled.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x1800DE8FC (WerpEscalationIsWMRSendStringSet.c)
 */

__int64 WerEscalationLazyInit()
{
  __int64 v0; // rax
  NTSTATUS appended; // ebx
  signed __int64 v2; // rdi
  char *v4; // r12
  char *v5; // rsi
  unsigned int v6; // r15d
  wchar_t *Buffer; // r14
  HRESULT v8; // eax
  unsigned __int16 *i; // r10
  int v10; // ebx
  int j; // r15d
  unsigned __int16 v12; // ax
  int v13; // r11d
  __int64 v14; // r10
  char *v15; // r14
  unsigned int v16; // eax
  unsigned __int16 v17; // bx
  _WORD *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  wchar_t *v22; // rcx
  void *v23; // rdx
  HANDLE TokenHandle; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-30h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-28h] BYREF
  int v27; // [rsp+50h] [rbp-18h]
  int v28; // [rsp+58h] [rbp-10h]
  int v29; // [rsp+5Ch] [rbp-Ch]
  ULONG ReturnLength; // [rsp+B0h] [rbp+48h] BYREF
  int TokenInformation; // [rsp+B8h] [rbp+50h] BYREF
  ULONG StringLength; // [rsp+C0h] [rbp+58h] BYREF
  PVOID BaseAddress; // [rsp+C8h] [rbp+60h] BYREF

  v0 = g_werEscalationData;
  TokenHandle = 0LL;
  appended = -1073741823;
  BaseAddress = 0LL;
  v2 = 0LL;
  if ( g_werEscalationData && g_sqmSessionHandle != -1 )
    return 0LL;
  if ( !g_disableEscalation )
  {
    g_disableEscalation = WerpEscalationIsDisabled();
    v0 = g_werEscalationData;
  }
  if ( v0 )
    goto LABEL_36;
  RegionSize = 568LL;
  appended = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
  if ( appended >= 0 )
  {
    v2 = (signed __int64)BaseAddress;
    v4 = (char *)BaseAddress + RegionSize;
    v5 = (char *)BaseAddress + 568;
    if ( (char *)BaseAddress + 568 > (char *)BaseAddress + RegionSize )
      goto LABEL_9;
    v6 = NtCurrentPeb()->ProcessParameters->ImagePathName.Length >> 1;
    Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
    v8 = StringCchCopyW((STRSAFE_LPWSTR)BaseAddress, 0x104uLL, Buffer);
    if ( (int)(v8 + 0x80000000) >= 0 && v8 != -2147024774 )
      goto LABEL_38;
    for ( i = &Buffer[v6 - 1]; i > Buffer; --i )
    {
      if ( *i == 92 || *i == 47 )
      {
        ++i;
        break;
      }
    }
    v10 = 0;
    for ( j = v6 - (i - Buffer); j; --j )
    {
      v12 = NLS_UPCASE(*i);
      i = (unsigned __int16 *)(v14 + 2);
      v10 = v12 + v13 * v10;
    }
    *(_DWORD *)(v2 + 520) = v10;
    WerEscalationReadImageVersionInfoForModuleBaseSafe(NtCurrentPeb()->ImageBaseAddress, 0);
    *(_DWORD *)(v2 + 532) = v27;
    *(_DWORD *)(v2 + 524) = v28;
    *(_DWORD *)(v2 + 528) = v29;
    appended = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &TokenHandle);
    if ( appended < 0 )
      goto LABEL_38;
    ReturnLength = (_DWORD)v4 - (_DWORD)v5;
    appended = NtQueryInformationToken(TokenHandle, 1u, v5, (_DWORD)v4 - (_DWORD)v5, &ReturnLength);
    if ( appended < 0 )
      goto LABEL_38;
    v15 = &v5[8 * (((unsigned __int64)ReturnLength + 7) >> 3)];
    if ( v15 > v4 )
      goto LABEL_9;
    *(_QWORD *)(v2 + 536) = *(_QWORD *)v5;
    *(_DWORD *)(v2 + 560) = 0x40000000;
    if ( NtQueryInformationToken(TokenHandle, 0x12u, &TokenInformation, 4u, &ReturnLength) >= 0 )
    {
      if ( TokenInformation == 2 )
      {
        *(_DWORD *)(v2 + 560) = -1073741824;
      }
      else if ( TokenInformation == 1 )
      {
        v16 = 0;
        if ( *(_DWORD *)(*(_QWORD *)v5 + 4LL * ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)v5 + 1LL) - 1) + 8) == 500 )
          v16 = 0x80000000;
        *(_DWORD *)(v2 + 560) = v16;
      }
    }
    appended = RtlLengthSidAsUnicodeString(*(PSID *)(v2 + 536), &StringLength);
    if ( appended < 0 )
      goto LABEL_38;
    v17 = StringLength;
    v18 = (_WORD *)(v2 + 544);
    *(_WORD *)(v2 + 544) = 0;
    *(_QWORD *)(v2 + 552) = v15;
    v19 = (unsigned __int16)(v17 + 90);
    *(_WORD *)(v2 + 546) = v19;
    if ( &v15[v19] > v4 )
    {
LABEL_9:
      appended = -1073741789;
    }
    else
    {
      RtlAppendUnicodeToString((PUNICODE_STRING)(v2 + 544), L"\\REGISTRY\\USER\\");
      v20 = *(_QWORD *)(v2 + 552);
      v21 = (unsigned __int64)(unsigned __int16)*v18 >> 1;
      UnicodeString.MaximumLength = v17;
      UnicodeString.Length = 0;
      v22 = (wchar_t *)(v20 + 2 * v21);
      v23 = *(void **)(v2 + 536);
      UnicodeString.Buffer = v22;
      appended = RtlConvertSidToUnicodeString(&UnicodeString, v23, 0);
      if ( appended >= 0 )
      {
        *v18 += UnicodeString.Length;
        appended = RtlAppendUnicodeToString((PUNICODE_STRING)(v2 + 544), L"\\Software\\Microsoft\\Windows");
        if ( appended >= 0 )
        {
          *(_DWORD *)(v2 + 564) = WerpEscalationIsWMRSendStringSet();
          v2 &= -(__int64)(_InterlockedCompareExchange64(&g_werEscalationData, v2, 0LL) != 0);
LABEL_36:
          if ( g_sqmSessionHandle != -1 )
            appended = 0;
        }
      }
    }
LABEL_38:
    if ( v2 )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  if ( TokenHandle )
    NtClose(TokenHandle);
  return (unsigned int)appended;
}
