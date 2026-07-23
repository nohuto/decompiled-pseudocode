/*
 * XREFs of DrvDbDeleteObjectSubKey @ 0x14097CF8C
 * Callers:
 *     DrvDbDeleteObjectRegKey @ 0x14097CE24 (DrvDbDeleteObjectRegKey.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140253448 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     wcschr @ 0x1403D4080 (wcschr.c)
 *     wcsrchr @ 0x1403D4270 (wcsrchr.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x1403FC060 (ZwDeleteValueKey.c)
 *     _SysCtxRegOpenKey @ 0x1406374BC (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegEnumValue @ 0x140673004 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x14067313C (_PnpCtxRegQueryInfoKey.c)
 *     _RegRtlDeleteTreeInternal @ 0x140766B34 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140766F18 (_RegRtlDeleteKeyTransacted.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140768140 (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpDeletePropertyWorker @ 0x14076D15C (_PnpDeletePropertyWorker.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall DrvDbDeleteObjectSubKey(__int64 *a1, char *a2, const WCHAR *a3, unsigned int a4)
{
  __int64 v4; // rax
  unsigned int v5; // esi
  PVOID PoolWithTag; // r13
  unsigned int v9; // edi
  wchar_t *v10; // r12
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  int inited; // ebx
  __int64 v15; // rcx
  signed int i; // eax
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rdi
  int v20; // eax
  __int64 v21; // rbx
  size_t v22; // rbx
  wchar_t *v23; // rax
  char *j; // rax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  int v30; // eax
  wchar_t *v31; // rax
  bool v32; // zf
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // eax
  __int64 v36; // rcx
  unsigned int v37; // esi
  __int64 v38; // rcx
  PVOID v39; // rdi
  HANDLE v40; // r14
  __int64 dwFlags; // [rsp+28h] [rbp-48h]
  unsigned int v43; // [rsp+40h] [rbp-30h] BYREF
  int v44; // [rsp+44h] [rbp-2Ch] BYREF
  int v45; // [rsp+48h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v49; // [rsp+C8h] [rbp+58h] BYREF

  v4 = *a1;
  v5 = 0;
  Handle = 0LL;
  v43 = 0;
  v44 = 0;
  v49 = 0;
  PoolWithTag = 0LL;
  v45 = 0;
  v9 = 0;
  v10 = 0LL;
  if ( a4 <= 1 )
  {
    if ( v4 && (v11 = *(_QWORD *)(v4 + 224)) != 0 )
      v12 = *(_QWORD *)(v11 + 8);
    else
      v12 = 0LL;
    v13 = RegRtlDeleteTreeInternal(a2, a3, v12, 0);
    inited = v13;
LABEL_7:
    if ( v13 == -1073741444 )
      inited = 0;
    goto LABEL_86;
  }
  v15 = 0LL;
  if ( v4 )
    v15 = *(_QWORD *)(v4 + 224);
  v13 = SysCtxRegOpenKey(v15, (__int64)a2, (__int64)a3, 0, 0x3001Fu, (__int64)&Handle);
  inited = v13;
  if ( v13 < 0 )
    goto LABEL_7;
  for ( i = PnpGetGenericStorePropertyKeys(*a1, (__int64)Handle, 0LL, 0, 0LL, 0, &v43);
        ;
        i = PnpGetGenericStorePropertyKeys(*a1, (__int64)Handle, 0LL, 0, (__int64)PoolWithTag, v17, &v43) )
  {
    inited = i;
    if ( i != -1073741789 )
      break;
    v17 = v43;
    if ( v43 <= v9 )
    {
      inited = -1073741595;
      break;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    v9 = v17;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 20 * v17, 0x42444450u);
    if ( !PoolWithTag )
    {
      inited = -1073741801;
      break;
    }
  }
  if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741275 )
    goto LABEL_84;
  if ( inited != -1073741275 )
    v5 = v9;
  v18 = 0;
  v19 = 0LL;
  if ( inited != -1073741275 )
    v18 = inited;
  inited = v18;
  if ( v5 )
  {
    do
    {
      v20 = PnpDeletePropertyWorker(*a1, (__int64)Handle, 0LL, (__int64)PoolWithTag + 20 * v19, 0, dwFlags, 0);
      inited = v20;
      if ( v20 == -1073741275 || v20 == -1073741790 )
      {
        inited = 0;
      }
      else if ( v20 < 0 )
      {
        goto LABEL_84;
      }
      v19 = (unsigned int)(v19 + 1);
    }
    while ( (unsigned int)v19 < v5 );
  }
  if ( inited < 0 )
    goto LABEL_84;
  if ( !wcschr(a3, 0x5Cu) )
  {
    if ( *a1 && (v33 = *(_QWORD *)(*a1 + 224)) != 0 )
      v34 = *(_QWORD *)(v33 + 8);
    else
      v34 = 0LL;
    v35 = RegRtlDeleteKeyTransacted((char *)Handle, 0LL, v34);
    inited = v35;
    if ( v35 == -1073741444 )
    {
      inited = 0;
      goto LABEL_84;
    }
    if ( v35 != -1073741535 )
      goto LABEL_84;
    inited = PnpCtxRegQueryInfoKey(v36, Handle, 0LL, 0LL, &v49, &v45, 0LL);
    if ( inited < 0 )
      goto LABEL_84;
    v37 = v45 + 1;
    if ( !v49 )
      goto LABEL_84;
    v39 = ExAllocatePoolWithTag(PagedPool, 2LL * v37, 0x42444450u);
    if ( v39 )
    {
      while ( 1 )
      {
        v49 = v37;
        inited = PnpCtxRegEnumValue(v38, Handle, 0, v39, &v49, 0LL, 0LL, 0LL);
        if ( inited < 0 )
          break;
        v40 = Handle;
        DestinationString = 0LL;
        inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)v39);
        if ( inited >= 0 )
          inited = ZwDeleteValueKey(v40, &DestinationString);
        if ( inited != -1073741772 && inited < 0 )
          goto LABEL_81;
      }
      if ( inited == -2147483622 )
        inited = 0;
LABEL_81:
      ExFreePoolWithTag(v39, 0);
      goto LABEL_82;
    }
LABEL_40:
    inited = -1073741801;
    goto LABEL_84;
  }
  v21 = -1LL;
  do
    ++v21;
  while ( a3[v21] );
  v22 = v21 + 1;
  v23 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * v22, 0x42444450u);
  v10 = v23;
  if ( !v23 )
    goto LABEL_40;
  RtlStringCchCopyExW(v23, v22, a3, 0LL, 0LL, 0x900u);
  for ( j = (char *)Handle; ; j = 0LL )
  {
    if ( !j )
    {
      v25 = 0LL;
      if ( *a1 )
        v25 = *(_QWORD *)(*a1 + 224);
      v26 = SysCtxRegOpenKey(v25, (__int64)a2, (__int64)v10, 0, 0x3001Fu, (__int64)&Handle);
      inited = v26;
      if ( v26 < 0 )
      {
        v32 = v26 == -1073741444;
        goto LABEL_60;
      }
      inited = PnpCtxRegQueryInfoKey(v27, Handle, &v44, 0LL, &v49, 0LL, 0LL);
      if ( inited < 0 || v44 || v49 )
        goto LABEL_82;
      j = (char *)Handle;
    }
    if ( *a1 && (v28 = *(_QWORD *)(*a1 + 224)) != 0 )
      v29 = *(_QWORD *)(v28 + 8);
    else
      v29 = 0LL;
    v30 = RegRtlDeleteKeyTransacted(j, 0LL, v29);
    inited = v30;
    if ( v30 == -1073741444 )
    {
      inited = 0;
      goto LABEL_57;
    }
    if ( v30 < 0 )
      break;
LABEL_57:
    v31 = wcsrchr(v10, 0x5Cu);
    if ( !v31 )
      goto LABEL_82;
    *v31 = 0;
    ZwClose(Handle);
    Handle = 0LL;
  }
  v32 = v30 == -1073741535;
LABEL_60:
  if ( v32 )
    inited = 0;
LABEL_82:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
LABEL_84:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_86:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}
