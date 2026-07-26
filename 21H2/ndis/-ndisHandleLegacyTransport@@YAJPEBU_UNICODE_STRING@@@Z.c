/*
 * XREFs of ?ndisHandleLegacyTransport@@YAJPEBU_UNICODE_STRING@@@Z @ 0x1C001DA30
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C012BDB8 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisHandleLegacyTransport(const struct _UNICODE_STRING *a1)
{
  wchar_t *Buffer; // rdx
  NTSTATUS v3; // eax
  int v4; // ebx
  PCWSTR v6; // rdi
  PCWSTR SourceString; // [rsp+38h] [rbp-D0h] BYREF
  __int64 Context; // [rsp+40h] [rbp-C8h] BYREF
  __int64 DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  _UNICODE_STRING DestinationString_8; // [rsp+50h] [rbp-B8h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+68h] [rbp-A0h] BYREF
  int (*v12)(wchar_t *, unsigned int, void *, unsigned int, void *, void *); // [rsp+A0h] [rbp-68h]
  int v13; // [rsp+A8h] [rbp-60h]
  const wchar_t *v14; // [rsp+B0h] [rbp-58h]
  PCWSTR *p_SourceString; // [rsp+B8h] [rbp-50h]
  int v16; // [rsp+C0h] [rbp-48h]
  __int64 v17; // [rsp+D8h] [rbp-30h]
  int v18; // [rsp+E0h] [rbp-28h]
  __int64 v19; // [rsp+E8h] [rbp-20h]

  SourceString = 0LL;
  DestinationString = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      5u,
      0xAu,
      (struct _GUID *)&WPP_c2584e1588463362f2edfb380f11746e_Traceguids,
      a1);
  Context = 0LL;
  if ( ndisTdiRegisterCallback )
  {
    Buffer = a1->Buffer;
    QueryTable.Name = L"Linkage";
    QueryTable.QueryRoutine = 0LL;
    v12 = ndisReadParameter;
    v13 = 20;
    v14 = L"Export";
    QueryTable.Flags = 1;
    p_SourceString = &SourceString;
    v16 = 0;
    v17 = 0LL;
    v18 = 0;
    v19 = 0LL;
    DestinationString_8 = 0LL;
    v3 = RtlQueryRegistryValuesEx(1u, (PCWSTR)Buffer, &QueryTable, &Context, 0LL);
    v4 = v3;
    if ( v3 >= 0 )
    {
      if ( (_DWORD)Context == 7 )
      {
        v6 = SourceString;
        if ( !SourceString )
        {
LABEL_9:
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              5u,
              0xCu,
              (struct _GUID *)&WPP_c2584e1588463362f2edfb380f11746e_Traceguids);
          return (unsigned int)v4;
        }
        do
        {
          if ( !*v6 )
            break;
          RtlInitUnicodeString(&DestinationString_8, v6);
          v4 = ((__int64 (__fastcall *)(_UNICODE_STRING *, __int64 *))ndisTdiRegisterCallback)(
                 &DestinationString_8,
                 &DestinationString);
          if ( v4 < 0 )
            break;
          v6 = (PCWSTR)((char *)v6 + DestinationString_8.MaximumLength);
        }
        while ( v6 );
      }
      else
      {
        v4 = -1073741823;
      }
    }
    else if ( v3 == -1073741772 )
    {
      v4 = 0;
    }
    if ( SourceString )
      ExFreePoolWithTag((PVOID)SourceString, 0);
    goto LABEL_9;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      5u,
      0xBu,
      (struct _GUID *)&WPP_c2584e1588463362f2edfb380f11746e_Traceguids);
  return 3221225473LL;
}
