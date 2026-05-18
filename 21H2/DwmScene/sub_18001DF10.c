/*
 * XREFs of sub_18001DF10 @ 0x18001DF10
 * Callers:
 *     sub_18001DE58 @ 0x18001DE58 (sub_18001DE58.c)
 * Callees:
 *     sub_18001C9C0 @ 0x18001C9C0 (sub_18001C9C0.c)
 *     sub_1800218AC @ 0x1800218AC (sub_1800218AC.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001DF10(__int64 a1, unsigned int a2, int a3, int a4, unsigned int a5, int a6, unsigned int a7)
{
  __int64 v11; // rax
  __int64 v12; // xmm1_8
  unsigned int v13; // ebx
  void (__fastcall *v14)(_QWORD, __int64, _QWORD, _QWORD); // rax
  __int64 v15; // rdx
  __int128 v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+40h] [rbp-28h]
  __int64 v19; // [rsp+48h] [rbp-20h] BYREF

  v11 = sub_1800218AC((unsigned int)&v19, a1, a5, a6, a7);
  v12 = *(_QWORD *)(v11 + 16);
  v17 = *(_OWORD *)v11;
  v18 = v12;
  sub_18001C9C0(a2, a5, a7, a1, &v17);
  v13 = 0;
  if ( a3 )
  {
    v15 = a5;
    v14 = (void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))qword_18021F8B8;
    LODWORD(v15) = a5 | 0x80000000;
    if ( !a4 )
      v15 = a5;
    if ( qword_18021F8B8 || (v14 = (void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))qword_18021F8C0) != 0LL )
      v14(a2, v15, 0LL, 0LL);
  }
  LOBYTE(v13) = (_DWORD)v18 == 0;
  return v13;
}
