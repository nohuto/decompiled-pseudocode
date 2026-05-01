/*
 * XREFs of ?HampSessionCheckBackgroundAccessAllowed@@YAJPEAU_HAM_SESSION@@PEAU_HAM_PACKAGE_INFO@@PEAK@Z @ 0x180035788
 * Callers:
 *     ?HampActCanBeStartedInSystemState@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@PEAU_HAM_ACT_START_SYSTEM_STATE@@@Z @ 0x180003F84 (-HampActCanBeStartedInSystemState@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@PEA.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapSid@U_SID@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapSid@U_SID@@@@@Z @ 0x180080988 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapSid@U_SID@@@@@-$_tlgWriteTempla.c)
 */

__int64 __fastcall HampSessionCheckBackgroundAccessAllowed(
        struct _HAM_SESSION *a1,
        struct _HAM_PACKAGE_INFO *a2,
        BOOL *a3)
{
  int v6; // ebx
  int v7; // eax
  BOOL v8; // ecx
  int v9; // edx
  __int64 v11; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  int v13; // [rsp+98h] [rbp+38h] BYREF
  int v14; // [rsp+A8h] [rbp+48h]

  RtlInitUnicodeString(&DestinationString, 0LL);
  v6 = RtlConvertSidToUnicodeString(&DestinationString, (char *)a2 + 132, 1u);
  if ( v6 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, PWSTR, struct _HAM_PACKAGE_INFO *, int *))(**((_QWORD **)a1 + 14) + 224LL))(
           *((_QWORD *)a1 + 14),
           DestinationString.Buffer,
           a2,
           &v13);
    v8 = v13;
    v9 = v7;
    if ( v7 >= 0 )
    {
      v9 = 0;
      v8 = (v13 & 1) == 0;
    }
    v6 = 0;
    if ( v9 < 0 )
      v6 = v9 | 0xC0000000;
    if ( v6 < 0 )
    {
      if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
      {
        v13 = *((_DWORD *)a2 + 50);
        v14 = v6;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSid<_SID>>(
          v11,
          &unk_1800A1B2F);
      }
    }
    else
    {
      *a3 = v8;
      v6 = 0;
    }
  }
  RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)v6;
}
