/*
 * XREFs of sub_180045AE0 @ 0x180045AE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 */

void __fastcall sub_180045AE0(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  _DWORD *v3; // rax
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rax

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v3 = off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 14LL, &unk_18016E298);
    v3 = off_18019C348;
  }
  v4 = *(_QWORD **)(a1 + 64);
  v5 = *(_QWORD **)(a1 + 56);
  if ( v5 != v4 )
  {
    while ( 1 )
    {
      if ( v3 != (_DWORD *)&off_18019C348 && (v3[7] & 0x10000) != 0 && *((_BYTE *)v3 + 25) >= 4u )
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 32LL))(*v5);
        sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 15LL, &unk_18016E298, v6);
      }
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 272LL))(*v5);
      if ( ++v5 == v4 )
        break;
      v3 = off_18019C348;
    }
  }
  if ( v1 )
    LeaveCriticalSection(v1);
}
