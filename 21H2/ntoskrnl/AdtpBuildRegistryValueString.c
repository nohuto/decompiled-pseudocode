/*
 * XREFs of AdtpBuildRegistryValueString @ 0x14096D7B0
 * Callers:
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14091D4AC (SeAdtRegistryValueChangedAuditAlarm.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     AdtpBuildHexInt64String @ 0x14096D188 (AdtpBuildHexInt64String.c)
 *     AdtpBuildUlongString @ 0x14096E194 (AdtpBuildUlongString.c)
 *     AdtpBuildReplacementString @ 0x14096EB50 (AdtpBuildReplacementString.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildRegistryValueString(
        int a1,
        unsigned int a2,
        unsigned int *a3,
        UNICODE_STRING *a4,
        char *a5)
{
  size_t v5; // rbx
  unsigned int *v7; // r14
  unsigned int v8; // edi
  int v9; // r9d
  const WCHAR *v10; // r12
  char v11; // bp
  unsigned __int32 v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // ecx
  __int64 v16; // rdx
  unsigned int *v17; // rdx
  __int64 v18; // r8
  __int16 v19; // cx
  int v20; // eax
  unsigned int v21; // r13d
  unsigned int v22; // edx
  unsigned int v23; // ecx
  WCHAR v24; // ax
  __int64 v25; // r8
  wchar_t *v26; // rax
  unsigned __int64 v27; // r13
  WCHAR *PoolWithTag; // rax
  const WCHAR *v29; // r12
  unsigned __int16 Length; // ax
  unsigned __int16 MaximumLength; // ax
  wchar_t *Buffer; // rcx
  int v34; // [rsp+20h] [rbp-38h]

  v5 = a2;
  v7 = a3;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  *a5 = 0;
  v11 = 1;
  switch ( a1 )
  {
    case 4:
      if ( a2 >= 4 )
      {
        v12 = *a3;
LABEL_7:
        v13 = AdtpBuildUlongString(v12, 0LL, (__int64)a5);
LABEL_11:
        v8 = v13;
        goto LABEL_51;
      }
      goto LABEL_37;
    case 5:
      if ( a2 >= 4 )
      {
        v12 = _byteswap_ulong(*a3);
        goto LABEL_7;
      }
      goto LABEL_37;
    case 11:
      if ( a2 >= 8 )
      {
        v13 = AdtpBuildHexInt64String(a3, (__int64)a4, (__int64)a3, 0LL, v34, a5);
        goto LABEL_11;
      }
      goto LABEL_37;
  }
  if ( (unsigned int)(a1 - 1) <= 1 )
  {
    if ( a2 >= 2 && (v27 = (unsigned __int64)a2 >> 1, *((_WORD *)a3 + v27 - 1)) )
    {
      PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, a2 + 2LL, 0x6B416553u);
      v29 = PoolWithTag;
      if ( !PoolWithTag )
      {
LABEL_24:
        v8 = -1073741801;
        goto LABEL_52;
      }
      memmove(PoolWithTag, v7, v5);
      v29[v27] = 0;
    }
    else
    {
      v29 = (const WCHAR *)a3;
      v11 = 0;
      if ( a2 < 2 )
        v29 = 0LL;
    }
    RtlInitUnicodeString(a4, v29);
    *a5 = v11;
    Length = a4->Length;
    if ( a4->Length >= (unsigned __int16)v5 )
      Length = v5;
    a4->Length = Length;
    MaximumLength = a4->MaximumLength;
    if ( MaximumLength >= (unsigned __int16)v5 )
      MaximumLength = v5;
    a4->MaximumLength = MaximumLength;
LABEL_51:
    if ( (v8 & 0x80000000) == 0 )
      return v8;
    goto LABEL_52;
  }
  if ( a1 != 7 )
  {
LABEL_37:
    v26 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x1AuLL, 0x6B416553u);
    a4->Buffer = v26;
    if ( v26 )
    {
      *a5 = 1;
      *(_DWORD *)&a4->Length = 1703936;
      v13 = AdtpBuildReplacementString(1800LL, a4);
      goto LABEL_11;
    }
    v8 = -1073741801;
LABEL_52:
    if ( *a5 )
    {
      Buffer = a4->Buffer;
      if ( Buffer )
        ExFreePoolWithTag(Buffer, 0);
    }
    *a5 = 0;
    return v8;
  }
  v14 = a2 >> 1;
  v15 = 0;
  if ( a2 >> 1 )
  {
    do
    {
      v16 = v14 - 1;
      if ( *((_WORD *)a3 + v16) )
        break;
      if ( v15 >= 2 )
        break;
      ++v15;
      --v14;
    }
    while ( (_DWORD)v16 );
  }
  if ( v14 )
  {
    v17 = a3;
    v18 = v14;
    do
    {
      v19 = *(_WORD *)v17;
      v20 = v9 + 1;
      v17 = (unsigned int *)((char *)v17 + 2);
      if ( v19 != 42 )
        v20 = v9;
      v9 = v20;
      --v18;
    }
    while ( v18 );
    v21 = v20 + v14;
    v10 = (const WCHAR *)ExAllocatePoolWithTag(PagedPool, 2LL * (v20 + v14 + 1), 0x6B416553u);
    if ( !v10 )
      goto LABEL_24;
    v22 = 0;
    v23 = 0;
    while ( 1 )
    {
      if ( v23 >= v21 )
      {
LABEL_34:
        v10[v23] = 0;
        goto LABEL_35;
      }
      v24 = *(_WORD *)v7;
      v25 = v23 + 1;
      if ( !*(_WORD *)v7 )
        break;
      if ( v24 != 42 )
      {
        v10[v23] = v24;
        goto LABEL_32;
      }
      v10[v23] = 42;
      v23 += 2;
      v10[v25] = 42;
LABEL_33:
      ++v22;
      v7 = (unsigned int *)((char *)v7 + 2);
      if ( v22 >= v14 )
        goto LABEL_34;
    }
    v10[v23] = 42;
LABEL_32:
    ++v23;
    goto LABEL_33;
  }
LABEL_35:
  RtlInitUnicodeString(a4, v10);
  if ( v10 )
    *a5 = 1;
  return v8;
}
