/*
 * XREFs of EtwpEnumerateAddressSpace @ 0x1406389A4
 * Callers:
 *     EtwTraceProcess @ 0x1405D83E4 (EtwTraceProcess.c)
 *     EtwpProcessEnumCallback @ 0x140780460 (EtwpProcessEnumCallback.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1402085B0 (EtwpLogKernelEvent.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     RtlImageNtHeader @ 0x14027DAE0 (RtlImageNtHeader.c)
 *     KeAreAllApcsDisabled @ 0x1402A5D40 (KeAreAllApcsDisabled.c)
 *     EtwpTraceImageUnload @ 0x1402A8D68 (EtwpTraceImageUnload.c)
 *     EtwTraceKernelEvent @ 0x1402A9948 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     ObQueryNameStringMode @ 0x1405D9AA0 (ObQueryNameStringMode.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140635840 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     EtwpTraceImageRundown @ 0x140796158 (EtwpTraceImageRundown.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

void __fastcall EtwpEnumerateAddressSpace(ULONG_PTR a1, __int64 a2, int *a3)
{
  int v3; // eax
  int v4; // r13d
  _DWORD *v6; // r9
  int v7; // edx
  int v8; // ecx
  int v9; // esi
  __int64 v10; // r8
  unsigned __int16 *PoolWithTag; // r14
  unsigned __int16 v12; // r12
  __m128i *v13; // rax
  __m128i *i; // rdi
  __int64 v15; // rax
  int v16; // edx
  unsigned __int64 v17; // rax
  __int64 v18; // r13
  PIMAGE_NT_HEADERS v19; // rax
  int CheckSum; // r8d
  int TimeDateStamp; // edx
  __int64 ImageBase; // r9
  char *v23; // r8
  unsigned int v24; // eax
  int v25; // ecx
  unsigned int v26; // r8d
  char v27; // cl
  unsigned __int64 v28; // rcx
  __m128i v29; // xmm2
  __m128i v30; // xmm3
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  int v33; // [rsp+54h] [rbp-154h] BYREF
  __int16 v34; // [rsp+58h] [rbp-150h]
  __int16 v35; // [rsp+5Ch] [rbp-14Ch]
  __int16 v36; // [rsp+60h] [rbp-148h]
  int v37; // [rsp+64h] [rbp-144h]
  int v38; // [rsp+68h] [rbp-140h]
  int v39; // [rsp+6Ch] [rbp-13Ch]
  int v40; // [rsp+70h] [rbp-138h]
  int v41; // [rsp+74h] [rbp-134h]
  int v42; // [rsp+78h] [rbp-130h]
  int v43; // [rsp+7Ch] [rbp-12Ch]
  int v44; // [rsp+80h] [rbp-128h]
  int v45; // [rsp+84h] [rbp-124h]
  int v46; // [rsp+88h] [rbp-120h]
  int v47; // [rsp+8Ch] [rbp-11Ch]
  int v48; // [rsp+90h] [rbp-118h]
  ULONG_PTR BugCheckParameter1; // [rsp+98h] [rbp-110h]
  __int64 v50; // [rsp+A0h] [rbp-108h]
  int v51; // [rsp+A8h] [rbp-100h]
  int v52; // [rsp+ACh] [rbp-FCh]
  int v53; // [rsp+B0h] [rbp-F8h]
  int v54; // [rsp+B4h] [rbp-F4h]
  __int64 v55; // [rsp+B8h] [rbp-F0h] BYREF
  __int64 v56; // [rsp+C0h] [rbp-E8h]
  __int64 v57; // [rsp+C8h] [rbp-E0h]
  unsigned __int16 *v58; // [rsp+D0h] [rbp-D8h]
  __int64 v59; // [rsp+D8h] [rbp-D0h]
  __int64 v60; // [rsp+E0h] [rbp-C8h]
  __int64 v61; // [rsp+E8h] [rbp-C0h]
  __m128i *v62; // [rsp+F0h] [rbp-B8h]
  __int64 v63; // [rsp+F8h] [rbp-B0h]
  __int64 v64; // [rsp+100h] [rbp-A8h]
  ULONG_PTR v65; // [rsp+108h] [rbp-A0h]
  __int64 v66; // [rsp+110h] [rbp-98h]
  PVOID P; // [rsp+118h] [rbp-90h]
  __int128 v68; // [rsp+150h] [rbp-58h] BYREF
  __m128i *v69; // [rsp+160h] [rbp-48h] BYREF
  unsigned int v70; // [rsp+168h] [rbp-40h]
  int v71; // [rsp+16Ch] [rbp-3Ch]

  v6 = (_DWORD *)a1;
  BugCheckParameter1 = a1;
  v65 = a1;
  v66 = a2;
  v33 = 0;
  v68 = 0LL;
  v55 = 0LL;
  if ( !a3 || (v3 = *a3, v7 = 1, (*a3 & 4) == 0) )
    v7 = 0;
  if ( !a3 || (v3 = a3[1], LOBYTE(v3) = 1, (a3[1] & 0x8000) == 0) )
    LOBYTE(v3) = 0;
  v8 = v7 | 4;
  if ( !(_BYTE)v3 )
    v8 = v7;
  v9 = v8;
  v37 = v8;
  if ( a2 )
  {
    if ( !a3 || (v3 = *a3, LOBYTE(v3) = 1, (*a3 & 0x8000) == 0) )
      LOBYTE(v3) = 0;
    v37 = v8;
    if ( (_BYTE)v3 )
    {
      v9 = v8 | 2;
      v37 = v8 | 2;
    }
  }
  if ( !v9 )
  {
    PoolWithTag = 0LL;
    goto LABEL_38;
  }
  if ( a2 )
  {
    v10 = *(_QWORD *)(a2 + 32);
    v50 = v10;
    v59 = v10;
    v27 = *(_BYTE *)(a2 + 64);
    PoolWithTag = *(unsigned __int16 **)(a2 + 16);
    LOWORD(v7) = 5124 - (v27 != 0);
    v41 = v7;
    v34 = v7;
    LOWORD(v4) = 1064 - (v27 != 0);
    LOWORD(v3) = 641 - (v27 != 0);
  }
  else
  {
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2000uLL, 0x66726550u);
    v4 = 1062;
    v3 = 611;
    v50 = 0LL;
    v59 = 0LL;
    v41 = 0;
    v34 = 0;
    v6 = (_DWORD *)BugCheckParameter1;
  }
  v36 = v3;
  v44 = v3;
  v35 = v4;
  v38 = v4;
  v58 = PoolWithTag;
  if ( PoolWithTag || (v9 &= ~1u, (v37 = v9) != 0) )
  {
    v57 = 0LL;
    v45 = 0;
    v56 = 0LL;
    v46 = 0;
    v61 = 0LL;
    v12 = 0;
    v40 = 0;
    v13 = (__m128i *)MmEnumerateAddressSpaceAndReferenceImages((__int64)v6, v9, v10, v6);
    P = v13;
    if ( v13 )
    {
      for ( i = v13; ; i += 3 )
      {
        v62 = i;
        if ( !i->m128i_i64[0] )
        {
          ExFreePoolWithTag(P, 0);
          goto LABEL_38;
        }
        v15 = i->m128i_i64[0] & 3;
        i->m128i_i64[0] &= 0xFFFFFFFFFFFFFFFCuLL;
        v16 = 0;
        v43 = 0;
        v52 = 0;
        if ( !v15 )
          break;
        if ( v15 != 2 )
        {
          v12 = v4;
          v26 = 0x8000;
          v40 = 0x8000;
          v16 = 3;
          v24 = 44;
          v33 = 44;
          v25 = 1;
          goto LABEL_34;
        }
        v12 = v44;
        v26 = 536903680;
        v40 = 536903680;
        if ( a2 )
        {
          v24 = 32;
          v33 = 32;
        }
        else
        {
          v33 = 24;
          i[1].m128i_i32[1] = 0x8000;
          v24 = v33;
        }
LABEL_58:
        if ( a2 )
        {
          v31 = 5249026;
          if ( v16 )
            v31 = v16 | 0x501800;
          *(_QWORD *)&v68 = i;
          *((_QWORD *)&v68 + 1) = v24;
          EtwpLogKernelEvent((__int64)&v68, *(_QWORD *)(v50 + 1112), *(_DWORD *)v50, 1u, v12, v31);
        }
        else
        {
          v32 = 5249282;
          if ( v16 )
            v32 = v16 | 0x501900;
          v69 = i;
          v70 = v24;
          v71 = 0;
          EtwTraceKernelEvent((__int64)&v69, 1u, v26, v12, v32);
        }
LABEL_35:
        ;
      }
      if ( (v9 & 2) != 0 )
      {
        v39 = 1;
        v28 = i->m128i_u64[1];
        v57 = (v28 >> 1) & 0x1F;
        v45 = (v28 >> 1) & 0x1F;
        v61 = i[2].m128i_i64[0];
        v17 = v28 & 0xFFFFFFFFFFFFFFC0uLL;
        i->m128i_i64[1] = v28 & 0xFFFFFFFFFFFFFFC0uLL;
        LODWORD(v28) = v28 & 1;
        v56 = (unsigned int)v28;
        v46 = v28;
      }
      else
      {
        v39 = 0;
        v17 = i->m128i_u64[1];
      }
      v18 = (v17 >> 6) & 0xF;
      v54 = (v17 >> 6) & 0xF;
      v64 = (v17 >> 10) & 7;
      v51 = (v17 >> 10) & 7;
      i->m128i_i64[1] = v17 & 0xFFFFFFFFFFFFE03FuLL;
      v55 = 0LL;
      if ( KeAreAllApcsDisabled() )
        __int2c();
      if ( !FltMgrCallbacks
        || (v48 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int16 *, __int64 *))(FltMgrCallbacks + 24))(
                    i->m128i_i64[0],
                    1024LL,
                    PoolWithTag,
                    &v55),
            v48 < 0) )
      {
        v48 = ObQueryNameStringMode((char *)i->m128i_i64[0], (__int64)PoolWithTag, 0x2000u, &v33, 0);
      }
      v42 = 0;
      v53 = i[2].m128i_i32[2];
      v47 = v53;
      v63 = i[1].m128i_i64[0];
      v60 = v63;
      v19 = RtlImageNtHeader((PVOID)i->m128i_i64[1]);
      if ( v19 )
      {
        CheckSum = v19->OptionalHeader.CheckSum;
        v47 = CheckSum;
        TimeDateStamp = v19->FileHeader.TimeDateStamp;
        v42 = TimeDateStamp;
        ImageBase = v19->OptionalHeader.ImageBase;
        v60 = ImageBase;
      }
      else
      {
        TimeDateStamp = v42;
        CheckSum = v53;
        ImageBase = v63;
      }
      if ( v48 >= 0 )
      {
        if ( a2 )
          EtwpTraceImageRundown(
            v50,
            (unsigned __int16)v41,
            (_DWORD)PoolWithTag,
            *(_QWORD *)(BugCheckParameter1 + 1088),
            (__int64)i,
            v18,
            v64);
        else
          EtwpTraceImageUnload(
            PoolWithTag,
            BugCheckParameter1,
            i->m128i_i64[1],
            i[1].m128i_i64[1],
            CheckSum,
            TimeDateStamp,
            v18,
            v64,
            ImageBase,
            0);
      }
      if ( v55 )
        (*(void (**)(void))(FltMgrCallbacks + 32))();
      v23 = (char *)i->m128i_i64[0];
      if ( v39 )
      {
        v29 = *i;
        v30 = i[1];
        *i = 0LL;
        i[1] = 0LL;
        i[2] = 0LL;
        i[2].m128i_i32[2] = *(_DWORD *)(BugCheckParameter1 + 1088);
        i->m128i_i64[1] = *(_QWORD *)(v29.m128i_i64[0] + 24);
        i->m128i_i64[0] = _mm_srli_si128(v29, 8).m128i_u64[0];
        i[1].m128i_i64[1] = _mm_srli_si128(v30, 8).m128i_u64[0];
        i[2].m128i_i64[0] = v61;
        i[1].m128i_i64[0] = i[1].m128i_i64[0] & 0xFF40FFFFFFFFFFFFuLL | ((v57 & 0x1F | (32 * (v56 & 1))) << 48) | 0x40000000000000LL;
        LOWORD(v4) = v38;
        v12 = v38;
        v40 = 0x8000;
        v43 = 3;
        v33 = 44;
      }
      else
      {
        LOWORD(v4) = v38;
      }
      HalPutDmaAdapter((PADAPTER_OBJECT)v23);
      v24 = v33;
      v25 = v39;
      v16 = v43;
      v26 = v40;
LABEL_34:
      if ( !v25 )
        goto LABEL_35;
      goto LABEL_58;
    }
  }
LABEL_38:
  if ( !a2 && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
}
