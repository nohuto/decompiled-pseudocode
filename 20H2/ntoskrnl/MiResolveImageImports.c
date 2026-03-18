/*
 * XREFs of MiResolveImageImports @ 0x140756110
 * Callers:
 *     MmLoadSystemImageEx @ 0x140754C1C (MmLoadSystemImageEx.c)
 * Callees:
 *     MiSectionControlArea @ 0x14022C010 (MiSectionControlArea.c)
 *     MiSetImageProtection @ 0x140253184 (MiSetImageProtection.c)
 *     RtlImageDirectoryEntryToData @ 0x1402FD940 (RtlImageDirectoryEntryToData.c)
 *     MiResolveImageReferences @ 0x140756358 (MiResolveImageReferences.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1408CA80C (MiLogStrongCodeDriverLoadFailure.c)
 */

__int64 __fastcall MiResolveImageImports(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  __int64 v5; // r12
  unsigned int v9; // r14d
  unsigned __int64 v10; // rax
  int v11; // edx
  unsigned int *v12; // rdi
  unsigned __int64 v13; // r15
  unsigned int v14; // esi
  __int64 v15; // r9
  int v16; // ebp
  __int64 v18; // rax
  _QWORD *v19; // rax
  unsigned __int64 v20; // rdx
  int v21; // ecx
  int i; // esi
  unsigned int *j; // rdi
  __int64 v24; // rax
  _QWORD *v25; // rax
  int v26; // ecx
  int v27; // r8d
  int v28; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+70h] [rbp+8h] BYREF
  __int64 v30; // [rsp+78h] [rbp+10h]

  v30 = a2;
  v5 = *(_QWORD *)(a1 + 48);
  v29 = 0;
  v28 = 0;
  v9 = 0;
  LOBYTE(a2) = 1;
  v10 = RtlImageDirectoryEntryToData(v5, a2, 12, (int)&v29);
  v12 = 0LL;
  v13 = v10;
  if ( !v10 || (v14 = v29) == 0 )
  {
    v13 = 0LL;
    v14 = 0;
    LOBYTE(v11) = 1;
    v12 = (unsigned int *)RtlImageDirectoryEntryToData(v5, v11, 1, (int)&v28);
    if ( !v12 )
      return 0LL;
    do
    {
      v18 = *v12;
      if ( !(_DWORD)v18 )
        break;
      v19 = (_QWORD *)(v5 + v18);
      v20 = v5 + v12[4];
      v21 = 0;
      for ( i = 0; *v19; i = v21 )
      {
        ++v21;
        ++v19;
      }
      v14 = 8 * i;
      v29 = v14;
      if ( !(unsigned int)MiSetImageProtection(a1, v20, v14, 4u) )
      {
        MiLogStrongCodeDriverLoadFailure("UnwritableImportDirectory");
        dword_140C4CA98 = 193;
        return 3221225595LL;
      }
      ++v9;
      v12 += 5;
    }
    while ( v12 );
    if ( !v9 )
      return 0LL;
    goto LABEL_5;
  }
  if ( (unsigned int)MiSetImageProtection(a1, v10, v29, 4u) )
  {
    v9 = 1;
LABEL_5:
    v15 = v30;
    *(_DWORD *)(a1 + 104) |= 0x1000u;
    v16 = MiResolveImageReferences(a1, a4, a3, v15, v28);
    if ( *(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 144) )
    {
      if ( v13 )
      {
        MiSetImageProtection(a1, v13, v14, 0x100u);
      }
      else
      {
        for ( j = &v12[-5 * v9]; j; j += 5 )
        {
          v24 = *j;
          if ( !(_DWORD)v24 )
            break;
          v25 = (_QWORD *)(v5 + v24);
          v26 = 0;
          v27 = 0;
          while ( *v25 )
          {
            ++v26;
            ++v25;
            v27 = v26;
          }
          MiSetImageProtection(a1, v5 + j[4], 8 * v27, 0x100u);
        }
      }
    }
    *(_DWORD *)(a1 + 104) &= ~0x1000u;
    if ( v16 < 0 )
      *a5 = 1;
    return (unsigned int)v16;
  }
  MiLogStrongCodeDriverLoadFailure("UnwritableIAT");
  dword_140C4CA98 = 192;
  return 3221225595LL;
}
