/*
 * XREFs of AdtpBuildPrivilegeAuditString @ 0x14096D5A4
 * Callers:
 *     AdtpPackageParameters @ 0x1403C0AE4 (AdtpPackageParameters.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C2B24 (AdtpBuildAccessReasonAuditStringInternal.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     AdtpLookupKnownPrivilegeNameQuickly @ 0x1405C39D4 (AdtpLookupKnownPrivilegeNameQuickly.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildPrivilegeAuditString(
        unsigned int *a1,
        UNICODE_STRING *a2,
        wchar_t **a3,
        __int64 a4,
        unsigned int *a5,
        _BYTE *a6)
{
  unsigned int v6; // eax
  unsigned int v7; // r12d
  UNICODE_STRING *v10; // r15
  unsigned __int16 v13; // bx
  __int64 v14; // rdx
  unsigned int v15; // r8d
  wchar_t *PoolWithTag; // r14
  wchar_t *v17; // rdi
  size_t Length; // rbx
  wchar_t *Buffer; // rdx
  unsigned int v20; // ecx
  __int64 v21; // rbx
  unsigned __int16 v22; // di
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  UNICODE_STRING v24; // [rsp+30h] [rbp-30h]
  __int128 v25; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING v26; // [rsp+50h] [rbp-10h] BYREF

  v6 = *a1;
  v7 = 0;
  *(_DWORD *)(&v24.MaximumLength + 1) = 0;
  v10 = a2;
  DestinationString = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  if ( v6 )
  {
    if ( v6 - 1 > 0x41 )
      return 3221225485LL;
    RtlInitUnicodeString(&DestinationString, L"\r\n\t\t\t");
    RtlInitUnicodeString(&v26, L"?");
    v13 = (unsigned __int16)(*(_WORD *)a1 * (DestinationString.Length + AdtpWellKnownPrivilegeMaxLen)
                           - DestinationString.Length
                           + 2) >> 1;
    if ( a4 && (v14 = *a5, v15 = v14 + v13, v15 < 0x400) )
    {
      PoolWithTag = (wchar_t *)(a4 + 2 * v14);
      *a5 = v15;
    }
    else
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v13, 0x6B416553u);
      if ( !PoolWithTag )
        return 3221225495LL;
      *a6 = 1;
    }
    v24.Buffer = PoolWithTag;
    v24.MaximumLength = 2 * v13;
    v17 = PoolWithTag;
    if ( *a1 )
    {
      do
      {
        if ( (unsigned int)AdtpLookupKnownPrivilegeNameQuickly(&a1[2 * v7 + 2 + v7], &v25) )
        {
          Length = v26.Length;
          Buffer = v26.Buffer;
        }
        else
        {
          Length = (unsigned __int16)v25;
          Buffer = (wchar_t *)*((_QWORD *)&v25 + 1);
        }
        memmove(v17, Buffer, Length);
        v20 = *a1;
        v17 = (wchar_t *)((char *)v17 + Length);
        if ( v7 < *a1 - 1 )
        {
          v21 = DestinationString.Length;
          memmove(v17, DestinationString.Buffer, DestinationString.Length);
          v20 = *a1;
          v17 = (wchar_t *)((char *)v17 + v21);
        }
        ++v7;
      }
      while ( v7 < v20 );
      v10 = a2;
    }
    *v17 = 0;
    v22 = (_WORD)v17 - (_WORD)PoolWithTag;
    v24.Length = v22;
    if ( a3 )
    {
      *a3 = PoolWithTag;
      a3[1] = (wchar_t *)((unsigned int)v22 + 2);
    }
    else
    {
      *v10 = v24;
    }
  }
  else if ( a3 )
  {
    a3[1] = (wchar_t *)4;
    *a3 = (wchar_t *)"-";
  }
  else if ( a2 )
  {
    RtlInitUnicodeString(a2, L"-");
  }
  return 0LL;
}
