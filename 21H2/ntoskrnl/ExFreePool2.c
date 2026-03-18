/*
 * XREFs of ExFreePool2 @ 0x14063A800
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     VslSecurePoolFree @ 0x14054F674 (VslSecurePoolFree.c)
 */

__int64 __fastcall ExFreePool2(ULONG_PTR BugCheckParameter3, unsigned int a2, _QWORD *a3, unsigned int a4)
{
  ULONG_PTR BugCheckParameter4; // rdi
  __int64 result; // rax
  __int64 v8; // rcx
  ULONG_PTR v9; // r9

  BugCheckParameter4 = a4;
  if ( !a4 )
    return ExFreeHeapPool(BugCheckParameter3);
  if ( (unsigned __int8)*a3 != 2LL )
    KeBugCheckEx(0xC2u, 0xA0uLL, BugCheckParameter3, (ULONG_PTR)a3, (unsigned __int8)*a3);
  v8 = a3[1];
  v9 = *(_QWORD *)(v8 + 8);
  if ( v9 || *(_DWORD *)(v8 + 24) || (_DWORD)BugCheckParameter4 != 1 )
    KeBugCheckEx(0xC2u, 0xA1uLL, (ULONG_PTR)a3, v9, *(unsigned int *)(v8 + 24));
  result = VslSecurePoolFree(*(_QWORD *)v8, a2, BugCheckParameter3, *(_QWORD *)(v8 + 16));
  if ( (int)result < 0 )
    KeBugCheckEx(0xC2u, 0xA3uLL, BugCheckParameter3, (ULONG_PTR)a3, BugCheckParameter4);
  return result;
}
