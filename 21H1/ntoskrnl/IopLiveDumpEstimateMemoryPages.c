/*
 * XREFs of IopLiveDumpEstimateMemoryPages @ 0x1409A85BC
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x14089261C (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     RtlClearAllBitsEx @ 0x140311AC0 (RtlClearAllBitsEx.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HvlCalculateLivedumpSize @ 0x1404F3100 (HvlCalculateLivedumpSize.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x140502E3C (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x140503104 (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceMmDuplicateMemoryFailure @ 0x1405040F8 (IopLiveDumpTraceMmDuplicateMemoryFailure.c)
 *     IopLiveDumpTraceQueryHvlDumpSizeFailure @ 0x1405043C0 (IopLiveDumpTraceQueryHvlDumpSizeFailure.c)
 *     RtlNumberOfSetBitsEx @ 0x140582410 (RtlNumberOfSetBitsEx.c)
 *     MmDuplicateMemory @ 0x14098C6CC (MmDuplicateMemory.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x1409A78F0 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IopLiveDumpUncorralProcessors @ 0x1409A9918 (IopLiveDumpUncorralProcessors.c)
 */

__int64 __fastcall IopLiveDumpEstimateMemoryPages(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // r14
  int v4; // eax
  int v5; // ecx
  unsigned __int64 v6; // rdx
  int v7; // edi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 MillisecondCounter; // rsi
  unsigned __int64 v11; // rcx
  bool v12; // zf
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  bool v15; // al
  bool v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  __int64 v27; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v28[3]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v29; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  __int64 *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  __int64 *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  __int64 *v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]
  __int64 *v39; // [rsp+110h] [rbp+10h]
  __int64 v40; // [rsp+118h] [rbp+18h]
  __int64 *v41; // [rsp+120h] [rbp+20h]
  __int64 v42; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+130h] [rbp+30h] BYREF
  bool *v44; // [rsp+150h] [rbp+50h]
  __int64 v45; // [rsp+158h] [rbp+58h]
  int *v46; // [rsp+160h] [rbp+60h]
  __int64 v47; // [rsp+168h] [rbp+68h]

  v1 = a1 + 304;
  v29 = 0LL;
  v3 = MEMORY[0xFFFFF78000000008];
  *(_DWORD *)(a1 + 80) |= 1u;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  IopLiveDumpCallRemovePagesCallbacks((_DWORD *)a1);
  v28[0] = IopLiveDumpStartMirroringCallback;
  v28[1] = IopLiveDumpEndMirroringCallback;
  v28[2] = IopLiveDumpMirrorPhysicalMemoryCallback;
  v4 = *(_DWORD *)(a1 + 80);
  v5 = (*(_BYTE *)(a1 + 40) & 4) != 0 ? 657 : 593;
  DWORD2(v29) = v5;
  if ( (v4 & 0x20) != 0 )
    DWORD2(v29) = v5 | 0x100;
  v7 = MmDuplicateMemory((__int64)v28);
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
  {
    v6 = (unsigned __int64)(1000LL * *(_QWORD *)(a1 + 456)) % PerformanceFrequency.QuadPart;
    *(_QWORD *)(a1 + 464) = (unsigned __int64)(1000LL * *(_QWORD *)(a1 + 456)) / PerformanceFrequency.QuadPart;
  }
  if ( v7 < 0 || v7 == 258 )
  {
    if ( (*(_DWORD *)(v1 + 8) & 1) != 0 )
    {
      LOBYTE(v6) = 1;
      IopLiveDumpUncorralProcessors(v1, v6);
    }
    *(_QWORD *)(a1 + 96) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
    *(_QWORD *)(a1 + 128) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    IopLiveDumpTraceMmDuplicateMemoryFailure(a1, v7);
    if ( v7 == 258 )
    {
      *(_DWORD *)(a1 + 80) |= 0x40u;
      v7 = -1073740682;
    }
  }
  else
  {
    v8 = RtlNumberOfSetBitsEx((_QWORD *)(a1 + 544));
    *(_QWORD *)(a1 + 120) = 0LL;
    v9 = v8 + (v8 >> 4);
    *(_QWORD *)(a1 + 128) = 0LL;
    LODWORD(v8) = *(_DWORD *)(a1 + 44);
    *(_QWORD *)(a1 + 96) = v9;
    *(_QWORD *)(a1 + 136) = 0LL;
    if ( (v8 & 1) != 0 )
    {
      MillisecondCounter = 0LL;
      if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
        MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
      v7 = HvlCalculateLivedumpSize(&v19, &v20, &v21);
      if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
        *(_QWORD *)(a1 + 288) = IopLiveDumpGetMillisecondCounter(0) - MillisecondCounter;
      if ( v7 < 0 )
      {
        *(_DWORD *)(a1 + 80) |= 0x10u;
        IopLiveDumpTraceQueryHvlDumpSizeFailure(v7);
        if ( (unsigned int)dword_140C04458 > 5 && tlgKeywordOn((__int64)&dword_140C04458, 0x200000000000LL) )
        {
          v15 = (*(_DWORD *)(a1 + 80) & 0x10) != 0;
          v45 = 1LL;
          v17 = v15;
          v18 = v7;
          v47 = 4LL;
          v44 = &v17;
          v46 = &v18;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C04458,
            (unsigned __int8 *)byte_140023CAD,
            (const GUID *)(a1 + 864),
            (const GUID *)(a1 + 848),
            4u,
            &v43);
        }
        v7 = 0;
      }
      else
      {
        v11 = v20;
        v12 = (v20 & 0xFFF) == 0;
        *(_QWORD *)(a1 + 120) = (v19 >> 12) + ((v19 & 0xFFF) != 0);
        v13 = (v11 >> 12) + !v12;
        v14 = v21;
        v12 = (v21 & 0xFFF) == 0;
        *(_QWORD *)(a1 + 128) = v13;
        *(_QWORD *)(a1 + 136) = (v14 >> 12) + !v12;
      }
    }
  }
  *(_QWORD *)(a1 + 432) = (MEMORY[0xFFFFF78000000008] - v3) / 0x2710uLL;
  IopLiveDumpTraceBufferEstimation();
  RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 544));
  RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 600));
  RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 656));
  *(_DWORD *)(a1 + 80) &= ~1u;
  if ( (unsigned int)dword_140C04458 > 5 && tlgKeywordOn((__int64)&dword_140C04458, 0x200000000000LL) )
  {
    v22 = *(_QWORD *)(a1 + 432);
    v31 = &v22;
    v23 = *(_QWORD *)(a1 + 440);
    v33 = &v23;
    v24 = *(_QWORD *)(a1 + 448);
    v35 = &v24;
    v25 = *(_QWORD *)(a1 + 464);
    v37 = &v25;
    v26 = *(_QWORD *)(a1 + 472);
    v39 = &v26;
    v27 = *(_QWORD *)(a1 + 288);
    v41 = &v27;
    v32 = 8LL;
    v34 = 8LL;
    v36 = 8LL;
    v38 = 8LL;
    v40 = 8LL;
    v42 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C04458,
      (unsigned __int8 *)&byte_140023A7F,
      (const GUID *)(a1 + 864),
      (const GUID *)(a1 + 848),
      8u,
      &v30);
  }
  return (unsigned int)v7;
}
