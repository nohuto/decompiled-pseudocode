/*
 * XREFs of ?AddTask@NotificationDispatcher@@AEAAJPEAUIAsyncCallback@@@Z @ 0x180028FD0
 * Callers:
 *     NotificationDispatcher::RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___ @ 0x1800283B0 (NotificationDispatcher--RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___.c)
 *     NotificationDispatcher::RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___ @ 0x18016CE28 (NotificationDispatcher--RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___.c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000F6F0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18008D658 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NotificationDispatcher::AddTask(NotificationDispatcher *this, struct IAsyncCallback *a2)
{
  RTL_SRWLOCK *v4; // rbp
  int v5; // esi
  __int64 v6; // r8
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rsi
  char *v13; // r15
  unsigned __int64 v14; // r12
  LPMALLOC *v15; // rdx
  int v17; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPMALLOC ppMalloc; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v20; // [rsp+60h] [rbp+18h] BYREF

  v4 = (RTL_SRWLOCK *)((char *)this + 80);
  AcquireSRWLockExclusive((PSRWLOCK)this + 10);
  v20 = v4;
  if ( !*((_QWORD *)this + 5) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x69,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
      (const char *)0x80004004LL,
      v17);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v20);
    return 2147500036LL;
  }
  if ( a2 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 8LL))(a2);
  v5 = 0;
  v6 = *((_QWORD *)this + 7);
  v7 = *((_QWORD *)this + 9);
  if ( v6 == v7 )
  {
    v8 = v6 + 1;
    v5 = -2147024774;
    v9 = 4294967294LL;
    if ( v8 <= 0xFFFFFFFE )
    {
      v5 = 0;
      if ( v8 > v7 )
      {
        v10 = 2 * v7;
        if ( !is_mul_ok(v7, 2uLL) )
        {
          v5 = -2147024362;
          goto LABEL_33;
        }
        if ( v7 > 0x1000 )
          v10 = v7 + 4096;
        v11 = v8;
        if ( v8 <= v10 )
          v11 = v10;
        if ( v11 <= 0xFFFFFFFE )
        {
          v9 = v10;
          if ( v8 > v10 )
            v9 = v8;
        }
        v12 = 8 * v9;
        if ( is_mul_ok(v9, 8uLL) )
        {
          v13 = (char *)CoTaskMemRealloc(*((LPVOID *)this + 6), 8 * v9);
          if ( !v13 )
          {
            v5 = -2147024882;
            goto LABEL_33;
          }
          if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
          {
            v14 = ((__int64 (__fastcall *)(LPMALLOC, char *))ppMalloc->lpVtbl->GetSize)(ppMalloc, v13);
            ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
            if ( v14 > v12 )
              memset_0(&v13[v12], 0, v14 - v12);
          }
          v5 = 0;
          *((_QWORD *)this + 9) = v9;
          *((_QWORD *)this + 6) = v13;
        }
        else
        {
          v5 = -2147024362;
        }
      }
    }
    if ( v5 < 0 )
      goto LABEL_33;
  }
  v15 = (LPMALLOC *)(*((_QWORD *)this + 6) + 8 * (*((_QWORD *)this + 7))++);
  if ( !v15 || (*v15 = 0LL, v15 == &ppMalloc) )
  {
LABEL_33:
    if ( a2 )
      (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 16LL))(a2);
    goto LABEL_25;
  }
  *v15 = (LPMALLOC)a2;
LABEL_25:
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
      (const char *)(unsigned int)v5,
      v17);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v20);
    return (unsigned int)v5;
  }
  else
  {
    PostMessageW(*((HWND *)this + 5), 0x401u, 0LL, 0LL);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    return 0LL;
  }
}
