/*
 * XREFs of ?GetSignaledHandle@AggregateWaitHandle@@QEAAJPEAPEAX@Z @ 0x180039A60
 * Callers:
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x1800399E0 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

signed int __fastcall AggregateWaitHandle::GetSignaledHandle(void **this, void **a2)
{
  signed int result; // eax
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  DWORD v8; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  LPOVERLAPPED v10; // [rsp+60h] [rbp+18h] BYREF

  *a2 = 0LL;
  if ( GetQueuedCompletionStatus(*this, &v8, &v9, &v10, 0) )
  {
    v5 = v9;
    *a2 = *(void **)(v9 + 16);
    CloseHandle(*(HANDLE *)(v5 + 24));
    operator delete(this[2], (const struct std::nothrow_t *)0x20);
    v6 = *(_QWORD *)v5;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = *(_QWORD **)(v5 + 8), *v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    this[5] = (char *)this[5] - 1;
    result = 0;
    this[2] = (void *)v5;
  }
  else
  {
    result = GetLastError();
    if ( result == 258 )
    {
      return 1;
    }
    else if ( result > 0 )
    {
      return (unsigned __int16)result | 0x80070000;
    }
  }
  return result;
}
