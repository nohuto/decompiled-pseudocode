/*
 * XREFs of AdtpInitializeDriveLetters @ 0x1407A8008
 * Callers:
 *     AdtpInitializeAuditingCommon @ 0x1407A7AD0 (AdtpInitializeAuditingCommon.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     StringCopyWorkerW @ 0x1403BF9B0 (StringCopyWorkerW.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     NtClose @ 0x14062C900 (NtClose.c)
 *     NtOpenSymbolicLinkObject @ 0x1406B8DC0 (NtOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x1406B8F10 (NtQuerySymbolicLinkObject.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AdtpInitializeDriveLetters(__int64 a1, size_t a2, size_t *a3, const wchar_t *a4)
{
  unsigned int v4; // edi
  wchar_t *Buffer; // r13
  int v6; // esi
  int SymbolicLinkObject; // ebx
  unsigned int v8; // ebx
  char v9; // r14
  UNICODE_STRING *v10; // rsi
  char *v12; // r14
  PVOID PoolWithTag; // rax
  void *v14; // r15
  HANDLE v15; // rcx
  size_t v16; // [rsp+28h] [rbp-69h]
  HANDLE Handle; // [rsp+38h] [rbp-59h] BYREF
  _DWORD v18[2]; // [rsp+40h] [rbp-51h] BYREF
  __int64 v19; // [rsp+48h] [rbp-49h]
  UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-41h]
  int v21; // [rsp+58h] [rbp-39h]
  int v22; // [rsp+5Ch] [rbp-35h]
  __int128 v23; // [rsp+60h] [rbp-31h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-21h] BYREF
  wchar_t pszDest[32]; // [rsp+80h] [rbp-11h] BYREF

  v18[1] = 0;
  DestinationString = 0LL;
  v22 = 0;
  v4 = 0;
  Handle = 0LL;
  StringCopyWorkerW(pszDest, a2, a3, a4, v16);
  RtlInitUnicodeString(&DestinationString, pszDest);
  Buffer = DestinationString.Buffer;
  v6 = 0;
  while ( 1 )
  {
    v18[0] = 48;
    Buffer[12] = v6 + 65;
    v19 = 0LL;
    p_DestinationString = &DestinationString;
    v21 = 576;
    v23 = 0LL;
    SymbolicLinkObject = NtOpenSymbolicLinkObject((unsigned __int64)&Handle, 1u, (__int64)v18);
    if ( SymbolicLinkObject >= 0 )
      break;
LABEL_3:
    if ( (unsigned int)++v6 >= 0x1A )
      goto LABEL_4;
  }
  *((_WORD *)&DriveMappingArray + 12 * v4) = Buffer[12];
  v12 = (char *)&DriveMappingArray + 24 * v4;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x6B416553u);
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    v15 = Handle;
    *((_DWORD *)v12 + 2) = 0x1000000;
    *((_QWORD *)v12 + 2) = PoolWithTag;
    SymbolicLinkObject = NtQuerySymbolicLinkObject(v15, (unsigned __int64)(v12 + 8), 0LL);
    NtClose(Handle);
    if ( SymbolicLinkObject < 0 )
    {
      ExFreePoolWithTag(v14, 0);
      RtlInitUnicodeString((PUNICODE_STRING)(v12 + 8), 0LL);
    }
    else
    {
      ++v4;
    }
    goto LABEL_3;
  }
  SymbolicLinkObject = -1073741801;
LABEL_4:
  if ( SymbolicLinkObject == -1073741801 )
    return 3221225495LL;
  v8 = 0;
  while ( v8 < v4 )
  {
    v18[0] = 48;
    v19 = 0LL;
    v9 = 0;
    v21 = 576;
    v23 = 0LL;
    v10 = (UNICODE_STRING *)((char *)&DriveMappingArray + 16 * v8 + 8 * v8 + 8);
    p_DestinationString = v10;
    if ( (int)NtOpenSymbolicLinkObject((unsigned __int64)&Handle, 1u, (__int64)v18) >= 0 )
    {
      if ( (int)NtQuerySymbolicLinkObject(Handle, (unsigned __int64)v10, 0LL) < 0 )
      {
        ExFreePoolWithTag(v10->Buffer, 0);
        RtlInitUnicodeString(v10, 0LL);
      }
      else
      {
        v9 = 1;
      }
      NtClose(Handle);
      if ( v9 )
        continue;
    }
    ++v8;
  }
  return 0LL;
}
