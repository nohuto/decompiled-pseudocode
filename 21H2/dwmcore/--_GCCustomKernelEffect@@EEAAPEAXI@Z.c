/*
 * XREFs of ??_GCCustomKernelEffect@@EEAAPEAXI@Z @ 0x1800C6BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

CCustomKernelEffect *__fastcall CCustomKernelEffect::`scalar deleting destructor'(CCustomKernelEffect *this, char a2)
{
  __int64 v2; // r8
  CCustomKernelEffect *v4; // rcx
  __int64 v6; // rax

  v2 = *((_QWORD *)this + 5);
  v4 = (CCustomKernelEffect *)*((_QWORD *)this + 4);
  v6 = (v2 - (__int64)v4) >> 4;
  if ( v6 )
    *((_QWORD *)this + 5) = v2 - 16 * v6;
  *((_QWORD *)this + 4) = 0LL;
  if ( v4 == (CCustomKernelEffect *)((char *)this + 56) )
    v4 = 0LL;
  DefaultHeap::Free(v4);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x108uLL);
  return this;
}
