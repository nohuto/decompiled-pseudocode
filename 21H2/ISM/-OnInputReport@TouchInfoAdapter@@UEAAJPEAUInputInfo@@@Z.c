/*
 * XREFs of ?OnInputReport@TouchInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x18019A1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000D864 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180046088 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$list@PEAUISystemContextObserver@@V?$allocator@PEAUISystemContextObserver@@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@2@@Z @ 0x180099440 (-erase@-$list@PEAUISystemContextObserver@@V-$allocator@PEAUISystemContextObserver@@@std@@@std@@Q.c)
 *     ??$_Insert_or_assign@AEBKAEAG@?$unordered_map@KGU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKG@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKG@std@@@std@@@std@@@std@@_N@1@AEBKAEAG@Z @ 0x180199E60 (--$_Insert_or_assign@AEBKAEAG@-$unordered_map@KGU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@U-$p.c)
 *     ?ExistingTouchContactWithId@TouchInfoAdapter@@AEAA_NGPEAPEAUTouchContact@@@Z @ 0x18019A134 (-ExistingTouchContactWithId@TouchInfoAdapter@@AEAA_NGPEAPEAUTouchContact@@@Z.c)
 */

__int64 __fastcall TouchInfoAdapter::OnInputReport(TouchInfoAdapter *this, struct InputInfo *a2)
{
  unsigned int v4; // eax
  __int16 v5; // r12
  char v6; // r8
  unsigned __int8 v7; // r10
  unsigned int v8; // r9d
  __int16 v9; // si
  unsigned int v10; // ecx
  __int64 v11; // r13
  char *v12; // rbx
  __int64 v13; // r14
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // r11
  __int64 i; // rbx
  int v18; // r10d
  char *v19; // rcx
  __int16 v20; // ax
  __int16 v21; // ax
  int v22; // edx
  int v23; // eax
  __int16 v24; // ax
  __int16 v25; // dx
  __int64 v26; // rcx
  int v27; // eax
  __int64 appended; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  char v32; // dl
  unsigned int v33; // r14d
  __int64 v34; // rbx
  __int16 v35; // dx
  __int128 v36; // xmm1
  __int64 v37; // rcx
  struct TouchContact **v38; // r13
  __int128 v39; // xmm0
  struct TouchContact *j; // r11
  struct TouchContact *v41; // r12
  __int64 v42; // rax
  __int64 *v43; // r11
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // r8
  int v48; // r9d
  unsigned __int16 v49; // dx
  __int64 v51; // r9
  __int64 v52; // rax
  __int16 v53; // cx
  __int64 v54; // rcx
  unsigned __int8 v55; // r10
  unsigned int v56; // r9d
  unsigned int m; // r8d
  __int64 v58; // rdx
  unsigned __int16 v59; // dx
  int v60; // eax
  unsigned __int8 v61; // r10
  unsigned int k; // r8d
  __int64 v63; // rdx
  __int16 v64; // ax
  unsigned __int16 v65; // dx
  int v66; // eax
  unsigned __int16 v67; // dx
  _OWORD *v68; // rcx
  __int16 *v69; // rax
  __int128 v70; // xmm1
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  __int128 v77; // xmm1
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  __int64 v80; // rax
  __int16 v81; // [rsp+20h] [rbp-E0h]
  char v82; // [rsp+23h] [rbp-DDh]
  unsigned int v83; // [rsp+24h] [rbp-DCh]
  unsigned __int8 v84[4]; // [rsp+28h] [rbp-D8h] BYREF
  int v85; // [rsp+2Ch] [rbp-D4h]
  struct TouchContact *v86; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v87; // [rsp+38h] [rbp-C8h]
  __int64 v88; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v89; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v90; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 v91; // [rsp+62h] [rbp-9Eh]
  int v92; // [rsp+64h] [rbp-9Ch]
  int v93; // [rsp+70h] [rbp-90h]
  char v94; // [rsp+75h] [rbp-8Bh]
  unsigned __int8 v95; // [rsp+76h] [rbp-8Ah]
  unsigned __int8 v96; // [rsp+77h] [rbp-89h]
  _BYTE v97[568]; // [rsp+78h] [rbp-88h]
  __int128 v98; // [rsp+2B0h] [rbp+1B0h] BYREF
  int v99; // [rsp+2C0h] [rbp+1C0h]
  wil::details::in1diag3 *retaddr; // [rsp+308h] [rbp+208h]

  if ( (*(_DWORD *)a2 & 0x200003B) != 0 )
  {
    memset_0(&v90, 0, 0x248uLL);
    v4 = *((_DWORD *)a2 + 53);
    v5 = 0;
    v82 = 0;
    v6 = 0;
    LOBYTE(v85) = 0;
    v7 = 0;
    v8 = 0;
    v81 = 0;
    v83 = 0;
    if ( v4 > 0xA )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        128LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\adapters\\touchinfo\\lib\\touchinfoadapter.cpp",
        0LL);
      __debugbreak();
    }
    v9 = 1;
    v10 = 0;
    v87 = 0;
    v11 = 4LL;
    if ( v4 )
    {
      v12 = (char *)this + 40;
      do
      {
        v13 = 18LL * v10;
        v14 = *((_DWORD *)a2 + 36 * v10 + 57);
        if ( (v14 & 0x10) == 0 && (*(_BYTE *)a2 & 2) != 0 )
        {
          v14 &= ~4u;
          *((_DWORD *)a2 + 36 * v10 + 57) = v14;
        }
        if ( (v14 & 2) != 0 && !*((_BYTE *)this + 32) )
        {
          v5 = 8;
          HIBYTE(v81) = v6 + 1;
        }
        v15 = (unsigned __int8)(v7 + 1);
        if ( (v14 & 4) == 0 )
          v15 = v7;
        LOBYTE(v81) = v15;
        *(_DWORD *)v84 = *((_DWORD *)a2 + 2 * v13 + 55);
        v16 = *((_QWORD *)v12 + 6) & std::_Fnv1a_append_bytes(v15, v84, 4uLL);
        for ( i = *(_QWORD *)(*((_QWORD *)v12 + 3) + 16 * v16);
              i != *std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
                      (__int64)this + 40,
                      &v88,
                      v16);
              i = *(_QWORD *)i )
        {
          if ( *(_DWORD *)(i + 16) == v18 )
          {
            v19 = (char *)this + 40;
            goto LABEL_19;
          }
        }
        v19 = (char *)this + 40;
        i = *((_QWORD *)this + 6);
LABEL_19:
        if ( i == *((_QWORD *)this + 6) )
        {
          if ( (*((_BYTE *)a2 + 8 * v13 + 228) & 4) != 0 )
          {
            v5 |= 1u;
          }
          else if ( *((_BYTE *)this + 32) )
          {
            goto LABEL_51;
          }
          *(_WORD *)v84 = *((_WORD *)this + 54);
          *((_WORD *)this + 54) = *(_WORD *)v84 + 1;
          LODWORD(v86) = *((_DWORD *)a2 + 2 * v13 + 55);
          std::unordered_map<unsigned long,unsigned short>::_Insert_or_assign<unsigned long const &,unsigned short &>(
            (__int64)v19,
            (__int64)&v98,
            (unsigned __int8 *)&v86,
            v84);
          i = v98;
        }
        else
        {
          v20 = *(_WORD *)(i + 20);
          v86 = 0LL;
          *(_WORD *)v84 = v20;
          if ( !TouchInfoAdapter::ExistingTouchContactWithId(this, v20, &v86) )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              191LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\adapters\\touchinfo\\lib\\touchinfoadapter.cpp",
              (const char *)0x8000FFFFLL);
            __debugbreak();
          }
          if ( (*((_DWORD *)a2 + 2 * v13 + 57) & 4) != 0 )
          {
            if ( (v86->Flags & 1) != 0 || (v86->Flags & 2) != 0 )
              v21 = 2;
            else
              v21 = 1;
            v5 |= v21;
          }
          else if ( (v86->Flags & 1) != 0 || (v86->Flags & 2) != 0 )
          {
            v5 |= 4u;
          }
          v22 = *((_DWORD *)a2 + 2 * v13 + 57) & 0x8000;
          v23 = (unsigned __int8)v85;
          if ( v22 )
            v23 = 1;
          v86->Reserved = 1;
          v85 = v23;
          v24 = v5 | 0x2000;
          if ( !v22 )
            v24 = v5;
          v5 = v24;
        }
        v25 = *(_WORD *)v84;
        v26 = 56LL * v83;
        v8 = ++v83;
        *(_WORD *)&v97[v26 + 4] = *((_WORD *)a2 + 4 * v13 + 132);
        *(_WORD *)&v97[v26 + 6] = *((_WORD *)a2 + 4 * v13 + 134);
        *(_WORD *)&v97[v26 + 8] = *((_WORD *)a2 + 4 * v13 + 124);
        *(_WORD *)&v97[v26 + 10] = *((_WORD *)a2 + 4 * v13 + 126);
        v27 = *((_DWORD *)a2 + 2 * v13 + 57);
        *(_WORD *)&v97[v26] = v25;
        *(_WORD *)&v97[v26 + 2] = v5;
        if ( (v27 & 2) != 0 && (!*((_BYTE *)this + 32) || (v27 & 4) != 0) )
          goto LABEL_52;
        appended = std::_Fnv1a_append_bytes(v26, (const unsigned __int8 *const)(i + 16), 4uLL);
        v29 = *((_QWORD *)this + 8);
        v30 = 2 * (*((_QWORD *)this + 11) & appended);
        if ( *(_QWORD *)(v29 + 16 * (*((_QWORD *)this + 11) & appended) + 8) == i )
        {
          if ( *(_QWORD *)(v29 + 16 * (*((_QWORD *)this + 11) & appended)) == i )
          {
            *(_QWORD *)(v29 + 16 * (*((_QWORD *)this + 11) & appended)) = *((_QWORD *)this + 6);
            v29 = *((_QWORD *)this + 8);
            v31 = *((_QWORD *)this + 6);
          }
          else
          {
            v31 = *(_QWORD *)(i + 8);
          }
          *(_QWORD *)(v29 + 8 * v30 + 8) = v31;
        }
        else if ( *(_QWORD *)(v29 + 16 * (*((_QWORD *)this + 11) & appended)) == i )
        {
          *(_QWORD *)(v29 + 16 * (*((_QWORD *)this + 11) & appended)) = *(_QWORD *)i;
        }
        std::list<ISystemContextObserver *>::erase((__int64)this + 48, &v89, (__int64 *)i);
