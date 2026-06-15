/*
 * XREFs of sub_1800FA43C @ 0x1800FA43C
 * Callers:
 *     sub_1800FF370 @ 0x1800FF370 (sub_1800FF370.c)
 * Callees:
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     sub_180057764 @ 0x180057764 (sub_180057764.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B91A0 @ 0x1800B91A0 (sub_1800B91A0.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_18010393C @ 0x18010393C (sub_18010393C.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800FA43C(__int64 a1)
{
  void *v2; // rcx
  _QWORD *v3; // rax
  __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]
  _QWORD *v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 72);
  v8 = 0;
  sub_180057764((__int64)&lpCriticalSection);
  v2 = off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0x14u, (__int64)&unk_180172650);
  }
  if ( *(_QWORD *)(a1 + 128) )
  {
    v3 = *(_QWORD **)(a1 + 112);
    v9 = v3;
    while ( v3 )
    {
      v4 = sub_1800B91A0((__int64)v2, &v9);
      sub_180048790(&v10, *v4);
      v5 = v10;
      v6 = *(_QWORD *)(v10 + 200);
      if ( *(_DWORD *)(v6 + 56) == 4 )
        sub_18010393C(v6);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      v3 = v9;
    }
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
}
