/*
 * XREFs of _CmGetDeviceInterfaceRegKeyPath @ 0x1406EAFD8
 * Callers:
 *     PiDqGetRelativeObjectRegPath @ 0x1406D3C74 (PiDqGetRelativeObjectRegPath.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1406EAC9C (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140728EC4 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140267C48 (RtlStringCchPrintfExW.c)
 *     RtlStringCchCatExW @ 0x1403C2CD0 (RtlStringCchCatExW.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x14066AB68 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmGetDeviceInterfaceRegKeyPath(
        __int64 a1,
        const wchar_t *a2,
        int a3,
        int a4,
        int a5,
        wchar_t *a6,
        size_t cchDest,
        _DWORD *a8)
{
  __int16 v9; // r14
  wchar_t *v11; // rsi
  unsigned int v12; // r15d
  char v13; // bp
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  wchar_t *PoolWithTag; // rax
  __int64 v18; // rcx
  int DeviceInterfaceSubkeyPath; // ebx
  NTSTRSAFE_PWSTR *v20; // r9
  int v21; // r14d
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  NTSTATUS v25; // eax
  __int64 v27; // rax
  NTSTRSAFE_PWSTR *v28; // r9
  __int64 v29; // rax
  size_t *dwFlags; // [rsp+20h] [rbp-E8h]
  size_t *dwFlagsa; // [rsp+20h] [rbp-E8h]
  ULONG pszFormat; // [rsp+28h] [rbp-E0h]
  ULONG pszFormata; // [rsp+28h] [rbp-E0h]
  wchar_t v34[40]; // [rsp+70h] [rbp-98h] BYREF

  v9 = a3;
  v11 = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCCC) != 0 )
    goto LABEL_54;
  v12 = (unsigned __int8)a3;
  if ( (((unsigned __int8)a3 - 48) & 0xFFFFFFFD) != 0 )
  {
    if ( (unsigned __int8)a3 != 49 )
      return (unsigned int)-1073741811;
    v13 = 0;
  }
  else
  {
    v13 = 1;
  }
  v14 = -1LL;
  v15 = -1LL;
  do
    ++v15;
  while ( a2[v15] );
  v16 = 2 * v15 + 6;
  if ( v16 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v16, 0x52504E50u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  DeviceInterfaceSubkeyPath = CmGetDeviceInterfaceSubkeyPath(v18, a2, v13, v34, PoolWithTag, (unsigned int)v16 >> 1);
  if ( DeviceInterfaceSubkeyPath < 0 )
    goto LABEL_27;
  v21 = v9 & 0x200;
  if ( !v21 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( v34[v22] );
    v23 = v22 + 48;
    goto LABEL_14;
  }
  if ( !a4 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( v34[v27] );
    v23 = v27 + 99;
    goto LABEL_14;
  }
  if ( a4 == -1 )
  {
LABEL_54:
    DeviceInterfaceSubkeyPath = -1073741811;
    goto LABEL_27;
  }
  v29 = -1LL;
  do
    ++v29;
  while ( v34[v29] );
  v23 = v29 + 96;
  do
LABEL_14:
    ++v14;
  while ( v11[v14] );
  v24 = v23 + v14 + 1;
  if ( v12 < 0x30 )
    goto LABEL_51;
  if ( v12 <= 0x31 )
    goto LABEL_17;
  if ( v12 == 50 )
    v24 += 18LL;
  else
LABEL_51:
    DeviceInterfaceSubkeyPath = -1073741811;
LABEL_17:
  if ( DeviceInterfaceSubkeyPath >= 0 )
  {
    if ( v24 > 0xFFFFFFFF )
    {
      DeviceInterfaceSubkeyPath = -1073741675;
    }
    else
    {
      DeviceInterfaceSubkeyPath = 0;
      if ( a8 )
        *a8 = v24;
      if ( (unsigned int)v24 <= (unsigned int)cchDest )
      {
        if ( v21 )
        {
          if ( a4 )
          {
            if ( a4 == -1 )
              goto LABEL_25;
            v25 = RtlStringCchPrintfExW(a6, (unsigned int)cchDest, 0LL, 0LL, 0x800u, L"%s\\%04u\\%s\\%s\\%s");
          }
          else
          {
            v25 = RtlStringCchPrintfExW(a6, (unsigned int)cchDest, 0LL, 0LL, 0x800u, L"%s\\%s\\%s\\%s");
          }
        }
        else
        {
          v25 = RtlStringCchPrintfExW(a6, (unsigned int)cchDest, 0LL, 0LL, 0x800u, L"%s\\%s\\%s");
        }
        DeviceInterfaceSubkeyPath = v25;
LABEL_25:
        if ( DeviceInterfaceSubkeyPath >= 0 && v12 == 50 )
        {
          DeviceInterfaceSubkeyPath = RtlStringCchCatExW(a6, (unsigned int)cchDest, L"\\", v20, dwFlags, pszFormat);
          if ( DeviceInterfaceSubkeyPath >= 0 )
            DeviceInterfaceSubkeyPath = RtlStringCchCatExW(
                                          a6,
                                          (unsigned int)cchDest,
                                          L"Device Parameters",
                                          v28,
                                          dwFlagsa,
                                          pszFormata);
        }
        goto LABEL_27;
      }
      DeviceInterfaceSubkeyPath = -1073741789;
    }
  }
LABEL_27:
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)DeviceInterfaceSubkeyPath;
}
