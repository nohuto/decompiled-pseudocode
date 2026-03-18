/*
 * XREFs of ?AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV?$span@$$CBG$0?0@gsl@@PEAPEAX1@Z @ 0x1800A70B0
 * Callers:
 *     ?EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x1800A6FB0 (-EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCom.c)
 *     ?EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@_N@Z @ 0x1800CCED8 (-EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand.c)
 *     ?EmitInstancedGeometry@@YAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x1801F05F0 (-EmitInstancedGeometry@@YAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z.c)
 *     ?EmitGeometry@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x1802AAB10 (-EmitGeometry@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCo.c)
 * Callees:
 *     ?EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z @ 0x18003C7E8 (-EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800A7C48 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x1800B5558 (-Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z.c)
 *     ?IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ @ 0x1800BCBA8 (-IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180111C2C (McTemplateU0q_EventWriteTransfer.c)
 *     ?BeginAppend@CD3DDynamicAppendBuffer@@QEAAJII@Z @ 0x1801F1570 (-BeginAppend@CD3DDynamicAppendBuffer@@QEAAJII@Z.c)
 */

__int64 __fastcall CD3DBatchExecutionContext::AppendGeometry(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  bool v8; // zf
  unsigned int v9; // r14d
  unsigned int v10; // r13d
  CD3DDynamicAppendBuffer *v13; // r10
  unsigned int *v14; // rsi
  int v15; // edx
  unsigned int v16; // ebp
  unsigned int v17; // r15d
  int v19; // edx
  unsigned int v20; // eax
  UINT v21; // r12d
  UINT v22; // r14d
  unsigned int v23; // eax
  unsigned int v24; // eax
  char v25; // r15
  __int64 v26; // r14
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // r8d
  __int64 v30; // rdx
  unsigned int *v31; // r10
  unsigned int v32; // r9d
  unsigned __int64 v33; // r8
  __int16 v34; // r11
  unsigned __int64 v35; // rdx
  __m128i v36; // xmm1
  __m128i v37; // xmm1
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  __int64 v43; // r8
  __int16 v44; // ax
  unsigned int v45; // edx
  __int64 v46; // rcx
  unsigned int v47; // eax
  __int64 v48; // rcx
  unsigned int v50; // ecx
  int v51; // edx
  unsigned int v52; // r13d
  int v53; // r13d
  unsigned int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // r12
  int v57; // r14d
  int v58; // eax
  _BOOL8 v59; // rcx
  unsigned int v60; // eax
  unsigned int v61; // eax
  unsigned int v62; // edx
  __int64 v63; // rcx
  __int64 v64; // rax
  int v65; // r13d
  int v66; // eax
  _BOOL8 v67; // rcx
  __int64 v68; // r10
  __int64 v69; // r10
  unsigned int v70; // eax
  unsigned int v71; // eax
  unsigned int v72; // eax
  __int64 v73; // rcx
  int v74; // eax
  unsigned int v75; // eax
  __int64 v76; // rax
  __int64 v77; // rcx
  int v78; // eax
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rcx
  int v82; // eax
  __int64 v83; // rcx
  int v84; // edi
  __int64 v85; // rcx
  unsigned int v86; // esi
  int v87; // eax
  CD2DContext *v88; // rcx
  char IsHardwareProtectionDisabled; // al
  __int64 v90; // r8
  char v91; // dl
  __int64 v92; // rcx
  int v93; // eax
  CD2DContext *v94; // rcx
  char v95; // al
  unsigned int v96; // edx
  char v97; // r9
  CD3DDynamicAppendBuffer *v98; // r14
  __int64 v99; // rax
  int v100; // eax
  __int64 v101; // rcx
  __int64 v102; // rcx
  unsigned int v103; // r9d
  bool v104; // [rsp+40h] [rbp-98h]
  int v105; // [rsp+48h] [rbp-90h]
  __int64 v106; // [rsp+48h] [rbp-90h]
  unsigned int v107; // [rsp+50h] [rbp-88h] BYREF
  int v108; // [rsp+54h] [rbp-84h]
  unsigned int v109; // [rsp+58h] [rbp-80h]
  __int64 v110; // [rsp+60h] [rbp-78h] BYREF
  CD3DDynamicAppendBuffer *v111; // [rsp+68h] [rbp-70h]
  unsigned int v112; // [rsp+70h] [rbp-68h]
  unsigned int v113; // [rsp+74h] [rbp-64h]
  unsigned int v114; // [rsp+78h] [rbp-60h]
  _QWORD v115[11]; // [rsp+80h] [rbp-58h] BYREF
  int v116; // [rsp+E0h] [rbp+8h] BYREF
  unsigned int v117; // [rsp+E8h] [rbp+10h]
  unsigned int v118; // [rsp+F0h] [rbp+18h]
  unsigned int *v119; // [rsp+F8h] [rbp+20h]

  v119 = a4;
  v118 = a3;
  v117 = a2;
  v6 = *(_QWORD *)(a1 + 32);
  v7 = 0;
  v8 = *(_BYTE *)(a1 + 72) == 0;
  v9 = 100;
  v10 = *a4;
  v105 = 0;
  v13 = (CD3DDynamicAppendBuffer *)(v6 + 112);
  v14 = (unsigned int *)(v6 + 16);
  v111 = (CD3DDynamicAppendBuffer *)(v6 + 112);
  v15 = 48;
  v16 = 16;
  v17 = 100;
  if ( v8 )
    v15 = 16;
  v19 = v15 + 8 * *(_DWORD *)(a1 + 76);
  v20 = 0;
  if ( *(_BYTE *)(a1 + 73) )
    v20 = 48;
  v112 = v19;
  v113 = v20;
  if ( a2 >= 0x64 )
    v17 = a2;
  LOBYTE(v116) = v10 != 0;
  v104 = a3 != 0;
  if ( v10 )
  {
    if ( v10 < 0x64 )
      v10 = 100;
  }
  else
  {
    v10 = 0;
  }
  if ( a3 )
  {
    if ( a3 >= 0x64 )
      v9 = a3;
  }
  else
  {
    v9 = 0;
  }
  v109 = v9;
  v21 = v19 * v17;
  if ( v19 * v17 > v14[10] )
  {
    CD3DBatchExecutionContext::Flush(a1, 8LL);
    v78 = CD3DDynamicAppendBuffer::EnsureByteSpace((CD3DDynamicAppendBuffer *)v14, v21, 0);
    v105 = v78;
    if ( v78 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v79, 0LL, 0LL, v78, 0x251u);
      return (unsigned int)v105;
    }
    v13 = v111;
    *(_BYTE *)(a1 + 81) = 1;
  }
  v22 = v113 * v9;
  if ( v22 > *((_DWORD *)v13 + 10) )
  {
    CD3DBatchExecutionContext::Flush(a1, 1024LL);
    v105 = CD3DDynamicAppendBuffer::EnsureByteSpace(v111, v22, 0);
    v57 = v105;
    if ( v105 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v80, 0LL, 0LL, v105, 0x25Bu);
      return (unsigned int)v57;
    }
    v13 = v111;
    *(_BYTE *)(a1 + 81) = 1;
  }
  if ( *(_BYTE *)(a1 + 81) )
  {
    v73 = *(_QWORD *)(a1 + 32);
    *(_BYTE *)(a1 + 81) = 0;
    v74 = 8 * *(_DWORD *)(a1 + 76);
    if ( *(_BYTE *)(a1 + 72) )
      v75 = v74 + 48;
    else
      v75 = v74 + 16;
    v107 = v75;
    if ( *(_BYTE *)(a1 + 73) )
      v108 = 48;
    else
      v108 = 0;
    v110 = 0LL;
    v115[0] = *(_QWORD *)(v73 + 24);
    v76 = *(_QWORD *)(v73 + 120);
    v77 = *(_QWORD *)(a1 + 16);
    v115[1] = v76;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD *, unsigned int *, __int64 *))(*(_QWORD *)v77 + 144LL))(
      v77,
      0LL,
      2LL,
      v115,
      &v107,
      &v110);
    v13 = v111;
  }
  if ( *((_QWORD *)v14 + 3) )
  {
    v23 = v14[10] - v14[9];
    if ( v14[8] == 32 )
      v24 = v23 >> 5;
    else
      v24 = v23 / v14[8];
    if ( v17 > v24 )
      CD3DBatchExecutionContext::Flush(a1, 32LL);
    v13 = v111;
  }
  if ( *((_QWORD *)v13 + 3)
    && v109 > (unsigned int)(*((_DWORD *)v13 + 10) - *((_DWORD *)v13 + 9)) / *((_DWORD *)v13 + 8) )
  {
    CD3DBatchExecutionContext::Flush(a1, 2048LL);
  }
  v25 = v116;
  if ( !(_BYTE)v116 )
    goto LABEL_28;
  v26 = *(_QWORD *)(a1 + 32);
  v105 = 0;
  if ( 2 * (unsigned __int64)v10 > *(unsigned int *)(v26 + 104) )
  {
    CD3DBatchExecutionContext::Flush(a1, 16LL);
    v82 = CD3DDynamicAppendBuffer::EnsureByteSpace((CD3DDynamicAppendBuffer *)(v26 + 64), 2 * v10, 0);
    v105 = v82;
    if ( v82 < 0 )
    {
      v84 = v82;
      MilInstrumentationCheckHR_MaybeFailFast(v83, 0LL, 0LL, v82, 0xD2u);
      v86 = v84;
LABEL_125:
      MilInstrumentationCheckHR_MaybeFailFast(v85, 0LL, 0LL, v84, 0x27Bu);
      return v86;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 16) + 152LL))(
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(v26 + 72),
      57LL);
  }
  if ( *(_QWORD *)(v26 + 88) )
  {
    v27 = *(_DWORD *)(v26 + 104) - *(_DWORD *)(v26 + 100);
    v28 = *(_DWORD *)(v26 + 96) == 2 ? v27 >> 1 : v27 / *(_DWORD *)(v26 + 96);
    if ( v10 <= v28 || (CD3DBatchExecutionContext::Flush(a1, 64LL), *(_QWORD *)(v26 + 88)) )
    {
LABEL_28:
      v29 = v105;
      goto LABEL_29;
    }
  }
  v62 = *(_DWORD *)(v26 + 104) - *(_DWORD *)(v26 + 100);
  v63 = -*(_DWORD *)(v26 + 100) & 1;
  v107 = v63;
  LODWORD(v110) = v62;
  v114 = v63 + 2 * v10;
  v64 = *(_QWORD *)(v26 + 64);
  v106 = v64;
  v65 = *(_DWORD *)(v64 + 1088);
  if ( v65 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v63, 0LL, 0LL, v65, 0x9F1u);
  }
  else
  {
    v66 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD *))(**(_QWORD **)(v64 + 560) + 112LL))(
            *(_QWORD *)(v64 + 560),
            *(_QWORD *)(v26 + 72),
            0LL,
            5 - (unsigned int)(v62 < v114),
            0,
            v115);
    v65 = v66;
    if ( v66 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0LL, v66, 0x9F7u);
  }
  v68 = v106;
  if ( !*(_DWORD *)(v106 + 1088)
    && (v65 == -2005532292 || v65 == -2147024882 || v65 == -2005270523)
    && *(_DWORD *)(v106 + 448) )
  {
    if ( v65 == -2005270523 )
    {
      v87 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v106 + 552) + 312LL))(*(_QWORD *)(v106 + 552));
      v68 = v106;
      v67 = v87 == -2005270480;
      *(_DWORD *)(v106 + 1088) = -2003304307;
      if ( v87 != -2005270480 )
      {
LABEL_116:
        if ( *(int *)(v68 + 1088) < 0 )
        {
          v65 = *(_DWORD *)(v68 + 1088);
          goto LABEL_124;
        }
        goto LABEL_70;
      }
    }
    CD2DContext::IsHardwareProtectionDisabled((CD2DContext *)(v68 + 16));
    *((_BYTE *)v88 + 436) = 1;
    IsHardwareProtectionDisabled = CD2DContext::IsHardwareProtectionDisabled(v88);
    if ( v91 != IsHardwareProtectionDisabled && (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      McTemplateU0q_EventWriteTransfer(v67, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, v90);
      v68 = v106;
    }
  }
  if ( v65 < 0 )
    goto LABEL_116;
