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

int __fastcall RtlpGetDefaultsSubjectContext(
        int a1,
        char a2,
        int *a3,
        int *a4,
        int *a5,
        int *a6,
        int *a7,
        int *a8,
        int *a9)
{
  struct _PEB *v10; // eax
  int ProcessHeap; // edi
  int Heap; // eax
  int DefaultTrustSubjectContext; // esi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int *v18; // ebx
  int v19; // eax
  int v20; // eax
  int v21; // [esp+Ch] [ebp-20h] BYREF
  int v22; // [esp+10h] [ebp-1Ch] BYREF
  int v23; // [esp+14h] [ebp-18h] BYREF
  int v24; // [esp+18h] [ebp-14h] BYREF
  int v25; // [esp+1Ch] [ebp-10h] BYREF
  int v26; // [esp+20h] [ebp-Ch] BYREF
  HANDLE Handle; // [esp+24h] [ebp-8h] BYREF
  char v28; // [esp+2Ah] [ebp-2h]
  char v29; // [esp+2Bh] [ebp-1h]

  v28 = a2;
  Handle = 0;
  *a6 = 0;
  v29 = 0;
  *a4 = 0;
  *a9 = 0;
  *a5 = 0;
  *a7 = 0;
  v10 = NtCurrentPeb();
  *a3 = 0;
  ProcessHeap = (int)v10->ProcessHeap;
  if ( a1 )
  {
    v23 = 72;
    Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 72);
    *a3 = Heap;
    if ( Heap )
    {
      DefaultTrustSubjectContext = ZwQueryInformationToken(a1, 4, Heap, v23, &v23);
      if ( DefaultTrustSubjectContext < 0 )
        goto LABEL_15;
      v22 = 76;
      v14 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 76);
      *a7 = v14;
      if ( v14 )
      {
        DefaultTrustSubjectContext = ZwQueryInformationToken(a1, 25, v14, v22, &v22);
        if ( DefaultTrustSubjectContext < 0 )
          goto LABEL_15;
        DefaultTrustSubjectContext = ZwQueryInformationToken(a1, 5, *a4, 0, &v26);
        if ( DefaultTrustSubjectContext != -1073741789 )
          goto LABEL_15;
        v15 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v26);
        *a4 = v15;
        if ( v15 )
        {
          DefaultTrustSubjectContext = ZwQueryInformationToken(a1, 5, v15, v26, &v26);
          if ( DefaultTrustSubjectContext < 0 )
            goto LABEL_15;
          DefaultTrustSubjectContext = ZwQueryInformationToken(a1, 6, *a5, 0, &v25);
          if ( DefaultTrustSubjectContext != -1073741789 )
            goto LABEL_15;
          v16 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v25);
          *a5 = v16;
          if ( v16 )
          {
            DefaultTrustSubjectContext = ZwQueryInformationToken(a1, 6, v16, v25, &v25);
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
  DefaultTrustSubjectContext = RtlpGetDefaultTrustSubjectContext(a1, a8);
  if ( DefaultTrustSubjectContext < 0 )
    goto LABEL_15;
  if ( !v28 )
    return 0;
  DefaultTrustSubjectContext = ZwOpenProcessToken(-1, 8, &Handle);
  if ( DefaultTrustSubjectContext < 0 )
  {
    v29 = 0;
    goto LABEL_15;
  }
  v29 = 1;
  v21 = 72;
  v19 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 72);
  *a6 = v19;
  if ( !v19 )
    goto LABEL_16;
  v18 = a9;
  DefaultTrustSubjectContext = ZwQueryInformationToken(Handle, 4, v19, v21, &v21);
  if ( DefaultTrustSubjectContext >= 0 )
  {
    DefaultTrustSubjectContext = ZwQueryInformationToken(Handle, 5, *a9, 0, &v24);
    if ( DefaultTrustSubjectContext == -1073741789 )
    {
      v20 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v24);
      *a9 = v20;
      if ( v20 )
      {
        DefaultTrustSubjectContext = ZwQueryInformationToken(Handle, 5, v20, v24, &v24);
        if ( DefaultTrustSubjectContext >= 0 )
        {
          NtClose(Handle);
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
  if ( v29 == 1 )
    NtClose(Handle);
  return DefaultTrustSubjectContext;
}
