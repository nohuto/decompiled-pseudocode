/*
 * XREFs of NtCreateSymbolicLinkObject @ 0x1406D7C70
 * Callers:
 *     CreateSystemRootLink @ 0x140A6BBC0 (CreateSystemRootLink.c)
 *     IopReassignSystemRoot @ 0x140A6C5A8 (IopReassignSystemRoot.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     EtwWrite @ 0x140256BF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ObCreateSymbolicLink @ 0x1406D7F7C (ObCreateSymbolicLink.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtCreateSymbolicLinkObject(
        PHANDLE LinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PUNICODE_STRING LinkTarget)
{
  char PreviousMode; // r8
  UNICODE_STRING v9; // xmm1
  UNICODE_STRING *v10; // rax
  unsigned __int16 v11; // di
  NTSTATUS SymbolicLink; // ebx
  REGHANDLE v13; // r10
  unsigned int v14; // r9d
  __int64 v15; // rax
  unsigned int v16; // r9d
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int16 v23; // ax
  wchar_t *v24; // rdx
  wchar_t *v25; // rdx
  __int64 v26; // rcx
  __int16 v27; // [rsp+30h] [rbp-F8h] BYREF
  UNICODE_STRING v28; // [rsp+38h] [rbp-F0h] BYREF
  ACCESS_MASK v29; // [rsp+48h] [rbp-E0h] BYREF
  NTSTATUS v30; // [rsp+50h] [rbp-D8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-D0h] BYREF
  UNICODE_STRING *ObjectName; // [rsp+68h] [rbp-C0h]
  __int64 v33; // [rsp+70h] [rbp-B8h] BYREF
  UNICODE_STRING v34; // [rsp+78h] [rbp-B0h]
  struct _EVENT_DATA_DESCRIPTOR UserData[6]; // [rsp+90h] [rbp-98h] BYREF

  v28 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v28, 0LL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)ObjectAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    ObjectName = ObjectAttributes->ObjectName;
    if ( ObjectName )
    {
      DestinationString = *ObjectName;
      v23 = _mm_cvtsi128_si32((__m128i)DestinationString);
      if ( v23 )
      {
        v24 = (wchar_t *)((char *)DestinationString.Buffer + v23);
        if ( (unsigned __int64)v24 > 0x7FFFFFFF0000LL || v24 < DestinationString.Buffer )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    v28 = *LinkTarget;
    if ( v28.MaximumLength )
    {
      v25 = (wchar_t *)((char *)v28.Buffer + v28.MaximumLength);
      if ( (unsigned __int64)v25 > 0x7FFFFFFF0000LL || v25 < v28.Buffer )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v26 = (__int64)LinkHandle;
    if ( (unsigned __int64)LinkHandle >= 0x7FFFFFFF0000LL )
      v26 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v26 = *(_QWORD *)v26;
    v9 = v28;
  }
  else
  {
    v9 = *LinkTarget;
    v28 = *LinkTarget;
    v10 = ObjectAttributes->ObjectName;
    if ( v10 )
      DestinationString = *v10;
  }
  if ( (v9.MaximumLength & 1) != 0 )
  {
    v28.MaximumLength = v9.MaximumLength & 0xFFFE;
    v9 = v28;
  }
  if ( !v28.MaximumLength )
    return -1073741811;
  v11 = _mm_cvtsi128_si32((__m128i)v9);
  if ( v11 > v28.MaximumLength || (_mm_cvtsi128_si32((__m128i)v9) & 1) != 0 )
    return -1073741811;
  v33 = 0LL;
  v34 = v9;
  SymbolicLink = ObCreateSymbolicLink(
                   (_DWORD)LinkHandle,
                   DesiredAccess,
                   (_DWORD)ObjectAttributes,
                   (unsigned int)&v33,
                   PreviousMode);
  v30 = SymbolicLink;
  v29 = DesiredAccess;
  v13 = EtwApiCallsProvRegHandle;
  if ( EtwApiCallsProvRegHandle )
  {
    v27 = 0;
    v14 = 0;
    if ( DestinationString.Buffer )
    {
      UserData[0].Ptr = (ULONGLONG)DestinationString.Buffer;
      UserData[0].Size = DestinationString.Length;
      UserData[0].Reserved = 0;
      v14 = 1;
    }
    v15 = v14;
    UserData[v15].Ptr = (ULONGLONG)&v27;
    *(_QWORD *)&UserData[v15].Size = 2LL;
    v16 = v14 + 1;
    if ( v28.Buffer )
    {
      v17 = v16;
      UserData[v17].Ptr = (ULONGLONG)v28.Buffer;
      UserData[v17].Size = v11;
      *(&UserData[0].Reserved + 1 * v17) = 0;
      ++v16;
    }
    v18 = v16;
    UserData[v18].Ptr = (ULONGLONG)&v27;
    *(_QWORD *)&UserData[v18].Size = 2LL;
    v19 = v16 + 1;
    v20 = v19;
    UserData[v20].Ptr = (ULONGLONG)&v29;
    *(_QWORD *)&UserData[v20].Size = 4LL;
    v21 = ++v19;
    UserData[v21].Ptr = (ULONGLONG)&v30;
    *(_QWORD *)&UserData[v21].Size = 4LL;
    EtwWrite(v13, &KERNEL_AUDIT_API_CREATESYMBOLICLINKOBJECT, 0LL, v19 + 1, UserData);
  }
  return SymbolicLink;
}
