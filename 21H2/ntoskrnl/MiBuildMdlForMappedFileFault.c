/*
 * XREFs of MiBuildMdlForMappedFileFault @ 0x1402E2620
 * Callers:
 *     MiResolveMappedFileFault @ 0x1403241D0 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiAdvanceFaultList @ 0x14020B2E8 (MiAdvanceFaultList.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiReduceMappedFileReadBehind @ 0x1402445FC (MiReduceMappedFileReadBehind.c)
 *     MiReduceMappedFileReadAhead @ 0x1402479AC (MiReduceMappedFileReadAhead.c)
 *     RtlSetAllBits @ 0x1402934B0 (RtlSetAllBits.c)
 *     MiGetHardFaultPages @ 0x1402990D4 (MiGetHardFaultPages.c)
 *     MiInitializeHardFaultPfn @ 0x1402E2DF0 (MiInitializeHardFaultPfn.c)
 *     MiProtectionToCacheAttribute @ 0x1402E6690 (MiProtectionToCacheAttribute.c)
 *     MiSetPfnBlink @ 0x140322E80 (MiSetPfnBlink.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     RtlSetBits @ 0x140363CC0 (RtlSetBits.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall MiBuildMdlForMappedFileFault(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7,
        _QWORD *a8,
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
  int v21; // esi
  int v22; // eax
  __int64 v23; // r13
  unsigned int v24; // r11d
  unsigned int SizeOfBitMap; // r8d
  _QWORD *v26; // rbx
  unsigned __int64 v27; // rdx
  unsigned int v28; // r15d
  ULONG v29; // esi
  unsigned int *v30; // r9
  unsigned int *v31; // rax
  __int64 v32; // r10
  unsigned int *v33; // rax
  unsigned int v34; // ecx
  __int64 v35; // rcx
  __int64 *v36; // r14
  int v37; // r15d
  __int16 v38; // r8
  _QWORD *v39; // r8
  __int64 v40; // rax
  _QWORD *v41; // rsi
  __int64 v42; // r13
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rbx
  unsigned int v47; // [rsp+40h] [rbp-C0h]
  __int64 v48; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v49; // [rsp+50h] [rbp-B0h]
  ULONG v50; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v51; // [rsp+60h] [rbp-A0h]
  _QWORD *v52; // [rsp+68h] [rbp-98h]
  __int64 v53; // [rsp+70h] [rbp-90h]
  unsigned __int64 v54; // [rsp+78h] [rbp-88h]
  __int64 v55; // [rsp+80h] [rbp-80h]
  int v56; // [rsp+88h] [rbp-78h]
  unsigned int v57; // [rsp+8Ch] [rbp-74h]
  _QWORD *v58; // [rsp+90h] [rbp-70h]
  __int64 v59; // [rsp+98h] [rbp-68h]
  __int64 *v60; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v61; // [rsp+A8h] [rbp-58h]
  _RTL_BITMAP BitMapHeader; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v63[4]; // [rsp+C0h] [rbp-40h] BYREF

  v10 = *(_QWORD *)(a1 + 168);
  v58 = a8;
  v55 = a10;
  v60 = *(__int64 **)(a1 + 232);
  v53 = a1;
  BitMapHeader.Buffer = (unsigned int *)v63;
  v51 = (unsigned __int64)a4;
  v54 = a2;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 512LL;
  memset(v63, 0, sizeof(v63));
  v61 = v10;
  RtlSetAllBits(&BitMapHeader);
  v59 = 0LL;
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
    v48 = 0LL;
    v16 = 0LL;
  }
  else
  {
    MiSetPfnBlink(48 * a6 - 0x58000000000LL, 0xFFFFFFFFFLL, 0LL);
    v48 = 48 * a6 - 0x58000000000LL;
    v16 = 1LL;
  }
  v49 = v16;
  if ( v16 == v15 )
  {
    v18 = (__int64)v58;
  }
  else
  {
    v17 = v10;
    if ( (v10 & 0x400) == 0 )
    {
      if ( qword_140C4DF80 && (v10 & 0x10) == 0 )
        v17 = v10 & ~qword_140C4DF80;
      v59 = 48 * ((v17 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v17 = *(_QWORD *)(v59 + 16);
    }
    v18 = (__int64)v58;
    MiGetHardFaultPages(&v48, v15, (_QWORD *)v51, (__int64)v58, a9, v53, v17);
    v16 = v49;
  }
  if ( v16 == v13 )
    goto LABEL_26;
  if ( v16 )
  {
    v20 = ((unsigned int)v60 >> 3) & 0x1FF;
    v21 = v13 - MiReduceMappedFileReadBehind(&BitMapHeader, v20, v13 - (unsigned int)v16);
    if ( v16 != v21 )
      MiReduceMappedFileReadAhead(&BitMapHeader, v20, v21 - v16);
LABEL_26:
    v57 = v16;
    v22 = MiProtectionToCacheAttribute(a7);
    v23 = v53;
    v24 = 0;
    SizeOfBitMap = BitMapHeader.SizeOfBitMap;
    v56 = v22;
    v26 = (_QWORD *)(v53 + 320);
    v52 = (_QWORD *)(v53 + 320);
    if ( !BitMapHeader.SizeOfBitMap )
    {
LABEL_86:
      result = v57;
      *(_DWORD *)(v23 + 184) = (unsigned int)(((__int64)v26 - v23 - 320) >> 3) << 12;
      return result;
    }
    v27 = v54 & 0xFFFFFFFFFFFFF000uLL;
    v54 &= 0xFFFFFFFFFFFFF000uLL;
    while ( 1 )
    {
      v47 = v24;
      v28 = v24;
      if ( SizeOfBitMap <= v24 )
      {
        v29 = 0;
        goto LABEL_52;
      }
      v30 = &BitMapHeader.Buffer[(unsigned __int64)(SizeOfBitMap - 1) >> 5];
      v31 = &BitMapHeader.Buffer[(unsigned __int64)v24 >> 5];
      if ( v31 != v30 )
      {
        v32 = v24 & 0x1F;
        if ( (*v31 | *((_DWORD *)qword_140012120 + v32)) == 0xFFFFFFFF )
        {
          ++v31;
          v28 = v24 - v32 + 32;
          v47 = v28;
          if ( v31 < v30 )
          {
            do
            {
              if ( *v31 != -1 )
                break;
              ++v31;
              v28 += 32;
            }
            while ( v31 < v30 );
            v47 = v28;
          }
        }
      }
      if ( v28 < SizeOfBitMap )
      {
        do
        {
          SizeOfBitMap = BitMapHeader.SizeOfBitMap;
          if ( !_bittest((const signed __int32 *)BitMapHeader.Buffer, v28) )
            break;
          v47 = ++v28;
        }
        while ( v28 < BitMapHeader.SizeOfBitMap );
      }
      v29 = 0;
      if ( v31 == v30 )
        goto LABEL_47;
      if ( (~*((_DWORD *)qword_140012120 + (v28 & 0x1F)) & *v31) != 0 )
        goto LABEL_46;
      v29 = 32 - (v28 & 0x1F);
      if ( v29 != -1 )
        break;
LABEL_62:
      v16 = v49;
LABEL_51:
      v27 = v54;
LABEL_52:
      v50 = v29;
      if ( v24 )
      {
        if ( v28 != v24 )
        {
          v35 = v28 - v24;
          do
          {
            *v26++ = qword_140C4EDB8;
            --v35;
          }
          while ( v35 );
          v52 = v26;
        }
        *(_DWORD *)(v23 + 192) |= 0x20000u;
      }
      v36 = (__int64 *)(v27 + 8LL * v28);
      RtlSetBits(&BitMapHeader, v28, v29);
      if ( v29 )
      {
        v37 = v53;
        v38 = v10;
        v10 = (unsigned __int64)v52;
        v39 = (_QWORD *)(v38 & 0x400);
        v40 = v29;
        v41 = v58;
        v51 = (unsigned int)v39;
        v55 = v40;
        while ( 2 )
        {
          v42 = v48;
          v43 = *(_QWORD *)(v48 + 24) & 0xFFFFFFFFFLL;
          if ( v43 == 0xFFFFFFFFFLL )
            v48 = 0LL;
          else
            v48 = 48 * v43 - 0x58000000000LL;
          v49 = --v16;
          v44 = (v42 + 0x58000000000LL) / 48;
          *(_QWORD *)v10 = v44;
          v10 += 8LL;
          if ( v39 )
            v45 = MI_READ_PTE_LOCK_FREE(v36);
          else
            v45 = *(_QWORD *)(v59 + 16);
          *(_QWORD *)(v42 + 16) = v45;
          if ( v41 )
            MiAdvanceFaultList(v41);
          MiInitializeHardFaultPfn(v42, v37, (_DWORD)v36, v36 == v60, v56);
          v39 = (_QWORD *)v51;
          if ( !v51 )
            goto LABEL_82;
          v46 = MiSwizzleInvalidPte(32 * (a7 & 0x1F | ((v44 & 0xFFFFFFFFFLL) << 7) | 0x40));
          if ( (unsigned int)MiPteInShadowRange(v36) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              if ( !HIBYTE(word_140C4E048) && (v46 & 1) != 0 )
                v46 |= 0x8000000000000000uLL;
              *v36 = v46;
              MiWritePteShadow((__int64)v36, v46);
LABEL_81:
              v39 = (_QWORD *)v51;
LABEL_82:
              ++v36;
              if ( !--v55 )
              {
                v29 = v50;
                v28 = v47;
                v23 = v53;
                v52 = (_QWORD *)v10;
                v26 = (_QWORD *)v10;
                LOWORD(v10) = v61;
                goto LABEL_84;
              }
              continue;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v46 & 1) != 0 )
            {
              v46 |= 0x8000000000000000uLL;
            }
            v16 = v49;
          }
          break;
        }
        *v36 = v46;
        goto LABEL_81;
      }
LABEL_84:
      if ( v16 )
      {
        SizeOfBitMap = BitMapHeader.SizeOfBitMap;
        v24 = v29 + v28;
        v27 = v54;
        if ( v29 + v28 != BitMapHeader.SizeOfBitMap )
          continue;
      }
      goto LABEL_86;
    }
    v33 = v31 + 1;
    while ( v33 < v30 )
    {
      if ( *v33 )
        break;
      ++v33;
      v29 += 32;
      if ( v29 == -1 )
        goto LABEL_62;
    }
LABEL_46:
    v16 = v49;
    SizeOfBitMap = BitMapHeader.SizeOfBitMap;
LABEL_47:
    v34 = v29 + v28;
    if ( v29 + v28 < SizeOfBitMap )
    {
      do
      {
        if ( _bittest((const signed __int32 *)BitMapHeader.Buffer, v34) )
          break;
        if ( v29 == -1 )
          break;
        ++v34;
        ++v29;
      }
      while ( v34 < BitMapHeader.SizeOfBitMap );
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
