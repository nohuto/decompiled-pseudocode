/*
 * XREFs of MiBuildMdlForMappedFileFault @ 0x1402272A0
 * Callers:
 *     MiResolveMappedFileFault @ 0x1402B7380 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     MiProtectionToCacheAttribute @ 0x140225830 (MiProtectionToCacheAttribute.c)
 *     MiInitializeHardFaultPfn @ 0x140227000 (MiInitializeHardFaultPfn.c)
 *     MiSetPfnBlink @ 0x14027AF70 (MiSetPfnBlink.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     RtlSetAllBits @ 0x1402CAD50 (RtlSetAllBits.c)
 *     RtlSetBits @ 0x1402E30C0 (RtlSetBits.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiReduceMappedFileReadBehind @ 0x140316DBC (MiReduceMappedFileReadBehind.c)
 *     MiReduceMappedFileReadAhead @ 0x14031991C (MiReduceMappedFileReadAhead.c)
 *     MiGetHardFaultPages @ 0x140325E70 (MiGetHardFaultPages.c)
 *     MiAdvanceFaultList @ 0x140340BDC (MiAdvanceFaultList.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

__int64 __fastcall MiBuildMdlForMappedFileFault(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        __int64 *a10)
{
  unsigned __int64 v10; // rdi
  __int64 Flink; // rdx
  unsigned int v15; // r14d
  __int64 *i; // rsi
  __int64 v17; // rbx
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // rbx
  unsigned int v21; // ebx
  unsigned int v22; // eax
  __int64 v23; // r13
  unsigned int v24; // r11d
  unsigned int SizeOfBitMap; // r10d
  __int64 *v26; // r12
  unsigned __int64 v27; // rdx
  unsigned int v28; // esi
  unsigned int *v29; // r8
  unsigned int *v30; // rax
  ULONG v31; // r14d
  int v32; // r9d
  unsigned int *v33; // rax
  unsigned int v34; // ecx
  unsigned __int64 v35; // r15
  unsigned __int64 v36; // r8
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // r14
  __int64 v40; // r13
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // r12
  __int64 v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rcx
  bool v49; // zf
  __int64 result; // rax
  __int64 v51; // rcx
  __int64 v52; // rsi
  ULONG v53; // ebx
  __int64 v54; // rax
  struct _LIST_ENTRY *v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdx
  int v58; // [rsp+40h] [rbp-B9h]
  unsigned int v59; // [rsp+44h] [rbp-B5h]
  __int64 v60; // [rsp+48h] [rbp-B1h] BYREF
  __int64 v61; // [rsp+50h] [rbp-A9h]
  __int64 *v62; // [rsp+58h] [rbp-A1h]
  __int64 v63; // [rsp+60h] [rbp-99h]
  __int64 v64; // [rsp+68h] [rbp-91h]
  unsigned __int64 v65; // [rsp+70h] [rbp-89h]
  unsigned int v66; // [rsp+78h] [rbp-81h]
  unsigned int v67; // [rsp+7Ch] [rbp-7Dh]
  __int64 v68; // [rsp+80h] [rbp-79h]
  __int64 v69; // [rsp+88h] [rbp-71h]
  __int64 v70; // [rsp+90h] [rbp-69h]
  unsigned __int64 v71; // [rsp+98h] [rbp-61h]
  _RTL_BITMAP BitMapHeader; // [rsp+A0h] [rbp-59h] BYREF
  _OWORD v73[4]; // [rsp+B0h] [rbp-49h] BYREF

  v10 = *(_QWORD *)(a1 + 168);
  v68 = a8;
  v63 = a9;
  v62 = a10;
  v70 = *(_QWORD *)(a1 + 232);
  v64 = a1;
  BitMapHeader.Buffer = (unsigned int *)v73;
  v65 = (unsigned __int64)a2;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 512LL;
  memset(v73, 0, sizeof(v73));
  v71 = v10;
  RtlSetAllBits(&BitMapHeader);
  v69 = 0LL;
  v15 = 0;
  for ( i = a2; (unsigned __int64)i <= a3; ++i )
  {
    v17 = *i;
    if ( (unsigned int)MiPteInShadowRange(i, Flink)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v17 & 1) != 0
      && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
    {
      Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v54 = *(_QWORD *)(Flink + 8 * (((unsigned __int64)i >> 3) & 0x1FF));
        Flink = v17 | 0x20;
        if ( (v54 & 0x20) == 0 )
          Flink = v17;
        v17 = Flink;
        if ( (v54 & 0x42) != 0 )
          v17 = Flink | 0x42;
      }
    }
    if ( v17 == v10 )
    {
      _bittestandreset((signed __int32 *)BitMapHeader.Buffer, ((unsigned int)i >> 3) & 0x1FF);
      ++v15;
    }
  }
  v18 = v15;
  if ( v15 > (unsigned __int64)a5 )
    v18 = a5;
  if ( a6 == -1 )
  {
    v60 = 0LL;
    v61 = 0LL;
  }
  else
  {
    MiSetPfnBlink(48 * a6 - 0x58000000000LL, 0xFFFFFFFFFLL, 0LL);
    v60 = 48 * a6 - 0x58000000000LL;
    v61 = 1LL;
  }
  if ( v61 == v18 )
  {
    v20 = v68;
  }
  else
  {
    v19 = v10;
    if ( (v10 & 0x400) == 0 )
    {
      if ( qword_140C4DE80 && (v10 & 0x10) == 0 )
        v19 = v10 & ~qword_140C4DE80;
      v69 = 48 * ((v19 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v19 = *(_QWORD *)(v69 + 16);
    }
    v20 = v68;
    MiGetHardFaultPages((unsigned int)&v60, v18, a4, v68, v63, v64, v19, (__int64)v62);
  }
  if ( v61 != v15 )
  {
    if ( v20 )
      *(_BYTE *)(v20 + 1) = 2;
    if ( !v61 )
      return 0LL;
    v52 = v61;
    v53 = ((unsigned int)v70 >> 3) & 0x1FF;
    if ( v52 != v15 - (unsigned int)MiReduceMappedFileReadBehind(&BitMapHeader, v53) )
      MiReduceMappedFileReadAhead(&BitMapHeader, v53);
  }
  v21 = v61;
  v67 = v61;
  v22 = MiProtectionToCacheAttribute(a7);
  v23 = v64;
  v24 = 0;
  SizeOfBitMap = BitMapHeader.SizeOfBitMap;
  v66 = v22;
  v26 = (__int64 *)(v64 + 320);
  if ( !BitMapHeader.SizeOfBitMap )
    goto LABEL_57;
  v27 = v65 & 0xFFFFFFFFFFFFF000uLL;
  v65 &= 0xFFFFFFFFFFFFF000uLL;
  do
  {
    v59 = v24;
    v28 = v24;
    if ( SizeOfBitMap > v24 )
    {
      v29 = &BitMapHeader.Buffer[(unsigned __int64)(SizeOfBitMap - 1) >> 5];
      v30 = &BitMapHeader.Buffer[(unsigned __int64)v24 >> 5];
      if ( v30 != v29 && (*v30 | *((_DWORD *)qword_140011AC0 + (v24 & 0x1F))) == 0xFFFFFFFF )
      {
        ++v30;
        v28 = v24 - (v24 & 0x1F) + 32;
        v59 = v28;
        if ( v30 < v29 )
        {
          do
          {
            if ( *v30 != -1 )
              break;
            ++v30;
            v28 += 32;
          }
          while ( v30 < v29 );
          v59 = v28;
        }
      }
      if ( v28 < SizeOfBitMap )
      {
        do
        {
          SizeOfBitMap = BitMapHeader.SizeOfBitMap;
          if ( !_bittest((const signed __int32 *)BitMapHeader.Buffer, v28) )
            break;
          v59 = ++v28;
        }
        while ( v28 < BitMapHeader.SizeOfBitMap );
      }
      v31 = 0;
      v58 = 0;
      if ( v30 != v29 )
      {
        v32 = v28 & 0x1F;
        if ( (*v30 & ~*((_DWORD *)qword_140011AC0 + (v28 & 0x1F))) == 0 )
        {
          v31 = 32 - v32;
          v58 = 32 - v32;
          if ( v32 == 33 )
          {
LABEL_39:
            v27 = v65;
            goto LABEL_40;
          }
          v33 = v30 + 1;
          while ( v33 < v29 )
          {
            if ( *v33 )
              break;
            v31 += 32;
            ++v33;
            v58 = v31;
            if ( v31 == -1 )
              goto LABEL_39;
          }
        }
        SizeOfBitMap = BitMapHeader.SizeOfBitMap;
      }
      v34 = v31 + v28;
      if ( v31 + v28 < SizeOfBitMap )
      {
        do
        {
          if ( _bittest((const signed __int32 *)BitMapHeader.Buffer, v34) )
            break;
          if ( v31 == -1 )
            break;
          ++v34;
          ++v31;
        }
        while ( v34 < BitMapHeader.SizeOfBitMap );
        v58 = v31;
      }
      goto LABEL_39;
    }
    v31 = 0;
    v58 = 0;
LABEL_40:
    if ( v24 )
    {
      if ( v28 != v24 )
      {
        v51 = v28 - v24;
        do
        {
          *v26++ = qword_140C4ECB8;
          --v51;
        }
        while ( v51 );
      }
      *(_DWORD *)(v23 + 192) |= 0x20000u;
    }
    v35 = v27 + 8LL * v28;
    RtlSetBits(&BitMapHeader, v28, v31);
    if ( v31 )
    {
      v36 = v35;
      v62 = (__int64 *)(v10 & 0x400);
      v37 = (__int64)v62;
      v38 = v31;
      v39 = v64;
      v63 = v38;
      while ( 1 )
      {
        v40 = v60;
        v41 = *(_QWORD *)(v60 + 24) & 0xFFFFFFFFFLL;
        if ( v41 == 0xFFFFFFFFFLL )
          v60 = 0LL;
        else
          v60 = 48 * v41 - 0x58000000000LL;
        --v61;
        v42 = (v40 + 0x58000000000LL) / 48;
        *v26 = v42;
        v62 = v26 + 1;
        v43 = *(_QWORD *)v35;
        if ( (unsigned int)MiPteInShadowRange(
                             v36,
                             (unsigned __int128)((v40 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v43 & 1) != 0
          && ((v43 & 0x20) == 0 || (v43 & 0x42) == 0) )
        {
          v55 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v55 )
          {
            v56 = *((_QWORD *)&v55->Flink + ((v35 >> 3) & 0x1FF));
            v57 = v43 | 0x20;
            if ( (v56 & 0x20) == 0 )
              v57 = v43;
            v43 = v57;
            if ( (v56 & 0x42) != 0 )
              v43 = v57 | 0x42;
          }
        }
        if ( !v37 )
          v43 = *(_QWORD *)(v69 + 16);
        v44 = v68;
        *(_QWORD *)(v40 + 16) = v43;
        if ( v44 )
          MiAdvanceFaultList(v44);
        MiInitializeHardFaultPfn(v40, v39, v35, v35 == v70, v66);
        if ( !v37 )
          goto LABEL_53;
        v45 = MiSwizzleInvalidPte(32 * (a7 & 0x1F | ((v42 & 0xFFFFFFFFFLL) << 7) | 0x40));
        if ( (unsigned int)MiPteInShadowRange(v35, v46) )
        {
          if ( (unsigned int)MiPteHasShadow(v48, v47) )
          {
            if ( !HIBYTE(word_140C4DF48) && (v45 & 1) != 0 )
              v45 |= 0x8000000000000000uLL;
            *(_QWORD *)v35 = v45;
            MiWritePteShadow(v35, v45);
            goto LABEL_53;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v45 & 1) != 0 )
          {
            v45 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v35 = v45;
LABEL_53:
        v26 = v62;
        v35 += 8LL;
        v49 = v63-- == 1;
        v36 = v35;
        if ( v49 )
        {
          LOWORD(v10) = v71;
          v28 = v59;
          v31 = v58;
          v23 = v64;
          break;
        }
      }
    }
    if ( !v61 )
      break;
    SizeOfBitMap = BitMapHeader.SizeOfBitMap;
    v24 = v31 + v28;
    v27 = v65;
  }
  while ( v31 + v28 != BitMapHeader.SizeOfBitMap );
  v21 = v67;
LABEL_57:
  result = v21;
  *(_DWORD *)(v23 + 184) = (unsigned int)(((__int64)v26 - v23 - 320) >> 3) << 12;
  return result;
}
