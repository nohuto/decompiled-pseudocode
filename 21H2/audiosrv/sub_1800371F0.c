/*
 * XREFs of sub_1800371F0 @ 0x1800371F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180028850 @ 0x180028850 (sub_180028850.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800E7430 @ 0x1800E7430 (sub_1800E7430.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800371F0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // r15
  struct _RTL_CRITICAL_SECTION *v7; // r14
  unsigned __int64 *v8; // rsi
  __int64 *v9; // r13
  __int64 *v10; // rdi
  __int64 v11; // rbx
  __int64 v13; // rcx

  v6 = a1 + 24;
  v7 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v8 = (unsigned __int64 *)(a1 + 24LL * *(int *)(a2 + 8));
  v9 = (__int64 *)v8[11];
  v10 = (__int64 *)v8[12];
  if ( (__int64 *)v8[13] == v10 )
  {
    sub_180028850(v8 + 11, (_QWORD *)v8[11], a3);
  }
  else
  {
    v11 = *a3;
    if ( v9 == v10 )
    {
      *v10 = v11;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      v8[12] += 8LL;
    }
    else
    {
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      *v10 = 0LL;
      *v10 = *(v10 - 1);
      *(v10 - 1) = 0LL;
      v8[12] += 8LL;
      sub_1800E7430(v9, v10 - 1, v10);
      v13 = *v9;
      *v9 = v11;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 15LL, &unk_180171578, 0LL);
  }
  if ( v6 )
    LeaveCriticalSection(v7);
  return 0LL;
}
