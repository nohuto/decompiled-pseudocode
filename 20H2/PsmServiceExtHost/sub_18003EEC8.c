/*
 * XREFs of sub_18003EEC8 @ 0x18003EEC8
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x18003F370 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_18003EF6C @ 0x18003EF6C (sub_18003EF6C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 sub_18003EEC8()
{
  PVOID Heap; // rax
  __int64 v1; // rdi
  unsigned int v2; // ebx
  unsigned int v4; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-60h] BYREF
  unsigned int *v6; // [rsp+58h] [rbp-40h]
  int v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+64h] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+68h] [rbp-30h] BYREF

  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_1800A3715, 0LL, 0LL, 2u, &v9);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xE8uLL);
  v1 = (__int64)Heap;
  if ( Heap )
  {
    sub_18003EF6C(Heap);
    v2 = 0;
    qword_1800B4E90 = v1;
  }
  else
  {
    v2 = -1073741801;
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 9LL) )
  {
    v8 = 0;
    v6 = &v4;
    v4 = v2;
    v7 = 4;
    sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_1800A36E4, 0LL, 0LL, 3u, &v5);
  }
  return v2;
}
