/*
 * XREFs of LdrpInitializeApplicationVerifierPackage @ 0x1800D0A40
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800D0EEC (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x180016090 (RtlCompareUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x18001C270 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringToInteger @ 0x1800754D0 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x18009D0F0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 *     LdrpLogDbgPrint @ 0x1800CDAE8 (LdrpLogDbgPrint.c)
 *     AVrfInitializeVerifier @ 0x1800D97F8 (AVrfInitializeVerifier.c)
 */

__int64 __fastcall LdrpInitializeApplicationVerifierPackage(
        unsigned __int16 *a1,
        __int64 a2,
        char a3,
        void *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int16 *v9; // rbx
  int v10; // r8d
  __int64 v11; // rax
  int v12; // ecx
  wchar_t *i; // rax
  __int64 result; // rax
  int v15; // ecx
  PULONG v16; // rbx
  ULONG v17; // r13d
  NTSTATUS inited; // edi
  unsigned __int16 *v19; // r14
  NTSTATUS v20; // eax
  void *v21; // r15
  ULONG Length; // edi
  void *ProcessHeap; // rcx
  PVOID Heap; // rax
  NTSTATUS v25; // eax
  int v26; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING ValueName; // [rsp+38h] [rbp-C8h] BYREF
  _UNICODE_STRING String1; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE KeyValueInformation[1024]; // [rsp+70h] [rbp-90h] BYREF

  v9 = a1;
  if ( MEMORY[0x7FFE02EC] )
  {
    *(_DWORD *)(a2 + 188) &= 0xFDFFFEFF;
    return 0LL;
  }
  if ( a3 )
  {
    v10 = *a1;
    v11 = *a1;
    v12 = v10;
    for ( i = (wchar_t *)(*((_QWORD *)v9 + 1) + v11); v12; v12 -= 2 )
    {
      if ( *(i - 1) == 92 )
        break;
      --i;
    }
    String1.Buffer = i;
    String1.Length = v10 - v12;
    RtlInitUnicodeString(&DestinationString, L"SPPsvc.exe");
    if ( !RtlCompareUnicodeString(&String1, &DestinationString, 1u) )
    {
      *(_DWORD *)(a2 + 188) &= 0xFDFFFEFF;
      return 0LL;
    }
  }
  LdrpShouldCreateStackTraceDb = (*(_DWORD *)(a2 + 188) & 0x2000100) != 0;
  LOBYTE(a1) = a3;
  result = AVrfInitializeVerifier((_DWORD)a1, (_DWORD)v9, (_DWORD)a4, 0, a5, a6);
  v15 = *(_DWORD *)(a2 + 188);
  if ( (int)result < 0 )
  {
    dword_1801649B8 = 0;
    *(_DWORD *)(a2 + 188) = v15 & 0xFDFFFEFF;
    *RtlpDebugPageHeapTable = 0;
    return result;
  }
  if ( (v15 & 0x2000000) != 0 )
  {
    v16 = RtlpDebugPageHeapTable;
    *(_DWORD *)(a2 + 188) = v15 & 0xFFFF670F;
    LdrpShouldCreateStackTraceDb = 1;
    v17 = *v16;
    *v16 = -1;
    if ( !a4 )
      goto LABEL_44;
    inited = RtlInitUnicodeStringEx(&ValueName, L"PageHeapFlags");
    if ( inited < 0 )
    {
LABEL_42:
      if ( inited < 0 )
LABEL_43:
        *v16 = -1;
LABEL_44:
      if ( *v16 == -1 )
        *v16 = v17;
      if ( (((*v16 & 0x400) != 0) & _bittest(&AVrfpVerifierFlags, 0xFu)) != 0 )
      {
        if ( (LdrpDebugFlags & 5) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            6891,
            "LdrpInitializeApplicationVerifierPackage",
            2,
            "Per-DLL page heap is disabled since fast fill heap is enabled\n");
          v16 = RtlpDebugPageHeapTable;
        }
        *v16 &= ~0x400u;
      }
      dword_1801649B8 = 1;
      return 0LL;
    }
    v19 = (unsigned __int16 *)KeyValueInformation;
    v20 = NtQueryValueKey(a4, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x400u, &ResultLength);
    inited = v20;
    if ( v20 < 0 )
    {
      if ( v20 == -2147483643 )
      {
        while ( 1 )
        {
          Length = ResultLength;
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
          if ( !ProcessHeap )
            break;
          Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, ResultLength);
          v21 = Heap;
          if ( !Heap )
            break;
          v19 = (unsigned __int16 *)Heap;
          v25 = NtQueryValueKey(a4, &ValueName, KeyValuePartialInformation, Heap, Length, &ResultLength);
          inited = v25;
          if ( v25 >= 0 )
            goto LABEL_22;
          if ( v25 != -2147483643 )
            goto LABEL_39;
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v19);
        }
        v16 = RtlpDebugPageHeapTable;
        goto LABEL_43;
      }
      goto LABEL_41;
    }
    v21 = 0LL;
LABEL_22:
    v26 = *((_DWORD *)v19 + 1);
    if ( ((v26 - 3) & 0xFFFFFFFB) != 0 )
    {
      if ( v26 == 4 )
      {
        if ( *((_DWORD *)v19 + 2) != 4 )
        {
          inited = -1073741820;
          goto LABEL_39;
        }
        ResultLength = 4;
        if ( v16 )
        {
          *v16 = *((_DWORD *)v19 + 3);
          goto LABEL_39;
        }
        goto LABEL_38;
      }
      if ( v26 == 1 )
      {
        if ( ((unsigned __int8)v16 & 3) != 0 )
        {
          inited = -2147483646;
          goto LABEL_39;
        }
        ResultLength = 4;
        if ( v16 )
        {
          ValueName.Buffer = v19 + 6;
          ValueName.Length = v19[4];
          ValueName.MaximumLength = v19[4];
          inited = RtlUnicodeStringToInteger(&ValueName, 0, v16);
          goto LABEL_39;
        }
        goto LABEL_38;
      }
    }
    else if ( v26 == 4 )
    {
      ResultLength = *((_DWORD *)v19 + 2);
      if ( v16 && *((_DWORD *)v19 + 2) <= 4u )
      {
        memmove(v16, v19 + 6, *((unsigned int *)v19 + 2));
        goto LABEL_39;
      }
LABEL_38:
      inited = -2147483643;
LABEL_39:
      if ( v21 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v21);
LABEL_41:
      v16 = RtlpDebugPageHeapTable;
      goto LABEL_42;
    }
    inited = -1073741788;
    goto LABEL_39;
  }
  return 0LL;
}
