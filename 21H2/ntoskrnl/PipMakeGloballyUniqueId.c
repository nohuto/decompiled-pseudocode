/*
 * XREFs of PipMakeGloballyUniqueId @ 0x14076C5C0
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140744650 (PiProcessNewDeviceNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B4840 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x140252F68 (RtlStringCbCopyW.c)
 *     RtlStringCchPrintfExW @ 0x140253AD4 (RtlStringCchPrintfExW.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x14026CAF0 (RtlStringCbPrintfW.c)
 *     RtlStringCchPrintfW @ 0x14026D570 (RtlStringCchPrintfW.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     RtlStringCchCopyW @ 0x1403711F0 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1403FA860 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x1403FB180 (ZwSetValueKey.c)
 *     _CmOpenDeviceRegKey @ 0x140636980 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140637618 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     RtlUpcaseUnicodeString @ 0x14067B110 (RtlUpcaseUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  wchar_t *Buffer; // rdx
  int v22; // r8d
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rcx
  int v25; // eax
  int v26; // ebx
  unsigned int v27; // eax
  unsigned int v28; // r13d
  wchar_t *PoolWithTag; // rax
  ULONG Length[2]; // [rsp+20h] [rbp-79h]
  PULONG ResultLength; // [rsp+28h] [rbp-71h]
  __int64 v32; // [rsp+30h] [rbp-69h]
  __int64 v33; // [rsp+38h] [rbp-61h]
  ULONG v34; // [rsp+50h] [rbp-49h] BYREF
  wchar_t **v35; // [rsp+58h] [rbp-41h]
  int Data; // [rsp+60h] [rbp-39h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-31h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-21h] BYREF
  int v39; // [rsp+80h] [rbp-19h]
  HANDLE v40; // [rsp+88h] [rbp-11h] BYREF
  size_t cbDest; // [rsp+90h] [rbp-9h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+98h] [rbp-1h] BYREF
  __int64 v43; // [rsp+A0h] [rbp+7h]
  _BYTE KeyValueInformation[4]; // [rsp+A8h] [rbp+Fh] BYREF
  int v45; // [rsp+ACh] [rbp+13h]
  int v46; // [rsp+B0h] [rbp+17h]
  unsigned int v47; // [rsp+B4h] [rbp+1Bh]

  v3 = 0LL;
  v35 = a3;
  Data = 0;
  KeyHandle = 0LL;
  v4 = -1LL;
  v34 = 0;
  v5 = a3;
  ValueName = 0LL;
  CurrentThread = KeGetCurrentThread();
  v43 = a2;
  v8 = 0LL;
  v40 = 0LL;
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
                             &v34);
    if ( CachedContextBaseKey >= 0 )
    {
      if ( v45 != 4 || v46 != 4 )
      {
        CachedContextBaseKey = -1073741811;
        goto LABEL_18;
      }
      v28 = v47;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x12uLL, 0x6E657050u);
      v9 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_47;
      RtlStringCbPrintfW(PoolWithTag, 0x12uLL, L"%x", v28);
    }
    else
    {
      *(_DWORD *)&ValueName.Length = 1966108;
      v34 = 66;
      ValueName.Buffer = (wchar_t *)L"ParentIdPrefix";
      v10 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x42uLL, 0x6E657050u);
      if ( !v10 )
        goto LABEL_47;
      CachedContextBaseKey = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v10, v34, &v34);
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
        v5 = v35;
LABEL_18:
        ZwClose(KeyHandle);
        goto LABEL_19;
      }
      v34 = 31;
      CachedContextBaseKey = RtlUpcaseUnicodeString(&ValueName, (PCUNICODE_STRING)(v3 + 40), 1u);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_17;
      Buffer = ValueName.Buffer;
      v22 = 0;
      v23 = 0LL;
      v24 = (unsigned __int64)ValueName.Length >> 1;
      if ( ValueName.Buffer > &ValueName.Buffer[v24] )
        v24 = 0LL;
      if ( v24 )
      {
        do
        {
          v25 = *Buffer;
          ++v23;
          ++Buffer;
          v22 = v25 + 37 * v22;
        }
        while ( v23 < v24 );
      }
      v26 = (int)abs32(314159269 * v22) % 1000000007;
      v39 = v26;
      RtlFreeAnsiString(&ValueName);
      cbDest = 2 * v34;
      v9 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, cbDest, 0x6E657050u);
      if ( !v9 )
        goto LABEL_47;
      LODWORD(ResultLength) = *(_DWORD *)(v3 + 152);
      Length[0] = v26;
      RtlStringCbPrintfW(v9, cbDest, L"%s.%x.%x", L"NextParentID", *(_QWORD *)Length, ResultLength);
      CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 5, (__int64)&v40);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_17;
      RtlInitUnicodeString(&ValueName, v9);
      if ( ZwQueryValueKey(v40, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x10u, &v34) < 0
        || v45 != 4
        || (v27 = v47, v46 != 4) )
      {
        v27 = 0;
      }
      Data = v27 + 1;
      CachedContextBaseKey = ZwSetValueKey(v40, &ValueName, 0, 4u, &Data, 4u);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_17;
      ValueName.Buffer = (wchar_t *)L"ParentIdPrefix";
      --Data;
      LODWORD(v33) = v39;
      *(_DWORD *)&ValueName.Length = 1966108;
      LODWORD(v32) = *(_DWORD *)(v3 + 152);
      ppszDestEnd = v9;
      RtlStringCchPrintfExW(v9, cbDest >> 1, &ppszDestEnd, 0LL, 0, L"%x&%x&%x", v32, v33, Data);
      v34 = ppszDestEnd - v9 + 1;
      CachedContextBaseKey = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, v9, 2 * v34);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_17;
    }
LABEL_10:
    v14 = v43;
    if ( v43 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( *(_WORD *)(v43 + 2 * v15) );
    }
    else
    {
      LODWORD(v15) = 0;
    }
    do
      ++v4;
    while ( v9[v4] );
    v34 = v4 + v15 + 2;
    v16 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v34, 0x6E657050u);
    v8 = v16;
    if ( v16 )
    {
      if ( v14 )
        RtlStringCchPrintfW(v16, v34, L"%s&%s", v9, v14);
      else
        RtlStringCchCopyW(v16, v34, v9);
      goto LABEL_17;
    }
    goto LABEL_47;
  }
LABEL_19:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v17, v18, v19);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  *v5 = v8;
  return (unsigned int)CachedContextBaseKey;
}
