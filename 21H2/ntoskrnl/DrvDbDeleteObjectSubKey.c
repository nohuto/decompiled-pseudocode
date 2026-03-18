/*
 * XREFs of DrvDbDeleteObjectSubKey @ 0x140A2DB88
 * Callers:
 *     DrvDbDeleteObjectRegKey @ 0x140A2DA0C (DrvDbDeleteObjectRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyExW @ 0x1402E0340 (RtlStringCchCopyExW.c)
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     wcsrchr @ 0x1403E34B0 (wcsrchr.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140698AAC (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpCtxRegEnumValue @ 0x14069946C (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1406994BC (_PnpCtxRegQueryInfoKey.c)
 *     _RegRtlDeleteTreeInternal @ 0x1406CB238 (_RegRtlDeleteTreeInternal.c)
 *     _PnpDeletePropertyWorker @ 0x1406DB1B4 (_PnpDeletePropertyWorker.c)
 *     _SysCtxRegOpenKey @ 0x14077FFEC (_SysCtxRegOpenKey.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140862B44 (_RegRtlDeleteKeyTransacted.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall DrvDbDeleteObjectSubKey(__int64 *a1, __int64 a2, const wchar_t *a3, unsigned int a4)
{
  __int64 v4; // rax
  unsigned int v5; // r15d
  void *Pool2; // rsi
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  int InfoKey; // ebx
  __int64 v15; // rcx
  NTSTATUS i; // eax
  __int64 v17; // rbx
  bool v18; // zf
  int v19; // eax
  unsigned int v20; // edi
  int v21; // eax
  __int64 v22; // rbx
  size_t v23; // rbx
  wchar_t *v24; // rax
  wchar_t *v25; // rdi
  char *j; // rax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  wchar_t *v32; // rax
  bool v33; // zf
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // eax
  __int64 v37; // rcx
  unsigned int v38; // r14d
  __int64 v39; // rcx
  HANDLE v40; // r15
  __int64 dwFlags; // [rsp+28h] [rbp-48h]
  unsigned int v43; // [rsp+40h] [rbp-30h] BYREF
  int v44; // [rsp+44h] [rbp-2Ch] BYREF
  int v45; // [rsp+48h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v48; // [rsp+B8h] [rbp+48h] BYREF

  v4 = *a1;
  v5 = 0;
  Handle = 0LL;
  v43 = 0;
  v44 = 0;
  v48 = 0;
  Pool2 = 0LL;
  v45 = 0;
  v10 = 0;
  if ( a4 <= 1 )
  {
    if ( v4 && (v11 = *(_QWORD *)(v4 + 224)) != 0 )
      v12 = *(_QWORD *)(v11 + 8);
    else
      v12 = 0LL;
    v13 = RegRtlDeleteTreeInternal(a2, (__int64)a3, v12, 0);
    InfoKey = v13;
LABEL_7:
    if ( v13 == -1073741444 )
      InfoKey = 0;
    goto LABEL_84;
  }
  v15 = 0LL;
  if ( v4 )
    v15 = *(_QWORD *)(v4 + 224);
  v13 = SysCtxRegOpenKey(v15, a2, (__int64)a3, 0, 0x3001Fu, (__int64)&Handle);
  InfoKey = v13;
  if ( v13 < 0 )
    goto LABEL_7;
  for ( i = PnpGetGenericStorePropertyKeys(*a1, (__int64)Handle, 0LL, 0, 0LL, 0, &v43);
        ;
        i = PnpGetGenericStorePropertyKeys(*a1, (__int64)Handle, 0LL, 0, (__int64)Pool2, v17, &v43) )
  {
    InfoKey = i;
    if ( i != -1073741789 )
      break;
    v17 = v43;
    if ( v43 <= v10 )
    {
      InfoKey = -1073741595;
      goto LABEL_82;
    }
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    v10 = v17;
    Pool2 = (void *)ExAllocatePool2(256LL, 20 * v17, 1111770192LL);
    if ( !Pool2 )
    {
      InfoKey = -1073741801;
      goto LABEL_84;
    }
  }
  v18 = i == -1073741275;
  if ( i != -1073741275 )
  {
    if ( i < 0 )
      goto LABEL_82;
    v18 = i == -1073741275;
  }
  if ( !v18 )
    v5 = v10;
  v19 = 0;
  v20 = 0;
  if ( InfoKey != -1073741275 )
    v19 = InfoKey;
  InfoKey = v19;
  if ( v5 )
  {
    do
    {
      v21 = PnpDeletePropertyWorker(*a1, (__int64)Handle, 0LL, (__int64)Pool2 + 20 * v20, 0, dwFlags, 0);
      InfoKey = v21;
      if ( v21 == -1073741275 || v21 == -1073741790 )
      {
        InfoKey = 0;
      }
      else if ( v21 < 0 )
      {
        goto LABEL_82;
      }
      ++v20;
    }
    while ( v20 < v5 );
  }
  if ( InfoKey >= 0 )
  {
    if ( wcschr(a3, 0x5Cu) )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( a3[v22] );
      v23 = v22 + 1;
      v24 = (wchar_t *)ExAllocatePool2(256LL, 2 * v23, 1111770192LL);
      v25 = v24;
      if ( v24 )
      {
        RtlStringCchCopyExW(v24, v23, a3, 0LL, 0LL, 0x900u);
        for ( j = (char *)Handle; ; j = 0LL )
        {
          if ( !j )
          {
            v27 = 0LL;
            if ( *a1 )
              v27 = *(_QWORD *)(*a1 + 224);
            v28 = SysCtxRegOpenKey(v27, a2, (__int64)v25, 0, 0x3001Fu, (__int64)&Handle);
            InfoKey = v28;
            if ( v28 < 0 )
            {
              if ( v28 == -1073741444 )
                InfoKey = 0;
              goto LABEL_81;
            }
            InfoKey = PnpCtxRegQueryInfoKey(v29, (int)Handle, (int)&v44, 0, (__int64)&v48, 0LL, 0LL);
            if ( InfoKey < 0 || v44 || v48 )
              goto LABEL_81;
            j = (char *)Handle;
          }
          if ( *a1 && (v30 = *(_QWORD *)(*a1 + 224)) != 0 )
            v31 = *(_QWORD *)(v30 + 8);
          else
            v31 = 0LL;
          InfoKey = RegRtlDeleteKeyTransacted(j, 0LL, v31);
          if ( InfoKey == -1073741444 )
          {
            InfoKey = 0;
          }
          else if ( InfoKey < 0 )
          {
            v33 = InfoKey == -1073741535;
            goto LABEL_79;
          }
          v32 = wcsrchr(v25, 0x5Cu);
          if ( !v32 )
            goto LABEL_81;
          *v32 = 0;
          ZwClose(Handle);
          Handle = 0LL;
        }
      }
LABEL_40:
      InfoKey = -1073741801;
      goto LABEL_82;
    }
    if ( *a1 && (v34 = *(_QWORD *)(*a1 + 224)) != 0 )
      v35 = *(_QWORD *)(v34 + 8);
    else
      v35 = 0LL;
    v36 = RegRtlDeleteKeyTransacted((char *)Handle, 0LL, v35);
    InfoKey = v36;
    if ( v36 == -1073741444 )
    {
      InfoKey = 0;
    }
    else if ( v36 == -1073741535 )
    {
      InfoKey = PnpCtxRegQueryInfoKey(v37, (int)Handle, 0, 0, (__int64)&v48, (__int64)&v45, 0LL);
      if ( InfoKey >= 0 )
      {
        v38 = v45 + 1;
        if ( v48 )
        {
          v25 = (wchar_t *)ExAllocatePool2(256LL, 2LL * v38, 1111770192LL);
          if ( v25 )
          {
            while ( 1 )
            {
              v48 = v38;
              InfoKey = PnpCtxRegEnumValue(v39, Handle, 0, v25, (__int64)&v48, 0LL, 0LL, 0LL);
              if ( InfoKey < 0 )
                break;
              v40 = Handle;
              DestinationString = 0LL;
              InfoKey = RtlInitUnicodeStringEx(&DestinationString, v25);
              if ( InfoKey >= 0 )
                InfoKey = ZwDeleteValueKey(v40, &DestinationString);
              if ( ((InfoKey + 0x80000000) & 0x80000000) == 0 && InfoKey != -1073741772 )
                goto LABEL_81;
            }
            v33 = InfoKey == -2147483622;
LABEL_79:
            if ( v33 )
              InfoKey = 0;
LABEL_81:
            ExFreePoolWithTag(v25, 0);
            goto LABEL_82;
          }
          goto LABEL_40;
        }
      }
    }
  }
LABEL_82:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
LABEL_84:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)InfoKey;
}
