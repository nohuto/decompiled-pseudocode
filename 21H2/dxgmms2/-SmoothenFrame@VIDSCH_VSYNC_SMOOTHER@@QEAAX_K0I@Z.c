/*
 * XREFs of ?SmoothenFrame@VIDSCH_VSYNC_SMOOTHER@@QEAAX_K0I@Z @ 0x1C00048C0
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0003BC0 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     ?RebaseSums@?$LinearFitT@$0BAA@@@QEAA_NXZ @ 0x1C0016AF0 (-RebaseSums@-$LinearFitT@$0BAA@@@QEAA_NXZ.c)
 *     ?InitWithPoint@?$LinearFitT@$0BAA@@@QEAAXAEBUPoint@1@@Z @ 0x1C001CC04 (-InitWithPoint@-$LinearFitT@$0BAA@@@QEAAXAEBUPoint@1@@Z.c)
 *     ?SaveState@AUTOFLOATINGPOINTSTATE@@QEAAJXZ @ 0x1C0034400 (-SaveState@AUTOFLOATINGPOINTSTATE@@QEAAJXZ.c)
 */

void __fastcall VIDSCH_VSYNC_SMOOTHER::SmoothenFrame(VIDSCH_VSYNC_SMOOTHER *this, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  unsigned int v7; // r8d
  int v8; // ebp
  char *v9; // rdi
  bool v10; // r12
  __int64 v11; // r13
  signed __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  signed __int64 v16; // rsi
  __int64 v17; // r14
  __int128 v18; // rax
  __int64 v19; // r9
  __int128 v20; // rax
  bool v21; // zf
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // ecx
  double v25; // xmm2_8
  double v26; // xmm4_8
  double v27; // xmm3_8
  double v28; // xmm0_8
  int v29; // [rsp+30h] [rbp-38h] BYREF
  __int64 v30; // [rsp+34h] [rbp-34h]

  v29 = -1073741823;
  v30 = 0LL;
  if ( (int)AUTOFLOATINGPOINTSTATE::SaveState((AUTOFLOATINGPOINTSTATE *)&v29) < 0 )
    goto LABEL_35;
  v7 = *((_DWORD *)this + 2);
  v8 = 256;
  v9 = (char *)this + 16 * (unsigned __int8)v7;
  if ( v7 )
  {
    v10 = 0;
    v11 = 2LL * (unsigned __int8)(v7 - 1);
    v12 = abs64(a3 - *((_QWORD *)this + 2 * (unsigned __int8)(v7 - 1) + 14));
    if ( a2 <= *((_QWORD *)this + 2 * (unsigned __int8)(v7 - 1) + 13) + *((_QWORD *)this + 11)
      && v12 <= *((_QWORD *)this + 12) )
    {
      goto LABEL_35;
    }
    if ( v7 > 0x100 )
    {
      if ( (v7 & 0x1FF) == 0 )
        v10 = (unsigned __int8)LinearFitT<256>::RebaseSums(this) == 0;
      v13 = *((_QWORD *)v9 + 13) - *((_QWORD *)this + 5);
      v14 = *((_QWORD *)v9 + 14) - *((_QWORD *)this + 6);
      *((_QWORD *)this + 7) -= v13;
      *((_QWORD *)this + 8) -= v14;
      *((_QWORD *)this + 9) -= v13 * v14;
      *((_QWORD *)this + 10) -= v13 * v13;
    }
    *((_QWORD *)v9 + 13) = a2;
    v15 = -1LL;
    *((_QWORD *)v9 + 14) = a3;
    v16 = a2 - *((_QWORD *)this + 5);
    v17 = a3 - *((_QWORD *)this + 6);
    v18 = v16 * (__int128)v16;
    if ( (__int64)v18 >= 0 )
    {
      if ( is_mul_ok(v16, v16) )
        goto LABEL_15;
    }
    else if ( *((_QWORD *)&v18 + 1) == -1LL )
    {
LABEL_15:
      v19 = *((_QWORD *)this + 10) + v18;
      v20 = v16 * (__int128)v17;
      if ( (__int64)v20 >= 0 )
        v21 = *((_QWORD *)&v20 + 1) == 0LL;
      else
        v21 = *((_QWORD *)&v20 + 1) == -1LL;
      if ( v21 )
        v15 = v16 * v17;
      v22 = *((_QWORD *)this + 9);
      *((_QWORD *)this + 7) += v16;
      *((_QWORD *)this + 8) += v17;
      ++*((_DWORD *)this + 2);
      *((_QWORD *)this + 10) = v19;
      *((_QWORD *)this + 9) = v22 + v15;
      if ( !v10 && *((_QWORD *)v9 + 13) > *((_QWORD *)this + v11 + 13) )
      {
        v23 = *((_QWORD *)this + 12);
        if ( v23 <= 0 || v12 <= v23 )
          goto LABEL_25;
      }
      goto LABEL_24;
    }
    *(_QWORD *)&v18 = -1LL;
    goto LABEL_15;
  }
  *((_QWORD *)v9 + 13) = v6;
  *((_QWORD *)v9 + 14) = a3;
LABEL_24:
  LinearFitT<256>::InitWithPoint(this, v9 + 104);
LABEL_25:
  v24 = *((_DWORD *)this + 2);
  if ( v24 )
  {
    v25 = (double)(int)*((_QWORD *)this + 7);
    if ( v24 < 0x100 )
      v8 = *((_DWORD *)this + 2);
    v26 = (double)v8;
    v27 = (double)(int)*((_QWORD *)this + 10) - v25 * v25 / (double)v8;
    v28 = v27;
    if ( v27 < 0.0 )
      *(_QWORD *)&v28 = *(_QWORD *)&v27 ^ _xmm;
    if ( v28 <= 0.01 || v24 <= 4 )
      *((_QWORD *)this + 3) = *((_QWORD *)this + 4);
    else
      *((double *)this + 3) = ((double)(int)*((_QWORD *)this + 9) - (double)(int)*((_QWORD *)this + 8) * v25 / v26)
                            / v27;
    *((double *)this + 2) = ((double)(int)*((_QWORD *)this + 8) - v25 * *((double *)this + 3)) / v26;
  }
LABEL_35:
  if ( v29 >= 0 )
    _mm_setcsr(HIDWORD(v30));
}
