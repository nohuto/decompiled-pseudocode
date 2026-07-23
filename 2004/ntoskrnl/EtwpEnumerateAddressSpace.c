/*
 * XREFs of EtwpEnumerateAddressSpace @ 0x140603964
 * Callers:
 *     EtwTraceProcess @ 0x14065E6E4 (EtwTraceProcess.c)
 *     EtwpProcessEnumCallback @ 0x14077FA80 (EtwpProcessEnumCallback.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     RtlImageNtHeader @ 0x140224A90 (RtlImageNtHeader.c)
 *     KeAreAllApcsDisabled @ 0x14024CD10 (KeAreAllApcsDisabled.c)
 *     EtwpTraceImageUnload @ 0x14024FD38 (EtwpTraceImageUnload.c)
 *     EtwTraceKernelEvent @ 0x140250918 (EtwTraceKernelEvent.c)
 *     EtwpLogKernelEvent @ 0x14029B0C0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140600800 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     ObQueryNameStringMode @ 0x14065FDA0 (ObQueryNameStringMode.c)
 *     EtwpTraceImageRundown @ 0x140795F08 (EtwpTraceImageRundown.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

void __fastcall EtwpEnumerateAddressSpace(ULONG_PTR a1, __int64 a2, int *a3)
{
  int v3; // eax
  int v4; // r13d
  ULONG_PTR v6; // r9
  int v7; // edx
  int v8; // ecx
  int v9; // esi
  unsigned __int16 *PoolWithTag; // r14
  __int16 v11; // r12
  PVOID v12; // rax
  __int64 i; // rdi
  __int64 v14; // rax
  int v15; // edx
  unsigned __int64 v16; // rax
  __int64 v17; // r13
  PIMAGE_NT_HEADERS v18; // rax
  int CheckSum; // r8d
  int TimeDateStamp; // edx
  __int64 ImageBase; // r9
  struct _DMA_ADAPTER *v22; // r8
  unsigned int v23; // eax
  int v24; // ecx
  unsigned int v25; // r8d
  char v26; // cl
  unsigned __int64 v27; // rcx
  __m128i v28; // xmm2
  __m128i v29; // xmm3
  unsigned int v30; // ecx
  int v31; // ecx
  int v32; // [rsp+54h] [rbp-154h] BYREF
  __int16 v33; // [rsp+58h] [rbp-150h]
  __int16 v34; // [rsp+5Ch] [rbp-14Ch]
  __int16 v35; // [rsp+60h] [rbp-148h]
  int v36; // [rsp+64h] [rbp-144h]
  int v37; // [rsp+68h] [rbp-140h]
  int v38; // [rsp+6Ch] [rbp-13Ch]
  int v39; // [rsp+70h] [rbp-138h]
  int v40; // [rsp+74h] [rbp-134h]
  int v41; // [rsp+78h] [rbp-130h]
  int v42; // [rsp+7Ch] [rbp-12Ch]
  int v43; // [rsp+80h] [rbp-128h]
  int v44; // [rsp+84h] [rbp-124h]
  int v45; // [rsp+88h] [rbp-120h]
  int v46; // [rsp+8Ch] [rbp-11Ch]
  int NameStringMode; // [rsp+90h] [rbp-118h]
  ULONG_PTR BugCheckParameter1; // [rsp+98h] [rbp-110h]
  __int64 v49; // [rsp+A0h] [rbp-108h]
  int v50; // [rsp+A8h] [rbp-100h]
  int v51; // [rsp+ACh] [rbp-FCh]
  int v52; // [rsp+B0h] [rbp-F8h]
  int v53; // [rsp+B4h] [rbp-F4h]
  __int64 v54; // [rsp+B8h] [rbp-F0h] BYREF
  __int64 v55; // [rsp+C0h] [rbp-E8h]
  __int64 v56; // [rsp+C8h] [rbp-E0h]
  unsigned __int16 *v57; // [rsp+D0h] [rbp-D8h]
  __int64 v58; // [rsp+D8h] [rbp-D0h]
  __int64 v59; // [rsp+E0h] [rbp-C8h]
  __int64 v60; // [rsp+E8h] [rbp-C0h]
  __int64 v61; // [rsp+F0h] [rbp-B8h]
  __int64 v62; // [rsp+F8h] [rbp-B0h]
  __int64 v63; // [rsp+100h] [rbp-A8h]
  ULONG_PTR v64; // [rsp+108h] [rbp-A0h]
  __int64 v65; // [rsp+110h] [rbp-98h]
  PVOID P; // [rsp+118h] [rbp-90h]
  __int128 v67; // [rsp+150h] [rbp-58h] BYREF
  __int64 v68; // [rsp+160h] [rbp-48h] BYREF
  unsigned int v69; // [rsp+168h] [rbp-40h]
  int v70; // [rsp+16Ch] [rbp-3Ch]

  v6 = a1;
  BugCheckParameter1 = a1;
  v64 = a1;
  v65 = a2;
  v32 = 0;
  v67 = 0LL;
  v54 = 0LL;
  if ( !a3 || (v3 = *a3, v7 = 1, (*a3 & 4) == 0) )
    v7 = 0;
  if ( !a3 || (v3 = a3[1], LOBYTE(v3) = 1, (a3[1] & 0x8000) == 0) )
    LOBYTE(v3) = 0;
  v8 = v7 | 4;
  if ( !(_BYTE)v3 )
    v8 = v7;
  v9 = v8;
  v36 = v8;
  if ( a2 )
  {
    if ( !a3 || (v3 = *a3, LOBYTE(v3) = 1, (*a3 & 0x8000) == 0) )
      LOBYTE(v3) = 0;
    v36 = v8;
    if ( (_BYTE)v3 )
    {
      v9 = v8 | 2;
      v36 = v8 | 2;
    }
  }
  if ( !v9 )
  {
    PoolWithTag = 0LL;
    goto LABEL_38;
  }
  if ( a2 )
  {
    v49 = *(_QWORD *)(a2 + 32);
    v58 = v49;
    v26 = *(_BYTE *)(a2 + 64);
    PoolWithTag = *(unsigned __int16 **)(a2 + 16);
    LOWORD(v7) = 5124 - (v26 != 0);
    v40 = v7;
    v33 = v7;
    LOWORD(v4) = 1064 - (v26 != 0);
    LOWORD(v3) = 641 - (v26 != 0);
  }
  else
  {
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2000uLL, 0x66726550u);
    v4 = 1062;
    v3 = 611;
    v49 = 0LL;
    v58 = 0LL;
    v40 = 0;
    v33 = 0;
    v6 = BugCheckParameter1;
  }
  v35 = v3;
  v43 = v3;
  v34 = v4;
  v37 = v4;
  v57 = PoolWithTag;
  if ( PoolWithTag || (v9 &= ~1u, (v36 = v9) != 0) )
  {
    v56 = 0LL;
    v44 = 0;
    v55 = 0LL;
    v45 = 0;
    v60 = 0LL;
    v11 = 0;
    v39 = 0;
    v12 = MmEnumerateAddressSpaceAndReferenceImages(v6, v9);
    P = v12;
    if ( v12 )
    {
      for ( i = (__int64)v12; ; i += 48LL )
      {
        v61 = i;
        if ( !*(_QWORD *)i )
        {
          ExFreePoolWithTag(P, 0);
          goto LABEL_38;
        }
        v14 = *(_QWORD *)i & 3LL;
        *(_QWORD *)i &= 0xFFFFFFFFFFFFFFFCuLL;
        v15 = 0;
        v42 = 0;
        v51 = 0;
        if ( !v14 )
          break;
        if ( v14 != 2 )
        {
          v11 = v4;
          v25 = 0x8000;
          v39 = 0x8000;
          v15 = 3;
          v23 = 44;
          v32 = 44;
          v24 = 1;
          goto LABEL_34;
        }
        v11 = v43;
        v25 = 536903680;
        v39 = 536903680;
        if ( a2 )
        {
          v23 = 32;
          v32 = 32;
        }
        else
        {
          v32 = 24;
          *(_DWORD *)(i + 20) = 0x8000;
          v23 = v32;
        }
LABEL_58:
        if ( a2 )
        {
          v30 = 5249026;
          if ( v15 )
            v30 = v15 | 0x501800;
          *(_QWORD *)&v67 = i;
          *((_QWORD *)&v67 + 1) = v23;
          EtwpLogKernelEvent((__int64)&v67, *(_QWORD *)(v49 + 1112), *(_DWORD *)v49, 1u, v11, v30);
        }
        else
        {
          v31 = 5249282;
          if ( v15 )
            v31 = v15 | 0x501900;
          v68 = i;
          v69 = v23;
          v70 = 0;
          EtwTraceKernelEvent((int)&v68, 1, v25, v11, v31);
        }
LABEL_35:
        ;
      }
      if ( (v9 & 2) != 0 )
      {
        v38 = 1;
        v27 = *(_QWORD *)(i + 8);
        v56 = (v27 >> 1) & 0x1F;
        v44 = (v27 >> 1) & 0x1F;
        v60 = *(_QWORD *)(i + 32);
        v16 = v27 & 0xFFFFFFFFFFFFFFC0uLL;
        *(_QWORD *)(i + 8) = v27 & 0xFFFFFFFFFFFFFFC0uLL;
        LODWORD(v27) = v27 & 1;
        v55 = (unsigned int)v27;
        v45 = v27;
      }
      else
      {
        v38 = 0;
        v16 = *(_QWORD *)(i + 8);
      }
      v17 = (v16 >> 6) & 0xF;
      v53 = (v16 >> 6) & 0xF;
      v63 = (v16 >> 10) & 7;
      v50 = (v16 >> 10) & 7;
      *(_QWORD *)(i + 8) = v16 & 0xFFFFFFFFFFFFE03FuLL;
      v54 = 0LL;
      if ( KeAreAllApcsDisabled() )
        __int2c();
      if ( !FltMgrCallbacks
        || (NameStringMode = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int16 *, __int64 *))(FltMgrCallbacks + 24))(
                               *(_QWORD *)i,
                               1024LL,
                               PoolWithTag,
                               &v54),
            NameStringMode < 0) )
      {
        NameStringMode = ObQueryNameStringMode(*(_QWORD *)i, (_DWORD)PoolWithTag, 0x2000, (unsigned int)&v32, 0);
      }
      v41 = 0;
      v52 = *(_DWORD *)(i + 40);
      v46 = v52;
      v62 = *(_QWORD *)(i + 16);
      v59 = v62;
      v18 = RtlImageNtHeader(*(PVOID *)(i + 8));
      if ( v18 )
      {
        CheckSum = v18->OptionalHeader.CheckSum;
        v46 = CheckSum;
        TimeDateStamp = v18->FileHeader.TimeDateStamp;
        v41 = TimeDateStamp;
        ImageBase = v18->OptionalHeader.ImageBase;
        v59 = ImageBase;
      }
      else
      {
        TimeDateStamp = v41;
        CheckSum = v52;
        ImageBase = v62;
      }
      if ( NameStringMode >= 0 )
      {
        if ( a2 )
          EtwpTraceImageRundown(
            v49,
            (unsigned __int16)v40,
            (_DWORD)PoolWithTag,
            *(_QWORD *)(BugCheckParameter1 + 1088),
            i,
            v17,
            v63);
        else
          EtwpTraceImageUnload(
            PoolWithTag,
            BugCheckParameter1,
            *(_QWORD *)(i + 8),
            *(_QWORD *)(i + 24),
            CheckSum,
            TimeDateStamp,
            v17,
            v63,
            ImageBase,
            0);
      }
      if ( v54 )
        (*(void (**)(void))(FltMgrCallbacks + 32))();
      v22 = *(struct _DMA_ADAPTER **)i;
      if ( v38 )
      {
        v28 = *(__m128i *)i;
        v29 = *(__m128i *)(i + 16);
        *(_OWORD *)i = 0LL;
        *(_OWORD *)(i + 16) = 0LL;
        *(_OWORD *)(i + 32) = 0LL;
        *(_DWORD *)(i + 40) = *(_DWORD *)(BugCheckParameter1 + 1088);
        *(_QWORD *)(i + 8) = *(_QWORD *)(v28.m128i_i64[0] + 24);
        *(_QWORD *)i = _mm_srli_si128(v28, 8).m128i_u64[0];
        *(_QWORD *)(i + 24) = _mm_srli_si128(v29, 8).m128i_u64[0];
        *(_QWORD *)(i + 32) = v60;
        *(_QWORD *)(i + 16) = *(_QWORD *)(i + 16) & 0xFF40FFFFFFFFFFFFuLL | ((v56 & 0x1F | (32 * (v55 & 1))) << 48) | 0x40000000000000LL;
        LOWORD(v4) = v37;
        v11 = v37;
        v39 = 0x8000;
        v42 = 3;
        v32 = 44;
      }
      else
      {
        LOWORD(v4) = v37;
      }
      HalPutDmaAdapter(v22);
      v23 = v32;
      v24 = v38;
      v15 = v42;
      v25 = v39;
LABEL_34:
      if ( !v24 )
        goto LABEL_35;
      goto LABEL_58;
    }
  }
LABEL_38:
  if ( !a2 && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
}
