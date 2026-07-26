/*
 * XREFs of Duplicate802_11AttachAttributesCommon @ 0x1C00C50EC
 * Callers:
 *     ?ndisMSetNative802_11Attributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES@@@Z @ 0x1C0070354 (-ndisMSetNative802_11Attributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_NATIVE_.c)
 * Callees:
 *     NdisAllocateMemoryWithTag @ 0x1C0019BE0 (NdisAllocateMemoryWithTag.c)
 *     memmove @ 0x1C003F400 (memmove.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 */

__int64 __fastcall Duplicate802_11AttachAttributesCommon(
        unsigned __int16 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char *VirtualAddress,
        unsigned int a7,
        __int64 a8,
        char **a9)
{
  unsigned int v10; // r14d
  __int64 v11; // r13
  char v12; // al
  unsigned int v13; // ecx
  __int64 v14; // rax
  UINT v15; // ebx
  int v16; // edx
  unsigned int MemoryWithTag; // edi
  __int64 v18; // rsi
  __int64 v19; // rax
  unsigned int v20; // edx
  unsigned int v21; // eax
  unsigned __int64 v22; // rdx
  unsigned int v23; // eax
  unsigned __int64 v24; // r8
  unsigned int v25; // eax
  unsigned __int64 v26; // r8
  unsigned int v27; // eax
  unsigned __int64 v28; // r8
  unsigned int v29; // eax
  unsigned __int64 v30; // r8
  int v31; // eax
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rax
  unsigned int v35; // ecx
  unsigned int v36; // r8d
  __int64 v37; // rax
  unsigned int v38; // r8d
  unsigned int v39; // r9d
  unsigned int v40; // eax
  unsigned __int64 v41; // r9
  int v42; // eax
  unsigned int v43; // eax
  unsigned __int64 v44; // r9
  int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rax
  unsigned int v49; // r15d
  unsigned int v50; // r9d
  __int64 v51; // rax
  int v52; // r9d
  int v53; // eax
  char *v54; // r15
  char **v55; // rax
  char *v56; // rcx
  unsigned int v57; // r12d
  char *v58; // r14
  char *v59; // rax
  char *v60; // rax
  char *v61; // rax
  char *v62; // rax
  char *v63; // rax
  __int64 v64; // rdx
  char v65; // al
  size_t v66; // rsi
  _BYTE *v67; // r14
  _BYTE *v68; // rbx
  __int64 v69; // rdi
  char *v70; // rsi
  char *v71; // rax
  char *v72; // rax
  char *v73; // rax
  __int64 v74; // rdx
  char *v75; // rsi
  char *v76; // rax
  char *v77; // rax
  __int64 v79; // [rsp+28h] [rbp-81h]
  unsigned int Size; // [rsp+30h] [rbp-79h]
  unsigned int v81; // [rsp+38h] [rbp-71h]
  unsigned int v82; // [rsp+40h] [rbp-69h]
  unsigned int v83; // [rsp+48h] [rbp-61h]
  unsigned int v84; // [rsp+50h] [rbp-59h]
  unsigned int v85; // [rsp+58h] [rbp-51h]
  unsigned int v86; // [rsp+60h] [rbp-49h]
  __int64 v87; // [rsp+68h] [rbp-41h]
  unsigned int v88; // [rsp+70h] [rbp-39h]
  unsigned int v89; // [rsp+78h] [rbp-31h]
  unsigned int v90; // [rsp+80h] [rbp-29h]
  unsigned int v91; // [rsp+88h] [rbp-21h]
  unsigned int v92; // [rsp+90h] [rbp-19h]
  char *v93; // [rsp+98h] [rbp-11h]
  unsigned int v95; // [rsp+108h] [rbp+5Fh]
  int v96; // [rsp+110h] [rbp+67h]
  int v97; // [rsp+118h] [rbp+6Fh]

  Size = 0;
  v10 = 0;
  v81 = 0;
  v11 = 0LL;
  v82 = 0;
  v83 = 0;
  v86 = 0;
  v84 = 0;
  v85 = 0;
  v97 = 0;
  v88 = 0;
  v89 = 0;
  v90 = 0;
  v95 = 0;
  v96 = 0;
  v91 = 0;
  v92 = 0;
  a8 = 0LL;
  v87 = 0LL;
  v79 = 0LL;
  VirtualAddress = 0LL;
  if ( !a2 || !a9 || *(_BYTE *)a2 != 0xA1 )
    return (unsigned int)-1073741811;
  *a9 = 0LL;
  v12 = *(_BYTE *)(a2 + 1);
  if ( v12 == 1 )
  {
    if ( *(_WORD *)(a2 + 2) < 0x28u )
      return (unsigned int)-1073741811;
    v13 = 1;
  }
  else if ( v12 == 2 )
  {
    if ( *(_WORD *)(a2 + 2) < 0x38u )
      return (unsigned int)-1073741811;
    v13 = 2;
  }
  else
  {
    if ( v12 != 3 || *(_WORD *)(a2 + 2) < 0x40u )
      return (unsigned int)-1073741811;
    v13 = 3;
  }
  v14 = *(unsigned int *)(a2 + 20);
  v15 = 64;
  a7 = v13;
  if ( (_DWORD)v14 )
  {
    if ( *(_QWORD *)(a2 + 24) )
    {
      v16 = 1092 * v14;
      Size = 1092 * v14;
      if ( (unsigned __int64)(1092 * v14) > 0xFFFFFFFF )
        return (unsigned int)-1073676267;
      v15 = v16 + 64;
      if ( (unsigned int)(v16 + 64) < 0x40 )
        return (unsigned int)-1073676267;
    }
  }
  v18 = *(_QWORD *)(a2 + 32);
  if ( v18 )
  {
    v19 = *(unsigned int *)(v18 + 48);
    v10 = 160;
    if ( (_DWORD)v19 )
    {
      if ( *(_QWORD *)(v18 + 56) )
      {
        v20 = 3 * v19;
        v81 = 3 * v19;
        if ( (unsigned __int64)(3 * v19) > 0xFFFFFFFF )
          return (unsigned int)-1073676267;
        v10 = v20 + 160;
        if ( v20 >= 0xFFFFFF60 )
          return (unsigned int)-1073676267;
      }
    }
    v21 = *(_DWORD *)(v18 + 64);
    if ( v21 && *(_QWORD *)(v18 + 72) )
    {
      v22 = 8LL * v21;
      v82 = 8 * v21;
      if ( v22 > 0xFFFFFFFF || (unsigned int)v22 + v10 < v10 )
        return (unsigned int)-1073676267;
      v10 += v22;
    }
    v23 = *(_DWORD *)(v18 + 80);
    if ( v23 && *(_QWORD *)(v18 + 88) )
    {
      v24 = 8LL * v23;
      v83 = 8 * v23;
      if ( v24 > 0xFFFFFFFF || (unsigned int)v24 + v10 < v10 )
        return (unsigned int)-1073676267;
      v10 += v24;
    }
    v25 = *(_DWORD *)(v18 + 96);
    if ( v25 && *(_QWORD *)(v18 + 104) )
    {
      v26 = 8LL * v25;
      v84 = 8 * v25;
      if ( v26 > 0xFFFFFFFF || (unsigned int)v26 + v10 < v10 )
        return (unsigned int)-1073676267;
      v10 += v26;
    }
    v27 = *(_DWORD *)(v18 + 112);
    if ( v27 && *(_QWORD *)(v18 + 120) )
    {
      v28 = 8LL * v27;
      v85 = 8 * v27;
      if ( v28 > 0xFFFFFFFF || (unsigned int)v28 + v10 < v10 )
        return (unsigned int)-1073676267;
      v10 += v28;
    }
    if ( v13 >= 3 )
    {
      v29 = *(_DWORD *)(v18 + 140);
      if ( v29 )
      {
        if ( *(_QWORD *)(v18 + 144) && *(_BYTE *)(v18 + 1) >= 3u )
        {
          v30 = 8LL * v29;
          v86 = 8 * v29;
          if ( v30 > 0xFFFFFFFF || (unsigned int)v30 + v10 < v10 )
            return (unsigned int)-1073676267;
          v10 += v30;
        }
      }
    }
    if ( v10 + v15 < v15 )
      return (unsigned int)-1073676267;
    v15 += v10;
  }
  if ( v13 >= 2 )
  {
    v31 = *(_DWORD *)(a2 + 4);
    v32 = *(_QWORD *)(a2 + 40);
    v11 = *(_QWORD *)(a2 + 48);
    a8 = v32;
    v87 = v11;
    v33 = v31 & 0x28;
    if ( v33 && !v11 || v11 && !v33 )
      return (unsigned int)-1073741811;
    if ( v32 )
    {
      v34 = *(unsigned int *)(v32 + 4);
      if ( (_DWORD)v34 )
      {
        v35 = 24 * v34;
        if ( (unsigned __int64)(24 * v34) > 0xFFFFFFFF )
          return (unsigned int)-1073676267;
      }
      else
      {
        v35 = 16;
      }
      v36 = v35 + 8;
      v95 = v35 + 8;
      if ( v35 >= 0xFFFFFFF8 || v36 + v15 < v15 )
        return (unsigned int)-1073676267;
      v13 = a7;
      v15 += v36;
    }
    if ( v11 )
    {
      v37 = *(unsigned int *)(v11 + 32);
      v38 = 80;
      v97 = 80;
      if ( (_DWORD)v37 )
      {
        if ( *(_QWORD *)(v11 + 40) )
        {
          v39 = 3 * v37;
          v88 = 3 * v37;
          if ( (unsigned __int64)(3 * v37) > 0xFFFFFFFF )
            return (unsigned int)-1073676267;
          v38 = v39 + 80;
          v97 = v39 + 80;
          if ( v39 >= 0xFFFFFFB0 )
            return (unsigned int)-1073676267;
        }
      }
      v40 = *(_DWORD *)(v11 + 48);
      if ( v40 && *(_QWORD *)(v11 + 56) )
      {
        v41 = 8LL * v40;
        v89 = 8 * v40;
        if ( v41 > 0xFFFFFFFF )
          return (unsigned int)-1073676267;
        v42 = v41 + v38;
        if ( (unsigned int)v41 + v38 < v38 )
          return (unsigned int)-1073676267;
        v38 += v41;
        v97 = v42;
      }
      v43 = *(_DWORD *)(v11 + 64);
      if ( v43 && *(_QWORD *)(v11 + 72) )
      {
        v44 = 8LL * v43;
        v90 = 8 * v43;
        if ( v44 > 0xFFFFFFFF )
          return (unsigned int)-1073676267;
        v45 = v44 + v38;
        if ( (unsigned int)v44 + v38 < v38 )
          return (unsigned int)-1073676267;
        v38 += v44;
        v97 = v45;
      }
      if ( v38 + v15 < v15 )
        return (unsigned int)-1073676267;
      v15 += v38;
    }
  }
  if ( v13 < 3 )
    goto LABEL_98;
  v46 = *(_QWORD *)(a2 + 56);
  v79 = v46;
  v47 = *(_DWORD *)(a2 + 4) & 0x70;
  if ( v47 && !v46 )
    return (unsigned int)-1073741811;
  if ( !v46 )
    goto LABEL_98;
  if ( !v47 )
    return (unsigned int)-1073741811;
  v48 = *(unsigned int *)(v46 + 48);
  v49 = 72;
  v96 = 72;
  if ( (_DWORD)v48 )
  {
    if ( *(_QWORD *)(v46 + 56) )
    {
      v50 = 3 * v48;
      v91 = 3 * v48;
      if ( (unsigned __int64)(3 * v48) > 0xFFFFFFFF )
        return (unsigned int)-1073676267;
      v49 = v50 + 72;
      v96 = v50 + 72;
      if ( v50 >= 0xFFFFFFB8 )
        return (unsigned int)-1073676267;
    }
  }
  v51 = *(unsigned int *)(v46 + 32);
  if ( (_DWORD)v51 && *(_QWORD *)(v46 + 40) )
  {
    v52 = 6 * v51;
    v92 = 6 * v51;
    if ( (unsigned __int64)(6 * v51) > 0xFFFFFFFF )
      return (unsigned int)-1073676267;
    v53 = v52 + v49;
    if ( v52 + v49 < v49 )
      return (unsigned int)-1073676267;
    v49 += v52;
    v96 = v53;
  }
  if ( v49 + v15 < v15 )
    return (unsigned int)-1073676267;
  v15 += v49;
LABEL_98:
  MemoryWithTag = NdisAllocateMemoryWithTag((PVOID *)&VirtualAddress, v15, 0x6D61444Eu);
  if ( MemoryWithTag )
    return MemoryWithTag;
  memset(VirtualAddress, 0, v15);
  v54 = VirtualAddress;
  v55 = a9;
  v93 = VirtualAddress;
  *(_OWORD *)VirtualAddress = *(_OWORD *)a2;
  *v55 = v54;
  *((_DWORD *)v54 + 4) = *(_DWORD *)(a2 + 16);
  VirtualAddress += 64;
  *(_DWORD *)v54 = 4195233;
  if ( Size && *(_DWORD *)(a2 + 20) )
  {
    *((_QWORD *)v54 + 3) = VirtualAddress;
    *((_DWORD *)v54 + 5) = *(_DWORD *)(a2 + 20);
    memmove(VirtualAddress, *(const void **)(a2 + 24), Size);
    v56 = &VirtualAddress[Size];
    VirtualAddress = v56;
    v57 = 0;
  }
  else
  {
    v57 = 0;
    *((_QWORD *)v54 + 3) = 0LL;
    *((_DWORD *)v54 + 5) = 0;
    v56 = VirtualAddress;
  }
  if ( !v10 || !v18 )
    goto LABEL_135;
  *((_QWORD *)v54 + 4) = v56;
  v58 = VirtualAddress;
  *(_OWORD *)v56 = *(_OWORD *)v18;
  *((_OWORD *)v56 + 1) = *(_OWORD *)(v18 + 16);
  *((_OWORD *)v56 + 2) = *(_OWORD *)(v18 + 32);
  v59 = VirtualAddress + 160;
  VirtualAddress += 160;
  if ( v81 && *(_DWORD *)(v18 + 48) )
  {
    *((_QWORD *)v58 + 7) = v59;
    *((_DWORD *)v58 + 12) = *(_DWORD *)(v18 + 48);
    memmove(VirtualAddress, *(const void **)(v18 + 56), v81);
    v60 = &VirtualAddress[v81];
    VirtualAddress = v60;
  }
  else
  {
    *((_QWORD *)v58 + 7) = 0LL;
    *((_DWORD *)v58 + 12) = 0;
    v60 = VirtualAddress;
  }
  if ( v82 && *(_DWORD *)(v18 + 64) )
  {
    *((_QWORD *)v58 + 9) = v60;
    *((_DWORD *)v58 + 16) = *(_DWORD *)(v18 + 64);
    memmove(VirtualAddress, *(const void **)(v18 + 72), v82);
    v61 = &VirtualAddress[v82];
    VirtualAddress = v61;
  }
  else
  {
    *((_QWORD *)v58 + 9) = 0LL;
    *((_DWORD *)v58 + 16) = 0;
    v61 = VirtualAddress;
  }
  if ( v83 && *(_DWORD *)(v18 + 80) )
  {
    *((_QWORD *)v58 + 11) = v61;
    *((_DWORD *)v58 + 20) = *(_DWORD *)(v18 + 80);
    memmove(VirtualAddress, *(const void **)(v18 + 88), v83);
    v62 = &VirtualAddress[v83];
    VirtualAddress = v62;
  }
  else
  {
    *((_QWORD *)v58 + 11) = 0LL;
    *((_DWORD *)v58 + 20) = 0;
    v62 = VirtualAddress;
  }
  if ( v84 && *(_DWORD *)(v18 + 96) )
  {
    *((_QWORD *)v58 + 13) = v62;
    *((_DWORD *)v58 + 24) = *(_DWORD *)(v18 + 96);
    memmove(VirtualAddress, *(const void **)(v18 + 104), v84);
    v63 = &VirtualAddress[v84];
    VirtualAddress = v63;
  }
  else
  {
    *((_QWORD *)v58 + 13) = 0LL;
    *((_DWORD *)v58 + 24) = 0;
    v63 = VirtualAddress;
  }
  if ( v85 && *(_DWORD *)(v18 + 112) )
  {
    *((_QWORD *)v58 + 15) = v63;
    *((_DWORD *)v58 + 28) = *(_DWORD *)(v18 + 112);
    memmove(VirtualAddress, *(const void **)(v18 + 120), v85);
    v56 = &VirtualAddress[v85];
    VirtualAddress = v56;
  }
  else
  {
    *((_QWORD *)v58 + 15) = 0LL;
    *((_DWORD *)v58 + 28) = 0;
    v56 = VirtualAddress;
  }
  if ( a7 < 3 )
    goto LABEL_135;
  *(_BYTE *)(*((_QWORD *)v54 + 4) + 128LL) = *(_BYTE *)(v18 + 128);
  *(_DWORD *)(*((_QWORD *)v54 + 4) + 132LL) = *(_DWORD *)(v18 + 132);
  *(_BYTE *)(*((_QWORD *)v54 + 4) + 136LL) = *(_BYTE *)(v18 + 136);
  if ( *(_DWORD *)(v18 + 140) && *(_QWORD *)(v18 + 144) && *(_BYTE *)(v18 + 1) >= 3u )
  {
    if ( v86 )
    {
      *((_QWORD *)v58 + 18) = VirtualAddress;
      *((_DWORD *)v58 + 35) = *(_DWORD *)(v18 + 140);
      memmove(VirtualAddress, *(const void **)(v18 + 144), v86);
      v56 = &VirtualAddress[v86];
      VirtualAddress = v56;
      goto LABEL_133;
    }
    *((_QWORD *)v58 + 18) = 0LL;
    *((_DWORD *)v58 + 35) = 0;
  }
  v56 = VirtualAddress;
LABEL_133:
  if ( *(_BYTE *)(v18 + 1) >= 4u )
  {
    *(_BYTE *)(*((_QWORD *)v54 + 4) + 152LL) = *(_BYTE *)(v18 + 152);
    *(_BYTE *)(*((_QWORD *)v54 + 4) + 153LL) = *(_BYTE *)(v18 + 153);
    *(_BYTE *)(*((_QWORD *)v54 + 4) + 154LL) = *(_BYTE *)(v18 + 154);
    *(_BYTE *)(*((_QWORD *)v54 + 4) + 155LL) = *(_BYTE *)(v18 + 155);
    *(_BYTE *)(*((_QWORD *)v54 + 4) + 156LL) = *(_BYTE *)(v18 + 156);
    v56 = VirtualAddress;
  }
LABEL_135:
  if ( v95 )
  {
    v64 = a8;
    if ( a8 )
    {
      *((_QWORD *)v54 + 5) = v56;
      *(_QWORD *)v56 = *(_QWORD *)v64;
      if ( *(_DWORD *)(v64 + 4) )
      {
        v65 = *(_BYTE *)(v64 + 9);
        if ( v65 == 3 )
        {
          v66 = 24LL;
        }
        else if ( v65 == 2 )
        {
          v66 = 20LL;
        }
        else
        {
          v66 = 0LL;
          if ( v65 == 1 )
            v66 = 16LL;
        }
        v67 = (_BYTE *)(v64 + 8);
        v68 = (_BYTE *)(*((_QWORD *)v54 + 5) + 8LL);
        v69 = v64;
        do
        {
          memmove(v68, v67, v66);
          if ( a1 >= 0x61Eu )
            *((_DWORD *)v68 + 4) = 0;
          ++v57;
          *v68 = *v67;
          v67 += v66;
          v68[1] = 3;
          *((_WORD *)v68 + 1) = 24;
          v68 += 24;
        }
        while ( v57 < *(_DWORD *)(v69 + 4) );
        MemoryWithTag = 0;
        v54 = v93;
        v11 = v87;
      }
      v56 = &VirtualAddress[v95];
      VirtualAddress = v56;
    }
  }
  if ( v97 && v11 )
  {
    *((_QWORD *)v54 + 6) = v56;
    v70 = VirtualAddress;
    *(_OWORD *)v56 = *(_OWORD *)v11;
    *((_OWORD *)v56 + 1) = *(_OWORD *)(v11 + 16);
    v71 = VirtualAddress + 80;
    VirtualAddress += 80;
    if ( v88 && *(_DWORD *)(v11 + 32) )
    {
      *((_QWORD *)v70 + 5) = v71;
      *((_DWORD *)v70 + 8) = *(_DWORD *)(v11 + 32);
      memmove(VirtualAddress, *(const void **)(v11 + 40), v88);
      v72 = &VirtualAddress[v88];
      VirtualAddress = v72;
    }
    else
    {
      *((_QWORD *)v70 + 5) = 0LL;
      *((_DWORD *)v70 + 8) = 0;
      v72 = VirtualAddress;
    }
    if ( v89 && *(_DWORD *)(v11 + 48) )
    {
      *((_QWORD *)v70 + 7) = v72;
      *((_DWORD *)v70 + 12) = *(_DWORD *)(v11 + 48);
      memmove(VirtualAddress, *(const void **)(v11 + 56), v89);
      v73 = &VirtualAddress[v89];
      VirtualAddress = v73;
    }
    else
    {
      *((_QWORD *)v70 + 7) = 0LL;
      *((_DWORD *)v70 + 12) = 0;
      v73 = VirtualAddress;
    }
    if ( v90 && *(_DWORD *)(v11 + 64) )
    {
      *((_QWORD *)v70 + 9) = v73;
      *((_DWORD *)v70 + 16) = *(_DWORD *)(v11 + 64);
      memmove(VirtualAddress, *(const void **)(v11 + 72), v90);
      v56 = &VirtualAddress[v90];
      VirtualAddress = v56;
    }
    else
    {
      *((_QWORD *)v70 + 9) = 0LL;
      *((_DWORD *)v70 + 16) = 0;
      v56 = VirtualAddress;
    }
  }
  if ( v96 )
  {
    v74 = v79;
    if ( v79 )
    {
      *((_QWORD *)v54 + 7) = v56;
      v75 = VirtualAddress;
      *(_OWORD *)v56 = *(_OWORD *)v79;
      *((_OWORD *)v56 + 1) = *(_OWORD *)(v79 + 16);
      *((_OWORD *)v56 + 2) = *(_OWORD *)(v79 + 32);
      *((_OWORD *)v56 + 3) = *(_OWORD *)(v79 + 48);
      *((_QWORD *)v56 + 8) = *(_QWORD *)(v79 + 64);
      v76 = VirtualAddress + 72;
      VirtualAddress += 72;
      if ( v91 && *(_DWORD *)(v79 + 48) )
      {
        *((_QWORD *)v75 + 7) = v76;
        *((_DWORD *)v75 + 12) = *(_DWORD *)(v79 + 48);
        memmove(VirtualAddress, *(const void **)(v79 + 56), v91);
        v74 = v79;
        v77 = &VirtualAddress[v91];
        VirtualAddress = v77;
      }
      else
      {
        *((_QWORD *)v75 + 7) = 0LL;
        *((_DWORD *)v75 + 12) = 0;
        v77 = VirtualAddress;
      }
      if ( v92 && *(_DWORD *)(v74 + 32) )
      {
        *((_QWORD *)v75 + 5) = v77;
        *((_DWORD *)v75 + 8) = *(_DWORD *)(v74 + 32);
        memmove(VirtualAddress, *(const void **)(v74 + 40), v92);
      }
      else
      {
        *((_QWORD *)v75 + 5) = 0LL;
        *((_DWORD *)v75 + 8) = 0;
      }
    }
  }
  return MemoryWithTag;
}
