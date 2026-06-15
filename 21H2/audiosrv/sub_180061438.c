/*
 * XREFs of sub_180061438 @ 0x180061438
 * Callers:
 *     sub_1800612F4 @ 0x1800612F4 (sub_1800612F4.c)
 * Callees:
 *     sub_1800614CC @ 0x1800614CC (sub_1800614CC.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     memset @ 0x18006AB8C (memset.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180061438(__int64 a1)
{
  __int64 v2; // rdi
  void *v3; // rax
  void *v4; // rsi

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = off_180148E60;
  *(_QWORD *)(a1 + 16) = off_180148C98;
  v2 = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v3 = (void *)sub_18006A18C(376LL, &unk_18019F848);
  v4 = v3;
  if ( v3 )
  {
    memset(v3, 0, 0x178uLL);
    v2 = sub_1800614CC(v4);
  }
  *(_QWORD *)(a1 + 24) = v2;
  return a1;
}
