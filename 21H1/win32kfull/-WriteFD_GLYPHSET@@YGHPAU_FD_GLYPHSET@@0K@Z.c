/*
 * XREFs of ?WriteFD_GLYPHSET@@YGHPAU_FD_GLYPHSET@@0K@Z @ 0xE0034
 * Callers:
 *     ?UmfdEscEngComputeGlyphSet@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0xDFBB0 (-UmfdEscEngComputeGlyphSet@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     _NtGdiEngComputeGlyphSet@12 @ 0x217A62 (_NtGdiEngComputeGlyphSet@12.c)
 *     _NtGdiFONTOBJ_pfdg@4 @ 0x21A194 (_NtGdiFONTOBJ_pfdg@4.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __userpurge WriteFD_GLYPHSET@<eax>(
        _DWORD *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct _FD_GLYPHSET *a3,
        struct _FD_GLYPHSET *a4,
        unsigned int a5)
{
  unsigned int v7; // ecx
  unsigned int i; // esi
  char *v9; // ecx
  unsigned int v11; // [esp+10h] [ebp-20h]

  v7 = a1[3];
  v11 = v7;
  *a2 = a3;
  a2[1] = a1[1];
  a2[2] = a1[2];
  a2[3] = a1[3];
  for ( i = 0; i < v7; ++i )
  {
    LOWORD(a2[2 * i + 4]) = a1[2 * i + 4];
    HIWORD(a2[2 * i + 4]) = HIWORD(a1[2 * i + 4]);
    if ( a1[2 * i + 5] )
    {
      v9 = (char *)a2 + a1[2 * i + 5] - (_DWORD)a1;
      a2[2 * i + 5] = v9;
      memcpy(v9, (const void *)a1[2 * i + 5], 4 * HIWORD(a1[2 * i + 4]));
      v7 = v11;
    }
    else
    {
      a2[2 * i + 5] = 0;
    }
  }
  return 1;
}
