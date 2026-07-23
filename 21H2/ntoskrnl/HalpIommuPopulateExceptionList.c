/*
 * XREFs of HalpIommuPopulateExceptionList @ 0x1403CFA20
 * Callers:
 *     HalpIommuInitializeAll @ 0x14099C3D4 (HalpIommuInitializeAll.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x1403BB428 (HalpMmAllocateMemoryInternal.c)
 */

__int64 HalpIommuPopulateExceptionList()
{
  unsigned int *v0; // rdi
  unsigned int v1; // ebx
  _OWORD *MemoryInternal; // rax
  _QWORD *v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rax

  v0 = (unsigned int *)KdDebugDevice;
  v1 = 0;
  if ( KdDebugDevice && !*(_DWORD *)(KdDebugDevice + 220) )
  {
    MemoryInternal = (_OWORD *)HalpMmAllocateMemoryInternal(32, 1u);
    v4 = MemoryInternal;
    if ( MemoryInternal )
    {
      *MemoryInternal = 0LL;
      MemoryInternal[1] = 0LL;
      *((_DWORD *)MemoryInternal + 4) = *((unsigned __int16 *)v0 + 4);
      v5 = (unsigned __int64)*v0 << 8;
      v4[3] = v5;
      v6 = v5 | (8LL * (v0[1] & 0x1F));
      v4[3] = v6;
      v4[3] = v6 | (v0[1] >> 5) & 7;
      v7 = (_QWORD *)qword_140C49DE8;
      if ( *(__int64 **)qword_140C49DE8 != &HalpIommuExceptionList )
        __fastfail(3u);
      *v4 = &HalpIommuExceptionList;
      v4[1] = v7;
      *v7 = v4;
      qword_140C49DE8 = (__int64)v4;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v1;
}
