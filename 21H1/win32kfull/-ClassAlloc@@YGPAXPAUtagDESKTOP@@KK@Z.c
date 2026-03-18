/*
 * XREFs of ?ClassAlloc@@YGPAXPAUtagDESKTOP@@KK@Z @ 0x4756E
 * Callers:
 *     ?CLSAllocAndInitStackRef@@YGPAUtagCLS@@PAUtagDESKTOP@@KK@Z @ 0x4750A (-CLSAllocAndInitStackRef@@YGPAUtagCLS@@PAUtagDESKTOP@@KK@Z.c)
 *     _ReferenceClass@8 @ 0x9D9BA (_ReferenceClass@8.c)
 * Callees:
 *     ??$UserAllocateIsolatedType@V?$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@@@YGPAXXZ @ 0xF180E (--$UserAllocateIsolatedType@V-$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@@@YGPAXXZ.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@@@YGXPAX@Z @ 0xF1822 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@@@YGXPAX@Z.c)
 */

int __userpurge ClassAlloc@<eax>(
        SIZE_T a1@<edx>,
        int a2@<ecx>,
        struct tagDESKTOP *a3,
        unsigned int a4,
        unsigned int a5)
{
  int v7; // eax
  int v8; // edi
  int v9; // esi
  char *Heap; // eax
  int v12; // eax
  SIZE_T v13; // [esp-4h] [ebp-14h]

  v7 = UserAllocateIsolatedType<NSInstrumentation::CTypeIsolation<20480,80>>();
  if ( !a2 )
  {
    v9 = v7;
    if ( !v7 )
      return v9;
    v12 = Win32AllocPoolZInit(a1, 1818456917);
    *(_DWORD *)(v9 + 4) = v12;
    if ( v12 )
    {
      *(_DWORD *)(v9 + 8) = 0;
      return v9;
    }
    UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<20480,80>>(v9);
    return 0;
  }
  v8 = v7;
  if ( !v7 )
    return 0;
  v13 = a1;
  v9 = 0;
  Heap = (char *)RtlAllocateHeap(*(PVOID *)(a2 + 64), 0, v13);
  *(_DWORD *)(v8 + 4) = Heap;
  if ( Heap )
  {
    v9 = v8;
    *(_DWORD *)(v8 + 8) = &Heap[-*(_DWORD *)(a2 + 8)];
  }
  else
  {
    UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<20480,80>>(v8);
  }
  return v9;
}
