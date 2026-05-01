/*
 * XREFs of sub_18006D174 @ 0x18006D174
 * Callers:
 *     sub_18006BAD0 @ 0x18006BAD0 (sub_18006BAD0.c)
 * Callees:
 *     sub_180041408 @ 0x180041408 (sub_180041408.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_18006CD70 @ 0x18006CD70 (sub_18006CD70.c)
 */

__int64 __fastcall sub_18006D174(__int64 a1, _BYTE *a2, _QWORD *a3, _DWORD *a4)
{
  rsize_t v4; // r14
  unsigned int v8; // edi
  PVOID ProcessHeap; // rcx
  _QWORD *Heap; // rbp
  PVOID v11; // rbx
  _DWORD *v12; // rax
  int v14; // [rsp+40h] [rbp-128h] BYREF
  PVOID P; // [rsp+48h] [rbp-120h] BYREF
  _DWORD *v16; // [rsp+50h] [rbp-118h]
  _WORD SystemInformation[88]; // [rsp+60h] [rbp-108h] BYREF

  v4 = *(unsigned int *)(a1 + 920);
  v16 = a4;
  v8 = 0;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v14 = 0;
  P = 0LL;
  Heap = RtlAllocateHeap(ProcessHeap, 0, 16LL * (unsigned int)v4);
  if ( Heap )
  {
    memset(SystemInformation, 0, 0xA8uLL);
    if ( (a2[172] & 1) != 0
      && NtQuerySystemInformation(SystemLookasideInformation|0x80, SystemInformation, 0xA8u, 0LL) < 0 )
    {
      memset(SystemInformation, 0, 0xA8uLL);
    }
    if ( (a2[172] & 4) != 0 )
      sub_180041408(&P, &v14);
    v11 = P;
    sub_18006CD70(a1, Heap, v4, (__int64)a2, SystemInformation, (__int64)P, v14);
    qsort_s(Heap, v4, 0x10uLL, (_CoreCrtSecureSearchSortCompareFunction)sub_18006C010, a2);
    v12 = v16;
    *a3 = Heap;
    *v12 = v4;
    if ( v11 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v8;
}
