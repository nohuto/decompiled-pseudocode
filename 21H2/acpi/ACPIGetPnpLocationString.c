/*
 * XREFs of ACPIGetPnpLocationString @ 0x1C0094EE0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIGetNSObjectNameSegment @ 0x1C0001794 (AMLIGetNSObjectNameSegment.c)
 *     RtlStringCchPrintfExW @ 0x1C001DBE0 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 */

__int64 __fastcall ACPIGetPnpLocationString(__int64 *a1, wchar_t **a2)
{
  __int64 v4; // r13
  __int64 v5; // rcx
  WCHAR *v6; // rbx
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(__int64, void **); // rax
  void *v9; // rcx
  unsigned int v10; // esi
  char v11; // r14
  unsigned int v12; // edx
  unsigned int v13; // eax
  wchar_t *Pool2; // rax
  wchar_t *v15; // rdi
  wchar_t *v16; // rbx
  NTSTATUS v17; // eax
  unsigned int v18; // ebx
  int v20; // eax
  _WORD *i; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  void *Src; // [rsp+40h] [rbp-40h] BYREF
  int v25; // [rsp+48h] [rbp-38h] BYREF
  PUCHAR SourceCharacter; // [rsp+50h] [rbp-30h] BYREF
  size_t pcchRemaining; // [rsp+58h] [rbp-28h] BYREF
  _WORD v28[8]; // [rsp+60h] [rbp-20h] BYREF

  *a2 = 0LL;
  v4 = *a1;
  v25 = 0;
  SourceCharacter = 0LL;
  v5 = *(_QWORD *)(v4 + 760);
  if ( v5 )
  {
    v25 = AMLIGetNSObjectNameSegment(v5);
    v6 = v28;
    SourceCharacter = (PUCHAR)&v25;
    v7 = 4LL;
    do
    {
      *v6++ = RtlAnsiCharToUnicodeChar(&SourceCharacter);
      --v7;
    }
    while ( v7 );
    v28[4] = 0;
  }
  else
  {
    v28[0] = 0;
  }
  v8 = (__int64 (__fastcall *)(__int64, void **))a1[5];
  v9 = 0LL;
  Src = 0LL;
  v10 = 0;
  v11 = 0;
  if ( v8 )
  {
    v20 = v8(a1[2], &Src);
    v9 = Src;
    if ( v20 == 288 )
    {
      v11 = 1;
    }
    else
    {
      if ( v20 < 0 )
        v9 = 0LL;
      Src = v9;
    }
    if ( v9 )
    {
      for ( i = v9; *i; i += v23 + 1 )
      {
        v22 = -1LL;
        do
          ++v22;
        while ( i[v22] );
        v10 += v22 + 1;
        v23 = -1LL;
        do
          ++v23;
        while ( i[v23] );
      }
      ++v10;
    }
  }
  v12 = v10;
  if ( v28[0] )
    v12 = v10 + 12;
  if ( v12 )
  {
    v13 = v12 + 1;
    if ( !v11 )
      v13 = v12;
    if ( v28[0] )
      ++v13;
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, 2LL * v13, 1399874369LL);
    v9 = Src;
    v15 = Pool2;
    if ( Pool2 )
    {
      v16 = Pool2;
      if ( Src )
      {
        if ( v11 )
        {
          v16 = Pool2 + 1;
          *Pool2 = 64;
          v9 = Src;
        }
        memmove(v16, v9, 2LL * v10);
        v9 = Src;
        v16 += v10 - 1;
      }
      if ( !v28[0]
        || (*v16 = 33,
            v17 = RtlStringCchPrintfExW(v16 + 1, 0xCuLL, 0LL, &pcchRemaining, 0x200u, L"ACPI(%ws)", v28),
            v9 = Src,
            v18 = v17,
            v17 >= 0) )
      {
        *a2 = v15;
        v18 = *(_QWORD *)(v4 + 792) == 0LL ? 0x120 : 0;
      }
    }
    else
    {
      v18 = -1073741670;
    }
  }
  else
  {
    v18 = -1073741637;
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v18;
}
