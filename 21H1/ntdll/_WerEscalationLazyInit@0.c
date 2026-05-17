/*
 * XREFs of _WerEscalationLazyInit@0 @ 0x4B33B780
 * Callers:
 *     _WerReportSQMEvent@16 @ 0x4B33BAB0 (_WerReportSQMEvent@16.c)
 * Callees:
 *     _RtlAppendUnicodeToString@8 @ 0x4B2BFE00 (_RtlAppendUnicodeToString@8.c)
 *     _RtlConvertSidToUnicodeString@12 @ 0x4B2D3990 (_RtlConvertSidToUnicodeString@12.c)
 *     _WerEscalationReadImageVersionInfoForModuleBaseSafe@12 @ 0x4B2DA76C (_WerEscalationReadImageVersionInfoForModuleBaseSafe@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 *     _ZwOpenProcessToken@12 @ 0x4B2F3C00 (_ZwOpenProcessToken@12.c)
 *     _HashStringToDwordCaseInsensitiveLen@8 @ 0x4B33B634 (_HashStringToDwordCaseInsensitiveLen@8.c)
 *     _StringCchCopyW@12 @ 0x4B33B6B7 (_StringCchCopyW@12.c)
 *     _WerpEscalationIsDisabled@0 @ 0x4B33BB2C (_WerpEscalationIsDisabled@0.c)
 *     _WerpEscalationIsWMRSendStringSet@0 @ 0x4B33BBAE (_WerpEscalationIsWMRSendStringSet@0.c)
 *     _RtlLengthSidAsUnicodeString@8 @ 0x4B346760 (_RtlLengthSidAsUnicodeString@8.c)
 */