LABEL_70:
  if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v65, 0LL, &v116) )
  {
    v65 = v116;
    if ( v116 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0LL, v116, 0xB30u);
      v69 = v106;
    }
  }
  v105 = v65;
  v29 = v65;
  if ( v65 == -2003304307 )
  {
    *(_DWORD *)(v69 + 1088) = -2003304307;
    goto LABEL_124;
  }
  if ( v65 < 0 )
  {
LABEL_124:
    v84 = v65;
    MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0LL, v65, 0x6Cu);
    v86 = v65;
    MilInstrumentationCheckHR_MaybeFailFast(v92, 0LL, 0LL, v65, 0xDDu);
    goto LABEL_125;
  }
  *(_QWORD *)(v26 + 88) = v115[0];
  v70 = v114;
  *(_DWORD *)(v26 + 96) = 2;
  if ( (unsigned int)v110 < v70 )
    *(_DWORD *)(v26 + 100) = 0;
  else
    *(_DWORD *)(v26 + 100) += v107;
  v71 = *(_DWORD *)(v26 + 100);
  if ( *(_DWORD *)(v26 + 96) == 2 )
    v72 = v71 >> 1;
  else
    v72 = v71 / *(_DWORD *)(v26 + 96);
  *(_DWORD *)(a1 + 88) = v72;
