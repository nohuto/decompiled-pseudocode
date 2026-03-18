/*
 * XREFs of MiLockAndMapEntireDriver @ 0x1408D3334
 * Callers:
 *     MmRemoveImportOptimizationForDriverVerifier @ 0x140542A2C (MmRemoveImportOptimizationForDriverVerifier.c)
 * Callees:
 *     IoFreeMdl @ 0x14020A410 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x140248500 (IoAllocateMdl.c)
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x140286700 (MiFillSystemPtes.c)
 *     MiLockDriverPageRange @ 0x14052BF04 (MiLockDriverPageRange.c)
 *     MiPrepareDriverPatchState @ 0x1408C757C (MiPrepareDriverPatchState.c)
 */

__int64 __fastcall MiLockAndMapEntireDriver(__int64 a1, __int64 *a2, struct _MDL **a3)
{
  struct _MDL *v6; // rdi
  __int64 v7; // r14
  int v8; // ebx
  ULONG v9; // edx
  unsigned int v10; // esi
  PMDL Mdl; // rax
  struct _MDL *v12; // rcx
  __int64 v13; // rdx
  char *AnyMultiplexedVm; // rax
  unsigned int v15; // r9d
  ULONG_PTR v16; // rbp
  int v18; // [rsp+78h] [rbp+20h] BYREF

  v18 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = MiPrepareDriverPatchState((__int64)a2);
  if ( v8 >= 0 )
  {
    v9 = *(_DWORD *)(a1 + 64);
    v10 = (v9 >> 12) + ((v9 & 0xFFF) != 0);
    if ( a3 )
    {
      Mdl = IoAllocateMdl(*(PVOID *)(a1 + 48), v9, 0, 0, 0LL);
      v6 = Mdl;
      if ( !Mdl )
        return (unsigned int)-1073741670;
      v7 = (__int64)&Mdl[1];
      if ( v10 )
      {
        v12 = Mdl + 1;
        v13 = v10;
        do
        {
          v12->Next = (struct _MDL *)qword_140C4EBF8;
          v12 = (struct _MDL *)((char *)v12 + 8);
          --v13;
        }
        while ( v13 );
      }
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    v8 = MiLockDriverPageRange(a2, (__int64)AnyMultiplexedVm, 0, v15, 2, (__int64)v6);
    if ( v8 >= 0 && a3 )
    {
      v16 = MiReservePtes((__int64)&qword_140C4EDC0, v10);
      if ( v16 )
      {
        v8 = MiFillSystemPtes(v16, v10, v7, 4LL, 4, &v18);
        v6->MdlFlags |= 1u;
        v6->MappedSystemVa = (PVOID)((__int64)(v16 << 25) >> 16);
        *a3 = v6;
        v6 = 0LL;
      }
      else
      {
        v8 = -1073741670;
      }
    }
    if ( v6 )
      IoFreeMdl(v6);
  }
  return (unsigned int)v8;
}
