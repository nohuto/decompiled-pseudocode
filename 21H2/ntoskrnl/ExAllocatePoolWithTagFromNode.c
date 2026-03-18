/*
 * XREFs of ExAllocatePoolWithTagFromNode @ 0x140349670
 * Callers:
 *     CcWriteBehind @ 0x140275FC0 (CcWriteBehind.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140A6E9A4 (ExpAllocatePoolWithQuotaTag.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     MmGetNextNode @ 0x14030B3F0 (MmGetNextNode.c)
 *     ExAllocateHeapPool @ 0x1403497C0 (ExAllocateHeapPool.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAllocatePoolWithTagFromNode(POOL_TYPE a1, ULONG_PTR a2, __int64 a3, int a4)
{
  int v4; // ebx
  int v7; // r15d
  __int64 v8; // rdi
  __int64 HeapPool; // rax
  _QWORD *v11; // rcx
  int v12; // [rsp+68h] [rbp+20h] BYREF

  v4 = a4;
  if ( a4 >= 0 )
  {
    v7 = 1;
  }
  else
  {
    v7 = (unsigned __int16)KeNumberNodes;
    v4 = a4 & 0x7FFFFFFF;
  }
  v8 = 0LL;
  v12 = 0;
  do
  {
    HeapPool = ExAllocateHeapPool(a1, 0);
    if ( HeapPool )
      return HeapPool;
    --v7;
  }
  while ( v7 && (unsigned int)MmGetNextNode(v4, &v12) != -1 );
  ++ExPoolFailures;
  if ( (a1 & 2) != 0 )
  {
    v11 = (_QWORD *)qword_140C5EA40[0];
    if ( (a1 & 0x200) != 0 )
      v11 = (_QWORD *)qword_140C5EA48;
    KeBugCheckEx(0x41u, a2, (unsigned int)v11[17], (unsigned int)v11[21] + (unsigned int)v11[23], 0LL);
  }
  if ( (a1 & 0x10) != 0 )
    RtlRaiseStatus(-1073741670);
  return v8;
}
