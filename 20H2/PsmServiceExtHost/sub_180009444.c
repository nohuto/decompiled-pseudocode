/*
 * XREFs of sub_180009444 @ 0x180009444
 * Callers:
 *     sub_1800098DC @ 0x1800098DC (sub_1800098DC.c)
 *     sub_180042CF4 @ 0x180042CF4 (sub_180042CF4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180009444(_QWORD *a1)
{
  _QWORD *Heap; // rax
  _QWORD *v3; // rbx
  int v4; // edi
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
  v3 = Heap;
  if ( Heap )
  {
    v4 = TpAllocWork(&v6, &sub_180037340, Heap, 0LL);
    if ( v4 >= 0 )
    {
      v3[2] = 0LL;
      v3[3] = 0LL;
      v3[4] = 0LL;
      v3[1] = v3;
      *v3 = v3;
      RtlInitializeSRWLock(v3 + 3);
      v3[2] = v6;
      v6 = 0LL;
      *a1 = v3;
      v3 = 0LL;
    }
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  else
  {
    v4 = -1073741801;
  }
  if ( v6 )
    TpReleaseWork();
  return (unsigned int)v4;
}
