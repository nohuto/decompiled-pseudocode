/*
 * XREFs of sub_1800805FC @ 0x1800805FC
 * Callers:
 *     sub_180079DCC @ 0x180079DCC (sub_180079DCC.c)
 * Callees:
 *     sub_1800267AC @ 0x1800267AC (sub_1800267AC.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_1800808C8 @ 0x1800808C8 (sub_1800808C8.c)
 *     sub_180080934 @ 0x180080934 (sub_180080934.c)
 */

__int64 __fastcall sub_1800805FC(__int64 a1, __int64 *a2, _QWORD *a3)
{
  _QWORD *v5; // rdi
  int v6; // esi
  _QWORD *Heap; // rax
  _QWORD *v8; // rbx
  _QWORD *v10; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  v10 = 0LL;
  v6 = sub_1800267AC(*a2, a1, (__int64 *)&v10);
  if ( v6 < 0 )
  {
    v8 = v10;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x48uLL);
    v8 = v10;
    v5 = Heap;
    if ( Heap )
    {
      sub_1800808C8(a2, v10, Heap);
      sub_180080934(a2, v5);
      v6 = 0;
      *a3 = v5[6];
    }
    else
    {
      v6 = -1073741801;
    }
  }
  if ( v8 )
    sub_1800274E0(v8);
  if ( v5 )
    sub_1800274E0(v5);
  return (unsigned int)v6;
}
