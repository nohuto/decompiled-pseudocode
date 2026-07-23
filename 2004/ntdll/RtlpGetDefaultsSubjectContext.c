/*
 * XREFs of RtlpGetDefaultsSubjectContext @ 0x180066CBC
 * Callers:
 *     RtlpNewSecurityObject @ 0x180038B7C (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x180066EF8 (RtlpGetDefaultTrustSubjectContext.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     NtQueryInformationToken @ 0x18009D230 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x18009F300 (NtOpenProcessToken.c)
 */

__int64 __fastcall RtlpGetDefaultsSubjectContext(
        HANDLE TokenHandle,
        char a2,
        PVOID *a3,
        PVOID *a4,
        PVOID *a5,
        PVOID *a6,
        PVOID *a7,
        PVOID *a8,
        PVOID *a9)
{
  PVOID *v9; // r12
  PVOID *v11; // r14
  PVOID *v14; // rax
  struct _PEB *v15; // rax
  void *ProcessHeap; // rdi
  PVOID Heap; // rax
  NTSTATUS InformationToken; // ebx
  PVOID v19; // rax
  PVOID v20; // rax
  PVOID v21; // rax
  PVOID *v23; // rsi
  PVOID *v24; // rsi
  PVOID *v25; // rsi
  PVOID v26; // rax
  PVOID v27; // rax
  ULONG ReturnLength; // [rsp+30h] [rbp-18h] BYREF
  ULONG v29; // [rsp+34h] [rbp-14h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-10h] BYREF
  char v31; // [rsp+90h] [rbp+48h]
  ULONG v33; // [rsp+A0h] [rbp+58h] BYREF
  ULONG TokenInformationLength; // [rsp+A8h] [rbp+60h] BYREF

  v9 = a5;
  v11 = a9;
  Handle = 0LL;
  *a6 = 0LL;
  v14 = a7;
  v31 = 0;
  *a3 = 0LL;
  *a4 = 0LL;
  *v14 = 0LL;
  v15 = NtCurrentPeb();
  *v9 = 0LL;
  *v11 = 0LL;
  ProcessHeap = v15->ProcessHeap;
  if ( TokenHandle )
  {
    TokenInformationLength = 76;
    Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 0x4CuLL);
    *a3 = Heap;
    if ( !Heap )
      goto LABEL_15;
    InformationToken = NtQueryInformationToken(TokenHandle, 4u, Heap, TokenInformationLength, &TokenInformationLength);
    if ( InformationToken < 0 )
      goto LABEL_16;
    ReturnLength = 84;
    v19 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 0x54uLL);
    *a7 = v19;
    if ( !v19 )
      goto LABEL_15;
    InformationToken = NtQueryInformationToken(TokenHandle, 0x19u, v19, ReturnLength, &ReturnLength);
    if ( InformationToken < 0 )
      goto LABEL_16;
    InformationToken = NtQueryInformationToken(TokenHandle, 5u, *a4, 0, (PULONG)&a5);
    if ( InformationToken != -1073741789 )
      goto LABEL_16;
    v20 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, (unsigned int)a5);
    *a4 = v20;
    if ( !v20 )
      goto LABEL_15;
    InformationToken = NtQueryInformationToken(TokenHandle, 5u, v20, (ULONG)a5, (PULONG)&a5);
    if ( InformationToken < 0 )
      goto LABEL_16;
    InformationToken = NtQueryInformationToken(TokenHandle, 6u, *v9, 0, (PULONG)&a9);
    if ( InformationToken != -1073741789 )
      goto LABEL_16;
    v21 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, (unsigned int)a9);
    *v9 = v21;
    if ( !v21 )
    {
LABEL_15:
      InformationToken = -1073741801;
      goto LABEL_16;
    }
    InformationToken = NtQueryInformationToken(TokenHandle, 6u, v21, (ULONG)a9, (PULONG)&a9);
    if ( InformationToken < 0 )
      goto LABEL_16;
  }
  InformationToken = RtlpGetDefaultTrustSubjectContext(TokenHandle);
  if ( InformationToken < 0 )
    goto LABEL_16;
  if ( !a2 )
    return 0LL;
  InformationToken = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &Handle);
  if ( InformationToken < 0 )
  {
    v31 = 0;
    goto LABEL_16;
  }
  v31 = 1;
  v29 = 76;
  v26 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 0x4CuLL);
  *a6 = v26;
  if ( !v26 )
    goto LABEL_15;
  InformationToken = NtQueryInformationToken(Handle, 4u, v26, v29, &v29);
  if ( InformationToken >= 0 )
  {
    InformationToken = NtQueryInformationToken(Handle, 5u, *v11, 0, &v33);
    if ( InformationToken == -1073741789 )
    {
      v27 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v33);
      *v11 = v27;
      if ( v27 )
      {
        InformationToken = NtQueryInformationToken(Handle, 5u, v27, v33, &v33);
        if ( InformationToken >= 0 )
        {
          NtClose(Handle);
          return 0LL;
        }
      }
    }
  }
LABEL_16:
  if ( *a3 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a3);
    *a3 = 0LL;
  }
  v23 = a7;
  if ( *a7 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a7);
    *v23 = 0LL;
  }
  if ( *a4 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a4);
    *a4 = 0LL;
  }
  if ( *v9 )
  {
    RtlFreeHeap(ProcessHeap, 0, *v9);
    *v9 = 0LL;
  }
  v24 = a8;
  if ( *a8 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a8);
    *v24 = 0LL;
  }
  v25 = a6;
  if ( *a6 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a6);
    *v25 = 0LL;
  }
  if ( *v11 )
  {
    RtlFreeHeap(ProcessHeap, 0, *v11);
    *v11 = 0LL;
  }
  if ( v31 == 1 )
    NtClose(Handle);
  return (unsigned int)InformationToken;
}
