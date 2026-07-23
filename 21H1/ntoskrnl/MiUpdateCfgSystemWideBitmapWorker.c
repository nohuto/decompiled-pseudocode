/*
 * XREFs of MiUpdateCfgSystemWideBitmapWorker @ 0x14063D090
 * Callers:
 *     MiUpdateCfgSystemWideBitmap @ 0x14063B954 (MiUpdateCfgSystemWideBitmap.c)
 * Callees:
 *     MiSectionControlArea @ 0x1402A1930 (MiSectionControlArea.c)
 *     RtlSetBitsEx @ 0x1402A30D0 (RtlSetBitsEx.c)
 *     MiLocatePagefileSubsection @ 0x1402A3BAC (MiLocatePagefileSubsection.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     RtlClearAllBitsEx @ 0x140311AC0 (RtlClearAllBitsEx.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MmUnmapViewInSystemSpace @ 0x14063AD00 (MmUnmapViewInSystemSpace.c)
 *     MiEliminateZeroPages @ 0x14063C5F0 (MiEliminateZeroPages.c)
 *     MiMapViewInSystemSpace @ 0x1406401E4 (MiMapViewInSystemSpace.c)
 *     MiChargeSegmentCommit @ 0x140640FF0 (MiChargeSegmentCommit.c)
 *     RtlEnumRvaListFirst @ 0x1406CEFE4 (RtlEnumRvaListFirst.c)
 */

__int64 __fastcall MiUpdateCfgSystemWideBitmapWorker(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // r12d
  ULONG_PTR v7; // rbx
  unsigned __int64 v8; // rdi
  __int64 result; // rax
  size_t v10; // r15
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rax
  unsigned int *PagefileSubsection; // rax
  unsigned __int64 v14; // r14
  _DWORD *v15; // rdi
  unsigned int v16; // r9d
  int v17; // edx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int8 *v20; // rax
  __int64 v21; // r10
  __int64 v22; // r8
  int v23; // edx
  unsigned int v24; // r8d
  unsigned int v25; // r11d
  int v26; // r10d
  __int64 v27; // rdi
  __int64 v28; // rax
  int v29; // ecx
  char *AnyMultiplexedVm; // rax
  int *v31; // rax
  int v32; // [rsp+40h] [rbp-41h] BYREF
  _RTL_BITMAP_EX BitMapHeader; // [rsp+48h] [rbp-39h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-29h]
  PVOID MappedBase; // [rsp+60h] [rbp-21h] BYREF
  _DWORD *v36; // [rsp+68h] [rbp-19h]
  unsigned __int64 v37; // [rsp+70h] [rbp-11h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+78h] [rbp-9h] BYREF
  unsigned int v39; // [rsp+80h] [rbp-1h]

  v4 = 0;
  v36 = (_DWORD *)a2;
  MappedBase = 0LL;
  v32 = 0;
  BugCheckParameter3 = 0LL;
  v39 = 0;
  v7 = 0LL;
  if ( a2 )
    v7 = *(_QWORD *)(a2 + 16);
  v8 = a3 >> 3;
  v37 = a3 >> 3;
  BitMapHeader.SizeOfBitMap = a4 >> 3;
  v34 = (a4 >> 15) + ((((a3 >> 3) & 0xFFF) + 4095 + ((a4 >> 3) & 0xFFF)) >> 12);
  result = MiMapViewInSystemSpace(
             a1,
             (unsigned int)&unk_140C4CCA8,
             (unsigned int)&MappedBase,
             (unsigned int)&BitMapHeader,
             (__int64)&v37,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v10 = BitMapHeader.SizeOfBitMap - (unsigned __int16)v8;
    v11 = (unsigned __int64)MappedBase | (unsigned __int16)v8;
    v12 = MiSectionControlArea(a1);
    BitMapHeader.SizeOfBitMap = v8 >> 12;
    PagefileSubsection = MiLocatePagefileSubsection((unsigned int *)(v12 + 128), &BitMapHeader.SizeOfBitMap);
    v14 = v34;
    if ( (unsigned int)MiChargeSegmentCommit(
                         PagefileSubsection,
                         *((_QWORD *)PagefileSubsection + 1) + 8 * BitMapHeader.SizeOfBitMap) )
    {
      v15 = v36;
      if ( v36 && (*v36 & 1) != 0 && v7 )
      {
        BitMapHeader.Buffer = (unsigned __int64 *)v11;
        BitMapHeader.SizeOfBitMap = a4;
        RtlClearAllBitsEx(&BitMapHeader);
        v16 = RtlEnumRvaListFirst(v7, &BugCheckParameter3, &v32);
        if ( v16 )
        {
          LOBYTE(v17) = v32;
          do
          {
            if ( (v17 & 1) != 0 )
            {
              v18 = (unsigned __int64)v16 >> 4;
              if ( (v16 & 0xF) == v15[1] )
              {
                v19 = 2 * v18;
                if ( (v17 & 4) != 0 )
                  ++v19;
                _bittestandset64((signed __int64 *)v11, v19);
              }
              else
              {
                RtlSetBitsEx((__int64)&BitMapHeader, 2 * v18, 2uLL);
              }
            }
            ++HIDWORD(BugCheckParameter3);
            v20 = (unsigned __int8 *)(v39 + *(_QWORD *)(v7 + 16));
            v16 = BugCheckParameter3;
            v21 = *(_QWORD *)(v7 + 24) - v39;
            if ( !v21 )
              break;
            while ( 1 )
            {
              --v21;
              v22 = *v20 >> 6;
              v23 = *v20++ & 0x3F;
              v16 += v23 * *((_DWORD *)RtlpRvaCompressionTableScales + v22);
              if ( (_DWORD)v22 == 3 )
                break;
              if ( !v21 )
                KeBugCheckEx(0x1Au, 0x43666720uLL, v7, (ULONG_PTR)&BugCheckParameter3, v16);
            }
            LODWORD(BugCheckParameter3) = v16;
            LOBYTE(v17) = 0;
            v39 = (_DWORD)v20 - *(_DWORD *)(v7 + 16);
            v24 = *(_DWORD *)(v7 + 8);
            if ( v24 <= 1 )
            {
              if ( v24 == 1 )
              {
                v31 = *(int **)(v7 + 48);
                if ( v31 )
                  v17 = *v31;
                else
                  LOBYTE(v17) = 1;
              }
            }
            else
            {
              v25 = 0;
              v26 = 1;
              v27 = 0LL;
              do
              {
                if ( _bittest64(*(const signed __int64 **)(v7 + 40), HIDWORD(BugCheckParameter3) * v24 + v25) )
                {
                  v28 = *(_QWORD *)(v7 + 48);
                  if ( v28 )
                    v29 = *(_DWORD *)(v27 + v28);
                  else
                    LOBYTE(v29) = v26;
                  LOBYTE(v17) = v29 | v17;
                }
                ++v25;
                v26 = __ROL4__(v26, 1);
                v27 += 4LL;
              }
              while ( v25 < v24 );
              v15 = v36;
            }
          }
          while ( v16 );
          v14 = v34;
        }
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
        MiEliminateZeroPages((__int64)AnyMultiplexedVm, v11 & 0xFFFFFFFFFFFFF000uLL, v14 << 12);
      }
      else
      {
        memset((void *)v11, 255, v10);
      }
    }
    else
    {
      v4 = -1073741523;
    }
    MmUnmapViewInSystemSpace(MappedBase);
    return v4;
  }
  return result;
}
