/*
 * XREFs of ?GetFONTOBJXform@UMPDOBJ@@QAEPAU_XFORMOBJ@@PAU_FONTOBJ@@@Z @ 0x1F3B64
 * Callers:
 *     _NtGdiFONTOBJ_pxoGetXform@4 @ 0x21A4A9 (_NtGdiFONTOBJ_pxoGetXform@4.c)
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QAEPAU_FONTOBJ@@PAU1@@Z @ 0x1F3854 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QAEPAU_FONTOBJ@@PAU1@@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z @ 0x1F3EFC (-ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z.c)
 *     ?UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z @ 0x210A97 (-UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z @ 0x210CB8 (-UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z.c)
 */

struct _FONTOBJ *__userpurge UMPDOBJ::GetFONTOBJXform@<eax>(
        UMPDOBJ *this@<ecx>,
        unsigned int a2@<esi>,
        struct _FONTOBJ *a3)
{
  struct _FONTOBJ *result; // eax
  struct _FONTOBJ *v5; // ebx
  void *v6; // esi
  unsigned int *v8; // [esp-4h] [ebp-10h]
  const int *v9; // [esp+0h] [ebp-Ch]
  int **v10; // [esp+0h] [ebp-Ch]
  void *p_ulStyleSize; // [esp+8h] [ebp-4h] BYREF

  result = (struct _FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>(this, (int)a3);
  v5 = result;
  if ( result )
  {
    v6 = (void *)*((_DWORD *)this + 39);
    if ( !v6 )
    {
      a3 = result;
      UMPDAcquireRFONTSem(0, 0, 0, a2, v9);
      p_ulStyleSize = &v5[4].ulStyleSize;
      if ( v5 != (struct _FONTOBJ *)-208 )
      {
        if ( UMPDOBJ::ThunkDDIOBJ(this, (UMPDOBJ *)((char *)this + 152), &p_ulStyleSize, 4u, 0) )
          v6 = p_ulStyleSize;
      }
      UMPDReleaseRFONTSem(0, 0, 0, v8, v10);
      a3 = 0;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a3);
    }
    return (struct _FONTOBJ *)v6;
  }
  return result;
}
