/*
 * XREFs of sub_180007980 @ 0x180007980
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_1800071E0 @ 0x1800071E0 (sub_1800071E0.c)
 *     sub_180025140 @ 0x180025140 (sub_180025140.c)
 *     sub_180039DDC @ 0x180039DDC (sub_180039DDC.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180007980(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp+10h] BYREF

  *a3 = 0LL;
  sub_1800071E0(a1, (__int64 *)&lpCriticalSection);
  *a3 = 0LL;
  v5 = sub_180039DDC(56LL, &unk_18004FFC8);
  v6 = v5;
  if ( !v5 )
  {
    v7 = -2147024882;
LABEL_8:
    sub_180003AB0(
      retaddr,
      640,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      v7);
    goto LABEL_10;
  }
  v8 = qword_18004FE28;
  *(_DWORD *)(v5 + 12) = 1;
  *(_QWORD *)v5 = off_18003F3A0;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  *(_BYTE *)(v6 + 16) = 0;
  *(_QWORD *)v6 = off_18003F3C0;
  *(_QWORD *)(v6 + 40) = 0LL;
  *(_QWORD *)(v6 + 48) = 7LL;
  *(_WORD *)(v6 + 24) = 0;
  *(_DWORD *)(v6 + 20) = 0;
  v7 = sub_180025140(v6, a2);
  v9 = v6;
  v10 = *(_QWORD *)v6;
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD *))v10)(v6, &unk_180044B68, a3);
    v9 = v6;
    v10 = *(_QWORD *)v6;
  }
  (*(void (__fastcall **)(__int64))(v10 + 16))(v9);
  if ( v7 < 0 )
    goto LABEL_8;
  v7 = 0;
LABEL_10:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v7;
}
