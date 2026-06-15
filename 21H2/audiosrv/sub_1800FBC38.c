/*
 * XREFs of sub_1800FBC38 @ 0x1800FBC38
 * Callers:
 *     sub_1800FABF8 @ 0x1800FABF8 (sub_1800FABF8.c)
 *     sub_1800FD970 @ 0x1800FD970 (sub_1800FD970.c)
 *     sub_1800FDAD0 @ 0x1800FDAD0 (sub_1800FDAD0.c)
 *     sub_1800FDD70 @ 0x1800FDD70 (sub_1800FDD70.c)
 *     sub_1800FE110 @ 0x1800FE110 (sub_1800FE110.c)
 * Callees:
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     sub_180057764 @ 0x180057764 (sub_180057764.c)
 *     sub_1800579A4 @ 0x1800579A4 (sub_1800579A4.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B91A0 @ 0x1800B91A0 (sub_1800B91A0.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800CD21C @ 0x1800CD21C (sub_1800CD21C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800FBC38(__int64 a1, _QWORD *a2, const wchar_t *a3)
{
  void *v6; // rcx
  _QWORD *v7; // rax
  __int64 *v8; // rax
  _QWORD *v9; // rbx
  const wchar_t *v10; // r9
  _QWORD *v11; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-18h] BYREF
  char v14; // [rsp+40h] [rbp-10h]
  _QWORD *v15; // [rsp+70h] [rbp+20h] BYREF
  _QWORD *v16; // [rsp+78h] [rbp+28h]
  __int64 v17; // [rsp+88h] [rbp+38h] BYREF

  v16 = a2;
  *a2 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 72);
  v14 = 0;
  sub_180057764((__int64)&lpCriticalSection);
  v6 = off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0x52u, (__int64)&unk_180172650, a3);
  }
  v7 = *(_QWORD **)(a1 + 112);
  v15 = v7;
  while ( v7 )
  {
    v8 = sub_1800B91A0((__int64)v6, &v15);
    sub_180048790(&v17, *v8);
    v9 = (_QWORD *)v17;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      v10 = (const wchar_t *)(v17 + 128);
      if ( *(_QWORD *)(v17 + 152) >= 8uLL )
        v10 = *(const wchar_t **)v10;
      sub_1800CD21C(
        *((_QWORD *)off_18019C348 + 2),
        0x53u,
        (__int64)&unk_180172650,
        v10,
        *(_QWORD *)(*(_QWORD *)(v17 + 200) + 72LL));
    }
    v11 = v9 + 16;
    if ( v9[19] >= 8uLL )
      v11 = (_QWORD *)*v11;
    if ( !(unsigned int)o__wcsicmp(v11, a3) )
    {
      if ( (_QWORD *)*a2 != v9 )
        sub_1800579A4(a2, (__int64)v9);
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x54u, (__int64)&unk_180172650, *a2);
      }
      if ( v9 )
        (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
      break;
    }
    if ( v9 )
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
    v7 = v15;
  }
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return a2;
}
