/*
 * XREFs of sub_180026030 @ 0x180026030
 * Callers:
 *     sub_180024994 @ 0x180024994 (sub_180024994.c)
 *     sub_180024E60 @ 0x180024E60 (sub_180024E60.c)
 *     sub_18002975C @ 0x18002975C (sub_18002975C.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_18000F150 @ 0x18000F150 (sub_18000F150.c)
 *     sub_180017BB0 @ 0x180017BB0 (sub_180017BB0.c)
 *     sub_18001A074 @ 0x18001A074 (sub_18001A074.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800398A0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180039E00 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180026030(__int64 a1, __int64 a2, struct _RTL_CRITICAL_SECTION **a3)
{
  unsigned int v6; // ebx
  __int64 *v7; // rsi
  int v8; // r9d
  char v9; // bp
  __int64 v10; // r10
  void **v11; // r11
  unsigned __int16 *v12; // rcx
  int v13; // r8d
  int v14; // edx
  struct _RTL_CRITICAL_SECTION *v15; // rdi
  _QWORD *v16; // rdx
  HANDLE ProcessHeap; // rax
  struct _RTL_CRITICAL_SECTION *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r14
  _QWORD *v23; // r8
  struct _RTL_CRITICAL_SECTION **v24; // rax
  volatile signed __int32 *v25; // rdx
  void *v27[11]; // [rsp+30h] [rbp-58h] BYREF
  volatile signed __int32 *v28; // [rsp+A8h] [rbp+20h] BYREF

  v6 = 0;
  sub_180017BB0(v27, a2);
  v7 = (__int64 *)(a1 + 152);
  v8 = 0;
  v9 = 1;
  if ( *(int *)(a1 + 168) <= 0 )
  {
LABEL_9:
    v8 = -1;
  }
  else
  {
    v10 = 0LL;
    v11 = (void **)*v7;
    while ( 1 )
    {
      if ( !v27[0] )
        sub_18000A174(-2147467259);
      v12 = (unsigned __int16 *)*v11;
      do
      {
        v13 = *(unsigned __int16 *)((char *)v12 + (char *)v27[0] - (char *)*v11);
        v14 = *v12 - v13;
        if ( v14 )
          break;
        ++v12;
      }
      while ( v13 );
      if ( !v14 )
        break;
      ++v8;
      ++v10;
      ++v11;
      if ( v10 >= *(int *)(a1 + 168) )
        goto LABEL_9;
    }
  }
  if ( v8 == -1 )
  {
    v15 = 0LL;
  }
  else
  {
    if ( v8 < 0 || v8 >= *(_DWORD *)(a1 + 168) )
    {
      sub_18001A074();
      JUMPOUT(0x180026335LL);
    }
    v15 = *(struct _RTL_CRITICAL_SECTION **)(*(_QWORD *)(a1 + 160) + 8LL * v8);
  }
  v16 = (char *)v27[0] - 24;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v27[0] - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v16 + 8LL))(*v16);
  if ( v15 )
    goto LABEL_34;
  ProcessHeap = GetProcessHeap();
  v18 = (struct _RTL_CRITICAL_SECTION *)HeapAlloc(ProcessHeap, 0, 0x180uLL);
  v15 = v18;
  if ( v18 )
  {
    InitializeCriticalSectionEx(v18, 0, 0);
    `eh vector constructor iterator'(
      &v15[1],
      8uLL,
      0x15uLL,
      (void (*)(void *))__crt_deferred_errno_cache::__crt_deferred_errno_cache,
      sub_18002B9D0);
    `eh vector constructor iterator'(
      &v15[5].LockCount,
      8uLL,
      0x15uLL,
      (void (*)(void *))__crt_deferred_errno_cache::__crt_deferred_errno_cache,
      sub_18002B9D0);
    v15[9].OwningThread = (HANDLE)(a1 + 280);
  }
  else
  {
    v15 = 0LL;
  }
  v27[1] = v15;
  if ( v15 )
  {
    sub_180017BB0((void **)&v28, a2);
    v27[2] = (void *)(a1 + 152);
    v19 = o__recalloc(*v7, *(_DWORD *)(a1 + 168) + 1, 8LL);
    if ( v19 )
    {
      *v7 = v19;
      v20 = o__recalloc(*(_QWORD *)(a1 + 160), *(_DWORD *)(a1 + 168) + 1, 8LL);
      v21 = v20;
      if ( v20 )
      {
        *(_QWORD *)(a1 + 160) = v20;
        v22 = *(int *)(a1 + 168);
        v23 = (_QWORD *)(*v7 + 8 * v22);
        v27[3] = v23;
        if ( v23 )
        {
          sub_18000F150(v23, (const void **)&v28);
          v21 = *(_QWORD *)(a1 + 160);
        }
        v24 = (struct _RTL_CRITICAL_SECTION **)(v21 + 8 * v22);
        if ( v24 )
          *v24 = v15;
        ++*(_DWORD *)(a1 + 168);
        v9 = 0;
      }
    }
    v25 = v28 - 6;
    if ( _InterlockedExchangeAdd(v28 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v25 + 8LL))(*(_QWORD *)v25);
    if ( v9 )
    {
      v6 = -2147024882;
      `eh vector destructor iterator'(&v15[5].LockCount, 8uLL, 0x15uLL, sub_18002B9D0);
      `eh vector destructor iterator'(&v15[1], 8uLL, 0x15uLL, sub_18002B9D0);
      DeleteCriticalSection(v15);
      sub_180039D98(v15);
      return v6;
    }
LABEL_34:
    *a3 = v15;
    return v6;
  }
  return (unsigned int)-2147024882;
}
