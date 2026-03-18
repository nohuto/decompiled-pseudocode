/*
 * XREFs of PspMapSystemDll @ 0x1406B6060
 * Callers:
 *     PsMapSystemDlls @ 0x1406B5F74 (PsMapSystemDlls.c)
 *     PspLocateSystemDll @ 0x140786744 (PspLocateSystemDll.c)
 *     PspInitPhase3 @ 0x140A70F94 (PspInitPhase3.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140224A90 (RtlImageNtHeader.c)
 *     ObFastDereferenceObject @ 0x140299050 (ObFastDereferenceObject.c)
 *     MmMapViewOfSectionEx @ 0x1402FE010 (MmMapViewOfSectionEx.c)
 *     ZwSetInformationVirtualMemory @ 0x1403F6980 (ZwSetInformationVirtualMemory.c)
 *     PspReferenceSystemDll @ 0x1406B7720 (PspReferenceSystemDll.c)
 */

__int64 __fastcall PspMapSystemDll(struct _KPROCESS *a1, __int64 a2, int a3, int a4)
{
  struct _DMA_ADAPTER *v8; // r14
  bool v9; // zf
  unsigned __int64 v10; // rax
  unsigned int v11; // edi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // [rsp+68h] [rbp-19h] BYREF
  __int64 v17; // [rsp+70h] [rbp-11h] BYREF
  _QWORD v18[3]; // [rsp+78h] [rbp-9h] BYREF
  __int128 v19; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v20; // [rsp+A0h] [rbp+1Fh]
  _QWORD v21[2]; // [rsp+A8h] [rbp+27h] BYREF
  __int128 v22; // [rsp+B8h] [rbp+37h]

  v8 = (struct _DMA_ADAPTER *)PspReferenceSystemDll(a2);
  if ( !v8 )
    return 3221225473LL;
  v16 = 0LL;
  v18[0] = 0LL;
  v17 = 0LL;
  v21[0] = 1LL;
  v21[1] = &v19;
  v20 = 0LL;
  v22 = 0LL;
  LOBYTE(v22) = 5;
  v9 = (*(_BYTE *)(a2 + 16) & 8) == 0;
  v19 = 0LL;
  *((_QWORD *)&v22 + 1) = 32LL;
  v10 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  if ( v9 )
    v10 = 0x7FFFFFFEFFFFLL;
  *((_QWORD *)&v19 + 1) = v10;
  v11 = MmMapViewOfSectionEx(
          (int)v8,
          (int)a1,
          (int)&v16,
          (__int64)v18,
          (__int64)&v17,
          a3 != 0 ? 0x20000000 : 0,
          4,
          v21,
          2,
          0,
          0LL);
  ObFastDereferenceObject((signed __int64 *)a2, v8);
  if ( v11 != 1073741827 )
    goto LABEL_5;
  if ( a1 != PsInitialSystemProcess )
  {
    v11 = -1073741800;
LABEL_5:
    if ( (v11 & 0x80000000) != 0 )
      return v11;
  }
  if ( a4 )
  {
    v13 = v16;
    v11 = 0;
    v14 = RtlImageNtHeader(v16);
    if ( *(_WORD *)(v14 + 24) == 267 )
      v15 = *(unsigned int *)(v14 + 52);
    else
      v15 = *(_QWORD *)(v14 + 48);
    *(_QWORD *)(a2 + 40) = v15;
    *(_QWORD *)(a2 + 48) = v13;
    return v11;
  }
  if ( *(_QWORD *)(a2 + 40) == v16 )
  {
    v18[1] = v16;
    v18[2] = 4096LL;
    ZwSetInformationVirtualMemory(-1LL, 4LL);
    return v11;
  }
  return 3221225473LL;
}
