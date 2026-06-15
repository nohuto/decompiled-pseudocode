/*
 * XREFs of sub_18002A280 @ 0x18002A280
 * Callers:
 *     sub_180074F00 @ 0x180074F00 (sub_180074F00.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall sub_18002A280(_DWORD *lpMem, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  HANDLE ProcessHeap; // rax

  lpMem[153] = -1073741823;
  v4 = *((_QWORD *)lpMem + 75);
  if ( v4 )
  {
    *((_QWORD *)lpMem + 75) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *(_QWORD *)lpMem = &off_180147160;
  v5 = *((_QWORD *)lpMem + 67);
  if ( v5 )
  {
    *((_QWORD *)lpMem + 67) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)lpMem + 66);
  if ( v6 )
  {
    *((_QWORD *)lpMem + 66) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
  return lpMem;
}
