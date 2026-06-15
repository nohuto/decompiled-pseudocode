/*
 * XREFs of sub_1800E0DC0 @ 0x1800E0DC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002BB14 @ 0x18002BB14 (sub_18002BB14.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E0DC0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rcx
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  v11[0] = 0LL;
  if ( qword_18019E600
    && (sub_18002BB14(
          v11,
          (void (__fastcall ***)(_QWORD, __int64, __int64 *))qword_18019E600,
          (__int64)&qword_18015E3A0),
        (v4 = v11[0]) != 0) )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v11[0] + 32LL))(v11[0], a2, a3, a4);
    v4 = v11[0];
    v9 = v8;
  }
  else
  {
    v9 = -2147467262;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v9;
}
