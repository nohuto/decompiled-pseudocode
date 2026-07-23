/*
 * XREFs of MiMapHotPatchImageInSystemSpace @ 0x1408CC9EC
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1408CD798 (MiPrepareToHotPatchImage.c)
 * Callees:
 *     IoAllocateMdl @ 0x140299F00 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x14029A950 (IoFreeMdl.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x1402CB7F0 (MiFillSystemPtes.c)
 */

__int64 __fastcall MiMapHotPatchImageInSystemSpace(_QWORD *a1)
{
  void *v2; // rcx
  __int64 v3; // rbx
  PMDL Mdl; // rax
  unsigned __int64 v5; // r9
  struct _MDL *v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  struct _MDL *v12; // r8
  __int64 *i; // rcx
  unsigned int v14; // eax
  struct _MDL **v15; // rdx
  struct _MDL *v16; // rax
  ULONG_PTR v17; // rbx
  int v19; // [rsp+60h] [rbp+8h] BYREF

  v2 = (void *)a1[1];
  v19 = 0;
  v3 = (a1[2] - (_QWORD)v2) / 4096LL;
  Mdl = IoAllocateMdl(v2, (_DWORD)v3 << 12, 0, 0, 0LL);
  v6 = Mdl;
  if ( Mdl )
  {
    v8 = (__int64)&Mdl[1];
    v9 = (unsigned int)v3;
    v10 = (unsigned int)v3;
    v11 = 0LL;
    v12 = Mdl + 1;
    if ( &Mdl[1] > (struct _MDL *)((char *)&Mdl[1] + 8 * (unsigned int)v3) )
      v10 = 0LL;
    if ( v10 )
    {
      do
      {
        ++v11;
        v12->Next = (struct _MDL *)qword_140C4EDB8;
        v12 = (struct _MDL *)((char *)v12 + 8);
      }
      while ( v11 < v10 );
    }
    for ( i = (__int64 *)a1[7]; i; i = (__int64 *)*i )
    {
      v12 = (struct _MDL *)((char *)v6 + 8 * ((i[4] + *((unsigned int *)i + 11) - a1[1]) / 4096) + 48);
      v14 = *((_DWORD *)i + 10) >> 12;
      if ( v14 )
      {
        v15 = (struct _MDL **)(i + 6);
        v5 = v14;
        do
        {
          v16 = *v15++;
          v12->Next = v16;
          v12 = (struct _MDL *)((char *)v12 + 8);
          --v5;
        }
        while ( v5 );
      }
    }
    v17 = MiReservePtes((__int64)&qword_140C4EF80, v3, (__int64)v12, v5);
    if ( v17 )
    {
      MiFillSystemPtes(v17, v9, v8, 4u, 4, &v19);
      v6->MdlFlags |= 1u;
      v6->MappedSystemVa = (PVOID)((__int64)(v17 << 25) >> 16);
      v7 = 0;
      a1[8] = v6;
      v6 = 0LL;
    }
    else
    {
      v7 = -1073741670;
    }
    if ( v6 )
      IoFreeMdl(v6);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
