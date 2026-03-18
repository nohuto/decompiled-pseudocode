/*
 * XREFs of ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x18008B2F0
 * Callers:
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x180089704 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x18008B82C (-Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x18008B730 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x18008C678 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x180097A74 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801B2D08 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ?ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x1801D2B58 (-ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValu.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

void __fastcall KeyframeSequence::Calculate(KeyframeSequence *this, struct CExpressionValueStack *a2)
{
  unsigned int v2; // r14d
  int v5; // ecx
  int v6; // edx
  int v7; // esi
  char v8; // r8
  char v9; // r9
  int v10; // edi
  int v11; // r12d
  bool v12; // cc
  int v13; // r8d
  float v14; // xmm1_4
  int *v15; // rdx
  int v16; // ecx
  int v17; // edi
  unsigned int v18; // r14d
  __int64 v19; // r8
  unsigned int v20; // ecx
  __int64 v21; // rdi
  unsigned int v22; // edx
  __int64 v23; // rsi
  __int64 v24; // r14
  _DWORD *v25; // rcx
  int v26; // edx
  CKeyframeAnimation **v27; // rcx
  int v28; // edx
  int v29; // eax
  int v30; // ecx
  __int128 v31; // xmm1
  __int64 v32; // rdi
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // edx
  CKeyframeAnimation *v39; // rcx
  __int64 v40; // r15
  int v41; // r15d
  int v42; // eax
  unsigned int v43; // r14d
  int v44; // eax
  unsigned int v45; // r14d
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  int v51; // edx
  CKeyframeAnimation *v52; // rcx
  __int64 v53; // r15
  int v54; // eax
  __int64 v55; // rdx
  int v56; // r15d
  __int64 v57; // rcx
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v62[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v63; // [rsp+98h] [rbp-70h] BYREF
  int v64; // [rsp+A0h] [rbp-68h]
  char v65; // [rsp+A4h] [rbp-64h]
  _OWORD v66[4]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v67; // [rsp+E8h] [rbp-20h] BYREF
  int v68; // [rsp+F0h] [rbp-18h]
  char v69; // [rsp+F4h] [rbp-14h]
  _OWORD v70[4]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v71; // [rsp+138h] [rbp+30h]
  int v72; // [rsp+140h] [rbp+38h]
  char v73; // [rsp+144h] [rbp+3Ch]
  void *retaddr; // [rsp+1B0h] [rbp+A8h]

  v2 = *((_DWORD *)this + 28);
  if ( v2 < 2 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  v5 = *((_DWORD *)this + 23);
  v6 = *((_DWORD *)this + 20);
  if ( v5 < v6 )
  {
    v7 = *((_DWORD *)this + 20);
  }
  else
  {
    v7 = v5;
    if ( v5 > *((_DWORD *)this + 21) )
      v7 = *((_DWORD *)this + 21);
  }
  v8 = *((_BYTE *)this + 140);
  v9 = v8 & 8;
  if ( (v8 & 8) != 0 )
    v7 = *((_DWORD *)this + 30) - v7;
  v10 = v7 - *((_DWORD *)this + 31);
  v11 = 0;
  if ( !*((_BYTE *)this + 96) )
  {
    if ( v5 < v6 )
      goto LABEL_69;
    if ( v5 >= *((_DWORD *)this + 21) )
      goto LABEL_13;
    goto LABEL_10;
  }
  v12 = v5 < v6;
  if ( v5 > v6 )
  {
    if ( v5 > *((_DWORD *)this + 21) )
    {
LABEL_13:
      v12 = v5 < v6;
      goto LABEL_14;
    }
LABEL_10:
    if ( v10 >= 0 && v10 <= *((_DWORD *)this + 32) && (v8 & 0x20) == 0 )
      goto LABEL_28;
    goto LABEL_13;
  }
LABEL_14:
  if ( !v12 )
  {
    v13 = *((_DWORD *)this + 21);
    if ( v5 <= v13 )
      v13 = v5;
    goto LABEL_17;
  }
LABEL_69:
  v13 = *((_DWORD *)this + 20);
LABEL_17:
  v14 = (float)*((int *)this + 22);
  if ( (float)((float)v13 / v14) == 0.0 )
  {
    if ( v9 )
    {
      v42 = *((_DWORD *)this + 30);
      v43 = v2 - 1;
    }
    else
    {
      v42 = 0;
      v43 = 0;
    }
    *((_DWORD *)this + 29) = v43;
    *((_DWORD *)this + 31) = v42;
    *((_DWORD *)this + 32) = 0;
  }
  else
  {
    if ( v5 >= v6 )
    {
      v6 = v5;
      if ( v5 > *((_DWORD *)this + 21) )
        v6 = *((_DWORD *)this + 21);
    }
    if ( (float)((float)v6 / v14) == 1.0 )
    {
      if ( v9 )
      {
        v44 = 0;
        v45 = 0;
      }
      else
      {
        v44 = *((_DWORD *)this + 30);
        v45 = v2 - 1;
      }
      *((_DWORD *)this + 29) = v45;
      *((_DWORD *)this + 31) = v44;
      *((_DWORD *)this + 32) = 0;
    }
    else
    {
      v15 = (int *)*((_QWORD *)this + 13);
      v16 = 0;
      *((_DWORD *)this + 29) = 0;
      *(_QWORD *)((char *)this + 124) = 0LL;
      v17 = *v15;
      v18 = v2 - 1;
      if ( v18 )
      {
        while ( 1 )
        {
          v19 = (unsigned int)(v16 + 1);
          if ( v15[6 * v19] > v17 + v7 )
            break;
          ++v16;
          if ( (unsigned int)v19 >= v18 )
            goto LABEL_27;
        }
        *((_DWORD *)this + 29) = v16;
        *((_DWORD *)this + 31) = v15[6 * v16] - v17;
        *((_DWORD *)this + 32) = v15[6 * v19] - v15[6 * v16];
      }
    }
  }
LABEL_27:
  *((_BYTE *)this + 140) &= ~0x20u;
LABEL_28:
  memset_0(v66, 0, sizeof(v66));
  v67 = 0LL;
  v68 = 18;
  v69 = 0;
  memset_0(v62, 0, sizeof(v62));
  v63 = 0LL;
  v64 = 18;
  v65 = 0;
  memset_0(v70, 0, sizeof(v70));
  v71 = 0LL;
  v72 = 18;
  v73 = 0;
  v20 = *((_DWORD *)this + 29);
  v21 = *((_QWORD *)this + 13);
  if ( v20 >= *((_DWORD *)this + 28) - 1 )
  {
    v22 = v20 - 1;
  }
  else
  {
    v22 = *((_DWORD *)this + 29);
    ++v20;
  }
  v23 = 3LL * v20;
  v24 = 3LL * v22;
  v25 = *(_DWORD **)(v21 + 24LL * v22 + 8);
  v26 = v25[5];
  if ( v26 == 1 )
  {
    CExpressionValue::CopyFrom((CExpressionValue *)v66, (const struct CExpressionValue *)(v25 + 6));
    goto LABEL_32;
  }
  v38 = v26 - 2;
  if ( v38 )
  {
    if ( v38 != 1 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    v39 = (CKeyframeAnimation *)*((_QWORD *)v25 + 3);
    v40 = *((_QWORD *)v39 + 44);
    if ( !*(_DWORD *)v40 )
    {
      v46 = CKeyframeAnimation::SampleStartingValue(v39);
      v11 = v46;
      if ( v46 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v39, 0LL, 0, v46, 0x6AAu, 0LL);
LABEL_52:
        v41 = v11;
        if ( v11 >= 0 )
        {
          v11 = 0;
          goto LABEL_32;
        }
LABEL_84:
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v39, 0LL, 0, v11, 0x50u, 0LL);
LABEL_87:
        MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v41, 0x1CDu, 0LL);
        goto LABEL_39;
      }
      v11 = 0;
    }
    if ( *(_DWORD *)v40 != 18 )
    {
      switch ( *(_DWORD *)v40 )
      {
        case 0xB:
          v47 = *(_QWORD *)(v40 + 8);
          v68 = 11;
          v69 = 1;
          Microsoft::WRL::ComPtr<CPathData>::operator=(&v67, v47);
          goto LABEL_52;
        case 0x11:
          LOBYTE(v66[0]) = *(_BYTE *)(v40 + 8);
          v68 = 17;
          goto LABEL_51;
        case 0x23:
          v68 = 35;
          *(_QWORD *)&v66[0] = *(_QWORD *)(v40 + 8);
          goto LABEL_51;
        case 0x2A:
          v68 = 42;
          LODWORD(v66[0]) = *(_DWORD *)(v40 + 8);
          goto LABEL_51;
        case 0x34:
          v68 = 52;
          *(_QWORD *)&v66[0] = *(_QWORD *)(v40 + 8);
          DWORD2(v66[0]) = *(_DWORD *)(v40 + 16);
          goto LABEL_51;
        case 0x45:
          v68 = 69;
          v66[0] = *(_OWORD *)(v40 + 8);
          goto LABEL_51;
        case 0x46:
          v68 = 70;
          v66[0] = *(_OWORD *)(v40 + 8);
          goto LABEL_51;
        case 0x47:
          v68 = 71;
          v66[0] = *(_OWORD *)(v40 + 8);
          goto LABEL_51;
        default:
          v11 = -2147467259;
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v39, 0LL, 0, -2147467259, 0x6DAu, 0LL);
          v41 = -2147467259;
          goto LABEL_84;
      }
    }
    LODWORD(v66[0]) = *(_DWORD *)(v40 + 8);
LABEL_51:
    v69 = 1;
    goto LABEL_52;
  }
  v49 = CKeyframeAnimation::ProcessInnerExpression(
          *((CKeyframeAnimation **)v25 + 3),
          v25[8],
          a2,
          (struct CExpressionValue *)v66);
  v41 = v49;
  if ( v49 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v49, 0x4Au, 0LL);
    goto LABEL_87;
  }
LABEL_32:
  v27 = *(CKeyframeAnimation ***)(v21 + 8 * v23 + 8);
  v28 = *((_DWORD *)v27 + 5);
  if ( v28 == 1 )
  {
    CExpressionValue::CopyFrom((CExpressionValue *)v62, (const struct CExpressionValue *)(v27 + 3));
    goto LABEL_34;
  }
  v51 = v28 - 2;
  if ( !v51 )
  {
    v58 = CKeyframeAnimation::ProcessInnerExpression(v27[3], *((_DWORD *)v27 + 8), a2, (struct CExpressionValue *)v62);
    v56 = v58;
    if ( v58 >= 0 )
      goto LABEL_34;
    MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, v58, 0x4Au, 0LL);
LABEL_113:
    MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, v56, 0x1CEu, 0LL);
    goto LABEL_39;
  }
  if ( v51 != 1 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  v52 = v27[3];
  v53 = *((_QWORD *)v52 + 44);
  if ( !*(_DWORD *)v53 )
  {
    v54 = CKeyframeAnimation::SampleStartingValue(v52);
    v11 = v54;
    if ( v54 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v52, 0LL, 0, v54, 0x6AAu, 0LL);
      goto LABEL_109;
    }
    v11 = 0;
  }
  if ( *(_DWORD *)v53 != 18 )
  {
    switch ( *(_DWORD *)v53 )
    {
      case 0xB:
        v55 = *(_QWORD *)(v53 + 8);
        v64 = 11;
        v65 = 1;
        Microsoft::WRL::ComPtr<CPathData>::operator=(&v63, v55);
        goto LABEL_109;
      case 0x11:
        LOBYTE(v62[0]) = *(_BYTE *)(v53 + 8);
        v64 = 17;
        goto LABEL_108;
      case 0x23:
        v64 = 35;
        *(_QWORD *)&v62[0] = *(_QWORD *)(v53 + 8);
        goto LABEL_108;
      case 0x2A:
        v64 = 42;
        LODWORD(v62[0]) = *(_DWORD *)(v53 + 8);
        goto LABEL_108;
      case 0x34:
        v64 = 52;
        *(_QWORD *)&v62[0] = *(_QWORD *)(v53 + 8);
        DWORD2(v62[0]) = *(_DWORD *)(v53 + 16);
        goto LABEL_108;
      case 0x45:
        v64 = 69;
        v62[0] = *(_OWORD *)(v53 + 8);
        goto LABEL_108;
      case 0x46:
        v64 = 70;
        v62[0] = *(_OWORD *)(v53 + 8);
        goto LABEL_108;
      case 0x47:
        v64 = 71;
        v62[0] = *(_OWORD *)(v53 + 8);
        goto LABEL_108;
      default:
        v11 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v52, 0LL, 0, -2147467259, 0x6DAu, 0LL);
        v56 = -2147467259;
        goto LABEL_106;
    }
  }
  LODWORD(v62[0]) = *(_DWORD *)(v53 + 8);
LABEL_108:
  v65 = 1;
LABEL_109:
  v56 = v11;
  if ( v11 < 0 )
  {
LABEL_106:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v52, 0LL, 0, v11, 0x50u, 0LL);
    goto LABEL_113;
  }
LABEL_34:
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _OWORD *, _OWORD *, _OWORD *))(**(_QWORD **)(v21 + 8 * v23 + 16) + 24LL))(
    *(_QWORD *)(v21 + 8 * v23 + 16),
    *(_QWORD *)(v21 + 8 * v24 + 8),
    *(unsigned int *)(*(_QWORD *)(v21 + 8 * v24 + 8) + 16LL),
    v66,
    v62,
    v70);
  v29 = *((_DWORD *)this + 23);
  v30 = *((_DWORD *)this + 20);
  if ( *((_BYTE *)this + 96) )
  {
    if ( v29 > v30 && v29 <= *((_DWORD *)this + 21) )
      goto LABEL_37;
  }
  else if ( v29 >= v30 && v29 < *((_DWORD *)this + 21) )
  {
    goto LABEL_37;
  }
  *((_BYTE *)this + 140) &= ~2u;
LABEL_37:
  v31 = v70[1];
  v32 = v71;
  *(_OWORD *)this = v70[0];
  v33 = v70[2];
  *((_OWORD *)this + 1) = v31;
  v34 = v70[3];
  *((_OWORD *)this + 2) = v33;
  *((_OWORD *)this + 3) = v34;
  if ( *((_QWORD *)this + 8) != v32 )
  {
    v61 = v32;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v61);
    v60 = *((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = v32;
    if ( v60 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
  }
  *((_DWORD *)this + 18) = v72;
  *((_BYTE *)this + 76) = v73;
LABEL_39:
  v35 = v71;
  if ( v71 )
  {
    v71 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  v36 = v63;
  if ( v63 )
  {
    v63 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  v37 = v67;
  if ( v67 )
  {
    v67 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
}
