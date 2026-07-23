/*
 * XREFs of _RtlpGetDefaultsSubjectContext@36 @ 0x4B2D8FCB
 * Callers:
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpGetDefaultTrustSubjectContext@8 @ 0x4B2D9164 (_RtlpGetDefaultTrustSubjectContext@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 *     _ZwOpenProcessToken@12 @ 0x4B2F3C00 (_ZwOpenProcessToken@12.c)
 */

NTSTATUS __fastcall RtlpGetDefaultsSubjectContext(
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
  struct _PEB *v10; // eax
  void *ProcessHeap; // edi
  PVOID Heap; // eax
  NTSTATUS DefaultTrustSubjectContext; // esi
  PVOID v14; // eax
  PVOID v15; // eax
  PVOID v16; // eax
  PVOID *v18; // ebx
  PVOID v19; // eax
  PVOID v20; // eax
  SIZE_T v21; // [esp-4h] [ebp-30h]
  SIZE_T v22; // [esp-4h] [ebp-30h]
  SIZE_T v23; // [esp-4h] [ebp-30h]
  SIZE_T v24; // [esp-4h] [ebp-30h]
  SIZE_T v25; // [esp-4h] [ebp-30h]
  ULONG v26; // [esp+Ch] [ebp-20h] BYREF
  ULONG ReturnLength; // [esp+10h] [ebp-1Ch] BYREF
  ULONG TokenInformationLength; // [esp+14h] [ebp-18h] BYREF
  ULONG v29; // [esp+18h] [ebp-14h] BYREF
  ULONG v30; // [esp+1Ch] [ebp-10h] BYREF
  ULONG v31; // [esp+20h] [ebp-Ch] BYREF
  HANDLE TokenHandlea; // [esp+24h] [ebp-8h] BYREF
  char v33; // [esp+2Ah] [ebp-2h]
  char v34; // [esp+2Bh] [ebp-1h]

  v33 = a2;
  TokenHandlea = 0;
  *a6 = 0;
  v34 = 0;
  *a4 = 0;
  *a9 = 0;
  *a5 = 0;
  *a7 = 0;
  v10 = NtCurrentPeb();
  *a3 = 0;
  ProcessHeap = v10->ProcessHeap;
  if ( TokenHandle )
  {
    LODWORD(v21) = 72;
    TokenInformationLength = 72;
    Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v21);
    *a3 = Heap;
    if ( Heap )
    {
      DefaultTrustSubjectContext = ZwQueryInformationToken(
                                     TokenHandle,
                                     4u,
                                     Heap,
                                     TokenInformationLength,
                                     &TokenInformationLength);
      if ( DefaultTrustSubjectContext < 0 )
        goto LABEL_15;
      LODWORD(v22) = 76;
      ReturnLength = 76;
      v14 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v22);
      *a7 = v14;
      if ( v14 )
      {
        DefaultTrustSubjectContext = ZwQueryInformationToken(TokenHandle, 0x19u, v14, ReturnLength, &ReturnLength);
        if ( DefaultTrustSubjectContext < 0 )
          goto LABEL_15;
        DefaultTrustSubjectContext = ZwQueryInformationToken(TokenHandle, 5u, *a4, 0, &v31);
        if ( DefaultTrustSubjectContext != -1073741789 )
          goto LABEL_15;
        LODWORD(v23) = v31;
        v15 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v23);
        *a4 = v15;
        if ( v15 )
        {
          DefaultTrustSubjectContext = ZwQueryInformationToken(TokenHandle, 5u, v15, v31, &v31);
          if ( DefaultTrustSubjectContext < 0 )
            goto LABEL_15;
          DefaultTrustSubjectContext = ZwQueryInformationToken(TokenHandle, 6u, *a5, 0, &v30);
          if ( DefaultTrustSubjectContext != -1073741789 )
            goto LABEL_15;
          LODWORD(v24) = v30;
          v16 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v24);
          *a5 = v16;
          if ( v16 )
          {
            DefaultTrustSubjectContext = ZwQueryInformationToken(TokenHandle, 6u, v16, v30, &v30);
            if ( DefaultTrustSubjectContext >= 0 )
              goto LABEL_12;
LABEL_15:
            v18 = a9;
            goto LABEL_25;
          }
        }
      }
    }
LABEL_16:
    DefaultTrustSubjectContext = -1073741801;
    goto LABEL_15;
  }
LABEL_12:
  DefaultTrustSubjectContext = RtlpGetDefaultTrustSubjectContext(TokenHandle);
  if ( DefaultTrustSubjectContext < 0 )
    goto LABEL_15;
  if ( !v33 )
    return 0;
  DefaultTrustSubjectContext = ZwOpenProcessToken((HANDLE)0xFFFFFFFF, 8u, &TokenHandlea);
  if ( DefaultTrustSubjectContext < 0 )
  {
    v34 = 0;
    goto LABEL_15;
  }
  LODWORD(v21) = 72;
  v34 = 1;
  v26 = 72;
  v19 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v21);
  *a6 = v19;
  if ( !v19 )
    goto LABEL_16;
  v18 = a9;
  DefaultTrustSubjectContext = ZwQueryInformationToken(TokenHandlea, 4u, v19, v26, &v26);
  if ( DefaultTrustSubjectContext >= 0 )
  {
    DefaultTrustSubjectContext = ZwQueryInformationToken(TokenHandlea, 5u, *a9, 0, &v29);
    if ( DefaultTrustSubjectContext == -1073741789 )
    {
      LODWORD(v25) = v29;
      v20 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v25);
      *a9 = v20;
      if ( v20 )
      {
        DefaultTrustSubjectContext = ZwQueryInformationToken(TokenHandlea, 5u, v20, v29, &v29);
        if ( DefaultTrustSubjectContext >= 0 )
        {
          NtClose(TokenHandlea);
          return 0;
        }
      }
    }
  }
LABEL_25:
  if ( *a3 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a3);
    *a3 = 0;
  }
  if ( *a7 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a7);
    *a7 = 0;
  }
  if ( *a4 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a4);
    *a4 = 0;
  }
  if ( *a5 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a5);
    *a5 = 0;
  }
  if ( *a8 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a8);
    *a8 = 0;
  }
  if ( *a6 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a6);
    *a6 = 0;
  }
  if ( *v18 )
  {
    RtlFreeHeap(ProcessHeap, 0, *v18);
    *v18 = 0;
  }
  if ( v34 == 1 )
    NtClose(TokenHandlea);
  return DefaultTrustSubjectContext;
}
