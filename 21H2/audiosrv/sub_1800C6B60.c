/*
 * XREFs of sub_1800C6B60 @ 0x1800C6B60
 * Callers:
 *     sub_1800C6F60 @ 0x1800C6F60 (sub_1800C6F60.c)
 *     sub_1800C91E0 @ 0x1800C91E0 (sub_1800C91E0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB5A0 @ 0x1800CB5A0 (sub_1800CB5A0.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800C6B60(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 992);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 992));
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 2u )
  {
    sub_1800CB5A0(*((_QWORD *)off_18019C348 + 2), 35LL, &unk_18015DEF0, a1, *(_QWORD *)(a1 + 1032));
  }
  v3 = *(_QWORD *)(a1 + 1032);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 240LL))(v3, a1 + 984);
    v4 = *(_QWORD *)(a1 + 1032);
    if ( v4 )
    {
      *(_QWORD *)(a1 + 1032) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