LABEL_51:
        v8 = v83;
LABEL_52:
        v12 = (char *)this + 40;
        v7 = v81;
        v10 = v87 + 1;
        v5 = 0;
        v6 = HIBYTE(v81);
        v87 = v10;
      }
      while ( v10 < *((_DWORD *)a2 + 53) );
    }
    v32 = *((_BYTE *)this + 696);
    if ( v32 )
    {
      v33 = 0;
      if ( *((_BYTE *)this + 135) )
      {
        do
        {
          v34 = 56LL * v33;
          v35 = *(_WORD *)((char *)this + v34 + 138);
          if ( (v35 & 0xB) != 0 && *(_WORD *)((char *)this + v34 + 154) != 1 )
          {
            v36 = *(_OWORD *)((char *)this + v34 + 152);
            v37 = 56LL * v8;
            v38 = (struct TouchContact **)((char *)this + 48);
            *(_OWORD *)&v97[v37] = *(_OWORD *)((char *)this + v34 + 136);
            v39 = *(_OWORD *)((char *)this + v34 + 168);
            v83 = v8 + 1;
            *(_OWORD *)&v97[v37 + 16] = v36;
            *(_QWORD *)&v36 = *(_QWORD *)((char *)this + v34 + 184);
            *(_OWORD *)&v97[v37 + 32] = v39;
            *(_QWORD *)&v97[v37 + 48] = v36;
            *(_WORD *)&v97[v37 + 2] = (v35 & 3) != 0 ? 4 : 0;
            j = (struct TouchContact *)*((_QWORD *)this + 6);
LABEL_58:
            for ( j = *(struct TouchContact **)&j->ContactID; ; j = v86 )
            {
              v41 = *v38;
              if ( j == *v38 )
                break;
              if ( j->TiltX != *(_WORD *)((char *)this + v34 + 136) )
                goto LABEL_58;
              v42 = std::_Fnv1a_append_bytes(v37, (const unsigned __int8 *const)&j->DistanceZ, 4uLL);
              v44 = *((_QWORD *)this + 8);
              v45 = 2 * (*((_QWORD *)this + 11) & v42);
              if ( *(__int64 **)(v44 + 16 * (*((_QWORD *)this + 11) & v42) + 8) == v43 )
              {
                if ( *(__int64 **)(v44 + 16 * (*((_QWORD *)this + 11) & v42)) == v43 )
                {
                  *(_QWORD *)(v44 + 16 * (*((_QWORD *)this + 11) & v42)) = v41;
                  v44 = *((_QWORD *)this + 8);
                  v46 = *((_QWORD *)this + 6);
                }
                else
                {
                  v46 = v43[1];
                }
                *(_QWORD *)(v44 + 8 * v45 + 8) = v46;
              }
              else if ( *(__int64 **)(v44 + 16 * (*((_QWORD *)this + 11) & v42)) == v43 )
              {
                *(_QWORD *)(v44 + 16 * (*((_QWORD *)this + 11) & v42)) = *v43;
              }
              std::list<ISystemContextObserver *>::erase((__int64)this + 48, &v86, v43);
            }
            v8 = v83;
            v11 = 4LL;
          }
          ++v33;
        }
        while ( v33 < *((unsigned __int8 *)this + 135) );
        v32 = *((_BYTE *)this + 696);
        v7 = v81;
      }
    }
    v47 = 0LL;
    v48 = *((_DWORD *)this + 26);
    v92 = *((_DWORD *)a2 + 2);
    v93 = v48;
    v91 = 0;
    v94 = HIBYTE(v81);
    v95 = v7;
    v96 = v83;
    v90 = 56 * v83 + 24;
    if ( !v32 )
    {
      *((_BYTE *)this + 696) = 1;
      if ( v7 )
      {
        v47 = 1LL;
        v91 = 1;
      }
      else if ( HIBYTE(v81) )
      {
        v47 = 257LL;
        v91 = 257;
        v9 = 257;
      }
      else
      {
        if ( !*((_BYTE *)this + 32) )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x14F,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\adapters\\touchinfo\\lib\\touchinfoadapter.cpp",
            (const char *)0x8000FFFFLL);
          return 2147549183LL;
        }
        v82 = 1;
        v9 = 0;
        *((_BYTE *)this + 696) = 0;
      }
      v49 = v9;
      goto LABEL_106;
    }
    if ( *((_BYTE *)this + 32) || (v49 = 256, (*((_WORD *)this + 57) & 0x100) == 0) )
    {
      v49 = 0;
      if ( v7 )
        goto LABEL_106;
      v91 = 4;
      if ( HIBYTE(v81) )
      {
        (*(void (__fastcall **)(_QWORD, __int16 *, _QWORD))(**((_QWORD **)this + 3) + 24LL))(
          *((_QWORD *)this + 3),
          &v90,
          0LL);
        v61 = v96;
        v56 = 0;
        for ( k = 0; k < v61; ++k )
        {
          v63 = 56LL * v56;
          v64 = *(_WORD *)&v97[56 * k + 2];
          if ( (v64 & 8) != 0 )
          {
            *(_WORD *)&v97[56 * v56++ + 2] = v64 & 0xFFFB;
            *(_WORD *)&v97[v63] = *(_WORD *)&v97[56 * k];
            *(_WORD *)&v97[v63 + 4] = *(_WORD *)&v97[56 * k + 4];
            *(_WORD *)&v97[v63 + 6] = *(_WORD *)&v97[56 * k + 6];
            *(_WORD *)&v97[v63 + 8] = *(_WORD *)&v97[56 * k + 8];
            *(_WORD *)&v97[v63 + 10] = *(_WORD *)&v97[56 * k + 10];
            v61 = v96;
          }
        }
        v65 = v91;
        v66 = *((_DWORD *)this + 26) + 1;
        *((_DWORD *)this + 26) = v66;
        v93 = v66;
        v49 = v65 & 0xFEFA | 0x101;
        goto LABEL_103;
      }
      v47 = 4LL;
      v49 = 4;
    }
    else
    {
      if ( v7 )
      {
        v99 = 0;
        v51 = 0LL;
        v98 = 0LL;
        if ( (_BYTE)v83 )
        {
          do
          {
            v52 = (unsigned int)v51;
            v51 = (unsigned int)(v51 + 1);
            v53 = *(_WORD *)&v97[56 * v52 + 2];
            *((_WORD *)&v98 + v52) = v53;
            *(_WORD *)&v97[56 * v52 + 2] = v53 & 0xFFFE;
          }
          while ( (unsigned int)v51 < v96 );
          v47 = v91;
        }
        v54 = *((_QWORD *)this + 3);
        LOWORD(v47) = v47 | 0x104;
        v95 = 0;
        v91 = v47;
        (*(void (__fastcall **)(__int64, __int16 *, __int64, __int64))(*(_QWORD *)v54 + 24LL))(v54, &v90, v47, v51);
        v55 = v96;
        v56 = 0;
        for ( m = 0; m < v55; ++m )
        {
          v58 = 56LL * v56;
          if ( (v97[56 * m + 2] & 8) != 0 )
          {
            ++v56;
            *(_WORD *)&v97[v58 + 2] = *((_WORD *)&v98 + m);
            *(_WORD *)&v97[v58] = *(_WORD *)&v97[56 * m];
            *(_WORD *)&v97[v58 + 4] = *(_WORD *)&v97[56 * m + 4];
            *(_WORD *)&v97[v58 + 6] = *(_WORD *)&v97[56 * m + 6];
            *(_WORD *)&v97[v58 + 8] = *(_WORD *)&v97[56 * m + 8];
            *(_WORD *)&v97[v58 + 10] = *(_WORD *)&v97[56 * m + 10];
            v55 = v96;
          }
        }
        v59 = v91;
        v60 = *((_DWORD *)this + 26) + 1;
        *((_DWORD *)this + 26) = v60;
        v93 = v60;
        v95 = v81;
        v49 = v59 & 0xFEFA | 1;
LABEL_103:
        v47 = v49;
        v91 = v49;
        v96 = v56;
        v90 = 56 * v56 + 24;
        goto LABEL_106;
      }
      if ( HIBYTE(v81) )
      {
        v47 = 256LL;
        v91 = 256;
LABEL_106:
        if ( (_BYTE)v85 )
        {
          v67 = v49 | 0x8000;
          v47 = v67;
          v91 = v67;
        }
        if ( (*(_BYTE *)a2 & 0x20) != 0 )
        {
          LOWORD(v47) = v47 | 0x1000;
          v91 = v47;
        }
        if ( !v82 )
        {
          v68 = (_OWORD *)((char *)this + 112);
          v69 = &v90;
          do
          {
            v70 = *((_OWORD *)v69 + 1);
            *v68 = *(_OWORD *)v69;
            v71 = *((_OWORD *)v69 + 2);
            v68[1] = v70;
            v72 = *((_OWORD *)v69 + 3);
            v68[2] = v71;
            v73 = *((_OWORD *)v69 + 4);
            v68[3] = v72;
            v74 = *((_OWORD *)v69 + 5);
            v68[4] = v73;
            v75 = *((_OWORD *)v69 + 6);
            v68[5] = v74;
            v76 = *((_OWORD *)v69 + 7);
            v69 += 64;
            v68[6] = v75;
            v68 += 8;
            *(v68 - 1) = v76;
            --v11;
          }
          while ( v11 );
          v77 = *((_OWORD *)v69 + 1);
          *v68 = *(_OWORD *)v69;
          v78 = *((_OWORD *)v69 + 2);
          v68[1] = v77;
          v79 = *((_OWORD *)v69 + 3);
          v80 = *((_QWORD *)v69 + 8);
          v68[2] = v78;
          v68[3] = v79;
          *((_QWORD *)v68 + 8) = v80;
          (*(void (__fastcall **)(_QWORD, __int16 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
            *((_QWORD *)this + 3),
            &v90,
            v47);
        }
        return 0LL;
      }
      v49 = 260;
      v47 = 260LL;
      v91 = 260;
    }
    *((_WORD *)this + 54) = 0;
    *((_DWORD *)this + 26) = v48 + 1;
    *((_BYTE *)this + 696) = 0;
    goto LABEL_106;
  }
  return 0LL;
}
