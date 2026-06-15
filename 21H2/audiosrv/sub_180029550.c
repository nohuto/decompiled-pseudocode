/*
 * XREFs of sub_180029550 @ 0x180029550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall sub_180029550(char *lpMem, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  void *v6; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  HANDLE v12; // rax

  *(_QWORD *)lpMem = off_180146C88;
  *((_QWORD *)lpMem + 1) = off_180146C40;
  *((_DWORD *)lpMem + 128) = 0;
  *((_DWORD *)lpMem + 106) = 0;
  v4 = *((_QWORD *)lpMem + 6);
  if ( v4 )
  {
    o__aligned_free(v4);
    *((_QWORD *)lpMem + 6) = 0LL;
  }
  v5 = *((_QWORD *)lpMem + 7);
  if ( v5 )
  {
    o__aligned_free(v5);
    *((_QWORD *)lpMem + 7) = 0LL;
  }
  v6 = (void *)*((_QWORD *)lpMem + 63);
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v6);
  *((_QWORD *)lpMem + 63) = 0LL;
  v8 = *((_QWORD *)lpMem + 52);
  if ( v8 )
  {
    *((_QWORD *)lpMem + 52) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)lpMem + 51);
  if ( v9 )
  {
    *((_QWORD *)lpMem + 51) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *((_QWORD *)lpMem + 50);
  if ( v10 )
  {
    *((_QWORD *)lpMem + 50) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(lpMem + 64));
  *((_DWORD *)lpMem + 11) = -1073741823;
  v11 = *((_QWORD *)lpMem + 4);
  if ( v11 )
  {
    *((_QWORD *)lpMem + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( (a2 & 1) != 0 )
  {
    v12 = GetProcessHeap();
    HeapFree(v12, 0, lpMem);
  }
  return lpMem;
}
