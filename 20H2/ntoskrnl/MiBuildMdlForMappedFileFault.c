/*
 * XREFs of MiBuildMdlForMappedFileFault @ 0x14029C170
 * Callers:
 *     MiResolveMappedFileFault @ 0x140231830 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiSetPfnBlink @ 0x140230190 (MiSetPfnBlink.c)
 *     MiGetHardFaultPages @ 0x140232AB4 (MiGetHardFaultPages.c)
 *     RtlSetAllBits @ 0x14025D340 (RtlSetAllBits.c)
 *     MiProtectionToCacheAttribute @ 0x14028E480 (MiProtectionToCacheAttribute.c)
 *     MiInitializeHardFaultPfn @ 0x14029C7F0 (MiInitializeHardFaultPfn.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiAdvanceFaultList @ 0x1403179F8 (MiAdvanceFaultList.c)
 *     MiReduceMappedFileReadAhead @ 0x140319F10 (MiReduceMappedFileReadAhead.c)
 *     MiReduceMappedFileReadBehind @ 0x14032552C (MiReduceMappedFileReadBehind.c)
 *     RtlSetBits @ 0x140343250 (RtlSetBits.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

__int64 __fastcall MiBuildMdlForMappedFileFault(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        _QWORD *a9,
        __int64 a10)
{
  unsigned __int64 v10; // rdi
  unsigned int v13; // esi
  unsigned __int64 i; // rbx
  unsigned __int64 v15; // r14
  __int64 v16; // r12
  unsigned __int64 v17; // rax
  __int64 v18; // rbx
  __int64 result; // rax
  ULONG v20; // ebx
  int v21; // eax
  __int64 v22; // r13
  unsigned int v23; // r11d
  unsigned int SizeOfBitMap; // r8d
  _QWORD *v25; // rbx
  unsigned __int64 v26; // rdx
  unsigned int v27; // r15d
  ULONG v28; // esi
  unsigned int *v29; // r9
  unsigned int *v30; // rax
  __int64 v31; // r10
  unsigned int *v32; // rax
  unsigned int v33; // ecx
  __int64 v34; // rcx
  __int64 *v35; // r14
  __int64 v36; // r9
  int v37; // r15d
  __int16 v38; // r8
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // r13
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  unsigned int v51; // [rsp+40h] [rbp-C0h]
  __int64 v52; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v53; // [rsp+50h] [rbp-B0h]
  ULONG v54; // [rsp+58h] [rbp-A8h]
  __int64 v55; // [rsp+60h] [rbp-A0h]
  _QWORD *v56; // [rsp+68h] [rbp-98h]
  __int64 v57; // [rsp+70h] [rbp-90h]
  unsigned __int64 v58; // [rsp+78h] [rbp-88h]
  __int64 v59; // [rsp+80h] [rbp-80h]
  int v60; // [rsp+88h] [rbp-78h]
  unsigned int v61; // [rsp+8Ch] [rbp-74h]
  __int64 v62; // [rsp+90h] [rbp-70h]
  __int64 v63; // [rsp+98h] [rbp-68h]
  __int64 *v64; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v65; // [rsp+A8h] [rbp-58h]
  _RTL_BITMAP BitMapHeader; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v67[4]; // [rsp+C0h] [rbp-40h] BYREF

  v10 = *(_QWORD *)(a1 + 168);
  v62 = a8;
  v59 = a10;
  v64 = *(__int64 **)(a1 + 232);
  v57 = a1;
  BitMapHeader.Buffer = (unsigned int *)v67;
  v55 = a4;
  v58 = a2;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 512LL;
  memset(v67, 0, sizeof(v67));
  v65 = v10;
  RtlSetAllBits(&BitMapHeader);
  v63 = 0LL;
  v13 = 0;
  for ( i = a2; i <= a3; i += 8LL )
  {
    if ( MI_READ_PTE_LOCK_FREE(i) == v10 )
    {
      _bittestandreset((signed __int32 *)BitMapHeader.Buffer, ((unsigned int)i >> 3) & 0x1FF);
      ++v13;
    }
  }
  v15 = a5;
  if ( v13 <= (unsigned __int64)a5 )
    v15 = v13;
  if ( a6 == -1 )
  {
    v52 = 0LL;
    v16 = 0LL;
  }
  else
  {
    MiSetPfnBlink(48 * a6 - 0x58000000000LL, 0xFFFFFFFFFLL, 0);
    v52 = 48 * a6 - 0x58000000000LL;
    v16 = 1LL;
  }
  v53 = v16;
  if ( v16 == v15 )
  {
    v18 = v62;
  }
  else
  {
    v17 = v10;
    if ( (v10 & 0x400) == 0 )
    {
      if ( qword_140C4DDC0 && (v10 & 0x10) == 0 )
        v17 = v10 & ~qword_140C4DDC0;
      v63 = 48 * ((v17 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v17 = *(_QWORD *)(v63 + 16);
    }
    v18 = v62;
    MiGetHardFaultPages(&v52, v15, v55, v62, a9, v57, v17, v59);
    v16 = v53;
  }
  if ( v16 == v13 )
    goto LABEL_26;
  if ( v16 )
  {
    v20 = ((unsigned int)v64 >> 3) & 0x1FF;
    if ( v16 != v13 - (unsigned int)MiReduceMappedFileReadBehind(&BitMapHeader, v20) )
      MiReduceMappedFileReadAhead(&BitMapHeader, v20);
LABEL_26:
    v61 = v16;
    v21 = MiProtectionToCacheAttribute(a7);
    v22 = v57;
    v23 = 0;
    SizeOfBitMap = BitMapHeader.SizeOfBitMap;
    v60 = v21;
    v25 = (_QWORD *)(v57 + 320);
    v56 = (_QWORD *)(v57 + 320);
    if ( !BitMapHeader.SizeOfBitMap )
    {
LABEL_86:
      result = v61;
      *(_DWORD *)(v22 + 184) = (unsigned int)(((__int64)v25 - v22 - 320) >> 3) << 12;
      return result;
    }
    v26 = v58 & 0xFFFFFFFFFFFFF000uLL;
    v58 &= 0xFFFFFFFFFFFFF000uLL;
    while ( 1 )
    {
      v51 = v23;
      v27 = v23;
      if ( SizeOfBitMap <= v23 )
      {
        v28 = 0;
        goto LABEL_52;
      }
      v29 = &BitMapHeader.Buffer[(unsigned __int64)(SizeOfBitMap - 1) >> 5];
      v30 = &BitMapHeader.Buffer[(unsigned __int64)v23 >> 5];
      if ( v30 != v29 )
      {
        v31 = v23 & 0x1F;
        if ( (*v30 | *((_DWORD *)qword_140011D10 + v31)) == 0xFFFFFFFF )
        {
          ++v30;
          v27 = v23 - v31 + 32;
          v51 = v27;
          if ( v30 < v29 )
          {
            do
            {
              if ( *v30 != -1 )
                break;
              ++v30;
              v27 += 32;
            }
            while ( v30 < v29 );
            v51 = v27;
          }
        }
      }
      if ( v27 < SizeOfBitMap )
      {
        do
        {
          SizeOfBitMap = BitMapHeader.SizeOfBitMap;
          if ( !_bittest((const signed __int32 *)BitMapHeader.Buffer, v27) )
            break;
          v51 = ++v27;
        }
        while ( v27 < BitMapHeader.SizeOfBitMap );
      }
      v28 = 0;
      if ( v30 == v29 )
        goto LABEL_47;
      if ( (~*((_DWORD *)qword_140011D10 + (v27 & 0x1F)) & *v30) != 0 )
        goto LABEL_46;
      v28 = 32 - (v27 & 0x1F);
      if ( v28 != -1 )
        break;
LABEL_62:
      v16 = v53;
LABEL_51:
      v26 = v58;
LABEL_52:
      v54 = v28;
      if ( v23 )
      {
        if ( v27 != v23 )
        {
          v34 = v27 - v23;
          do
          {
            *v25++ = qword_140C4EBF8;
            --v34;
          }
          while ( v34 );
          v56 = v25;
        }
        *(_DWORD *)(v22 + 192) |= 0x20000u;
      }
      v35 = (__int64 *)(v26 + 8LL * v27);
      RtlSetBits(&BitMapHeader, v27, v28);
      if ( v28 )
      {
        v37 = v57;
        v38 = v10;
        v10 = (unsigned __int64)v56;
        v39 = v38 & 0x400;
        v40 = v28;
        v41 = v62;
        v55 = (unsigned int)v39;
        v59 = v40;
        while ( 2 )
        {
          v42 = v52;
          v43 = *(_QWORD *)(v52 + 24) & 0xFFFFFFFFFLL;
          if ( v43 == 0xFFFFFFFFFLL )
            v52 = 0LL;
          else
            v52 = 48 * v43 - 0x58000000000LL;
          v53 = --v16;
          v44 = (unsigned __int128)((v42 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
          v45 = (v42 + 0x58000000000LL) / 48;
          *(_QWORD *)v10 = v45;
          v10 += 8LL;
          if ( v39 )
            v46 = MI_READ_PTE_LOCK_FREE(v35);
          else
            v46 = *(_QWORD *)(v63 + 16);
          *(_QWORD *)(v42 + 16) = v46;
          if ( v41 )
            MiAdvanceFaultList(v41, v44, v39, v36);
          MiInitializeHardFaultPfn(v42, v37, (_DWORD)v35, v35 == v64, v60);
          v39 = v55;
          if ( !v55 )
            goto LABEL_82;
          v47 = MiSwizzleInvalidPte(32 * (a7 & 0x1F | ((v45 & 0xFFFFFFFFFLL) << 7) | 0x40));
          if ( MiPteInShadowRange((unsigned __int64)v35) )
          {
            if ( (unsigned int)MiPteHasShadow(v49, v48, v50, v36) )
            {
              if ( !HIBYTE(word_140C4DE88) && (v47 & 1) != 0 )
                v47 |= 0x8000000000000000uLL;
              *v35 = v47;
              MiWritePteShadow(v35, v47);
LABEL_81:
              v39 = v55;
LABEL_82:
              ++v35;
              if ( !--v59 )
              {
                v28 = v54;
                v27 = v51;
                v22 = v57;
                v56 = (_QWORD *)v10;
                v25 = (_QWORD *)v10;
                LOWORD(v10) = v65;
                goto LABEL_84;
              }
              continue;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v47 & 1) != 0 )
            {
              v47 |= 0x8000000000000000uLL;
            }
            v16 = v53;
          }
          break;
        }
        *v35 = v47;
        goto LABEL_81;
      }
LABEL_84:
      if ( v16 )
      {
        SizeOfBitMap = BitMapHeader.SizeOfBitMap;
        v23 = v28 + v27;
        v26 = v58;
        if ( v28 + v27 != BitMapHeader.SizeOfBitMap )
          continue;
      }
      goto LABEL_86;
    }
    v32 = v30 + 1;
    while ( v32 < v29 )
    {
      if ( *v32 )
        break;
      ++v32;
      v28 += 32;
      if ( v28 == -1 )
        goto LABEL_62;
    }
LABEL_46:
    v16 = v53;
    SizeOfBitMap = BitMapHeader.SizeOfBitMap;
LABEL_47:
    v33 = v28 + v27;
    if ( v28 + v27 < SizeOfBitMap )
    {
      do
      {
        if ( _bittest((const signed __int32 *)BitMapHeader.Buffer, v33) )
          break;
        if ( v28 == -1 )
          break;
        ++v33;
        ++v28;
      }
      while ( v33 < BitMapHeader.SizeOfBitMap );
    }
    goto LABEL_51;
  }
  if ( v18 )
  {
    if ( !a9[15] )
      *(_BYTE *)(v18 + 1) = 2;
  }
  return 0LL;
}
