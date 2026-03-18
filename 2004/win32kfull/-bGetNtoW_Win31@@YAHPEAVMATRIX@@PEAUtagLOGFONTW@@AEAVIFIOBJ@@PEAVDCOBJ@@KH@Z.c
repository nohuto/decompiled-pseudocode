/*
 * XREFs of ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C009DA18
 * Callers:
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C009D138 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00A1948 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C00A1984 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C00DCFAC (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     bFToL @ 0x1C00F64D8 (bFToL.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C012C6BC (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z @ 0x1C014ACEC (-lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall bGetNtoW_Win31(
        struct MATRIX *a1,
        struct tagLOGFONTW *a2,
        struct IFIOBJ *a3,
        struct DCOBJ *a4,
        char a5,
        int a6)
{
  __int64 v6; // r10
  unsigned int v7; // edi
  int v10; // r8d
  int v11; // r13d
  char v12; // r15
  LONG lfHeight; // ebx
  int v14; // r12d
  struct IFIOBJ *v15; // r11
  __int16 *v16; // rax
  __int64 v17; // rcx
  float v18; // xmm3_4
  float v19; // xmm4_4
  float v20; // xmm7_4
  unsigned int *v21; // rbx
  int lfWidth; // eax
  __int64 v23; // rdx
  float v24; // xmm6_4
  char CurrentThreadDpiAwarenessContext; // al
  __int64 v26; // rcx
  int v27; // r14d
  int v28; // r15d
  char v29; // al
  int v30; // ebx
  int v31; // ecx
  struct IFIOBJ *v32; // r8
  __int64 v33; // rax
  int v34; // xmm1_4
  __int64 v36; // r14
  int v37; // r10d
  int v38; // r8d
  __int64 v39; // rcx
  float v40; // xmm5_4
  float v41; // xmm2_4
  __int64 v42; // rax
  __int64 v43; // rax
  int v44; // r9d
  __int64 v45; // rax
  float v46; // xmm1_4
  int v47; // eax
  int IsZero; // eax
  LONG DefaultWorldHeight; // eax
  int v50; // edx
  unsigned int v51; // eax
  unsigned int v52; // eax
  int lfOrientation; // eax
  __m128i v54; // xmm0
  __int32 v55; // eax
  __int128 v56; // xmm1
  int v57; // eax
  __int128 v58; // xmm0
  __int64 v59; // [rsp+28h] [rbp-A9h] BYREF
  __int64 v60; // [rsp+30h] [rbp-A1h] BYREF
  struct IFIOBJ *v61; // [rsp+38h] [rbp-99h]
  struct tagLOGFONTW *v62; // [rsp+40h] [rbp-91h]
  unsigned int *v63; // [rsp+48h] [rbp-89h] BYREF
  struct MATRIX *v64; // [rsp+50h] [rbp-81h] BYREF
  int v65; // [rsp+5Ch] [rbp-75h]
  _DWORD v66[6]; // [rsp+60h] [rbp-71h] BYREF
  __int64 v67; // [rsp+78h] [rbp-59h]
  int v68; // [rsp+80h] [rbp-51h]
  _OWORD v69[2]; // [rsp+88h] [rbp-49h] BYREF
  int v70; // [rsp+A8h] [rbp-29h]

  v6 = *(_QWORD *)a4;
  v7 = 0;
  v61 = a3;
  v62 = a2;
  v10 = 1;
  if ( *(float *)(v6 + 452) == 0.0 || (IsZero = EFLOAT::bIsZero((EFLOAT *)(v6 + 456)), v11 = v10, IsZero) )
    v11 = 0;
  if ( (a5 & 2) != 0 || !v11 && (*(_DWORD *)(*(_QWORD *)(v6 + 976) + 340LL) & 0x1000) != 0 )
    v12 = 0;
  else
    v12 = v10;
  lfHeight = a2->lfHeight;
  v14 = v10;
  if ( !a2->lfHeight )
  {
    DefaultWorldHeight = lGetDefaultWorldHeight(a4);
    a2 = v62;
    lfHeight = DefaultWorldHeight;
  }
  if ( gbShellFontCompatible && !_wcsicmp(a2->lfFaceName, L"MS Shell Dlg") && !a6 )
  {
    if ( lfHeight > 0 )
    {
      if ( lfHeight >= 12 )
      {
        if ( lfHeight > 15 )
        {
          if ( lfHeight <= 19 )
            lfHeight = 16;
        }
        else
        {
          lfHeight = 14;
        }
      }
    }
    else if ( (unsigned int)(lfHeight + 12) > 3 )
    {
      if ( (unsigned int)(lfHeight + 15) <= 2 )
        lfHeight = -13;
    }
    else
    {
      lfHeight = -11;
    }
  }
  v15 = v61;
  v16 = *(__int16 **)v61;
  if ( lfHeight > 0 )
  {
    v17 = (unsigned int)(v16[30] + v16[31]);
  }
  else
  {
    v17 = (unsigned int)v16[28];
    lfHeight = -lfHeight;
  }
  v18 = (float)lfHeight / (float)(int)v17;
  v19 = v18;
  *((float *)a1 + 3) = v18;
  if ( v12 )
  {
    v45 = *(_QWORD *)a4;
    if ( v11 )
    {
      v20 = *(float *)(v45 + 452);
      v46 = *(float *)(v45 + 456);
    }
    else
    {
      v17 = *(_QWORD *)(v45 + 976);
      v50 = *(_DWORD *)(v17 + 340);
      if ( (v50 & 0x1000) != 0 )
      {
        v20 = *(float *)&v59;
        v46 = *(float *)&v59;
      }
      else if ( (v50 & 2) != 0 )
      {
        v20 = *(float *)(v45 + 320) * 0.0625;
        v46 = *(float *)(v45 + 332) * 0.0625;
      }
      else
      {
        v20 = (float)*(int *)(v17 + 332) / (float)*(int *)(v17 + 316);
        v46 = (float)*(int *)(v17 + 336) / (float)*(int *)(v17 + 320);
      }
    }
    if ( v20 != 1.0 )
      v14 = 0;
    v47 = 0;
    if ( v46 != 1.0 )
      v18 = v18 * v46;
    if ( v18 < 0.0 )
      LODWORD(v18) ^= _xmm;
    LOBYTE(v47) = v46 < 0.0;
    if ( v47 )
      *((_DWORD *)a1 + 3) ^= _xmm;
  }
  else
  {
    v20 = *(float *)&v59;
  }
  v21 = *(unsigned int **)(*(_QWORD *)a4 + 48LL);
  v63 = v21;
  if ( v21 )
  {
    lfWidth = v62->lfWidth;
    if ( !lfWidth )
      goto LABEL_17;
    v36 = *(_QWORD *)v15;
    v37 = 1;
    v38 = abs32(lfWidth);
    v39 = (unsigned int)*(__int16 *)(*(_QWORD *)v15 + 76LL);
    LODWORD(v59) = v38;
    v40 = (float)(int)v39;
    v41 = (float)(int)v39 * v18;
    *(float *)&v60 = (float)v38;
    if ( v12 )
    {
      if ( !v14 )
      {
        *(float *)&v60 = (float)v38 * v20;
        bFToL(v39, &v59, 6LL);
      }
      EFLOAT::vAbs((EFLOAT *)&v60);
      if ( v38 < 0 )
        v38 = -v38;
    }
    *(float *)&v59 = v41;
    v17 = (unsigned int)(unsigned __int8)(SLODWORD(v41) >> 23) - 118;
    if ( (int)v17 <= 40 )
    {
      v42 = LODWORD(v41) & 0x7FFFFF | 0x800000LL;
      if ( (int)v17 < 0 )
        v43 = v42 >> (118 - (unsigned __int8)(SLODWORD(v41) >> 23));
      else
        v43 = v42 << ((unsigned __int8)(SLODWORD(v41) >> 23) - 118);
      v17 = (v43 + 0x80000000LL) >> 32;
      v44 = -((unsigned __int64)(v43 + 0x80000000LL) >> 32);
      if ( v41 >= 0.0 )
        v44 = (unsigned __int64)(v43 + 0x80000000LL) >> 32;
      if ( v44 > 0 )
      {
        if ( v37 )
        {
          v17 = 256LL;
          if ( v38 / 256 < v44 )
            goto LABEL_44;
        }
      }
    }
    if ( (*(_DWORD *)(v36 + 48) & 4) != 0 )
    {
LABEL_44:
      v24 = *(float *)&v60 / v40;
    }
    else
    {
LABEL_17:
      v23 = *(_QWORD *)v15;
      if ( (*(_DWORD *)(*(_QWORD *)v15 + 48LL) & 4) != 0 )
      {
        v24 = v19;
        if ( !v14 )
        {
          *(float *)&v59 = v19 * v20;
          EFLOAT::vAbs((EFLOAT *)&v59);
          v24 = *(float *)&v59;
        }
      }
      else
      {
        v24 = v18;
      }
      v59 = *(_QWORD *)(v23 + 128);
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v17);
      v26 = v21[10];
      v27 = 96;
      if ( (v26 & 1) == 0 || (v28 = 96, (CurrentThreadDpiAwarenessContext & 0xFu) - 1 <= 1) )
        v28 = v21[544];
      v29 = W32GetCurrentThreadDpiAwarenessContext(v26);
      if ( (v21[10] & 1) == 0 || (v29 & 0xFu) - 1 <= 1 )
        v27 = v21[545];
      if ( v28 == v27 || v11 )
      {
        v30 = HIDWORD(v59);
        v31 = v59;
      }
      else
      {
        v51 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v63);
        v30 = v51 * HIDWORD(v59);
        v52 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v63);
        v31 = v52 * v59;
      }
      if ( v31 != v30 )
        v24 = (float)((float)v30 * v24) / (float)v31;
    }
    if ( !v14 )
      v24 = v24 / v20;
    *(float *)a1 = v24;
    v32 = v61;
    *((_QWORD *)a1 + 2) = 0LL;
    *(_QWORD *)((char *)a1 + 4) = 0LL;
    v64 = a1;
    v33 = *(_QWORD *)v32;
    v65 = 0;
    if ( (*(_DWORD *)(v33 + 48) & 4) == 0 )
      goto LABEL_32;
    lfOrientation = v62->lfOrientation;
    if ( !lfOrientation )
      goto LABEL_32;
    v54 = (__m128i)COERCE_UNSIGNED_INT((float)lfOrientation);
    v67 = 0LL;
    v68 = 0;
    *(float *)v54.m128i_i32 = *(float *)v54.m128i_i32 / 10.0;
    v66[0] = efCos((unsigned int)_mm_cvtsi128_si32(v54));
    v66[3] = v66[0];
    v55 = efSin((unsigned int)_mm_cvtsi128_si32(v54));
    v56 = *((_OWORD *)a1 + 1);
    v66[4] = 0;
    v66[5] = 0;
    v54.m128i_i32[0] = v55;
    v57 = *((_DWORD *)a1 + 8);
    v66[1] = v54.m128i_i32[0];
    v66[2] = v54.m128i_i32[0] ^ _xmm;
    v58 = *(_OWORD *)a1;
    v70 = v57;
    v69[1] = v56;
    v69[0] = v58;
    if ( EXFORMOBJ::bMultiply((EXFORMOBJ *)&v64, (struct MATRIX *)v69, (struct MATRIX *)v66, 0) )
    {
LABEL_32:
      v34 = *((_DWORD *)a1 + 3) ^ _xmm;
      *((_DWORD *)a1 + 1) ^= _xmm;
      *((_DWORD *)a1 + 3) = v34;
      EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v64, 8u);
      return 1;
    }
  }
  return v7;
}
