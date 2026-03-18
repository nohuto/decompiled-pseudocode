/*
 * XREFs of UsbhBuildClassCompatibleID @ 0x1C004EADC
 * Callers:
 *     UsbhBuildCompatibleID @ 0x1C004F5D0 (UsbhBuildCompatibleID.c)
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     memmove @ 0x1C001D080 (memmove.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0051AFC (WPP_RECORDER_SF_Sd.c)
 */

__int64 __fastcall UsbhBuildClassCompatibleID(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  _DWORD *v5; // r13
  char *v6; // rdi
  SIZE_T v7; // r14
  SIZE_T v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // r12
  _BYTE *v11; // rbx
  __int64 v12; // rax
  _WORD *PoolWithTag; // rax
  _WORD *v14; // r15
  _WORD *v15; // rcx
  unsigned int i; // edx
  __int16 v17; // ax
  __int64 v18; // rbx
  unsigned __int8 *v19; // rsi
  __int64 v20; // rax
  char *v21; // rax
  char *v22; // rcx
  unsigned int j; // edx
  __int16 v24; // ax
  _BYTE *v25; // rsi
  SIZE_T v26; // rbp
  char *v27; // rax
  char *v28; // r15
  char *v29; // rcx
  unsigned int k; // edx
  __int16 v31; // ax
  __int64 v32; // r12
  unsigned __int8 *v33; // rbx
  __int64 v34; // rax
  _WORD *v35; // rax
  _WORD *v36; // r15
  _WORD *v37; // rcx
  unsigned int m; // edx
  __int16 v39; // ax
  unsigned __int8 *v40; // rsi
  SIZE_T v41; // rbp
  __int64 v42; // rax
  char *v43; // rax
  char *v44; // rcx
  unsigned int n; // edx
  __int16 v46; // ax
  _BYTE *v47; // rsi
  SIZE_T v48; // rbp
  char *v49; // rax
  char *v50; // rcx
  unsigned int ii; // edx
  __int16 v52; // ax
  __int64 v53; // r9
  int v54; // edx
  int v55; // r8d
  __int64 v56; // rcx
  unsigned int v57; // r10d
  unsigned int v59; // esi
  char *v60; // rax
  char *v61; // r15
  char *v62; // rcx
  unsigned __int64 v63; // r13
  unsigned int v64; // edi
  char *v65; // rax
  char *v66; // rbp
  char *v67; // rcx
  unsigned int v68; // esi
  char *v69; // rax
  char *v70; // r14
  char *v71; // rdx
  unsigned int v72; // edi
  char *v73; // rax
  char *v74; // r15
  char *v75; // rcx
  unsigned int v76; // ebp
  char *v77; // rax
  char *v78; // r14
  char *v79; // rcx
  int v80; // esi
  char *v81; // rax
  char *v82; // rdi
  char *v83; // rcx
  int v84; // r8d
  unsigned __int64 v85; // [rsp+40h] [rbp-58h]
  unsigned __int64 v86; // [rsp+48h] [rbp-50h]
  unsigned __int8 v90; // [rsp+B8h] [rbp+20h]

  v4 = a2;
  v5 = PdoExt(a2);
  v6 = 0LL;
  LODWORD(v7) = 0;
  v90 = *((_BYTE *)v5 + 2440);
  v86 = *((unsigned __int8 *)v5 + 2439);
  v85 = *((unsigned __int8 *)v5 + 2438);
  Log(a1, 4096, 1684228420, v85, v86);
  v8 = 26LL;
  if ( (v5[706] & 0x20) != 0 )
  {
    v9 = *((_QWORD *)v5 + 356);
    v10 = -1LL;
    if ( *(_BYTE *)(v9 + 12) && (v11 = (_BYTE *)(v9 + 4), *v11) )
    {
      if ( v11 )
      {
        v12 = -1LL;
        do
          ++v12;
        while ( v11[v12] );
        v8 = 2 * v12 + 24;
      }
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v8, 0x42554855u);
      v14 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_92;
      memset(PoolWithTag, 0, v8);
      v15 = v14;
      *(_OWORD *)v14 = *(_OWORD *)L"USB\\MS_COMP_n";
      *((_QWORD *)v14 + 2) = *(_QWORD *)L"OMP_n";
      for ( v14[12] = aUsbMsCompN[12]; *v15 != 110; ++v15 )
        ;
      if ( v11 )
      {
        for ( i = 0; i < 8; ++i )
        {
          v17 = (unsigned __int8)*v11;
          if ( !(_BYTE)v17 )
            break;
          *v15++ = v17;
          ++v11;
        }
      }
      LODWORD(v18) = 0;
      v7 = (unsigned __int16)v8 + 28LL;
      v19 = (unsigned __int8 *)(*((_QWORD *)v5 + 356) + 12LL);
      if ( *((_QWORD *)v5 + 356) != -12LL )
      {
        v20 = -1LL;
        do
          ++v20;
        while ( v19[v20] );
        v7 = v7 + 2 * v20 - 2;
      }
      v21 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v7, 0x42554855u);
      v6 = v21;
      if ( v21 )
      {
        memset(v21, 0, v7);
        memmove(v6, v14, (unsigned int)v8);
        v22 = &v6[(unsigned int)v8];
        *(_OWORD *)v22 = *(_OWORD *)L"&MS_SUBCOMP_n";
        *((_QWORD *)v22 + 2) = *(_QWORD *)L"OMP_n";
        *((_WORD *)v22 + 12) = aMsSubcompN[12];
        while ( *(_WORD *)v22 != 110 )
          v22 += 2;
        LODWORD(v18) = 0;
        if ( v19 )
        {
          for ( j = 0; j < 8; ++j )
          {
            v24 = *v19;
            if ( !(_BYTE)v24 )
              break;
            *(_WORD *)v22 = v24;
            v22 += 2;
            ++v19;
          }
        }
      }
      else
      {
        LODWORD(v7) = 0;
      }
      ExFreePoolWithTag(v14, 0);
      if ( !v6 )
        goto LABEL_92;
    }
    else
    {
      LODWORD(v18) = 0;
    }
    v25 = (_BYTE *)(*((_QWORD *)v5 + 356) + 4LL);
    if ( !*v25 )
      goto LABEL_96;
    v26 = (unsigned __int16)v7 + 28LL;
    if ( *((_QWORD *)v5 + 356) != -4LL )
    {
      do
        ++v10;
      while ( v25[v10] );
      v26 = v26 + 2 * v10 - 2;
    }
    v27 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v26, 0x42554855u);
    v28 = v27;
    if ( v27 )
    {
      memset(v27, 0, v26);
      memmove(v28, v6, (unsigned int)v7);
      v29 = &v28[(unsigned int)v7];
      LODWORD(v7) = v26;
      *(_OWORD *)v29 = *(_OWORD *)L"USB\\MS_COMP_n";
      *((_QWORD *)v29 + 2) = *(_QWORD *)L"OMP_n";
      *((_WORD *)v29 + 12) = aUsbMsCompN[12];
      while ( *(_WORD *)v29 != 110 )
        v29 += 2;
      LODWORD(v18) = 0;
      if ( v25 )
      {
        for ( k = 0; k < 8; ++k )
        {
          v31 = (unsigned __int8)*v25;
          if ( !(_BYTE)v31 )
            break;
          *(_WORD *)v29 = v31;
          v29 += 2;
          ++v25;
        }
      }
      goto LABEL_89;
    }
    goto LABEL_88;
  }
  v18 = *((_QWORD *)v5 + 316);
  if ( !v18 )
    goto LABEL_97;
  v32 = -1LL;
  if ( *(_BYTE *)(v18 + 26) )
  {
    v7 = 26LL;
    v33 = (unsigned __int8 *)(v18 + 18);
    if ( v33 )
    {
      v34 = -1LL;
      do
        ++v34;
      while ( v33[v34] );
      v7 = 2 * v34 + 24;
    }
    v35 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v7, 0x42554855u);
    v36 = v35;
    if ( !v35 )
      goto LABEL_92;
    memset(v35, 0, v7);
    v37 = v36;
    *(_OWORD *)v36 = *(_OWORD *)L"USB\\MS_COMP_n";
    *((_QWORD *)v36 + 2) = *(_QWORD *)L"OMP_n";
    for ( v36[12] = aUsbMsCompN[12]; *v37 != 110; ++v37 )
      ;
    if ( v33 )
    {
      for ( m = 0; m < 8; ++m )
      {
        v39 = *v33;
        if ( !(_BYTE)v39 )
          break;
        *v37++ = v39;
        ++v33;
      }
    }
    LODWORD(v18) = 0;
    v40 = (unsigned __int8 *)(*((_QWORD *)v5 + 316) + 26LL);
    v41 = (unsigned __int16)v7 + 28LL;
    if ( *((_QWORD *)v5 + 316) != -26LL )
    {
      v42 = -1LL;
      do
        ++v42;
      while ( v40[v42] );
      v41 = v41 + 2 * v42 - 2;
    }
    v43 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v41, 0x42554855u);
    v6 = v43;
    if ( v43 )
    {
      memset(v43, 0, v41);
      memmove(v6, v36, (unsigned int)v7);
      v44 = &v6[(unsigned int)v7];
      LODWORD(v7) = v41;
      *(_OWORD *)v44 = *(_OWORD *)L"&MS_SUBCOMP_n";
      *((_QWORD *)v44 + 2) = *(_QWORD *)L"OMP_n";
      *((_WORD *)v44 + 12) = aMsSubcompN[12];
      while ( *(_WORD *)v44 != 110 )
        v44 += 2;
      LODWORD(v18) = 0;
      if ( v40 )
      {
        for ( n = 0; n < 8; ++n )
        {
          v46 = *v40;
          if ( !(_BYTE)v46 )
            break;
          *(_WORD *)v44 = v46;
          v44 += 2;
          ++v40;
        }
      }
    }
    else
    {
      LODWORD(v7) = 0;
    }
    ExFreePoolWithTag(v36, 0);
    if ( !v6 )
      goto LABEL_92;
  }
  else
  {
    LODWORD(v18) = 0;
  }
  v47 = (_BYTE *)(*((_QWORD *)v5 + 316) + 18LL);
  if ( *v47 )
  {
    v48 = (unsigned __int16)v7 + 28LL;
    if ( *((_QWORD *)v5 + 316) != -18LL )
    {
      do
        ++v32;
      while ( v47[v32] );
      v48 = v48 + 2 * v32 - 2;
    }
    v49 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v48, 0x42554855u);
    v28 = v49;
    if ( v49 )
    {
      memset(v49, 0, v48);
      memmove(v28, v6, (unsigned int)v7);
      v50 = &v28[(unsigned int)v7];
      LODWORD(v7) = v48;
      *(_OWORD *)v50 = *(_OWORD *)L"USB\\MS_COMP_n";
      *((_QWORD *)v50 + 2) = *(_QWORD *)L"OMP_n";
      *((_WORD *)v50 + 12) = aUsbMsCompN[12];
      while ( *(_WORD *)v50 != 110 )
        v50 += 2;
      LODWORD(v18) = 0;
      if ( v47 )
      {
        for ( ii = 0; ii < 8; ++ii )
        {
          v52 = (unsigned __int8)*v47;
          if ( !(_BYTE)v52 )
            break;
          *(_WORD *)v50 = v52;
          v50 += 2;
          ++v47;
        }
      }
LABEL_89:
      if ( v6 )
        ExFreePoolWithTag(v6, 0);
      v6 = v28;
      if ( !v28 )
      {
LABEL_92:
        v53 = a2;
        v54 = 4;
LABEL_93:
        v55 = 1667839265;
LABEL_94:
        v56 = a1;
LABEL_95:
        Log(v56, v54, v55, v53, -1073741670LL);
        return v57;
      }
      goto LABEL_96;
    }
