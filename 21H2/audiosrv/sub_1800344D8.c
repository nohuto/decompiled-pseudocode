/*
 * XREFs of sub_1800344D8 @ 0x1800344D8
 * Callers:
 *     sub_18003418C @ 0x18003418C (sub_18003418C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800344D8(__int64 a1, _QWORD *a2)
{
  __int64 (__fastcall *v2)(__int64, _QWORD); // rax
  int v3; // ebx
  int v5; // edx
  int v6; // r8d
  int v7; // ecx

  v2 = (__int64 (__fastcall *)(__int64, _QWORD))qword_18019FA50;
  v3 = 0;
  if ( qword_18019FA50 || (v2 = (__int64 (__fastcall *)(__int64, _QWORD))qword_18019F998) != 0LL )
    v5 = v2(16620264LL, 0LL);
  else
    v5 = 0;
  *a2 = 0LL;
  v6 = 64;
  if ( (v5 & 0xFFFFFF3F) != 0 )
  {
    if ( (v5 & 0xFFFFFF3F) == 2 )
      v3 = 64;
    v6 = v3;
  }
  v7 = 8 * (v5 & 0x80 | (4 * (v5 & 0x40 | (4 * (v5 & 3)))));
  *(_DWORD *)a2 = v6 | v7 | ((v6 | (unsigned int)v7) >> 6) & 1;
  return a2;
}
