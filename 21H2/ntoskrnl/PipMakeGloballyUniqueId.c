/*
 * XREFs of PipMakeGloballyUniqueId @ 0x14076C400
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140744490 (PiProcessNewDeviceNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B46E0 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     RtlStringCbCopyW @ 0x140264ED8 (RtlStringCbCopyW.c)
 *     RtlStringCchPrintfExW @ 0x140265B34 (RtlStringCchPrintfExW.c)
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x14027EB50 (RtlStringCbPrintfW.c)
 *     RtlStringCchPrintfW @ 0x14027F140 (RtlStringCchPrintfW.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14034BF60 (ExAcquireResourceSharedLite.c)
 *     RtlStringCchCopyW @ 0x1403716A0 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1403FA680 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x1403FAFA0 (ZwSetValueKey.c)
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     _CmOpenDeviceRegKey @ 0x140641B70 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140642808 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlUpcaseUnicodeString @ 0x1406CC820 (RtlUpcaseUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PipMakeGloballyUniqueId(__int64 a1, __int64 a2, wchar_t **a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  wchar_t **v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  wchar_t *v8; // r15
  wchar_t *v9; // rdi
  wchar_t *v10; // rsi
  int CachedContextBaseKey; // ebx
  unsigned int v12; // r13d
  wchar_t *v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  wchar_t *v16; // rax
  wchar_t *Buffer; // rdx
  int v19; // r8d
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rcx
  int v22; // eax
  int v23; // ebx
  unsigned int v24; // eax
  unsigned int v25; // r13d
  wchar_t *PoolWithTag; // rax
  ULONG Length[2]; // [rsp+20h] [rbp-79h]
  PULONG ResultLength; // [rsp+28h] [rbp-71h]
  __int64 v29; // [rsp+30h] [rbp-69h]
  __int64 v30; // [rsp+38h] [rbp-61h]
  ULONG v31; // [rsp+50h] [rbp-49h] BYREF
  wchar_t **v32; // [rsp+58h] [rbp-41h]
  int Data; // [rsp+60h] [rbp-39h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-31h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-21h] BYREF
  int v36; // [rsp+80h] [rbp-19h]
  HANDLE v37; // [rsp+88h] [rbp-11h] BYREF
  size_t cbDest; // [rsp+90h] [rbp-9h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+98h] [rbp-1h] BYREF
  __int64 v40; // [rsp+A0h] [rbp+7h]
  _BYTE KeyValueInformation[4]; // [rsp+A8h] [rbp+Fh] BYREF
  int v42; // [rsp+ACh] [rbp+13h]
  int v43; // [rsp+B0h] [rbp+17h]
  unsigned int v44; // [rsp+B4h] [rbp+1Bh]

  v3 = 0LL;
  v32 = a3;
  Data = 0;
  KeyHandle = 0LL;
  v4 = -1LL;
  v31 = 0;
  v5 = a3;
  ValueName = 0LL;
  CurrentThread = KeGetCurrentThread();
  v40 = a2;
  v8 = 0LL;
  v37 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  if ( a1 )
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  CachedContextBaseKey = CmOpenDeviceRegKey(
                           *(__int64 *)&PiPnpRtlCtx,
                           *(_QWORD *)(v3 + 48),
                           16,
                           0,
                           131103,
                           0,
                           (__int64)&KeyHandle,
                           0LL);
  if ( CachedContextBaseKey >= 0 )
  {
    ValueName.Buffer = L"UniqueParentID";
    *(_DWORD *)&ValueName.Length = 1966108;
    CachedContextBaseKey = ZwQueryValueKey(
                             KeyHandle,
                             &ValueName,
                             KeyValuePartialInformation,
                             KeyValueInformation,
                             0x10u,
                             &v31);
    if ( CachedContextBaseKey >= 0 )
    {
      if ( v42 != 4 || v43 != 4 )
      {
        CachedContextBaseKey = -1073741811;
        goto LABEL_18;
      }
      v25 = v44;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x12uLL, 0x6E657050u);
      v9 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_47;
      RtlStringCbPrintfW(PoolWithTag, 0x12uLL, L"%x", v25);
    }
    else
    {
      *(_DWORD *)&ValueName.Length = 1966108;
      v31 = 66;
      ValueName.Buffer = (wchar_t *)L"ParentIdPrefix";
      v10 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x42uLL, 0x6E657050u);
      if ( !v10 )
        goto LABEL_47;
      CachedContextBaseKey = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v10, v31, &v31);
      if ( CachedContextBaseKey >= 0 )
      {
        if ( *((_DWORD *)v10 + 1) == 1 )
        {
          v12 = *((_DWORD *)v10 + 2);
          v13 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v12, 0x6E657050u);
          v9 = v13;
          if ( v13 )
          {
            RtlStringCbCopyW(v13, v12, v10 + 6);
            goto LABEL_10;
          }
LABEL_47:
          CachedContextBaseKey = -1073741670;
          goto LABEL_17;
        }
        CachedContextBaseKey = -1073741811;
LABEL_17:
        v5 = v32;
LABEL_18:
        ZwClose(KeyHandle);
        goto LABEL_19;
      }
      v31 = 31;
      CachedContextBaseKey = RtlUpcaseUnicodeString(&ValueName, (PCUNICODE_STRING)(v3 + 40), 1u);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_17;
      Buffer = ValueName.Buffer;
      v19 = 0;
      v20 = 0LL;
      v21 = (unsigned __int64)ValueName.Length >> 1;
      if ( ValueName.Buffer > &ValueName.Buffer[v21] )
        v21 = 0LL;
      if ( v21 )
      {
        do
        {
          v22 = *Buffer;
          ++v20;
          ++Buffer;
          v19 = v22 + 37 * v19;
        }
        while ( v20 < v21 );
      }
      v23 = (int)abs32(314159269 * v19) % 1000000007;
      v36 = v23;
      RtlFreeAnsiString(&ValueName);
      cbDest = 2 * v31;
      v9 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, cbDest, 0x6E657050u);
      if ( !v9 )
        goto LABEL_47;
      LODWORD(ResultLength) = *(_DWORD *)(v3 + 152);
      Length[0] = v23;
      RtlStringCbPrintfW(v9, cbDest, L"%s.%x.%x", L"NextParentID", *(_QWORD *)Length, ResultLength);
      CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 5, (__int64)&v37);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_17;
      RtlInitUnicodeString(&ValueName, v9);
      if ( ZwQueryValueKey(v37, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x10u, &v31) < 0
        || v42 != 4
        || (v24 = v44, v43 != 4) )
      {
        v24 = 0;
      }
      Data = v24 + 1;
      CachedContextBaseKey = ZwSetValueKey(v37, &ValueName, 0, 4u, &Data, 4u);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_17;
      ValueName.Buffer = (wchar_t *)L"ParentIdPrefix";
      --Data;
      LODWORD(v30) = v36;
      *(_DWORD *)&ValueName.Length = 1966108;
      LODWORD(v29) = *(_DWORD *)(v3 + 152);
      ppszDestEnd = v9;
      RtlStringCchPrintfExW(v9, cbDest >> 1, &ppszDestEnd, 0LL, 0, L"%x&%x&%x", v29, v30, Data);
      v31 = ppszDestEnd - v9 + 1;
      CachedContextBaseKey = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, v9, 2 * v31);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_17;
    }
LABEL_10:
    v14 = v40;
    if ( v40 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( *(_WORD *)(v40 + 2 * v15) );
    }
    else
    {
      LODWORD(v15) = 0;
    }
    do
      ++v4;
    while ( v9[v4] );
    v31 = v4 + v15 + 2;
    v16 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v31, 0x6E657050u);
    v8 = v16;
    if ( v16 )
    {
      if ( v14 )
        RtlStringCchPrintfW(v16, v31, L"%s&%s", v9, v14);
      else
        RtlStringCchCopyW(v16, v31, v9);
      goto LABEL_17;
    }
    goto LABEL_47;
  }
LABEL_19:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  *v5 = v8;
  return (unsigned int)CachedContextBaseKey;
}
