/*
 * XREFs of ?bCompute@DC@@QEAAHXZ @ 0x1C0039050
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0038370 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?vGetSubRect@RGNOBJ@@QEBAXPEAU_RECTL@@@Z @ 0x1C00370F0 (-vGetSubRect@RGNOBJ@@QEBAXPEAU_RECTL@@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0037C30 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0037E20 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C00399B0 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C003C1F0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003C344 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C003C4D0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C003C850 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C003C9D0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003CAC0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C003E1F0 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C00409C0 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C00455B0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C014021C (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C01422A4 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 */

__int64 __fastcall DC::bCompute(struct _POINTL *this)
{
  struct _RECTL *v1; // r14
  unsigned int v3; // r12d
  struct _POINTL v4; // rdi
  _DWORD *v5; // rbx
  int v6; // r15d
  unsigned int v7; // eax
  unsigned int v8; // ecx
  struct _POINTL v9; // rax
  struct _POINTL v10; // rcx
  struct _POINTL v11; // r8
  struct _POINTL v12; // rdx
  REGION *v13; // rcx
  __int128 v14; // xmm0
  struct _POINTL v15; // rcx
  REGION *v16; // rcx
  REGION *v17; // rcx
  LONG v18; // eax
  unsigned int v19; // ebx
  __m128i *v20; // r15
  unsigned int v21; // ebx
  __int64 v22; // rdi
  unsigned int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // r9
  unsigned int v26; // eax
  __int64 v27; // r14
  unsigned int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // r8
  DC *v31; // rdx
  int v32; // ecx
  LONG y; // eax
  LONG v34; // r10d
  _DWORD *v35; // rcx
  int v36; // r9d
  __m128i v37; // xmm0
  unsigned __int32 v38; // r8d
  unsigned int v39; // ebx
  __int64 v40; // rdi
  unsigned int v41; // edx
  __int64 v42; // rcx
  __int64 v43; // r9
  unsigned int v44; // eax
  __int64 v45; // r14
  unsigned int v46; // edx
  __int64 v47; // rcx
  __int64 v48; // rax
  DC *v49; // rdx
  _BOOL8 v51; // rcx
  _BOOL8 v52; // rax
  int v53; // edi
  struct _RECTL *v54; // rbx
  struct _RECTL *v55; // rcx
  struct _POINTL v56; // rdi
  unsigned int right; // eax
  unsigned int v58; // ecx
  int v59; // eax
  __int128 v60; // xmm0
  __int64 v61; // r15
  void *v62; // r13
  __int64 v63; // rax
  _QWORD *v64; // rax
  struct REGION *Region; // rax
  __int64 v66; // rax
  unsigned int v67; // edx
  unsigned int v68; // edx
  int v69; // eax
  LONG x; // eax
  int v71; // [rsp+20h] [rbp-79h]
  struct _RECTL *v72; // [rsp+28h] [rbp-71h] BYREF
  _DWORD *v73; // [rsp+30h] [rbp-69h] BYREF
  __int64 v74; // [rsp+38h] [rbp-61h] BYREF
  int v75; // [rsp+40h] [rbp-59h]
  __int64 v76; // [rsp+48h] [rbp-51h] BYREF
  int v77; // [rsp+50h] [rbp-49h]
  __int64 v78; // [rsp+58h] [rbp-41h] BYREF
  int v79; // [rsp+60h] [rbp-39h]
  __int64 v80; // [rsp+68h] [rbp-31h] BYREF
  int v81; // [rsp+70h] [rbp-29h]
  struct _POINTL v82; // [rsp+78h] [rbp-21h] BYREF
  struct _POINTL v83; // [rsp+80h] [rbp-19h] BYREF
  __int64 v84; // [rsp+88h] [rbp-11h] BYREF
  struct _POINTL v85; // [rsp+90h] [rbp-9h] BYREF
  __int64 v86; // [rsp+98h] [rbp-1h] BYREF
  struct _POINTL v87; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v88; // [rsp+A8h] [rbp+Fh] BYREF
  struct _POINTL v89; // [rsp+B0h] [rbp+17h]
  __int128 v90; // [rsp+B8h] [rbp+1Fh]

  v1 = (struct _RECTL *)&this[125];
  this[125].x = 0x7FFFFFFF;
  this[125].y = 0x7FFFFFFF;
  v3 = 0;
  this[126].x = 0x80000000;
  this[126].y = 0x80000000;
  v4 = this[140];
  if ( !*(_QWORD *)&v4 )
    return v3;
  v5 = (_DWORD *)this[141];
  v71 = 1;
  v6 = 1;
  v82 = this[140];
  v73 = v5;
  if ( !v5 )
  {
    if ( gpTypeIsolation[7] )
    {
      v61 = NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
      if ( v61 )
      {
        v62 = RGNMEMOBJ::s_pSCANLookAsideList;
        if ( qword_1C0250C50 && (int)qword_1C0250C50() >= 0 && qword_1C0250C58 )
          v63 = qword_1C0250C58(v62);
        else
          v63 = 0LL;
        *(_QWORD *)(v61 + 88) = v63;
        if ( v63 )
        {
          *(_QWORD *)(v61 + 96) = 0LL;
          *(_QWORD *)(v61 + 104) = 0LL;
          v5 = (_DWORD *)v61;
          *(_DWORD *)(v61 + 84) = 1;
          *(_DWORD *)(v61 + 80) = 16;
          *(_DWORD *)v63 = 0;
          *(_DWORD *)(v63 + 4) = 0x80000000;
          *(_QWORD *)(v63 + 8) = 0x7FFFFFFFLL;
          *(_QWORD *)(v61 + 40) = v63 + 16;
          v64 = (_QWORD *)(v61 + 48);
          *(_QWORD *)(v61 + 32) = 0LL;
          v3 = 1;
          *(_QWORD *)(v61 + 24) = 112LL;
          v6 = 1;
          v64[1] = v64;
          *v64 = v64;
          v73 = v5;
        }
        else
        {
          REGION::vDeleteREGION((REGION *)v61);
          v6 = 1;
        }
      }
      else
      {
        v6 = 1;
      }
    }
    if ( !v5 )
      return 0LL;
  }
  if ( !v3 && (this[4].y & 0x10) == 0 )
  {
    if ( (unsigned int)DC::bDpiScaledSurface((DC *)this) && !*(_QWORD *)&this[143] )
      this[65].x |= 0x10u;
LABEL_12:
    v10 = this[20];
    v11 = this[21];
    v12 = this[139];
    if ( !(*(_QWORD *)&v12 | *(_QWORD *)&v11 | *(_QWORD *)&v10) )
    {
      v13 = (REGION *)this[142];
      if ( v13 )
      {
        REGION::vDeleteREGION(v13);
        this[142] = 0LL;
      }
      if ( v5[20] > 0x38u )
        v14 = xmmword_1C020B1F0;
      else
        v14 = *((_OWORD *)v5 + 6);
      *v1 = (struct _RECTL)v14;
      this[4].y &= ~0x10u;
      goto LABEL_18;
    }
    v89 = this[20];
    v51 = v10 != 0LL;
    v90 = 0LL;
    v52 = v51 + 1;
    *(&v89 + v51) = v11;
    if ( !*(_QWORD *)&v11 )
      v52 = v51;
    v53 = v52;
    *(&v89 + v52) = v12;
    if ( v12 )
      v53 = v52 + 1;
    v54 = (struct _RECTL *)this[142];
    v72 = v54;
    v55 = v54;
    if ( !v54 )
    {
      Region = RGNMEMOBJ::AllocateRegion(0x70uLL);
      v55 = (struct _RECTL *)Region;
      if ( Region )
      {
        *((_DWORD *)Region + 20) = 16;
        v54 = (struct _RECTL *)Region;
        *((_DWORD *)Region + 21) = 1;
        *((_QWORD *)Region + 12) = 0LL;
        *((_QWORD *)Region + 13) = 0LL;
        v66 = *((_QWORD *)Region + 11);
        v72 = v55;
        *(_DWORD *)v66 = 0;
        *(_DWORD *)(v66 + 4) = 0x80000000;
        *(_QWORD *)(v66 + 8) = 0x7FFFFFFFLL;
        *(_QWORD *)&v55[2].right = v66 + 16;
        *(_QWORD *)&v55[3].right = v55 + 3;
        *(_QWORD *)&v55[3].left = v55 + 3;
        *(_QWORD *)&v55[1].right = 112LL;
        *(_QWORD *)&v55[2].left = 0LL;
      }
      else
      {
        v55 = 0LL;
      }
    }
    if ( !v55 )
    {
      v3 = 0;
      goto LABEL_155;
    }
    if ( v53 == 1 )
    {
      v56 = v89;
      right = v54[1].right;
      v83 = v89;
      v58 = *(_DWORD *)(*(_QWORD *)&v89 + 80LL);
      if ( (right >= v58 || *(_DWORD *)(*(_QWORD *)&v89 + 24LL) <= 0x70u)
        && (right <= 0x70 || *(_DWORD *)(*(_QWORD *)&v89 + 24LL) > 0x70u) )
      {
        v54[5].left = v58;
        v54[5].top = *(_DWORD *)(*(_QWORD *)&v56 + 84LL);
        v54[6] = *(struct _RECTL *)(*(_QWORD *)&v56 + 96LL);
        memmove(
          *(void **)&v54[5].right,
          *(const void **)(*(_QWORD *)&v56 + 88LL),
          *(unsigned int *)(*(_QWORD *)&v56 + 80LL));
        *(_QWORD *)&v54[2].right = *(_QWORD *)&v54[5].right
                                 + *(_DWORD *)(*(_QWORD *)&v56 + 40LL)
                                 - *(_DWORD *)(*(_QWORD *)&v56 + 88LL);
      }
      else
      {
        v68 = 112;
        v77 = 0;
        if ( v58 > 0x70 )
          v68 = v58;
        RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v76, v68);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v76);
        if ( !v76 )
        {
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v76);
          goto LABEL_148;
        }
        RGNOBJ::vCopy((RGNOBJ *)&v76, (struct RGNOBJ *)&v83);
        RGNOBJ::vSwap((RGNOBJ *)&v72, (struct RGNOBJ *)&v76);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v76);
      }
    }
    else if ( v53 == 2 )
    {
      v85 = v89;
      v84 = v90;
      if ( !(unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v72, (struct RGNOBJ *)&v85, (struct RGNOBJ *)&v84, 1) )
      {
        v54 = v72;
        v3 = 0;
        goto LABEL_155;
      }
    }
    else
    {
      v79 = 0;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v78, 0x70u);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v78);
      v87 = v89;
      v88 = *((_QWORD *)&v90 + 1);
      v86 = v90;
      if ( !v78
        || !(unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v78, (struct RGNOBJ *)&v87, (struct RGNOBJ *)&v86, 1)
        || (v69 = RGNOBJ::iCombine((RGNOBJ *)&v72, (struct RGNOBJ *)&v78, (struct RGNOBJ *)&v88, 1), v54 = v72, !v69) )
      {
        v6 = 0;
        v71 = 0;
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v78);
      if ( !v6 )
      {
LABEL_154:
        v3 = v71;
LABEL_155:
        this[142] = 0LL;
        if ( v54 )
          REGION::vDeleteREGION((REGION *)v54);
        goto LABEL_19;
      }
    }
    v72[1].bottom = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
    v59 = RGNOBJ::bOffset((RGNOBJ *)&v72, this + 129);
    v54 = v72;
    if ( v59 )
    {
      if ( v73[20] == 56
        && v73[24] <= v72[6].left
        && v73[26] >= v72[6].right
        && v73[25] <= v72[6].top
        && v73[27] >= v72[6].bottom )
      {
        this[142] = (struct _POINTL)v72;
        if ( v54[5].left > 0x38u )
          v60 = xmmword_1C020B1F0;
        else
          v60 = (__int128)v54[6];
        *v1 = (struct _RECTL)v60;
        this[4].y &= ~0x10u;
LABEL_97:
        if ( v6 )
        {
LABEL_18:
          v3 = v71;
LABEL_19:
          v15 = this[62];
          if ( !*(_QWORD *)&v15 )
            goto LABEL_23;
          if ( (*(_DWORD *)(*(_QWORD *)&v15 + 116LL) & 0x800) != 0 )
            this[65].x |= 8u;
          if ( (*(_DWORD *)(*(_QWORD *)&v15 + 116LL) & 0x800) != 0 )
          {
            x = this[65].x;
            if ( (x & 0x10) != 0 )
            {
              vDuplicateAndScaleRegion(
                *(_QWORD *)&this[141],
                &this[143],
                _mm_unpacklo_ps((__m128)(unsigned int)this[65].y, (__m128)(unsigned int)this[66].x).m128_u64[0]);
              x = this[65].x;
            }
            if ( (x & 8) != 0 )
              vDuplicateAndScaleRegion(
                *(_QWORD *)&this[142],
                &this[144],
                _mm_unpacklo_ps((__m128)(unsigned int)this[65].y, (__m128)(unsigned int)this[66].x).m128_u64[0]);
          }
          else
          {
LABEL_23:
            v16 = (REGION *)this[143];
            if ( v16 )
            {
              REGION::vDeleteREGION(v16);
              this[143] = 0LL;
            }
            v17 = (REGION *)this[144];
            if ( v17 )
            {
              REGION::vDeleteREGION(v17);
              this[144] = 0LL;
            }
          }
          v18 = this->x;
          v19 = this->x;
          this[65].x &= 0xFFFFFFE7;
          v20 = (__m128i *)this[141];
          v21 = (unsigned __int16)v18 | (v19 >> 8) & 0xFF0000;
          if ( v21 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          (unsigned __int16)v21,
                                          1)
                   + 13) == HIWORD(v21) )
                v21 = (unsigned __int16)v21;
            }
            else
            {
              v21 = (unsigned __int16)v21;
            }
          }
          v22 = *((_QWORD *)gpHandleManager + 2);
          v23 = *(_DWORD *)(v22 + 2056);
          if ( v21 >= v23 + ((*(unsigned __int16 *)(v22 + 2) + 0xFFFF) << 16) )
          {
            v27 = 0LL;
          }
          else
          {
            v24 = ((v21 - v23) >> 16) + 1;
            if ( v21 < v23 )
              v24 = 0LL;
            v25 = *(_QWORD *)(v22 + 8 * v24 + 8);
            if ( (_DWORD)v24 )
              v26 = v21 + ((1 - (_DWORD)v24) << 16) - v23;
            else
              v26 = v21;
            v27 = 0LL;
            if ( v26 < *(_DWORD *)(v25 + 20)
              && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v25 + 24) + 8 * ((unsigned __int64)v26 >> 8))
                           + 16LL * (unsigned __int8)v26
                           + 8) )
            {
              v27 = *(_QWORD *)v25 + 24LL * v26;
            }
          }
          if ( v21 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          (unsigned __int16)v21,
                                          1)
                   + 13) == HIWORD(v21) )
                v21 = (unsigned __int16)v21;
            }
            else
            {
              v21 = (unsigned __int16)v21;
            }
          }
          v28 = *(_DWORD *)(v22 + 2056);
          if ( v21 >= v28 + ((*(unsigned __int16 *)(v22 + 2) + 0xFFFF) << 16) )
            goto LABEL_173;
          v29 = ((v21 - v28) >> 16) + 1;
          if ( v21 < v28 )
            v29 = 0LL;
          v30 = *(_QWORD *)(v22 + 8 * v29 + 8);
          if ( (_DWORD)v29 )
            v21 += ((1 - (_DWORD)v29) << 16) - v28;
          if ( v21 >= *(_DWORD *)(v30 + 20) )
