/*
 * XREFs of ?ProbeAndReadFD_GLYPHSET@@YGPAU_FD_GLYPHSET@@PBU1@HKJ@Z @ 0x20A451
 * Callers:
 *     ?UMPDDrvQueryFontTree@@YGPAXPAUDHPDEV__@@KKKPAK@Z @ 0x20DF1E (-UMPDDrvQueryFontTree@@YGPAXPAUDHPDEV__@@KKKPAK@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

PATHOBJ *__userpurge ProbeAndReadFD_GLYPHSET@<eax>(
        int a1@<edx>,
        unsigned int a2@<ecx>,
        const struct _FD_GLYPHSET *a3,
        int a4,
        unsigned int a5,
        int a6)
{
  unsigned int v6; // edi
  int v7; // edx
  unsigned int v8; // ecx
  size_t v9; // eax
  PATHOBJ *v10; // esi
  unsigned int v11; // edi
  unsigned int v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // ecx
  unsigned int fl_low; // edx
  ULONG cCurves; // edx
  unsigned int v17; // edx
  size_t v19; // [esp-4h] [ebp-64h]
  unsigned int v21; // [esp+24h] [ebp-3Ch]
  unsigned int v22; // [esp+28h] [ebp-38h]
  int v23; // [esp+2Ch] [ebp-34h]
  void *Srca; // [esp+30h] [ebp-30h]
  size_t MaxCount; // [esp+34h] [ebp-2Ch]
  unsigned int MaxCounta; // [esp+34h] [ebp-2Ch]
  PATHOBJ *v28; // [esp+38h] [ebp-28h]
  int v29; // [esp+3Ch] [ebp-24h]
  FLONG v30; // [esp+40h] [ebp-20h]
  char v31; // [esp+47h] [ebp-19h]

  if ( (unsigned int)a3 < 0x10 )
    return 0;
  if ( !a1 )
  {
    if ( (a2 & 3) != 0 )
LABEL_4:
      ExRaiseDatatypeMisalignment();
    if ( a2 + 16 > _MmUserProbeAddress || a2 + 16 < a2 )
      *(_BYTE *)_MmUserProbeAddress = 0;
  }
  v6 = *(_DWORD *)(a2 + 12);
  v22 = v6;
  if ( v6 > (unsigned int)&a3[-1].cGlyphsSupported >> 3 )
    return 0;
  v7 = 8 * v6 + 16;
  v8 = *(_DWORD *)(a2 + 8);
  v21 = v8;
  if ( v8 > ((unsigned int)a3 - v7) >> 2 )
    return 0;
  v9 = v7 + 4 * v8;
  v30 = v9;
  if ( v9 > 0x2710000 )
    return 0;
  v10 = (PATHOBJ *)PALLOCMEM2(v9, 1886221639, 1);
  if ( !v10 )
    return 0;
  v31 = 0;
  v29 = 0;
  v19 = 8 * v6 + 16;
  v11 = a2;
  memcpy(v10, (const void *)a2, v19);
  v10->fl = v30;
  v12 = v22;
  if ( v10[1].cCurves == v22 )
  {
    v13 = v21;
    if ( v10[1].fl == v21 )
    {
      v28 = &v10[v22 + 2];
      Srca = 0;
      v14 = 0;
      v23 = 0;
      while ( v14 < v12 )
      {
        MaxCount = HIWORD(v10[v14 + 2].fl);
        if ( v13 - v29 < MaxCount )
          goto LABEL_31;
        fl_low = LOWORD(v10[v14 + 2].fl);
        if ( fl_low < (unsigned int)Srca )
          goto LABEL_31;
        Srca = (void *)(MaxCount + fl_low);
        v29 += MaxCount;
        cCurves = v10[v14 + 2].cCurves;
        if ( cCurves )
        {
          v17 = cCurves - a4;
          MaxCounta = 4 * MaxCount;
          if ( v17 < v11 || v17 - v11 > (unsigned int)a3 || MaxCounta > (unsigned int)a3 + v11 - v17 )
            goto LABEL_31;
          if ( !a1 && MaxCounta )
          {
            if ( (v17 & 3) != 0 )
              goto LABEL_4;
            if ( MaxCounta + v17 > _MmUserProbeAddress || MaxCounta + v17 < v17 )
              *(_BYTE *)_MmUserProbeAddress = 0;
          }
          memcpy(v28, (const void *)v17, MaxCounta);
          v14 = v23;
          v10[v23 + 2].cCurves = (ULONG)v28;
          v28 = (PATHOBJ *)((char *)v28 + 4 * HIWORD(v10[v23 + 2].fl));
        }
        v23 = ++v14;
        v12 = v22;
        v13 = v21;
      }
      v31 = 1;
    }
  }
LABEL_31:
  if ( !v31 )
  {
    Win32FreePool(v10);
    return 0;
  }
  return v10;
}
