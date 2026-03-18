/*
 * XREFs of ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C0058E18
 * Callers:
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C002610C (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00A9250 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00572B0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C00596F8 (-bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C005D5F4 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C005D630 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?bParityViolatingXform@@YAHPEAVDCOBJ@@@Z @ 0x1C01239F0 (-bParityViolatingXform@@YAHPEAVDCOBJ@@@Z.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C012E68C (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall bGetNtoD_Win31(
        struct _FD_XFORM *a1,
        struct tagLOGFONTW *a2,
        struct IFIOBJ *a3,
        struct DCOBJ *a4,
        unsigned int a5,
        struct _POINTL *const a6,
        int a7)
{
  unsigned int v7; // esi
  int v12; // ecx
  __int64 v13; // r8
  __m128 v14; // xmm0
  __int64 v15; // rax
  int v16; // ecx
  unsigned int v17; // r12d
  struct DCOBJ *v18; // rbx
  int v19; // r12d
  struct _KTHREAD *CurrentThread; // r13
  int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int v31; // r13d
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdi
  __int64 v40; // rax
  int v42; // edx
  __int64 v43; // rax
  FLOATL v44; // eax
  int v45; // eax
  int v46; // ecx
  __m128i v47; // xmm0
  int v48; // eax
  __int64 lfEscapement; // rcx
  int v50; // edx
  int v51; // edx
  __int64 y; // rax
  __int64 v53; // rax
  __int64 x; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v57; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v59; // rax
  int v60; // edi
  __int64 v61; // rcx
  __int64 v62; // rax
  float v63; // xmm6_4
  float v64; // xmm6_4
  __int128 v65; // xmm1
  int v66; // eax
  int v67; // [rsp+30h] [rbp-D0h]
  _DWORD *v68; // [rsp+38h] [rbp-C8h] BYREF
  struct DCOBJ *v69; // [rsp+40h] [rbp-C0h]
  struct _KTHREAD *v70; // [rsp+48h] [rbp-B8h]
  __m128 *v71; // [rsp+50h] [rbp-B0h] BYREF
  int v72; // [rsp+5Ch] [rbp-A4h]
  _OWORD v73[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v74; // [rsp+80h] [rbp-80h]
  __m128 v75; // [rsp+88h] [rbp-78h] BYREF
  __int128 v76; // [rsp+98h] [rbp-68h]
  int v77; // [rsp+A8h] [rbp-58h]
  _DWORD v78[6]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v79; // [rsp+C8h] [rbp-38h]
  int v80; // [rsp+D0h] [rbp-30h]
  __m128 v81; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v82; // [rsp+E8h] [rbp-18h]
  int v83; // [rsp+F8h] [rbp-8h]
  _OWORD v84[2]; // [rsp+100h] [rbp+0h] BYREF
  int v85; // [rsp+120h] [rbp+20h]

  v69 = a4;
  v83 = 0;
  v7 = 0;
  v77 = 0;
  v81 = 0LL;
  v82 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  if ( a6->x )
  {
    v12 = *(_DWORD *)(*(_QWORD *)a3 + 48LL);
    if ( (v12 & 0x3000010) == 0 )
    {
      v42 = 0;
      if ( gbDBCSCodePage && (v12 & 0x200000) != 0 )
      {
        lfEscapement = (unsigned int)a2->lfEscapement;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 976LL) + 340LL) & 0x40) != 0 )
          v42 = (int)(3600 - lNormAngle(lfEscapement)) / 900 % 4;
        else
          v42 = (int)lNormAngle(lfEscapement) / 900;
      }
      if ( v42 )
      {
        v50 = v42 - 1;
        if ( !v50 )
        {
          x = a6->x;
          a1->eXX = 0.0;
          a1->eYY = 0.0;
          a1->eYX = *((FLOATL *)&galFloatNeg + x);
          a1->eXY = *((FLOATL *)&galFloatNeg + a6->y);
          return 1LL;
        }
        v51 = v50 - 1;
        if ( v51 )
        {
          if ( v51 == 1 )
          {
            y = a6->y;
            a1->eXX = 0.0;
            a1->eYY = 0.0;
            a1->eXY = *((FLOATL *)&galFloat + y);
            a1->eYX = *((FLOATL *)&galFloat + a6->x);
          }
          return 1LL;
        }
        v53 = a6->x;
        *(_QWORD *)&a1->eXY = 0LL;
        a1->eXX = *((FLOATL *)&galFloatNeg + v53);
        v44 = *((float *)&galFloat + a6->y);
      }
      else
      {
        v43 = a6->x;
        *(_QWORD *)&a1->eXY = 0LL;
        a1->eXX = *((FLOATL *)&galFloat + v43);
        v44 = *((float *)&galFloatNeg + a6->y);
      }
      a1->eYY = v44;
      return 1LL;
    }
  }
  if ( bGetNtoW_Win31((struct MATRIX *)&v81, a2, a3, a4, a5, a7) )
  {
    v13 = *(_QWORD *)a4;
    v71 = &v75;
    v72 = 0;
    if ( (*(_DWORD *)(*(_QWORD *)(v13 + 976) + 340LL) & 0x802) == 0x802 || (a5 & 2) != 0 )
    {
      v14 = v81;
      v77 = v83;
      v76 = v82;
    }
    else
    {
      if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v71, (struct MATRIX *)&v81, (struct MATRIX *)(v13 + 320), 0) )
        return v7;
      v14 = _mm_mul_ps(v75, (__m128)_xmm);
    }
    v15 = *(_QWORD *)a3;
    v75 = v14;
    v16 = *(_DWORD *)(v15 + 48);
    if ( (v16 & 4) == 0 )
    {
      v17 = a2->lfEscapement;
      if ( (v16 & 0x200000) != 0 )
        v17 = 900 * ((int)lNormAngle(v17) / 900 % 4);
      if ( v17 && ((a5 & 1) == 0 || gbDBCSCodePage) )
      {
        v18 = v69;
        v45 = bParityViolatingXform(v69);
        v79 = 0LL;
        v46 = -v17;
        v80 = 0;
        if ( !v45 )
          v46 = v17;
        v47 = (__m128i)COERCE_UNSIGNED_INT((float)v46);
        *(float *)v47.m128i_i32 = *(float *)v47.m128i_i32 / 10.0;
        v78[0] = efCos((unsigned int)_mm_cvtsi128_si32(v47));
        v78[3] = v78[0];
        v48 = efSin((unsigned int)_mm_cvtsi128_si32(v47));
        v78[4] = 0;
        v78[5] = 0;
        v78[2] = v48;
        v78[1] = v48 ^ _xmm;
        v85 = v77;
        v84[0] = v75;
        v84[1] = v76;
        if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v71, (struct MATRIX *)v84, (struct MATRIX *)v78, 0) )
          return v7;
      }
      else
      {
        v18 = v69;
      }
      LOBYTE(v19) = 18;
      CurrentThread = KeGetCurrentThread();
      LOBYTE(v21) = 18;
      v68 = *(_DWORD **)(*(_QWORD *)v18 + 48LL);
      if ( !(unsigned __int8)KeIsAttachedProcess(v68)
        || (CurrentProcess = PsGetCurrentProcess(v23, v22, v24),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v57),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
        {
          v29 = *ThreadWin32Thread;
          if ( *ThreadWin32Thread )
          {
            if ( *(_QWORD *)(v29 + 360) )
              CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
            if ( *(_DWORD *)(v29 + 340) )
            {
              LOBYTE(v21) = *(_DWORD *)(v29 + 340);
            }
            else
            {
              CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v27, v26, v28);
              if ( CurrentProcessWin32Process )
                v21 = *(_DWORD *)(CurrentProcessWin32Process + 280);
            }
          }
        }
      }
      v31 = 96;
      if ( (v68[10] & 1) != 0 && (v21 & 0xFu) - 1 > 1 )
        v67 = 96;
      else
        v67 = v68[544];
      v70 = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v27)
        || (v59 = PsGetCurrentProcess(v33, v32, v34),
            v60 = PsGetProcessSessionIdEx(v59),
            v62 = PsGetCurrentThreadProcess(v61),
            v60 == (unsigned int)PsGetProcessSessionIdEx(v62)) )
      {
        v35 = (__int64 *)PsGetThreadWin32Thread(v70);
        if ( v35 )
        {
          v39 = *v35;
          if ( *v35 )
          {
            if ( *(_QWORD *)(v39 + 360) )
              CaptureAndValidateUserModeDpiAwarenessContext(*v35);
            if ( *(_DWORD *)(v39 + 340) )
            {
              LOBYTE(v19) = *(_DWORD *)(v39 + 340);
            }
            else
            {
              v40 = PsGetCurrentProcessWin32Process(v37, v36, v38);
              if ( v40 )
                v19 = *(_DWORD *)(v40 + 280);
            }
          }
        }
      }
      if ( (v68[10] & 1) == 0 || (v19 & 0xFu) - 1 <= 1 )
        v31 = v68[545];
      if ( v67 != v31 )
      {
        v63 = (float)(int)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v68);
        v64 = v63 / (float)(int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v68);
        v65 = *(_OWORD *)(*(_QWORD *)v69 + 336LL);
        v66 = *(_DWORD *)(*(_QWORD *)v69 + 352LL);
        v73[0] = *(_OWORD *)(*(_QWORD *)v69 + 320LL);
        v74 = v66;
        v73[1] = v65;
        if ( (unsigned int)EFLOAT::bIsZero((EFLOAT *)((char *)v73 + 4))
          && (unsigned int)EFLOAT::bIsZero((EFLOAT *)((char *)v73 + 8)) )
        {
          v75.m128_f32[1] = v75.m128_f32[1] / v64;
          v75.m128_f32[2] = v75.m128_f32[2] * v64;
        }
        else
        {
          v75.m128_f32[0] = v75.m128_f32[0] * v64;
          v75.m128_f32[3] = v75.m128_f32[3] / v64;
        }
      }
    }
    v7 = 1;
    *a1 = (struct _FD_XFORM)v75;
    return v7;
  }
  return 0LL;
}
