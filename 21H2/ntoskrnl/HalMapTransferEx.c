/*
 * XREFs of HalMapTransferEx @ 0x14039F830
 * Callers:
 *     HalpAllocateAdapterCallbackV3 @ 0x14039F760 (HalpAllocateAdapterCallbackV3.c)
 * Callees:
 *     IoFreeMdl @ 0x14029A950 (IoFreeMdl.c)
 *     IoMapTransferInternal @ 0x140388E3C (IoMapTransferInternal.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14039FB08 (HalpDmaCheckMdlAccessibility.c)
 *     HalpDmaFlushDriverMdl @ 0x1404B793C (HalpDmaFlushDriverMdl.c)
 *     HalpDmaFlushBuffer @ 0x1404C779C (HalpDmaFlushBuffer.c)
 *     HalpIommuDomainMapLogicalRange @ 0x1404C9514 (HalpIommuDomainMapLogicalRange.c)
 *     HalpDmaControllerProgramChannel @ 0x1404CEAC4 (HalpDmaControllerProgramChannel.c)
 *     HalpDmaControllerQueryMaxFragments @ 0x1404CECF4 (HalpDmaControllerQueryMaxFragments.c)
 */

__int64 __fastcall HalMapTransferEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        char a7,
        _DWORD *a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11)
{
  unsigned int v11; // esi
  bool v13; // zf
  __int64 v14; // rdi
  __int64 v15; // r14
  unsigned int *v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // r15
  unsigned int v21; // eax
  unsigned int v22; // r13d
  unsigned __int64 v23; // r12
  __int64 v24; // r12
  unsigned int *v25; // rcx
  unsigned int v26; // edx
  unsigned int v27; // r9d
  __int64 v28; // r10
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned int v31; // eax
  unsigned int v32; // r11d
  _QWORD *v33; // rax
  unsigned int v34; // edx
  __int64 v35; // rbx
  unsigned int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r10
  unsigned int *v41; // rax
  char v42; // bl
  _DWORD *v44; // rax
  unsigned int MaxFragments; // eax
  unsigned int v46; // eax
  unsigned int v47; // ecx
  __int64 v48; // r8
  unsigned int v49; // eax
  __int64 v50; // rax
  unsigned int v51; // edi
  __int64 v52; // rbx
  __int64 v53; // rcx
  unsigned int v54; // eax
  __int64 v55; // rdi
  __int64 v56; // rcx
  __int64 v57; // rax
  PMDL v58; // rdi
  struct _MDL *Next; // rbx
  int v60; // [rsp+20h] [rbp-98h]
  int v61; // [rsp+28h] [rbp-90h]
  unsigned int v62; // [rsp+40h] [rbp-78h]
  unsigned int v63; // [rsp+44h] [rbp-74h] BYREF
  unsigned int v64; // [rsp+48h] [rbp-70h]
  unsigned int v65; // [rsp+4Ch] [rbp-6Ch]
  __int64 v66; // [rsp+50h] [rbp-68h]
  __int64 v67; // [rsp+58h] [rbp-60h]
  unsigned int v68; // [rsp+60h] [rbp-58h]
  unsigned __int64 v69; // [rsp+68h] [rbp-50h]
  __int64 v70; // [rsp+70h] [rbp-48h]
  PMDL Mdl[8]; // [rsp+78h] [rbp-40h] BYREF
  char v72; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v73; // [rsp+D0h] [rbp+18h]

  v73 = a3;
  v11 = 0;
  v13 = *(_DWORD *)(a1 + 512) == 2;
  v14 = a3;
  v15 = a2;
  v72 = 0;
  Mdl[0] = 0LL;
  if ( v13 && !a3 )
    return 3221225485LL;
  v70 = *(_QWORD *)(a1 + 504);
  v17 = a6;
  *(_BYTE *)(a1 + 516) = 1;
  if ( !*v17 )
  {
    v44 = a8;
    if ( a8 && a9 >= 0x10 )
    {
      *a8 = 0;
      *((_QWORD *)v44 + 1) = 0LL;
    }
    else if ( *(_BYTE *)(a1 + 433) )
    {
      return 3221225485LL;
    }
    return 0LL;
  }
  if ( KeGetCurrentIrql() != 15 )
  {
    v18 = *(_QWORD *)(a1 + 352);
    if ( v18 )
    {
      if ( (*(_DWORD *)(v18 + 12) & 1) != 0 )
        return 3221225760LL;
    }
  }
  if ( !a2 )
    return 3221225485LL;
  do
  {
    v19 = *(unsigned int *)(v15 + 40);
    if ( a4 < v19 )
      break;
    v15 = *(_QWORD *)v15;
    a4 -= v19;
  }
  while ( v15 );
  if ( !v15 )
    return 3221225485LL;
  v20 = (__int64)a8;
  if ( !a8 )
  {
    if ( !*(_BYTE *)(a1 + 433) )
    {
      v21 = *(_DWORD *)(a1 + 620);
      v20 = a1 + 624;
      goto LABEL_10;
    }
    return 3221225485LL;
  }
  v21 = a9;
  if ( a9 < 0x28 )
    return 3221225485LL;
LABEL_10:
  v22 = 0;
  *(_QWORD *)(v20 + 8) = 0LL;
  v23 = ((unsigned __int64)v21 - 16) / 0x18;
  v69 = v23;
  if ( !*(_BYTE *)(a1 + 433) )
  {
    MaxFragments = HalpDmaControllerQueryMaxFragments(*(_QWORD *)(a1 + 360), a1, (unsigned int)v23);
    if ( MaxFragments < (unsigned int)v23 )
      v23 = MaxFragments;
    v69 = v23;
  }
  HalpDmaCheckMdlAccessibility(a1, v15, (unsigned int)a4, *a6, &v72, Mdl);
  v13 = *(_DWORD *)(a1 + 512) == 2;
  v24 = 0LL;
  v25 = a6;
  v67 = 0LL;
  if ( v13 )
  {
    v46 = *(_DWORD *)(a1 + 244);
    if ( *a6 > v46 )
      *a6 = v46;
    v24 = *(_QWORD *)(v14 + 24);
    *(_QWORD *)(v14 + 32) = 0LL;
  }
  v26 = *v25;
  v27 = 0;
  v62 = 0;
  if ( v14 )
  {
    do
    {
      if ( !v26 )
        break;
      v47 = v26;
      v48 = a4 + *(_QWORD *)(v15 + 32) + *(unsigned int *)(v15 + 44);
      v49 = *(_DWORD *)(v15 + 40) - a4;
      v66 = v48;
      if ( v49 <= v26 )
        v47 = v49;
      v26 -= v47;
      v64 = v47;
      v65 = v26;
      if ( v47 )
      {
        while ( v22 < (unsigned int)v69 )
        {
          v63 = v47;
          v50 = IoMapTransferInternal(a1, v15, v14, v48, &v63, a7, v72);
          v51 = v63;
          v52 = v50;
          if ( !v63 )
          {
            v14 = v73;
            v27 = v62;
            break;
          }
          if ( *(_DWORD *)(a1 + 512) == 2 )
          {
            if ( (((unsigned __int16)v50 | (unsigned __int16)v24) & 0xFFF) != 0 || !v67 )
            {
              if ( (v24 & 0xFFF) != 0 )
                v24 = v24 + 4096 - ((v24 + 4096) & 0xFFF);
              v53 = v20 + 8 * (v22 + 2 * (v22 + 1LL));
              v67 = v53;
              *(_QWORD *)v53 = v24 + (v66 & 0xFFF);
              *(_QWORD *)(v53 + 16) = v15;
              *(_DWORD *)(v53 + 8) = v51;
            }
            else
            {
              --v22;
              *(_DWORD *)(v67 + 8) += v63;
            }
            v54 = v51 + (v50 & 0xFFF);
            v55 = v54;
            HalpIommuDomainMapLogicalRange(*(_QWORD *)(v70 + 40), 3, v52, v54, v24);
            v24 += v55;
            v51 = v63;
          }
          else
          {
            v56 = 3LL * v22;
            *(_QWORD *)(v20 + 8 * v56 + 32) = v15;
            *(_DWORD *)(v20 + 8 * v56 + 24) = v51;
            *(_QWORD *)(v20 + 8 * v56 + 16) = v50;
          }
          if ( *(_DWORD *)(a1 + 512) == 3 )
            HalpIommuDomainMapLogicalRange(*(_QWORD *)(v70 + 40), 3, v52, v51 + (v52 & 0xFFF), v52);
          ++v22;
          v27 = v51 + v62;
          v47 = v64 - v51;
          v57 = v51;
          v14 = v73;
          v48 = v57 + v66;
          v66 += v57;
          v62 = v27;
          v64 = v47;
          if ( !v47 )
          {
            v26 = v65;
            goto LABEL_84;
          }
        }
        v26 = 0;
      }
LABEL_84:
      v15 = *(_QWORD *)v15;
      a4 = 0LL;
    }
    while ( v15 );
  }
  else
  {
    v28 = 0LL;
    v67 = 0LL;
    do
    {
      if ( !v26 )
        break;
      v29 = v26;
      v30 = *(unsigned int *)(v15 + 44);
      v31 = *(_DWORD *)(v15 + 40) - a4;
      if ( v31 <= v26 )
        v29 = v31;
      v63 = v29;
      v26 -= v29;
      v32 = ((_WORD)v30 + (_WORD)a4) & 0xFFF;
      v65 = v26;
      v64 = v32;
      v33 = (_QWORD *)(v15 + 8 * (((unsigned __int64)(unsigned int)(v30 + a4) >> 12) + 6));
      v66 = (__int64)v33;
      if ( !*(_BYTE *)(a1 + 437) )
      {
        LOBYTE(v61) = v72;
        LOBYTE(v60) = a7;
        HalpDmaFlushBuffer(v29, v15, a4 + v30 + *(_QWORD *)(v15 + 32), (unsigned int)v29, v60, v61);
        v26 = v65;
        LODWORD(v29) = v63;
        v27 = v62;
        v28 = v67;
        v33 = (_QWORD *)v66;
        v32 = v64;
      }
      if ( (_DWORD)v29 )
      {
        while ( 1 )
        {
          v34 = v29;
          v35 = v32 + (*v33 << 12);
          v36 = 4096 - v32;
          v32 = 0;
          if ( v36 <= (unsigned int)v29 )
            v34 = v36;
          v68 = v34;
          if ( v35 == v28 + 1 && ((v35 ^ v28) & 0x100000000LL) == 0 && v22 )
          {
            *(_DWORD *)(v20 + 24 * (v22 - 1 + 1LL)) += v34;
          }
          else
          {
            if ( v22 >= (unsigned int)v69 )
            {
              v26 = 0;
              break;
            }
            v37 = v22++;
            v38 = 3 * v37;
            *(_QWORD *)(v20 + 8 * v38 + 16) = v35;
            *(_DWORD *)(v20 + 8 * v38 + 24) = v34;
          }
          v13 = *(_DWORD *)(a1 + 512) == 3;
          v39 = v34;
          v67 = v34;
          if ( v13 )
          {
            HalpIommuDomainMapLogicalRange(*(_QWORD *)(v70 + 40), 3, v35, v34, v35);
            v34 = v68;
            v32 = 0;
            v27 = v62;
            v39 = v67;
          }
          v40 = v39 - 1;
          LODWORD(v29) = v63 - v34;
          v33 = (_QWORD *)(v66 + 8);
          v63 = v29;
          v27 += v34;
          v66 += 8LL;
          v28 = v35 + v40;
          v62 = v27;
          v67 = v28;
          if ( !(_DWORD)v29 )
          {
            v26 = v65;
            break;
          }
        }
      }
      v15 = *(_QWORD *)v15;
      a4 = 0LL;
    }
    while ( v15 );
  }
  if ( !v15 && v26 && v22 )
  {
    *(_DWORD *)(v20 + 24 * (v22 - 1 + 1LL)) += v26;
    v27 += v26;
  }
  if ( *(_DWORD *)(a1 + 512) == 2 )
    *(_QWORD *)(v14 + 32) = v24 - *(_QWORD *)(v14 + 24);
  v41 = a6;
  *(_DWORD *)v20 = v22;
  *v41 = v27;
  if ( v14 )
    *(_DWORD *)(v14 + 16) = v27;
  v42 = a7;
  if ( v72 )
  {
    v58 = Mdl[0];
    HalpDmaFlushDriverMdl((ULONG_PTR)Mdl[0]);
    if ( v58 )
    {
      do
      {
        Next = v58->Next;
        IoFreeMdl(v58);
        v58 = Next;
      }
      while ( Next );
      v42 = a7;
    }
  }
  if ( !*(_BYTE *)(a1 + 433) )
    return (unsigned int)HalpDmaControllerProgramChannel(
                           *(_QWORD *)(a1 + 360),
                           a1,
                           a10,
                           a11,
                           v20,
                           *(_QWORD *)(a1 + 448) + a5,
                           v42);
  return v11;
}