int __stdcall WerEscalationLazyInit()
{
  int v0; // eax
  signed __int32 v1; // esi
  int VirtualMemory; // edi
  int v4; // ebx
  HRESULT v5; // eax
  unsigned __int16 *i; // ecx
  int v7; // eax
  int v8; // eax
  struct _PEB *v9; // ecx
  unsigned __int16 v10; // di
  _WORD *v11; // ebx
  unsigned int v12; // ecx
  size_t v13; // [esp+0h] [ebp-48h]
  const wchar_t *v14; // [esp+4h] [ebp-44h]
  HANDLE Handle; // [esp+Ch] [ebp-3Ch] BYREF
  signed __int32 v16; // [esp+10h] [ebp-38h] BYREF
  unsigned int v17; // [esp+14h] [ebp-34h] BYREF
  unsigned int v18; // [esp+18h] [ebp-30h]
  int v19; // [esp+1Ch] [ebp-2Ch] BYREF
  int v20; // [esp+20h] [ebp-28h] BYREF
  STRSAFE_LPWSTR Buffer; // [esp+24h] [ebp-24h]
  unsigned int v22; // [esp+28h] [ebp-20h]
  int v23; // [esp+2Ch] [ebp-1Ch] BYREF
  UNICODE_STRING UnicodeString; // [esp+30h] [ebp-18h] BYREF
  _DWORD v25[4]; // [esp+38h] [ebp-10h] BYREF

  Handle = 0;
  v16 = 0;
  v0 = g_werEscalationData;
  v1 = 0;
  VirtualMemory = -1073741823;
  if ( g_werEscalationData && g_sqmSessionHandle != -1 )
    return 0;
  if ( !g_disableEscalation )
  {
    g_disableEscalation = WerpEscalationIsDisabled();
    v0 = g_werEscalationData;
  }
  if ( v0 )
    goto LABEL_34;
  v19 = 556;
  VirtualMemory = NtAllocateVirtualMemory(-1, (int)&v16, 0, (int)&v19, 4096, 4);
  if ( VirtualMemory >= 0 )
  {
    v1 = v16;
    v18 = v16 + v19;
    v4 = v16 + 556;
    if ( v16 + 556 > (unsigned int)(v16 + v19) )
      goto LABEL_9;
    v22 = NtCurrentPeb()->ProcessParameters->ImagePathName.Length >> 1;
    Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
    v5 = StringCchCopyW(Buffer, v13, v14);
    if ( v5 < 0 && v5 != -2147024774 )
      goto LABEL_35;
    for ( i = &Buffer[v22 - 1]; i > Buffer; --i )
    {
      v7 = *i;
      if ( v7 == 92 || v7 == 47 )
      {
        ++i;
        break;
      }
    }
    v8 = HashStringToDwordCaseInsensitiveLen(i, v22 - (i - Buffer));
    v9 = NtCurrentPeb();
    *(_DWORD *)(v1 + 520) = v8;
    WerEscalationReadImageVersionInfoForModuleBaseSafe((unsigned int)v9->ImageBaseAddress, 0, (int)v25);
    *(_DWORD *)(v1 + 532) = v25[0];
    *(_DWORD *)(v1 + 524) = v25[2];
    *(_DWORD *)(v1 + 528) = v25[3];
    VirtualMemory = ZwOpenProcessToken(-1, 8, (int)&Handle);
    if ( VirtualMemory < 0 )
      goto LABEL_35;
    v17 = v18 - v4;
    VirtualMemory = ZwQueryInformationToken((int)Handle, 1, v4, v18 - v4, (int)&v17);
    if ( VirtualMemory < 0 )
      goto LABEL_35;
    v22 = v4 + 4 * ((v17 + 3) >> 2);
    if ( v22 > v18 )
      goto LABEL_9;
    *(_DWORD *)(v1 + 536) = *(_DWORD *)v4;
    *(_DWORD *)(v1 + 548) = 0x40000000;
    if ( ZwQueryInformationToken((int)Handle, 18, (int)&v20, 4, (int)&v17) >= 0 )
    {
      if ( v20 == 2 )
      {
        *(_DWORD *)(v1 + 548) = -1073741824;
      }
      else if ( v20 == 1 )
      {
        if ( *(_DWORD *)(*(_DWORD *)v4 + 4 * *(unsigned __int8 *)(*(_DWORD *)v4 + 1) + 4) == 500 )
          *(_DWORD *)(v1 + 548) = 0x80000000;
        else
          *(_DWORD *)(v1 + 548) = 0;
      }
    }
    VirtualMemory = RtlLengthSidAsUnicodeString(*(_DWORD *)(v1 + 536), &v23);
    if ( VirtualMemory < 0 )
      goto LABEL_35;
    v10 = v23;
    v11 = (_WORD *)(v1 + 540);
    v12 = v22;
    *(_WORD *)(v1 + 540) = 0;
    *(_DWORD *)(v1 + 544) = v12;
    *(_WORD *)(v1 + 542) = v10 + 90;
    if ( v12 + (unsigned __int16)(v10 + 90) > v18 )
    {
LABEL_9:
      VirtualMemory = -1073741789;
      goto LABEL_35;
    }
    RtlAppendUnicodeToString((unsigned __int16 *)(v1 + 540), L"\\REGISTRY\\USER\\");
    UnicodeString.MaximumLength = v10;
    UnicodeString.Length = 0;
    UnicodeString.Buffer = (wchar_t *)(*(_DWORD *)(v1 + 544) + 2 * ((unsigned __int16)*v11 >> 1));
    VirtualMemory = RtlConvertSidToUnicodeString(&UnicodeString, *(PSID *)(v1 + 536), 0);
    if ( VirtualMemory < 0
      || (*v11 += UnicodeString.Length,
          VirtualMemory = RtlAppendUnicodeToString((unsigned __int16 *)(v1 + 540), L"\\Software\\Microsoft\\Windows"),
          VirtualMemory < 0) )
    {
LABEL_35:
      if ( v1 )
        NtFreeVirtualMemory(-1, (int)&v16, (int)&v19, 0x8000);
      goto LABEL_37;
    }
    *(_DWORD *)(v1 + 552) = WerpEscalationIsWMRSendStringSet();
    v1 = _InterlockedCompareExchange(&g_werEscalationData, v1, 0) != 0 ? v1 : 0;
LABEL_34:
    VirtualMemory = g_sqmSessionHandle == -1 ? VirtualMemory : 0;
    goto LABEL_35;
  }
LABEL_37:
  if ( Handle )
    NtClose(Handle);
  return VirtualMemory;
}
