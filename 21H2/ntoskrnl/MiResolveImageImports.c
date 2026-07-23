/*
 * XREFs of MiResolveImageImports @ 0x14075D184
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075BCBC (MmLoadSystemImageEx.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140286140 (RtlImageDirectoryEntryToData.c)
 *     MiSetImageProtection @ 0x140297B18 (MiSetImageProtection.c)
 *     MiSectionControlArea @ 0x14031FFB0 (MiSectionControlArea.c)
 *     MiResolveImageReferences @ 0x14075D3CC (MiResolveImageReferences.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1408C812C (MiLogStrongCodeDriverLoadFailure.c)
 */

__int64 __fastcall MiResolveImageImports(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  char *v5; // r12
  unsigned int v9; // r14d
  PVOID v10; // rax
  unsigned int *v11; // rdi
  unsigned __int64 v12; // r15
  unsigned int v13; // esi
  __int64 v14; // r9
  int v15; // ebp
  __int64 v17; // rax
  char *v18; // rax
  unsigned __int64 v19; // rdx
  int v20; // ecx
  int i; // esi
  unsigned int *j; // rdi
  __int64 v23; // rax
  char *v24; // rax
  int v25; // ecx
  int v26; // r8d
  ULONG Size[18]; // [rsp+20h] [rbp-48h] BYREF
  ULONG v28; // [rsp+70h] [rbp+8h] BYREF
  __int64 v29; // [rsp+78h] [rbp+10h]

  v29 = a2;
  v5 = *(char **)(a1 + 48);
  v28 = 0;
  Size[0] = 0;
  v9 = 0;
  v10 = RtlImageDirectoryEntryToData(v5, 1u, 0xCu, &v28);
  v11 = 0LL;
  v12 = (unsigned __int64)v10;
  if ( !v10 || (v13 = v28) == 0 )
  {
    v12 = 0LL;
    v13 = 0;
    v11 = (unsigned int *)RtlImageDirectoryEntryToData(v5, 1u, 1u, Size);
    if ( !v11 )
      return 0LL;
    do
    {
      v17 = *v11;
      if ( !(_DWORD)v17 )
        break;
      v18 = &v5[v17];
      v19 = (unsigned __int64)&v5[v11[4]];
      v20 = 0;
      for ( i = 0; *(_QWORD *)v18; i = v20 )
      {
        ++v20;
        v18 += 8;
      }
      v13 = 8 * i;
      v28 = v13;
      if ( !(unsigned int)MiSetImageProtection(a1, v19, v13) )
      {
        MiLogStrongCodeDriverLoadFailure("UnwritableImportDirectory");
        dword_140C4CC58 = 193;
        return 3221225595LL;
      }
      ++v9;
      v11 += 5;
    }
    while ( v11 );
    if ( !v9 )
      return 0LL;
    goto LABEL_5;
  }
  if ( (unsigned int)MiSetImageProtection(a1, (unsigned __int64)v10, v28) )
  {
    v9 = 1;
LABEL_5:
    v14 = v29;
    *(_DWORD *)(a1 + 104) |= 0x1000u;
    v15 = MiResolveImageReferences(a1, a4, a3, v14, Size[0]);
    if ( *(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 144) )
    {
      if ( v12 )
      {
        MiSetImageProtection(a1, v12, v13);
      }
      else
      {
        for ( j = &v11[-5 * v9]; j; j += 5 )
        {
          v23 = *j;
          if ( !(_DWORD)v23 )
            break;
          v24 = &v5[v23];
          v25 = 0;
          v26 = 0;
          while ( *(_QWORD *)v24 )
          {
            ++v25;
            v24 += 8;
            v26 = v25;
          }
          MiSetImageProtection(a1, (unsigned __int64)&v5[j[4]], 8 * v26);
        }
      }
    }
    *(_DWORD *)(a1 + 104) &= ~0x1000u;
    if ( v15 < 0 )
      *a5 = 1;
    return (unsigned int)v15;
  }
  MiLogStrongCodeDriverLoadFailure("UnwritableIAT");
  dword_140C4CC58 = 192;
  return 3221225595LL;
}