LABEL_29:
  if ( *((_QWORD *)v14 + 3) )
    goto LABEL_30;
  v50 = v14[9];
  if ( v112 == 32 )
    v51 = v14[9] & 0x1F;
  else
    v51 = v50 % v112;
  v52 = v112 - v51;
  if ( v112 == 32 )
    v53 = v52 & 0x1F;
  else
    v53 = v52 % v112;
  v54 = v14[10] - v50;
  v55 = v21 + v53;
  v56 = *(_QWORD *)v14;
  LODWORD(v110) = v54;
  v107 = v55;
  v57 = *(_DWORD *)(v56 + 1088);
  if ( v57 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0LL, v57, 0x9F1u);
  }
  else
  {
    v58 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _DWORD, _QWORD *))(**(_QWORD **)(v56 + 560) + 112LL))(
            *(_QWORD *)(v56 + 560),
            *((_QWORD *)v14 + 1),
            0LL,
            5 - (unsigned int)(v54 < (unsigned int)v55),
            0,
            v115);
    v57 = v58;
    if ( v58 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0LL, v58, 0x9F7u);
  }
  if ( *(_DWORD *)(v56 + 1088)
    || v57 != -2005532292 && v57 != -2147024882 && v57 != -2005270523
    || !*(_DWORD *)(v56 + 448) )
  {
LABEL_53:
    if ( v57 >= 0 )
      goto LABEL_54;
    goto LABEL_130;
  }
  if ( v57 != -2005270523
    || (v93 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v56 + 552) + 312LL))(*(_QWORD *)(v56 + 552)),
        *(_DWORD *)(v56 + 1088) = -2003304307,
        v59 = v93 == -2005270480) )
  {
    CD2DContext::IsHardwareProtectionDisabled((CD2DContext *)(v56 + 16));
    *((_BYTE *)v94 + 436) = 1;
    v95 = CD2DContext::IsHardwareProtectionDisabled(v94);
    if ( v97 != v95 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0q_EventWriteTransfer(v59, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, v96);
    goto LABEL_53;
  }
LABEL_130:
  if ( *(int *)(v56 + 1088) < 0 )
  {
    v57 = *(_DWORD *)(v56 + 1088);
    goto LABEL_104;
  }
LABEL_54:
  if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v57, 0LL, &v116) )
  {
    v57 = v116;
    if ( v116 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0LL, v116, 0xB30u);
  }
  v105 = v57;
  v29 = v57;
  if ( v57 == -2003304307 )
  {
    *(_DWORD *)(v56 + 1088) = -2003304307;
    goto LABEL_104;
  }
  if ( v57 < 0 )
  {
LABEL_104:
    MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0LL, v57, 0x6Cu);
    MilInstrumentationCheckHR_MaybeFailFast(v81, 0LL, 0LL, v57, 0x281u);
    return (unsigned int)v57;
  }
  v14[8] = v112;
  *((_QWORD *)v14 + 3) = v115[0];
  if ( (unsigned int)v110 < v107 )
    v14[9] = 0;
  else
    v14[9] += v53;
  v60 = v14[9];
  if ( v14[8] == 32 )
    v61 = v60 >> 5;
  else
    v61 = v60 / v14[8];
  *(_DWORD *)(a1 + 84) = v61;
