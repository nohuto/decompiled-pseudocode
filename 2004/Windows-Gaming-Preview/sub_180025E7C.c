/*
 * XREFs of sub_180025E7C @ 0x180025E7C
 * Callers:
 *     sub_180021A30 @ 0x180021A30 (sub_180021A30.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180025E7C(__int64 *a1, __int64 *a2)
{
  unsigned int v2; // esi
  __int64 v4; // rbp
  bool v5; // bl
  __int64 *v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // r15
  __int64 v10; // rcx
  DWORD CurrentThreadId; // eax
  int v12; // ebx
  __int64 v13; // rax
  unsigned int v14; // eax
  __int64 *v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+70h] [rbp+18h]

  v16 = a1;
  v2 = 0;
  v4 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  v5 = *(_DWORD *)(v4 + 8) > 4;
  if ( *(int *)(v4 + 8) > 4 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64 *))(*a2 + 8))(a2);
    v16 = a2;
    v6 = a2;
    if ( a2 )
      (*(void (__fastcall **)(__int64 *))(*a2 + 8))(a2);
    v17 = 0LL;
    v7 = operator new(0x18uLL, (const struct std::nothrow_t *)&unk_18005AF88);
    v8 = v7;
    v9 = 0LL;
    if ( v7 )
    {
      v10 = qword_18005ADB0;
      *((_DWORD *)v7 + 3) = 1;
      *v7 = off_18004A6F8;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v8[2] = 0LL;
      if ( v8 + 2 != &v16 )
      {
        v8[2] = a2;
        v6 = 0LL;
      }
      v9 = v8;
      *v8 = off_18004A720;
    }
    CurrentThreadId = GetCurrentThreadId();
    v12 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, 0LL, v9, 0LL);
    if ( v9 )
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
    v5 = v12 >= 0;
    if ( v6 )
      (*(void (__fastcall **)(__int64 *))(*v6 + 16))(v6);
    if ( a2 )
      (*(void (__fastcall **)(__int64 *))(*a2 + 16))(a2);
  }
  if ( !v5 )
  {
    v13 = *a2;
    ++*(_DWORD *)(v4 + 8);
    v14 = (*(__int64 (__fastcall **)(__int64 *))(v13 + 24))(a2);
    --*(_DWORD *)(v4 + 8);
    return v14;
  }
  return v2;
}
