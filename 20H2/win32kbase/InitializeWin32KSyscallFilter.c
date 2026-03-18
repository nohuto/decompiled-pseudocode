/*
 * XREFs of InitializeWin32KSyscallFilter @ 0x1C008E730
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C0294600 (Win32kBaseDriverEntry.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C00375B0 (OpenCacheKeyEx.c)
 *     ?CreateWin32KFilterBitmap@@YAJKQEAPEBDHKPEAE@Z @ 0x1C008EB70 (-CreateWin32KFilterBitmap@@YAJKQEAPEBDHKPEAE@Z.c)
 *     ?FreeWin32KSyscallFilter@@YAXXZ @ 0x1C00BBF60 (-FreeWin32KSyscallFilter@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 */

__int64 InitializeWin32KSyscallFilter()
{
  int Win32KFilterBitmap; // ebx
  void *v1; // rdi
  void *v2; // rdi
  void *v3; // rdi
  unsigned int v4; // ecx
  int v5; // eax
  bool v6; // zf
  int v7; // ecx
  unsigned int v8; // edi
  PVOID PoolWithTag; // rax
  unsigned int v10; // r15d
  unsigned int *v11; // rsi
  unsigned __int8 **v12; // r14
  unsigned __int8 *v13; // rax
  int v14; // r8d
  bool v15; // sf
  PVOID v17; // rax
  int v18; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-3Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+48h] [rbp-28h] BYREF
  int v22; // [rsp+54h] [rbp-1Ch]

  ResultLength = 0;
  Win32KFilterBitmap = 0;
  v18 = gdwPolicyFlags;
  DestinationString = 0LL;
  while ( 1 )
  {
    v1 = OpenCacheKeyEx(0LL, 52LL, 0x20019u, &v18);
    if ( !v1 )
      break;
    RtlInitUnicodeString(&DestinationString, L"ServiceFilterAuditThrottleMode");
    if ( ZwQueryValueKey(v1, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
    {
      gdwServiceFilterAuditThrottleMode = v22;
      v18 = 0;
    }
    else if ( !v18 )
    {
      gdwServiceFilterAuditThrottleMode = 1;
    }
    ZwClose(v1);
    if ( !v18 )
      goto LABEL_10;
  }
  gdwServiceFilterAuditThrottleMode = 1;
LABEL_10:
  DestinationString = 0LL;
  ResultLength = 0;
  v18 = gdwPolicyFlags;
  while ( 1 )
  {
    v2 = OpenCacheKeyEx(0LL, 52LL, 0x20019u, &v18);
    if ( !v2 )
      break;
    RtlInitUnicodeString(&DestinationString, L"ServiceFilterAuditCaptureWER");
    if ( ZwQueryValueKey(v2, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
    {
      gdwServiceFilterAuditCaptureWER = v22;
      v18 = 0;
    }
    else if ( !v18 )
    {
      gdwServiceFilterAuditCaptureWER = 1;
    }
    ZwClose(v2);
    if ( !v18 )
      goto LABEL_19;
  }
  gdwServiceFilterAuditCaptureWER = 1;
LABEL_19:
  DestinationString = 0LL;
  ResultLength = 0;
  v18 = gdwPolicyFlags;
  while ( 1 )
  {
    v3 = OpenCacheKeyEx(0LL, 52LL, 0x20019u, &v18);
    if ( !v3 )
      break;
    RtlInitUnicodeString(&DestinationString, L"ServiceFilterAuditStackCacheSize");
    if ( ZwQueryValueKey(v3, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
    {
      LODWORD(gstServiceFilterAuditStackCacheSize) = v22;
      v18 = 0;
    }
    else if ( !v18 )
    {
      LODWORD(gstServiceFilterAuditStackCacheSize) = 4096;
    }
    ZwClose(v3);
    if ( !v18 )
      goto LABEL_22;
  }
  LODWORD(gstServiceFilterAuditStackCacheSize) = 4096;
LABEL_22:
  if ( qword_1C024EE58 )
    v4 = qword_1C024EE58();
  else
    v4 = 0;
  gaWin32KSyscallList = 0LL;
  v5 = v4 >> 3;
  v6 = (v4 & 7) == 0;
  qword_1C0249C68 = 0LL;
  qword_1C0249C78 = 550LL;
  qword_1C0249C88 = 320LL;
  v7 = (v4 >> 3) + 1;
  qword_1C0249C98 = 1LL;
  if ( v6 )
    v7 = v5;
  qword_1C0249CA8 = 440LL;
  qword_1C0249C70 = (__int64)&Win32KSyscallFilterList::Rs1RestrictedAppcontainer;
  v8 = v7;
  qword_1C0249CB8 = 276LL;
  qword_1C0249C80 = (__int64)&Win32KSyscallFilterList::Rs1RestrictedAppcontainerPlugin;
  qword_1C0249C90 = (__int64)&Win32KSyscallFilterList::FontDrvHost;
  qword_1C0249CA0 = (__int64)&Win32KSyscallFilterList::Rs1RestrictedAppcontainerMiniPlugin;
  qword_1C0249CB0 = (__int64)&Win32KSyscallFilterList::Rs3RestrictedAppcontainer;
  qword_1C0249CC0 = (__int64)&Win32KSyscallFilterList::Rs3HvsiRdpClient;
  dword_1C0249CC8 = 383;
  dword_1C0249CCC = 1;
  if ( !gdwServiceFilterAuditCaptureWER )
    goto LABEL_31;
  if ( (v7 & 3) != 0 )
    v8 = v7 - (v7 & 3) + 4;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v8, 0x6C667355u);
  gafServiceFilterAuditCache = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_49;
  memset(PoolWithTag, 0, v8);
  if ( !gdwServiceFilterAuditThrottleMode )
  {
    gstServiceFilterAuditStackCacheSize = (gstServiceFilterAuditStackCacheSize + 3) & 0xFFFFFFFFFFFFFFFCuLL;
    v17 = ExAllocatePoolWithTag((POOL_TYPE)512, gstServiceFilterAuditStackCacheSize, 0x6C667355u);
    gafServiceFilterAuditStackCache = v17;
    if ( v17 )
    {
      memset(v17, 0, gstServiceFilterAuditStackCacheSize);
      goto LABEL_31;
    }
LABEL_49:
    Win32KFilterBitmap = -1073741801;
    goto LABEL_50;
  }
LABEL_31:
  v10 = 0;
  v11 = (unsigned int *)&qword_1C0249C68;
  v12 = (unsigned __int8 **)gaWin32KFilterBitmap;
  while ( !*v11 )
  {
    *v12 = 0LL;
LABEL_37:
    ++v10;
    ++v12;
    v11 += 4;
    if ( v10 >= 7 )
      goto LABEL_38;
  }
  v13 = (unsigned __int8 *)ExAllocatePoolWithTag((POOL_TYPE)512, v8, 0x6C667355u);
  *v12 = v13;
  if ( v13 )
  {
    Win32KFilterBitmap = CreateWin32KFilterBitmap(*v11, *((const char **const *)v11 - 1), v14, v8, v13);
    if ( Win32KFilterBitmap == 127 )
      Win32KFilterBitmap = 0;
    v15 = Win32KFilterBitmap < 0;
    if ( Win32KFilterBitmap )
      goto LABEL_39;
    goto LABEL_37;
  }
  Win32KFilterBitmap = -1073741801;
LABEL_38:
  v15 = Win32KFilterBitmap < 0;
LABEL_39:
  if ( v15 )
LABEL_50:
    FreeWin32KSyscallFilter();
  return (unsigned int)Win32KFilterBitmap;
}
