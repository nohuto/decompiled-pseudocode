/*
 * XREFs of sub_1800C4EF8 @ 0x1800C4EF8
 * Callers:
 *     sub_1800C5024 @ 0x1800C5024 (sub_1800C5024.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180069C50 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800C4EF8(__int64 a1)
{
  struct _TP_WAIT *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)a1 = &off_180154F30;
  if ( *(_BYTE *)(a1 + 64) )
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)&dwCreationFlags + 56LL))(*(_QWORD *)&dwCreationFlags, a1);
  v2 = *(struct _TP_WAIT **)(a1 + 208);
  if ( v2 )
    CloseThreadpoolWait(v2);
  v3 = *(void **)(a1 + 200);
  if ( v3 )
    CloseHandle(v3);
  CoTaskMemFree(*(LPVOID *)(a1 + 216));
  if ( *(_BYTE *)(a1 + 88) )
    NtDeleteWnfStateName(a1 + 92);
  CoTaskMemFree(*(LPVOID *)(a1 + 24));
  `eh vector destructor iterator'((char *)(a1 + 104), 32LL, 3LL, (void (*)(void *))sub_1800C4ED0);
  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
}
