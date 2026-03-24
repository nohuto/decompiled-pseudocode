/*
 * XREFs of ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1C016F7E0
 * Callers:
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C016FDD0 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C00172F8 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z @ 0x1C016FD50 (-ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C02806A4 (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 *     ?XformRect@DXGPRESENT@@SAXPEBUtagRECT@@0PEAU2@0II@Z @ 0x1C0282C20 (-XformRect@DXGPRESENT@@SAXPEBUtagRECT@@0PEAU2@0II@Z.c)
 */

__int64 __fastcall DXGPRESENT::CombineRectList(
        const struct tagRECT *this,
        const struct _D3DKMT_PRESENT *a2,
        HDC a3,
        const struct DXGDEVICE *a4,
        LONG a5,
        LONG a6)
{
  struct tagRECT *v7; // r13
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // eax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v11; // eax
  RECT *p_DstRect; // r9
  RECT *p_SrcRect; // r8
  LONG right; // edx
  LONG v15; // r9d
  LONG v16; // r8d
  __int64 bottom; // rcx
  LONG v18; // r10d
  __int64 v19; // rdx
  unsigned int bottom_low; // eax
  __int64 v21; // rcx
  unsigned int top; // eax
  __int64 v23; // rax
  unsigned __int64 v24; // rsi
  unsigned int i; // edi
  unsigned int v26; // eax
  int v27; // esi
  LONG v28; // edx
  int v29; // r14d
  LONG v30; // r10d
  int v31; // r9d
  int v32; // r8d
  LONG left; // edi
  LONG v34; // r11d
  char v35; // al
  __int64 v36; // rax
  __int64 v37; // rdx
  int v38; // eax
  LONG v39; // edx
  LONG v40; // r13d
  LONG v41; // r8d
  LONG v42; // r10d
  unsigned int v43; // eax
  unsigned int v44; // r11d
  const struct tagRECT *v45; // r10
  LONG v46; // eax
  LONG *v47; // r9
  LONG v48; // r8d
  LONG v49; // edx
  LONG v50; // ecx
  LONG v51; // eax
  LONG v52; // r8d
  LONG v53; // edi
  LONG v54; // r15d
  LONG v55; // r12d
  __int64 v56; // rax
  unsigned int v57; // esi
  __int64 v58; // rcx
  unsigned int v59; // edx
  __m128i *v60; // rcx
  LONG v61; // r10d
  LONG v62; // r9d
  int v63; // r8d
  __int64 v64; // rdx
  void *v65; // rcx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v66; // edi
  struct tagRECT *v67; // r11
  LONG v68; // ecx
  LONG v69; // eax
  int v70; // eax
  int v71; // ecx
  __int64 v72; // rax
  SIZE_T v74; // rax
  PVOID v75; // rax
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  LONG *v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __m128i v83; // xmm0
  __int64 v84; // rdi
  const struct DXGDEVICE *v85; // rsi
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // r15
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rax
  LONG *v92; // r14
  __int64 v93; // r8
  __int64 v94; // r12
  _DWORD *v95; // r8
  _DWORD *v96; // r13
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  _QWORD *v98; // rax
  char v99; // [rsp+30h] [rbp-89h]
  LONG v100; // [rsp+34h] [rbp-85h]
  LONG v101; // [rsp+38h] [rbp-81h]
  struct tagRECT v102; // [rsp+40h] [rbp-79h] BYREF
  struct tagRECT v103; // [rsp+50h] [rbp-69h] BYREF
  LONG v104; // [rsp+60h] [rbp-59h]
  unsigned __int64 v105; // [rsp+64h] [rbp-55h]
  LONG v106; // [rsp+6Ch] [rbp-4Dh]
  int v107; // [rsp+70h] [rbp-49h]
  unsigned int v108; // [rsp+74h] [rbp-45h]
  __int64 v109; // [rsp+78h] [rbp-41h] BYREF
  unsigned int v110; // [rsp+80h] [rbp-39h]
  unsigned int v111; // [rsp+84h] [rbp-35h]
  LONG v112; // [rsp+88h] [rbp-31h]
  LONG v113; // [rsp+8Ch] [rbp-2Dh]
  int v114; // [rsp+90h] [rbp-29h]
  const struct _D3DKMT_PRESENT *v115; // [rsp+98h] [rbp-21h]
  const struct DXGDEVICE *v116; // [rsp+A0h] [rbp-19h]
  __int128 v117; // [rsp+A8h] [rbp-11h] BYREF

  v116 = a4;
  v7 = (struct tagRECT *)&this[8];
  v115 = a2;
  this[8].top = 0;
  this[8].right = this[2].left - this[1].right;
  this[8].bottom = this[2].top - this[1].bottom;
  this[8].left = 0;
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( (*(_BYTE *)&Value & 2) != 0 )
  {
    if ( (*(_BYTE *)&Value & 0x40) != 0
      && !DXGPRESENT::IntersectRect((struct tagRECT *)&this[8], &a2->DstRect, this + 8) )
    {
      goto LABEL_82;
    }
    this[9] = *(const struct tagRECT *)v7;
  }
  else
  {
    this[9].right = a5;
    this[9].bottom = a6;
    *(_QWORD *)&this[9].left = 0LL;
    v11 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
    if ( (*(_BYTE *)&v11 & 0x40) != 0 )
      p_DstRect = &a2->DstRect;
    else
      p_DstRect = 0LL;
    if ( *(_BYTE *)&v11 < 0 )
      p_SrcRect = &a2->SrcRect;
    else
      p_SrcRect = 0LL;
    if ( !(unsigned int)DXGPRESENT::ClipRects(
                          (struct tagRECT *)&this[9],
                          (struct tagRECT *)&this[8],
                          p_SrcRect,
                          p_DstRect) )
      goto LABEL_82;
  }
  right = this[1].right;
  v15 = right + v7->left;
  v16 = right + this[8].right;
  bottom = (unsigned int)this[1].bottom;
  v18 = bottom + this[8].top;
  v19 = (unsigned int)(bottom + this[8].bottom);
  v7->left = v15;
  this[8].bottom = v19;
  this[8].top = v18;
  this[8].right = v16;
  if ( (a2->Flags.Value & 0x10000) != 0 )
  {
    bottom_low = LOWORD(this[26].bottom);
    if ( bottom_low > 1 )
    {
      bottom = LOWORD(this[26].bottom);
      v7->left = v15 * bottom_low;
      v19 = bottom_low * (unsigned int)v19;
      this[8].right = bottom_low * v16;
      this[8].top = v18 * bottom_low;
      this[8].bottom = v19;
    }
  }
  if ( !this[7].top )
  {
    v80 = WdLogNewEntry5_WdAssertion(bottom, v19);
    *(_QWORD *)(v80 + 24) = 10894LL;
    WdLogEvent5_WdAssertion(v80);
  }
  if ( !*(_QWORD *)&this[1].left )
  {
    v81 = WdLogNewEntry5_WdAssertion(bottom, v19);
    *(_QWORD *)(v81 + 24) = 10895LL;
    WdLogEvent5_WdAssertion(v81);
  }
  v21 = 0LL;
  while ( 1 )
  {
    top = this[4].top;
    if ( !top )
      top = 1;
    if ( (unsigned int)v21 >= top )
      break;
    v23 = (unsigned int)v21;
    v21 = (unsigned int)(v21 + 1);
    *(&this[22].left + v23) = 0;
  }
  v24 = (unsigned int)this[7].top * (unsigned __int64)*(unsigned int *)(*(_QWORD *)&this[1].left + 8LL);
  if ( v24 <= 0xFFFFFFFF )
  {
    if ( !(_DWORD)v24 )
      goto LABEL_82;
    for ( i = 0; ; ++i )
    {
      v26 = this[4].top;
      if ( !v26 )
        v26 = 1;
      if ( i >= v26 )
        break;
      if ( *(&this[10].left + i) < (unsigned int)v24 )
      {
        operator delete[](*((void **)&this[14].left + i));
        v74 = 16LL * (unsigned int)v24;
        if ( !is_mul_ok((unsigned int)v24, 0x10uLL) )
          v74 = -1LL;
        v75 = operator new[](v74, 0x4B677844u, PagedPool);
        *((_QWORD *)&this[14].left + i) = v75;
        v79 = &this->left + i;
        if ( !v75 )
        {
          v79[40] = 0;
          v82 = WdLogNewEntry5_WdLowResource(v79, v76, v77, v78);
          *(_QWORD *)(v82 + 24) = this;
          *(_QWORD *)(v82 + 32) = (unsigned int)v24;
          WdLogEvent5_WdLowResource(v82);
          return 3221225495LL;
        }
        v79[40] = v24;
      }
    }
    v27 = 0;
    v28 = this[9].top;
    v29 = 0;
    v30 = this[8].top;
    v31 = this[9].bottom - v28;
    v32 = this[8].bottom - v30;
    v107 = 0;
    v114 = 0;
    v111 = 0;
    v110 = 0;
    if ( v32 == v31 )
    {
      left = this[9].left;
      v34 = v7->left;
      if ( this[8].right - v7->left == this[9].right - left )
      {
        v35 = 0;
        goto LABEL_30;
      }
    }
    else
    {
      v34 = this[8].left;
    }
    left = this[9].left;
    v35 = 1;
LABEL_30:
    v99 = v35;
    if ( v35 )
    {
      v111 = ((this[8].right - v34) << 16) / (this[9].right - left);
      v110 = (v32 << 16) / v31;
    }
    else
    {
      v27 = v34 - left;
      v29 = v30 - v28;
      v107 = v34 - left;
      v114 = v30 - v28;
    }
    v102 = 0LL;
    if ( (v115->Flags.Value & 0x10100) == 0x10100 )
    {
      v36 = *((_QWORD *)v116 + 5);
      v102 = *(struct tagRECT *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v116 + 231) + 2696LL) + 112LL)
                               + 3968LL * v115->VidPnSourceId
                               + 628);
      v37 = *(_QWORD *)(v36 + 88);
      v109 = 0LL;
      v38 = (*(__int64 (__fastcall **)(HDC, __int64 *))(v37 + 312))(a3, &v109);
      v39 = v102.left;
      v40 = v102.top;
      v41 = v102.right;
      v42 = v102.bottom;
      if ( v38 )
      {
        v40 = v102.top - HIDWORD(v109);
        v39 = v102.left - v109;
        v41 = v102.right - v109;
        v42 = v102.bottom - HIDWORD(v109);
      }
      v43 = LOWORD(this[26].bottom);
      v104 = v39;
      v106 = v40;
      v105 = __PAIR64__(v42, v41);
      if ( v43 <= 1 )
      {
LABEL_36:
        v44 = 0;
        v108 = 0;
        if ( this[7].top )
        {
          v45 = this + 9;
          do
          {
            v46 = v45->left;
            v47 = (LONG *)(*(_QWORD *)&this[7].right + 16LL * v44);
            v103 = 0LL;
            v48 = *v47;
            if ( *v47 > v46 )
            {
              v103.left = *v47;
            }
            else
            {
              v48 = v46;
              v103.left = v46;
            }
            v49 = v47[2];
            if ( v49 < this[9].right )
            {
              v103.right = v47[2];
            }
            else
            {
              v49 = this[9].right;
              v103.right = v49;
            }
            v50 = v47[1];
            if ( v50 > this[9].top )
            {
              v103.top = v47[1];
            }
            else
            {
              v50 = this[9].top;
              v103.top = v50;
            }
            v51 = v47[3];
            if ( v51 >= this[9].bottom )
              v51 = this[9].bottom;
            v103.bottom = v51;
            if ( v51 > v50 && v49 > v48 )
            {
              v102 = 0LL;
              if ( v99 )
              {
                DXGPRESENT::XformRect(this + 8, v45, &v102, &v103, v111, v110);
                v52 = v102.left;
                v45 = this + 9;
                v44 = v108;
                v55 = v102.bottom;
                v53 = v102.right;
                v54 = v102.top;
              }
              else
              {
                v52 = v27 + v48;
                v53 = v49 + v27;
                v54 = v50 + v29;
                v55 = v51 + v29;
              }
              v56 = *(_QWORD *)&this[1].left;
              v57 = 0;
              v113 = v55;
              v112 = v54;
              v101 = v53;
              v58 = v56 + 32;
              v100 = v52;
              *(_QWORD *)&v102.left = v56 + 32;
              LODWORD(v109) = 0;
              if ( *(_DWORD *)(v56 + 8) )
              {
                while ( 1 )
                {
                  v59 = LOWORD(this[26].bottom);
                  v60 = (__m128i *)(16LL * v57 + v58);
                  v117 = 0LL;
                  v103 = 0LL;
                  if ( v59 > 1 )
                  {
                    v83 = *v60;
                    v60 = (__m128i *)&v117;
                    v61 = v59 * _mm_cvtsi128_si32(v83);
                    DWORD1(v117) = v59 * v83.m128i_i32[1];
                    LODWORD(v117) = v61;
                    DWORD2(v117) = v59 * v83.m128i_i32[2];
                    HIDWORD(v117) = v59 * v83.m128i_i32[3];
                  }
                  else
                  {
                    v61 = v60->m128i_i32[0];
                  }
                  if ( v61 > v52 )
                  {
                    v103.left = v61;
                  }
                  else
                  {
                    v61 = v52;
                    v103.left = v52;
                  }
                  v62 = v60->m128i_i32[2];
                  if ( v62 < v53 )
                  {
                    v103.right = v60->m128i_i32[2];
                  }
                  else
                  {
                    v62 = v53;
                    v103.right = v53;
                  }
                  if ( v61 >= v62 )
                    goto LABEL_78;
                  v63 = v60->m128i_i32[1];
                  if ( v63 > v54 )
                  {
                    v103.top = v60->m128i_i32[1];
                  }
                  else
                  {
                    v63 = v54;
                    v103.top = v54;
                  }
                  v64 = v60->m128i_u32[3];
                  if ( (int)v64 >= v55 )
                    v64 = (unsigned int)v55;
                  v103.bottom = v64;
                  if ( v63 < (int)v64 )
                    break;
LABEL_77:
                  v52 = v100;
LABEL_78:
                  v72 = *(_QWORD *)&this[1].left;
                  ++v57;
                  v58 = *(_QWORD *)&v102.left;
                  LODWORD(v109) = v57;
                  if ( v57 >= *(_DWORD *)(v72 + 8) )
                  {
                    v44 = v108;
                    v45 = this + 9;
                    v29 = v114;
                    goto LABEL_80;
                  }
                }
                v65 = (void *)v115;
                v66 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v115->Flags.Value;
                if ( (*(_DWORD *)&v66 & 0x10000) != 0 )
                {
                  v67 = (struct tagRECT *)(*(_QWORD *)&this[14].left + 16LL * (unsigned int)this[22].left);
                  if ( (*(_WORD *)&v66 & 0x100) == 0 )
                  {
                    *v67 = v103;
                    goto LABEL_75;
                  }
                  v68 = v104;
                  v69 = v105;
                  if ( v61 > v104 )
                    v68 = v61;
                  v67->left = v68;
                  if ( v62 < v69 )
                    v69 = v62;
                  v67->right = v69;
                  if ( v68 < v69 )
                  {
                    v70 = HIDWORD(v105);
                    v71 = v40;
                    if ( v63 > v40 )
                      v71 = v63;
                    v67->top = v71;
                    if ( (int)v64 < v70 )
                      v70 = v64;
                    v67->bottom = v70;
                    if ( v71 < v70 )
                    {
LABEL_75:
                      ++this[22].left;
                      this->top &= ~2u;
                    }
                  }
                }
                else
                {
                  v84 = 0LL;
                  if ( this[4].top )
                  {
                    v85 = v116;
                    do
                    {
                      v86 = *((_QWORD *)v85 + 231);
                      if ( !v86 || !*(_QWORD *)(v86 + 2696) )
                      {
                        v87 = WdLogNewEntry5_WdAssertion(v65, v64);
                        *(_QWORD *)(v87 + 24) = 11053LL;
                        WdLogEvent5_WdAssertion(v87);
                        v86 = *((_QWORD *)v85 + 231);
                      }
                      v88 = *(_QWORD *)(v86 + 2696);
                      if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v88 + 16)) )
                      {
                        v91 = WdLogNewEntry5_WdAssertion(v90, v89);
                        *(_QWORD *)(v91 + 24) = 11056LL;
                        WdLogEvent5_WdAssertion(v91);
                      }
                      v92 = &this->left + v84;
                      v93 = *(_QWORD *)(v88 + 112);
                      v94 = 2LL * (unsigned int)v92[88];
                      *(_QWORD *)&v117 = *((_QWORD *)&this[14].left + v84);
                      if ( DXGPRESENT::IntersectRect(
                             (struct tagRECT *)(v117 + 8 * v94),
                             &v103,
                             (const struct tagRECT *)(3968LL * (unsigned int)v84 + 628 + v93)) )
                      {
                        v65 = (void *)v115;
                        if ( (v115->Flags.Value & 0x100) == 0 || (_DWORD)v84 == v115->VidPnSourceId )
                        {
                          v96 = (_DWORD *)(v117 + 8 * v94);
                          v96[1] -= v95[1];
                          v96[3] -= v95[1];
                          *v96 -= *v95;
                          v96[2] -= *v95;
                          CddInterface = ADAPTER_DISPLAY::GetCddInterface((DXGADAPTER **)v88, v84);
                          v65 = CddInterface;
                          if ( CddInterface )
                            (*((void (__fastcall **)(_QWORD, _DWORD *))CddInterface + 1))(*(_QWORD *)CddInterface, v96);
                          ++v92[88];
                          this->top &= ~2u;
                        }
                      }
                      v84 = (unsigned int)(v84 + 1);
                    }
                    while ( (unsigned int)v84 < this[4].top );
                    v57 = v109;
                    v54 = v112;
                    v55 = v113;
                    v40 = v106;
                  }
                }
                v53 = v101;
                goto LABEL_77;
              }
LABEL_80:
              v27 = v107;
            }
            v108 = ++v44;
          }
          while ( v44 < this[7].top );
        }
LABEL_82:
        this->top &= 0xFFFFFEF7;
        return 0LL;
      }
      v40 *= v43;
      v104 = v43 * v39;
      LODWORD(v105) = v43 * v41;
      HIDWORD(v105) = v43 * v42;
    }
    else
    {
      v40 = v102.top;
      v104 = v102.left;
      v105 = *(_QWORD *)&v102.right;
    }
    v106 = v40;
    goto LABEL_36;
  }
  v98 = (_QWORD *)WdLogNewEntry5_WdError(v21, v19);
  v98[3] = -1073741675LL;
  v98[4] = this;
  v98[5] = (unsigned int)this[7].top;
  v98[6] = *(unsigned int *)(*(_QWORD *)&this[1].left + 8LL);
  WdLogEvent5_WdError(v98);
  return 3221225621LL;
}
