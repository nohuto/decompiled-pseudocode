/*
 * XREFs of sub_1800FD528 @ 0x1800FD528
 * Callers:
 *     sub_1800FD660 @ 0x1800FD660 (sub_1800FD660.c)
 * Callees:
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     sub_180057764 @ 0x180057764 (sub_180057764.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B91A0 @ 0x1800B91A0 (sub_1800B91A0.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800FF010 @ 0x1800FF010 (sub_1800FF010.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800FD528(__int64 a1)
{
  void *v2; // rcx
  _QWORD *v3; // rax
  __int64 *v4; // rax
  __int64 v5; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]
  _QWORD *v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 72);
  v7 = 0;
  sub_180057764((__int64)&lpCriticalSection);
  v2 = off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0x35u, (__int64)&unk_180172650);
  }
  if ( *(_QWORD *)(a1 + 128) )
  {
    v3 = *(_QWORD **)(a1 + 112);
    v8 = v3;
    while ( v3 )
    {
      v4 = sub_1800B91A0((__int64)v2, &v8);
      sub_180048790(&v9, *v4);
      v5 = v9;
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x36u, (__int64)&unk_180172650, *(_QWORD *)(v9 + 200));
      }
      sub_1800FF010(v5);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      v3 = v8;
    }
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
}