LABEL_173:
            v31 = 0LL;
          else
            v31 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v30 + 24) + 8 * ((unsigned __int64)v21 >> 8))
                         + 16LL * (unsigned __int8)v21
                         + 8);
          if ( v31 != (DC *)this )
            v27 = 0LL;
          if ( (*(_BYTE *)(v27 + 15) & 4) != 0 )
          {
            if ( !v20 )
              goto LABEL_110;
            if ( v20[5].m128i_i32[1] == 1 )
            {
              v32 = 1;
            }
            else
            {
              v32 = 3;
              if ( v20[5].m128i_i32[0] <= 0x38u )
                v32 = 2;
            }
            *(_DWORD *)(*(_QWORD *)&this[122] + 116LL) = v32;
            if ( v20[5].m128i_i32[1] == 1 )
            {
LABEL_110:
              *(_OWORD *)(*(_QWORD *)&this[122] + 120LL) = xmmword_1C020B1F0;
            }
            else
            {
              y = this[129].y;
              v34 = this[129].x;
              v35 = (_DWORD *)this[122];
              v36 = _mm_cvtsi128_si32(_mm_srli_si128(v20[6], 4)) - y;
              v37 = _mm_srli_si128(v20[6], 12);
              v38 = _mm_srli_si128(v20[6], 8).m128i_u32[0] - v34;
              v35[30] = *(_OWORD *)&v20[6] - v34;
              v35[31] = v36;
              v35[32] = v38;
              v35[33] = _mm_cvtsi128_si32(v37) - y;
            }
            v39 = (unsigned __int16)this->x | ((unsigned int)this->x >> 8) & 0xFF0000;
            if ( v39 >= 0x10000 )
            {
              if ( *(_DWORD *)gpHandleManager > 0x10000u )
              {
                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                            (unsigned __int16)this->x,
                                            1)
                     + 13) == HIWORD(v39) )
                  v39 = (unsigned __int16)v39;
              }
              else
              {
                v39 = (unsigned __int16)this->x;
              }
            }
            v40 = *((_QWORD *)gpHandleManager + 2);
            v41 = *(_DWORD *)(v40 + 2056);
            if ( v39 >= v41 + ((*(unsigned __int16 *)(v40 + 2) + 0xFFFF) << 16) )
            {
              v45 = 0LL;
            }
            else
            {
              v42 = ((v39 - v41) >> 16) + 1;
              if ( v39 < v41 )
                v42 = 0LL;
              v43 = *(_QWORD *)(v40 + 8 * v42 + 8);
              if ( (_DWORD)v42 )
                v44 = v39 + ((1 - (_DWORD)v42) << 16) - v41;
              else
                v44 = v39;
              v45 = 0LL;
              if ( v44 < *(_DWORD *)(v43 + 20)
                && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v43 + 24) + 8 * ((unsigned __int64)v44 >> 8))
                             + 16LL * (unsigned __int8)v44
                             + 8) )
              {
                v45 = *(_QWORD *)v43 + 24LL * v44;
              }
            }
            if ( v39 >= 0x10000 )
            {
              if ( *(_DWORD *)gpHandleManager > 0x10000u )
              {
                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                            (unsigned __int16)v39,
                                            1)
                     + 13) == HIWORD(v39) )
                  v39 = (unsigned __int16)v39;
              }
              else
              {
                v39 = (unsigned __int16)v39;
              }
            }
            v46 = *(_DWORD *)(v40 + 2056);
            if ( v39 >= v46 + ((*(unsigned __int16 *)(v40 + 2) + 0xFFFF) << 16) )
              goto LABEL_184;
            v47 = ((v39 - v46) >> 16) + 1;
            if ( v39 < v46 )
              v47 = 0LL;
            v48 = *(_QWORD *)(v40 + 8 * v47 + 8);
            if ( (_DWORD)v47 )
              v39 += ((1 - (_DWORD)v47) << 16) - v46;
            if ( v39 >= *(_DWORD *)(v48 + 20) )
