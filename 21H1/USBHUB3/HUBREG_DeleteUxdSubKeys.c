/*
 * XREFs of HUBREG_DeleteUxdSubKeys @ 0x1C0080EF8
 * Callers:
 *     HUBREG_UxdShutdown @ 0x1C008111C (HUBREG_UxdShutdown.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0042D40 (memset.c)
 */

__int64 __fastcall HUBREG_DeleteUxdSubKeys(__int64 a1, __int64 a2, __int64 a3)
{
  void *v6; // r15
  PVOID PoolWithTag; // rbx
  ULONG v8; // edi
  ULONG v9; // esi
  ULONG ResultLength; // [rsp+40h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-A0h] BYREF
  _DWORD v13[20]; // [rsp+60h] [rbp-88h] BYREF

  memset(v13, 0, 0x44uLL);
  ResultLength = 0;
  DestinationString = 0LL;
  v6 = (void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1856))(
                 WdfDriverGlobals,
                 a3);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x2AuLL, 0x68334855u);
  if ( PoolWithTag )
  {
    v8 = 0;
    while ( 1 )
    {
      *(_OWORD *)PoolWithTag = 0LL;
      *((_OWORD *)PoolWithTag + 1) = 0LL;
      *((_QWORD *)PoolWithTag + 4) = 0LL;
      *((_WORD *)PoolWithTag + 20) = 0;
      v9 = v8;
      if ( ZwEnumerateValueKey(v6, v8, KeyValueBasicInformation, PoolWithTag, 0x2Au, &ResultLength) < 0 )
        break;
      ++v8;
      if ( *((_DWORD *)PoolWithTag + 1) == 3 )
      {
        *((_WORD *)PoolWithTag + 18) = 0;
        RtlInitUnicodeString(&DestinationString, (PCWSTR)PoolWithTag + 6);
        memset(v13, 0, 0x44uLL);
        if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, _DWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
               WdfDriverGlobals,
               a3,
               &DestinationString,
               68LL,
               v13,
               0LL,
               0LL) < 0 )
          break;
        if ( v13[9] == 1 || (*(_DWORD *)(a2 + 4) & 0x100) != 0 )
        {
          if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1872))(
                 WdfDriverGlobals,
                 a3,
                 &DestinationString) < 0 )
            break;
          v8 = v9;
        }
      }
    }
    ExFreePoolWithTag(PoolWithTag, 0x68334855u);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0x71u, (__int64)&WPP_bb780d5c926432a673b7a78c72bdde31_Traceguids);
  }
  return 0LL;
}
