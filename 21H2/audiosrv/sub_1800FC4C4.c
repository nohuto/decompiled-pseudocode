/*
 * XREFs of sub_1800FC4C4 @ 0x1800FC4C4
 * Callers:
 *     sub_1800FC184 @ 0x1800FC184 (sub_1800FC184.c)
 * Callees:
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     sub_180057764 @ 0x180057764 (sub_180057764.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B91A0 @ 0x1800B91A0 (sub_1800B91A0.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800FCFB4 @ 0x1800FCFB4 (sub_1800FCFB4.c)
 *     sub_1800FF010 @ 0x1800FF010 (sub_1800FF010.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800FC4C4(__int64 a1, const wchar_t *a2)
{
  void *v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rbx
  int v7; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]
  _QWORD *v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 72);
  v9 = 0;
  sub_180057764((__int64)&lpCriticalSection);
  v10 = *(_QWORD **)(a1 + 112);
  while ( v10 )
  {
    v5 = sub_1800B91A0((__int64)v4, &v10);
    sub_180048790(&v11, *v5);
    v6 = v11;
    if ( (unsigned __int8)sub_1800FCFB4(v11, a2) )
    {
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 2u )
      {
        sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0x4Du, (__int64)&unk_180172650, a2);
      }
      v7 = sub_1800FF010(v6);
      if ( v7 < 0 )
      {
        v4 = off_18019C348;
        if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
          && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
          && *((_BYTE *)off_18019C348 + 25) >= 2u )
        {
          sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x4Eu, (__int64)&unk_180172650, v7);
        }
      }
    }
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
}
