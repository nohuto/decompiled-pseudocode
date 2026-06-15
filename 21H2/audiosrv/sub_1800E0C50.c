/*
 * XREFs of sub_1800E0C50 @ 0x1800E0C50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002BB14 @ 0x18002BB14 (sub_18002BB14.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E0C50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  unsigned int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0LL;
  v9 = 0LL;
  if ( qword_18019E600
    && (sub_18002BB14(
          &v9,
          (void (__fastcall ***)(_QWORD, __int64, __int64 *))qword_18019E600,
          (__int64)&qword_18015E3A0),
        (v3 = v9) != 0) )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 24LL))(v9, a2, a3);
    v3 = v9;
    v7 = v6;
  }
  else
  {
    v7 = -2147467262;
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return v7;
}