LABEL_30:
  if ( v104 )
  {
    v98 = v111;
    v99 = *((_QWORD *)v111 + 3);
    if ( !v99 )
    {
      v100 = CD3DDynamicAppendBuffer::BeginAppend(v111, v113, v109);
      v105 = v100;
      v29 = v100;
      if ( v100 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v101, 0LL, 0LL, v100, 0x28Bu);
        return (unsigned int)v105;
      }
      *(_DWORD *)(a1 + 92) = *((_DWORD *)v98 + 9) / *((_DWORD *)v98 + 8);
      v99 = *((_QWORD *)v98 + 3);
    }
    v102 = *((unsigned int *)v98 + 9);
    v103 = v118;
    *((_DWORD *)v98 + 9) = v102 + v118 * *((_DWORD *)v98 + 8);
    *a6 = v99 + v102;
    *(_DWORD *)(a1 + 104) += v103;
  }
  if ( v25 )
  {
    v30 = *(_QWORD *)(a1 + 32);
    v31 = v119;
    v32 = *v119;
    v33 = *(_QWORD *)(v30 + 88) + *(unsigned int *)(v30 + 100);
    *(_DWORD *)(v30 + 100) += *v119 * *(_DWORD *)(v30 + 96);
    v34 = *(_WORD *)(a1 + 84) + *(_WORD *)(a1 + 96);
    v35 = *((_QWORD *)v31 + 1);
    v36 = _mm_cvtsi32_si128(v34);
    v37 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v36, v36), 0);
    if ( v32 )
    {
      if ( v32 < 0x20 )
        goto LABEL_38;
      v38 = v32 - 1;
      if ( v33 <= v35 + 2 * v38 && v33 + 2 * v38 >= v35 )
        goto LABEL_38;
      do
      {
        v39 = v7;
        v7 += 32;
        *(__m128i *)(v33 + 2 * v39) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v35 + 2 * v39)), v37);
        *(__m128i *)(v33 + 2LL * (v16 - 8)) = _mm_add_epi16(
                                                _mm_loadu_si128((const __m128i *)(v35 + 2LL * (v16 - 8))),
                                                v37);
        *(__m128i *)(v33 + 2LL * v16) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v35 + 2LL * v16)), v37);
        v40 = v16 + 8;
        v16 += 32;
        *(__m128i *)(v33 + 2 * v40) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v35 + 2 * v40)), v37);
      }
      while ( v7 < (v32 & 0xFFFFFFE0) );
      if ( v7 < v32 )
      {
LABEL_38:
        v41 = v35 - v33;
        v42 = v33 + 2LL * v7;
        v43 = v32 - v7;
        do
        {
          v44 = *(_WORD *)(v41 + v42);
          v42 += 2LL;
          *(_WORD *)(v42 - 2) = v34 + v44;
          --v43;
        }
        while ( v43 );
      }
    }
    *(_DWORD *)(a1 + 100) += v32;
    v29 = v105;
  }
  v45 = v117;
  *(_DWORD *)(a1 + 96) += v117;
  v46 = v14[9];
  v47 = v46 + v45 * v14[8];
  v48 = *((_QWORD *)v14 + 3) + v46;
  v14[9] = v47;
  *a5 = v48;
  return v29;
}