LABEL_184:
              v49 = 0LL;
            else
              v49 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v48 + 24) + 8 * ((unsigned __int64)v39 >> 8))
                           + 16LL * (unsigned __int8)v39
                           + 8);
            if ( v49 != (DC *)this )
              v45 = 0LL;
            *(_BYTE *)(v45 + 15) &= ~4u;
          }
          return v3;
        }
        goto LABEL_154;
      }
      v81 = 0;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v80, 0x70u);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v80);
      if ( v80 )
      {
        if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v80, (struct RGNOBJ *)&v73, (struct RGNOBJ *)&v72, 1)
          && (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v72, (struct RGNOBJ *)&v80) )
        {
          v54 = v72;
          this[142] = (struct _POINTL)v72;
          RGNOBJ::vGetSubRect(&v72, v1);
          this[4].y &= ~0x10u;
LABEL_117:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v80);
          goto LABEL_97;
        }
        v54 = v72;
      }
      v6 = 0;
      v71 = 0;
      goto LABEL_117;
    }
LABEL_148:
    v3 = 0;
    goto LABEL_155;
  }
  v7 = v5[6];
  v8 = *(_DWORD *)(*(_QWORD *)&v4 + 80LL);
  if ( (v7 >= v8 || *(_DWORD *)(*(_QWORD *)&v4 + 24LL) <= 0x70u)
    && (v7 <= 0x70 || *(_DWORD *)(*(_QWORD *)&v4 + 24LL) > 0x70u) )
  {
    v5[20] = v8;
    v5[21] = *(_DWORD *)(*(_QWORD *)&v4 + 84LL);
    *((_OWORD *)v5 + 6) = *(_OWORD *)(*(_QWORD *)&v4 + 96LL);
    memmove(*((void **)v5 + 11), *(const void **)(*(_QWORD *)&v4 + 88LL), *(unsigned int *)(*(_QWORD *)&v4 + 80LL));
    *((_QWORD *)v5 + 5) = *((_QWORD *)v5 + 11) + *(_DWORD *)(*(_QWORD *)&v4 + 40LL) - *(_DWORD *)(*(_QWORD *)&v4 + 88LL);
    goto LABEL_8;
  }
  v67 = 112;
  v75 = 0;
  if ( v8 > 0x70 )
    v67 = v8;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v74, v67);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v74);
  if ( v74 )
  {
    RGNOBJ::vCopy((RGNOBJ *)&v74, (struct RGNOBJ *)&v82);
    RGNOBJ::vSwap((RGNOBJ *)&v73, (struct RGNOBJ *)&v74);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v74);
    v5 = v73;
LABEL_8:
    v9 = this[62];
    if ( *(_QWORD *)&v9 && (*(_DWORD *)(*(_QWORD *)&v9 + 116LL) & 0x800) != 0 )
      this[65].x |= 0x10u;
    this[141] = (struct _POINTL)v5;
    goto LABEL_12;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v74);
  return 0LL;
}
