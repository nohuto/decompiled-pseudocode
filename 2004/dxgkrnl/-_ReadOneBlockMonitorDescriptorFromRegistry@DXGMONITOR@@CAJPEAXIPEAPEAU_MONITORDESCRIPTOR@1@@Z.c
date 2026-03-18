/*
 * XREFs of ?_ReadOneBlockMonitorDescriptorFromRegistry@DXGMONITOR@@CAJPEAXIPEAPEAU_MONITORDESCRIPTOR@1@@Z @ 0x1C02F5B70
 * Callers:
 *     ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C01873B4 (-_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C000C37C (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 */

__int64 __fastcall DXGMONITOR::_ReadOneBlockMonitorDescriptorFromRegistry(
        HANDLE KeyHandle,
        __int64 a2,
        struct DXGMONITOR::_MONITORDESCRIPTOR **a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  char *v13; // rbx
  ULONG Length; // esi
  __int64 v15; // rdx
  __int64 v16; // rcx
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  char *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-50h] BYREF
  WCHAR SourceString; // [rsp+48h] [rbp-40h] BYREF

  v3 = (unsigned int)a2;
  DestinationString = 0LL;
  if ( !KeyHandle )
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(KeyHandle, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  *a3 = 0LL;
  v8 = RtlStringCbPrintfW(&SourceString, 8uLL, L"%d", (unsigned int)v3);
  v11 = v8;
  if ( v8 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, &SourceString);
    v13 = 0LL;
    Length = 1024;
    do
    {
      if ( v13 )
        operator delete[](v13);
      v13 = (char *)operator new[](Length, 0x4D677844u, PagedPool);
      if ( v13 )
      {
        ResultLength = 0;
        v17 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v13, Length, &ResultLength);
        Length = ResultLength;
        LODWORD(v11) = v17;
      }
      else
      {
        v21 = WdLogNewEntry5_WdError(v16, v15);
        WdLogEvent5_WdError(v21);
        LODWORD(v11) = -1073741801;
      }
    }
    while ( (_DWORD)v11 == -2147483643 || (_DWORD)v11 == -1073741789 );
    if ( (int)v11 >= 0 )
    {
      if ( *((_DWORD *)v13 + 1) == 3 && *((_DWORD *)v13 + 2) == 128 )
      {
        v23 = (char *)operator new[](0x9FuLL, 0x4D677844u, PagedPool);
        if ( v23 )
        {
          *(_OWORD *)(v23 + 24) = *(_OWORD *)(v13 + 12);
          *(_OWORD *)(v23 + 40) = *(_OWORD *)(v13 + 28);
          *(_OWORD *)(v23 + 56) = *(_OWORD *)(v13 + 44);
          *(_OWORD *)(v23 + 72) = *(_OWORD *)(v13 + 60);
          *(_OWORD *)(v23 + 88) = *(_OWORD *)(v13 + 76);
          *(_OWORD *)(v23 + 104) = *(_OWORD *)(v13 + 92);
          *(_OWORD *)(v23 + 120) = *(_OWORD *)(v13 + 108);
          *(_OWORD *)(v23 + 136) = *(_OWORD *)(v13 + 124);
          *((_QWORD *)v23 + 2) = *((unsigned int *)v13 + 2);
          *((_DWORD *)v23 + 2) = 3;
          *((_DWORD *)v23 + 3) = (_DWORD)v3 != 0 ? 255 : 1;
          LODWORD(v11) = 0;
          *a3 = (struct DXGMONITOR::_MONITORDESCRIPTOR *)v23;
        }
        else
        {
          v25 = WdLogNewEntry5_WdError(0LL, v24);
          WdLogEvent5_WdError(v25);
          LODWORD(v11) = -1073741801;
        }
      }
      else
      {
        v26 = WdLogNewEntry5_WdWarning(v19, v18, v20);
        *(_QWORD *)(v26 + 24) = v3;
        WdLogEvent5_WdWarning(v26);
        LODWORD(v11) = -1071841279;
      }
    }
    else
    {
      if ( v13 )
        operator delete[](v13);
      v13 = 0LL;
      v22 = WdLogNewEntry5_WdDmmEvent(v19, v18);
      *(_QWORD *)(v22 + 24) = (int)v11;
      WdLogEvent5_WdDmmEvent(v22);
    }
    if ( v13 )
      operator delete[](v13);
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = v11;
    WdLogEvent5_WdError(v12);
  }
  return (unsigned int)v11;
}