LABEL_88:
    LODWORD(v7) = 0;
    goto LABEL_89;
  }
LABEL_96:
  v4 = a2;
LABEL_97:
  v59 = (unsigned __int16)v7 + 24;
  v60 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned __int16)v7 + 24LL, 0x42554855u);
  v61 = v60;
  if ( v60 )
  {
    memset(v60, 0, (unsigned __int16)v7 + 24LL);
    memmove(v61, v6, (unsigned int)v7);
    v62 = &v61[(unsigned int)v7];
    *(_OWORD *)v62 = *(_OWORD *)L"USB\\Class_nn";
    *((_QWORD *)v62 + 2) = *(_QWORD *)L"s_nn";
    while ( *(_WORD *)v62 != 110 )
      v62 += 2;
    v63 = v85;
    *(_WORD *)v62 = (unsigned __int8)Nibble[v85 >> 4];
    LODWORD(v18) = 0;
    *((_WORD *)v62 + 1) = (unsigned __int8)Nibble[v85 & 0xF];
  }
  else
  {
    v63 = v85;
    v59 = v18;
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( !v61 )
  {
    v53 = v4;
    v54 = 4096;
    goto LABEL_93;
  }
  v64 = (unsigned __int16)v59 + 24;
  v65 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned __int16)v59 + 24LL, 0x42554855u);
  v66 = v65;
  if ( v65 )
  {
    memset(v65, 0, (unsigned __int16)v59 + 24LL);
    memmove(v66, v61, v59);
    v67 = &v66[v59];
    *(_OWORD *)v67 = *(_OWORD *)L"&SubClass_nn";
    *((_QWORD *)v67 + 2) = *(_QWORD *)L"s_nn";
    while ( *(_WORD *)v67 != 110 )
      v67 += 2;
    *(_WORD *)v67 = (unsigned __int8)Nibble[v86 >> 4];
    LODWORD(v18) = 0;
    *((_WORD *)v67 + 1) = (unsigned __int8)Nibble[v86 & 0xF];
  }
  else
  {
    v64 = v18;
  }
  ExFreePoolWithTag(v61, 0);
  if ( !v66 )
  {
    v53 = v4;
    v54 = 4096;
    v55 = 1667839009;
    goto LABEL_94;
  }
  v68 = (unsigned __int16)v64 + 18;
  v69 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned __int16)v64 + 18LL, 0x42554855u);
  v70 = v69;
  if ( v69 )
  {
    memset(v69, 0, (unsigned __int16)v64 + 18LL);
    memmove(v70, v66, v64);
    v71 = &v70[v64];
    *(_OWORD *)v71 = *(_OWORD *)L"&Prot_nn";
    while ( *(_WORD *)v71 != 110 )
      v71 += 2;
    LODWORD(v18) = 0;
    *(_WORD *)v71 = (unsigned __int8)Nibble[(unsigned __int64)v90 >> 4];
    *((_WORD *)v71 + 1) = (unsigned __int8)Nibble[v90 & 0xF];
  }
  else
  {
    v68 = v18;
  }
  ExFreePoolWithTag(v66, 0);
  if ( !v70 )
  {
    v53 = v4;
    v54 = 4096;
    v55 = 1667838753;
    goto LABEL_94;
  }
  v72 = (unsigned __int16)v68 + 24;
  v73 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned __int16)v68 + 24LL, 0x42554855u);
  v74 = v73;
  if ( v73 )
  {
    memset(v73, 0, (unsigned __int16)v68 + 24LL);
    memmove(v74, v70, v68);
    v75 = &v74[v68];
    *(_OWORD *)v75 = *(_OWORD *)L"USB\\Class_nn";
    *((_QWORD *)v75 + 2) = *(_QWORD *)L"s_nn";
    while ( *(_WORD *)v75 != 110 )
      v75 += 2;
    *(_WORD *)v75 = (unsigned __int8)Nibble[v63 >> 4];
    LODWORD(v18) = 0;
    *((_WORD *)v75 + 1) = (unsigned __int8)Nibble[v63 & 0xF];
  }
  else
  {
    v72 = v18;
  }
  ExFreePoolWithTag(v70, 0);
  if ( !v74 )
  {
    v53 = v4;
    v54 = 4096;
    v55 = 1667838497;
    goto LABEL_94;
  }
  v76 = (unsigned __int16)v72 + 26;
  v77 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned __int16)v72 + 26LL, 0x42554855u);
  v78 = v77;
  if ( v77 )
  {
    memset(v77, 0, (unsigned __int16)v72 + 26LL);
    memmove(v78, v74, v72);
    v79 = &v78[v72];
    *(_OWORD *)v79 = *(_OWORD *)L"&SubClass_nn";
    *((_QWORD *)v79 + 2) = *(_QWORD *)L"s_nn";
    while ( *(_WORD *)v79 != 110 )
      v79 += 2;
    LODWORD(v18) = 0;
    *(_WORD *)v79 = (unsigned __int8)Nibble[v86 >> 4];
    *((_WORD *)v79 + 1) = (unsigned __int8)Nibble[v86 & 0xF];
  }
  else
  {
    v76 = v18;
  }
  ExFreePoolWithTag(v74, 0);
  if ( !v78 )
  {
    v53 = v4;
    v54 = 4096;
    v55 = 1667838241;
    goto LABEL_94;
  }
  v80 = (unsigned __int16)v76 + 28;
  v81 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned __int16)v76 + 28LL, 0x42554855u);
  v82 = v81;
  if ( v81 )
  {
    memset(v81, 0, (unsigned __int16)v76 + 28LL);
    memmove(v82, v78, v76);
    v83 = &v82[v76];
    *(_OWORD *)v83 = *(_OWORD *)L"USB\\Class_nn";
    *((_QWORD *)v83 + 2) = *(_QWORD *)L"s_nn";
    while ( *(_WORD *)v83 != 110 )
      v83 += 2;
    LOWORD(v18) = 0;
    *(_WORD *)v83 = (unsigned __int8)Nibble[v63 >> 4];
    *((_WORD *)v83 + 1) = (unsigned __int8)Nibble[v63 & 0xF];
  }
  else
  {
    v80 = v18;
  }
  ExFreePoolWithTag(v78, 0);
  v56 = a1;
  v53 = v4;
  v54 = 4096;
  if ( !v82 )
  {
    v55 = 1667837985;
    goto LABEL_95;
  }
  *(_QWORD *)(a3 + 8) = v82;
  *(_DWORD *)(a3 + 4) = v80;
  Log(a1, 4096, 1667459428, v4, (__int64)v82);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    && LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v18 )
  {
    WPP_RECORDER_SF_Sd(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      v84,
      19,
      (__int64)&WPP_864ab6fa16ac30e9f4a04b6140161349_Traceguids,
      (__int64)v82,
      v80);
  }
  return 0LL;
}
