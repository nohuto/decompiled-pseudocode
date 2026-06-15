/*
 * XREFs of sub_180017200 @ 0x180017200
 * Callers:
 *     <none>
 * Callees:
 *     sub_180039DDC @ 0x180039DDC (sub_180039DDC.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180017200(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  _QWORD *v5; // rsi
  _QWORD *v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  DWORD CurrentThreadId; // eax
  __int128 v12; // [rsp+30h] [rbp-28h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 728);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 728));
  if ( *(_DWORD *)(a1 + 768) != a2 )
  {
    *(_DWORD *)(a1 + 768) = a2;
    v5 = *(_QWORD **)(a1 + 776);
    v6 = *(_QWORD **)(a1 + 784);
    while ( v5 != v6 )
    {
      v7 = 0LL;
      *(_QWORD *)&v12 = *v5;
      DWORD2(v12) = *(_DWORD *)(a1 + 176);
      v8 = sub_180039DDC(32LL, &unk_18004FFC8);
      v9 = v8;
      if ( v8 )
      {
        v10 = qword_18004FE28;
        *(_DWORD *)(v8 + 12) = 1;
        *(_QWORD *)v8 = off_18003EDF0;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        v7 = v9;
        *(_QWORD *)v9 = off_18003EE18;
        *(_OWORD *)(v9 + 16) = v12;
      }
      CurrentThreadId = GetCurrentThreadId();
      SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, 0LL, v7, 0LL);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      ++v5;
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
