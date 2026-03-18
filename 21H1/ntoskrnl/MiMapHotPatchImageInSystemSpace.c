/*
 * XREFs of MiMapHotPatchImageInSystemSpace @ 0x1408C7F3C
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1408C8CE8 (MiPrepareToHotPatchImage.c)
 * Callees:
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x140274CE0 (MiFillSystemPtes.c)
 *     IoAllocateMdl @ 0x1402BE6D0 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1402C0A80 (IoFreeMdl.c)
 */

__int64 __fastcall MiMapHotPatchImageInSystemSpace(_QWORD *a1)
{
  void *v2; // rcx
  __int64 v3; // rbx
  PMDL Mdl; // rax
  struct _MDL *v5; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  struct _MDL *v11; // r8
  __int64 *i; // rcx
  struct _MDL **v13; // r8
  unsigned int v14; // eax
  struct _MDL **v15; // rdx
  __int64 v16; // r9
  struct _MDL *v17; // rax
  ULONG_PTR v18; // rbx
  int v20; // [rsp+60h] [rbp+8h] BYREF

  v2 = (void *)a1[1];
  v20 = 0;
  v3 = (a1[2] - (_QWORD)v2) / 4096LL;
  Mdl = IoAllocateMdl(v2, (_DWORD)v3 << 12, 0, 0, 0LL);
  v5 = Mdl;
  if ( Mdl )
  {
    v7 = (__int64)&Mdl[1];
    v8 = (unsigned int)v3;
    v9 = (unsigned int)v3;
    v10 = 0LL;
    v11 = Mdl + 1;
    if ( &Mdl[1] > (struct _MDL *)((char *)&Mdl[1] + 8 * (unsigned int)v3) )
      v9 = 0LL;
    if ( v9 )
    {
      do
      {
        ++v10;
        v11->Next = (struct _MDL *)qword_140C4ECB8;
        v11 = (struct _MDL *)((char *)v11 + 8);
      }
      while ( v10 < v9 );
    }
    for ( i = (__int64 *)a1[7]; i; i = (__int64 *)*i )
    {
      v13 = &v5[1].Next + (i[4] + *((unsigned int *)i + 11) - a1[1]) / 4096;
      v14 = *((_DWORD *)i + 10) >> 12;
      if ( v14 )
      {
        v15 = (struct _MDL **)(i + 6);
        v16 = v14;
        do
        {
          v17 = *v15++;
          *v13++ = v17;
          --v16;
        }
        while ( v16 );
      }
    }
    v18 = MiReservePtes((__int64)&qword_140C4EE80, (unsigned int)v3);
    if ( v18 )
    {
      MiFillSystemPtes(v18, v8, v7, 4LL, 4u, &v20);
      v5->MdlFlags |= 1u;
      v5->MappedSystemVa = (PVOID)((__int64)(v18 << 25) >> 16);
      v6 = 0;
      a1[8] = v5;
      v5 = 0LL;
    }
    else
    {
      v6 = -1073741670;
    }
    if ( v5 )
      IoFreeMdl(v5);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
