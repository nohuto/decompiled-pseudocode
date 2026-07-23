/*
 * XREFs of MiBuildMdlForMappedFileFault @ 0x1402B9F20
 * Callers:
 *     MiResolveMappedFileFault @ 0x14025E350 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiSetPfnBlink @ 0x140221F20 (MiSetPfnBlink.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiProtectionToCacheAttribute @ 0x1402B84B0 (MiProtectionToCacheAttribute.c)
 *     MiInitializeHardFaultPfn @ 0x1402B9C80 (MiInitializeHardFaultPfn.c)
 *     RtlSetBits @ 0x1402D6370 (RtlSetBits.c)
 *     MiGetHardFaultPages @ 0x1402E0D70 (MiGetHardFaultPages.c)
 *     RtlSetAllBits @ 0x14030C990 (RtlSetAllBits.c)
 *     MiAdvanceFaultList @ 0x140312138 (MiAdvanceFaultList.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiReduceMappedFileReadAhead @ 0x14034930C (MiReduceMappedFileReadAhead.c)
 *     MiReduceMappedFileReadBehind @ 0x14035486C (MiReduceMappedFileReadBehind.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

__int64 __fastcall MiBuildMdlForMappedFileFault(
        __int64 a1,
        unsigned __int64 a2,
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
  unsigned int v14; // r14d
  unsigned __int64 i; // rsi
  __int64 v16; // rbx
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // rbx
  unsigned int v20; // ebx
  unsigned int v21; // eax
  __int64 v22; // r13
  unsigned int v23; // r11d
  unsigned int SizeOfBitMap; // r10d
  __int64 *v25; // r12
  unsigned __int64 v26; // rdx
  unsigned int v27; // esi
  unsigned int *v28; // r8
  unsigned int *v29; // rax
  ULONG v30; // r14d
  int v31; // r9d
  unsigned int *v32; // rax
  unsigned int v33; // ecx
  unsigned __int64 v34; // r15
  unsigned __int64 v35; // r8
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // r13
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // r12
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  bool v52; // zf
  __int64 result; // rax
  __int64 v54; // rcx
  __int64 v55; // rsi
  ULONG v56; // ebx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  int v61; // [rsp+40h] [rbp-B9h]
  unsigned int v62; // [rsp+44h] [rbp-B5h]
  __int64 v63; // [rsp+48h] [rbp-B1h] BYREF
  __int64 v64; // [rsp+50h] [rbp-A9h]
  __int64 *v65; // [rsp+58h] [rbp-A1h]
  __int64 v66; // [rsp+60h] [rbp-99h]
  __int64 v67; // [rsp+68h] [rbp-91h]
  unsigned __int64 v68; // [rsp+70h] [rbp-89h]
  unsigned int v69; // [rsp+78h] [rbp-81h]
  unsigned int v70; // [rsp+7Ch] [rbp-7Dh]
  __int64 v71; // [rsp+80h] [rbp-79h]
  __int64 v72; // [rsp+88h] [rbp-71h]
  __int64 v73; // [rsp+90h] [rbp-69h]
  unsigned __int64 v74; // [rsp+98h] [rbp-61h]
  _RTL_BITMAP BitMapHeader; // [rsp+A0h] [rbp-59h] BYREF
  _OWORD v76[4]; // [rsp+B0h] [rbp-49h] BYREF

  v10 = *(_QWORD *)(a1 + 168);
  v71 = a8;
  v66 = a9;
  v65 = a10;
  v73 = *(_QWORD *)(a1 + 232);
  v67 = a1;
  BitMapHeader.Buffer = (unsigned int *)v76;
  v68 = a2;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 512LL;
  memset(v76, 0, sizeof(v76));
  v74 = v10;
  RtlSetAllBits(&BitMapHeader);
  v72 = 0LL;
  v14 = 0;
  for ( i = a2; i <= a3; i += 8LL )
  {
    v16 = *(_QWORD *)i;
    if ( MiPteInShadowRange(i)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v16 & 1) != 0
      && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v58 = *((_QWORD *)&Flink->Flink + ((i >> 3) & 0x1FF));
        v59 = v16 | 0x20;
        if ( (v58 & 0x20) == 0 )
          v59 = v16;
        v16 = v59;
        if ( (v58 & 0x42) != 0 )
          v16 = v59 | 0x42;
      }
    }
    if ( v16 == v10 )
    {
      _bittestandreset((signed __int32 *)BitMapHeader.Buffer, ((unsigned int)i >> 3) & 0x1FF);
      ++v14;
    }
  }
  v17 = v14;
  if ( v14 > (unsigned __int64)a5 )
    v17 = a5;
  if ( a6 == -1 )
  {
    v63 = 0LL;
    v64 = 0LL;
  }
  else
  {
    MiSetPfnBlink(48 * a6 - 0x58000000000LL, 0xFFFFFFFFFLL, 0);
    v63 = 48 * a6 - 0x58000000000LL;
    v64 = 1LL;
  }
  if ( v64 == v17 )
  {
    v19 = v71;
  }
  else
  {
    v18 = v10;
    if ( (v10 & 0x400) == 0 )
    {
      if ( qword_140C4DD40 && (v10 & 0x10) == 0 )
        v18 = v10 & ~qword_140C4DD40;
      v72 = 48 * ((v18 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v18 = *(_QWORD *)(v72 + 16);
    }
    v19 = v71;
    MiGetHardFaultPages((unsigned int)&v63, v17, a4, v71, v66, v67, v18, (__int64)v65);
  }
  if ( v64 != v14 )
  {
    if ( v19 )
      *(_BYTE *)(v19 + 1) = 2;
    if ( !v64 )
      return 0LL;
    v55 = v64;
    v56 = ((unsigned int)v73 >> 3) & 0x1FF;
    if ( v55 != v14 - (unsigned int)MiReduceMappedFileReadBehind(&BitMapHeader, v56) )
      MiReduceMappedFileReadAhead(&BitMapHeader, v56);
  }
  v20 = v64;
  v70 = v64;
  v21 = MiProtectionToCacheAttribute(a7);
  v22 = v67;
  v23 = 0;
  SizeOfBitMap = BitMapHeader.SizeOfBitMap;
  v69 = v21;
  v25 = (__int64 *)(v67 + 320);
  if ( !BitMapHeader.SizeOfBitMap )
    goto LABEL_57;
  v26 = v68 & 0xFFFFFFFFFFFFF000uLL;
  v68 &= 0xFFFFFFFFFFFFF000uLL;
  do
  {
    v62 = v23;
    v27 = v23;
    if ( SizeOfBitMap > v23 )
    {
      v28 = &BitMapHeader.Buffer[(unsigned __int64)(SizeOfBitMap - 1) >> 5];
      v29 = &BitMapHeader.Buffer[(unsigned __int64)v23 >> 5];
      if ( v29 != v28 && (*v29 | *((_DWORD *)qword_140011690 + (v23 & 0x1F))) == 0xFFFFFFFF )
      {
        ++v29;
        v27 = v23 - (v23 & 0x1F) + 32;
        v62 = v27;
        if ( v29 < v28 )
        {
          do
          {
            if ( *v29 != -1 )
              break;
            ++v29;
            v27 += 32;
          }
          while ( v29 < v28 );
          v62 = v27;
        }
      }
      if ( v27 < SizeOfBitMap )
      {
        do
        {
          SizeOfBitMap = BitMapHeader.SizeOfBitMap;
          if ( !_bittest((const signed __int32 *)BitMapHeader.Buffer, v27) )
            break;
          v62 = ++v27;
        }
        while ( v27 < BitMapHeader.SizeOfBitMap );
      }
      v30 = 0;
      v61 = 0;
      if ( v29 != v28 )
      {
        v31 = v27 & 0x1F;
        if ( (*v29 & ~*((_DWORD *)qword_140011690 + (v27 & 0x1F))) == 0 )
        {
          v30 = 32 - v31;
          v61 = 32 - v31;
          if ( v31 == 33 )
          {
LABEL_39:
            v26 = v68;
            goto LABEL_40;
          }
          v32 = v29 + 1;
          while ( v32 < v28 )
          {
            if ( *v32 )
              break;
            v30 += 32;
            ++v32;
            v61 = v30;
            if ( v30 == -1 )
              goto LABEL_39;
          }
        }
        SizeOfBitMap = BitMapHeader.SizeOfBitMap;
      }
      v33 = v30 + v27;
      if ( v30 + v27 < SizeOfBitMap )
      {
        do
        {
          if ( _bittest((const signed __int32 *)BitMapHeader.Buffer, v33) )
            break;
          if ( v30 == -1 )
            break;
          ++v33;
          ++v30;
        }
        while ( v33 < BitMapHeader.SizeOfBitMap );
        v61 = v30;
      }
      goto LABEL_39;
    }
    v30 = 0;
    v61 = 0;
LABEL_40:
    if ( v23 )
    {
      if ( v27 != v23 )
      {
        v54 = v27 - v23;
        do
        {
          *v25++ = qword_140C4EB78;
          --v54;
        }
        while ( v54 );
      }
      *(_DWORD *)(v22 + 192) |= 0x20000u;
    }
    v34 = v26 + 8LL * v27;
    RtlSetBits(&BitMapHeader, v27, v30);
    if ( v30 )
    {
      v35 = v34;
      v65 = (__int64 *)(v10 & 0x400);
      v36 = (__int64)v65;
      v37 = v30;
      v38 = v67;
      v66 = v37;
      while ( 1 )
      {
        v39 = v63;
        v40 = *(_QWORD *)(v63 + 24) & 0xFFFFFFFFFLL;
        if ( v40 == 0xFFFFFFFFFLL )
          v63 = 0LL;
        else
          v63 = 48 * v40 - 0x58000000000LL;
        --v64;
        v41 = (v39 + 0x58000000000LL) / 48;
        *v25 = v41;
        v65 = v25 + 1;
        v42 = *(_QWORD *)v34;
        if ( MiPteInShadowRange(v35)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v42 & 1) != 0
          && ((v42 & 0x20) == 0 || (v42 & 0x42) == 0) )
        {
          v43 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v43 )
          {
            v60 = *(_QWORD *)(v43 + 8 * ((v34 >> 3) & 0x1FF));
            v43 = v42 | 0x20;
            if ( (v60 & 0x20) == 0 )
              v43 = v42;
            v42 = v43;
            if ( (v60 & 0x42) != 0 )
              v42 = v43 | 0x42;
          }
        }
        if ( !v36 )
          v42 = *(_QWORD *)(v72 + 16);
        v46 = v71;
        *(_QWORD *)(v39 + 16) = v42;
        if ( v46 )
          MiAdvanceFaultList(v46, v43, v44, v45);
        MiInitializeHardFaultPfn(v39, v38, v34, v34 == v73, v69);
        if ( !v36 )
          goto LABEL_53;
        v47 = MiSwizzleInvalidPte(32 * (a7 & 0x1F | ((v41 & 0xFFFFFFFFFLL) << 7) | 0x40));
        if ( MiPteInShadowRange(v34) )
        {
          if ( (unsigned int)MiPteHasShadow(v49, v48, v50, v51) )
          {
            if ( !HIBYTE(word_140C4DE08) && (v47 & 1) != 0 )
              v47 |= 0x8000000000000000uLL;
            *(_QWORD *)v34 = v47;
            MiWritePteShadow(v34, v47);
            goto LABEL_53;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v47 & 1) != 0 )
          {
            v47 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v34 = v47;
LABEL_53:
        v25 = v65;
        v34 += 8LL;
        v52 = v66-- == 1;
        v35 = v34;
        if ( v52 )
        {
          LOWORD(v10) = v74;
          v27 = v62;
          v30 = v61;
          v22 = v67;
          break;
        }
      }
    }
    if ( !v64 )
      break;
    SizeOfBitMap = BitMapHeader.SizeOfBitMap;
    v23 = v30 + v27;
    v26 = v68;
  }
  while ( v30 + v27 != BitMapHeader.SizeOfBitMap );
  v20 = v70;
LABEL_57:
  result = v20;
  *(_DWORD *)(v22 + 184) = (unsigned int)(((__int64)v25 - v22 - 320) >> 3) << 12;
  return result;
}
