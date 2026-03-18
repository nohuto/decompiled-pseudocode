/*
 * XREFs of ?ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_K@Z @ 0x1C015EB78
 * Callers:
 *     ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x1C02AADE0 (-UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00673AC (PALLOCMEM2.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 */

struct _FD_GLYPHSET *__fastcall ProbeAndReadFD_GLYPHSET(WCRUN *Src, int a2, unsigned int a3, __int64 a4)
{
  WCRUN *v6; // rcx
  __int64 phg_high; // rcx
  __int64 v8; // r13
  size_t v9; // r12
  ULONG phg; // ecx
  unsigned int v11; // r15d
  unsigned int *v12; // rax
  unsigned int *v13; // rdi
  char v14; // r14
  unsigned int v15; // r12d
  ULONG v16; // eax
  unsigned int *v17; // r10
  unsigned int v18; // r8d
  unsigned int v19; // r15d
  _BYTE **v20; // r11
  unsigned int v21; // ecx
  unsigned int v22; // eax
  __int64 v23; // rax
  _BYTE *v24; // rdx
  __int64 v25; // r8
  unsigned int v26; // [rsp+28h] [rbp-60h]
  unsigned int v27; // [rsp+28h] [rbp-60h]
  int v28; // [rsp+2Ch] [rbp-5Ch]
  ULONG v29; // [rsp+30h] [rbp-58h]
  unsigned int *v30; // [rsp+40h] [rbp-48h]

  if ( a3 < 0x10 )
    return 0LL;
  if ( !a2 )
  {
    if ( ((unsigned __int8)Src & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = Src + 1;
    if ( (unsigned __int64)v6 > MmUserProbeAddress || v6 < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  phg_high = HIDWORD(Src->phg);
  v26 = phg_high;
  if ( (unsigned int)phg_high > (a3 - 16) >> 4 )
    return 0LL;
  v8 = 4 * phg_high;
  v9 = 16 * phg_high + 16;
  phg = (ULONG)Src->phg;
  v29 = phg;
  if ( phg > (a3 - (unsigned int)v9) >> 2 )
    return 0LL;
  v11 = v9 + 4 * phg;
  if ( v11 > 0x2710000 )
    return 0LL;
  v12 = (unsigned int *)PALLOCMEM2(v11, 1886221639LL, 1);
  v13 = v12;
  if ( !v12 )
    return 0LL;
  v14 = 0;
  v28 = 0;
  memmove(v12, Src, v9);
  *v13 = v11;
  v15 = v26;
  if ( v13[3] == v26 )
  {
    v16 = v29;
    if ( v13[2] == v29 )
    {
      v17 = &v13[v8 + 4];
      v30 = v17;
      v18 = 0;
      v19 = 0;
      v20 = (_BYTE **)MmUserProbeAddress;
      while ( v19 < v15 )
      {
        v21 = HIWORD(v13[4 * v19 + 4]);
        if ( v16 - v28 < v21 )
          goto LABEL_35;
        v22 = LOWORD(v13[4 * v19 + 4]);
        if ( v22 < v18 )
          goto LABEL_35;
        v18 = v22 + v21;
        v27 = v22 + v21;
        v28 += v21;
        v23 = *(_QWORD *)&v13[4 * v19 + 6];
        if ( v23 )
        {
          v24 = (_BYTE *)(v23 + a4);
          v25 = 4 * v21;
          if ( v23 + a4 < (unsigned __int64)Src
            || v24 - (_BYTE *)Src > (unsigned __int64)a3
            || (unsigned int)v25 > (unsigned __int64)Src + a3 - (_QWORD)v24 )
          {
            goto LABEL_35;
          }
          if ( !a2 && (_DWORD)v25 )
          {
            if ( ((unsigned __int8)v24 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( &v24[v25] > *v20 || &v24[v25] < v24 )
              **v20 = 0;
          }
          memmove(v17, v24, (unsigned int)v25);
          *(_QWORD *)&v13[4 * v19 + 6] = v30;
          v17 = &v30[HIWORD(v13[4 * v19 + 4])];
          v30 = v17;
          v18 = v27;
          v20 = (_BYTE **)MmUserProbeAddress;
        }
        ++v19;
        v16 = v29;
      }
      v14 = 1;
    }
  }
LABEL_35:
  if ( !v14 )
  {
    Win32FreePool(v13);
    return 0LL;
  }
  return (struct _FD_GLYPHSET *)v13;
}
