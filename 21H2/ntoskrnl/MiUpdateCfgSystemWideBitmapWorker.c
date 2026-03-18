/*
 * XREFs of MiUpdateCfgSystemWideBitmapWorker @ 0x140700A40
 * Callers:
 *     MiUpdateCfgSystemWideBitmap @ 0x140709200 (MiUpdateCfgSystemWideBitmap.c)
 * Callees:
 *     RtlClearAllBitsEx @ 0x1402340F0 (RtlClearAllBitsEx.c)
 *     MiRemoveFromSystemSpace @ 0x14026D048 (MiRemoveFromSystemSpace.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiLocatePagefileSubsection @ 0x14026F0F0 (MiLocatePagefileSubsection.c)
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 *     RtlSetBitsEx @ 0x14030B740 (RtlSetBitsEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiChargeSegmentCommit @ 0x1406A4140 (MiChargeSegmentCommit.c)
 *     RtlEnumRvaListFirst @ 0x1406B9830 (RtlEnumRvaListFirst.c)
 *     MiMapViewInSystemSpace @ 0x1406F3FDC (MiMapViewInSystemSpace.c)
 *     MiEliminateZeroPages @ 0x1406F5BB0 (MiEliminateZeroPages.c)
 */

__int64 __fastcall MiUpdateCfgSystemWideBitmapWorker(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // r12d
  ULONG_PTR v7; // r14
  unsigned __int64 v8; // rbx
  __int64 result; // rax
  size_t v10; // r15
  ULONG_PTR v11; // r13
  unsigned __int64 v12; // rax
  __int64 *PagefileSubsection; // rax
  _DWORD *v14; // rsi
  unsigned int v15; // ebx
  int v16; // r9d
  unsigned __int8 *v17; // rax
  __int64 v18; // r9
  __int64 v19; // r8
  int v20; // edx
  unsigned int v21; // r11d
  unsigned int v22; // r8d
  int v23; // edx
  __int64 v24; // r10
  __int64 v25; // rax
  int v26; // ecx
  char *AnyMultiplexedVm; // rax
  unsigned __int64 v28; // r8
  int *v29; // rax
  int v30; // [rsp+30h] [rbp-41h] BYREF
  unsigned __int64 v31[2]; // [rsp+38h] [rbp-39h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+48h] [rbp-29h] BYREF
  _DWORD *v33; // [rsp+50h] [rbp-21h]
  __int64 v34; // [rsp+58h] [rbp-19h]
  unsigned __int64 v35; // [rsp+60h] [rbp-11h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+68h] [rbp-9h] BYREF
  unsigned int v37; // [rsp+70h] [rbp-1h]

  v4 = 0;
  v33 = (_DWORD *)a2;
  BugCheckParameter1 = 0LL;
  v30 = 0;
  BugCheckParameter3 = 0LL;
  v37 = 0;
  v7 = 0LL;
  if ( a2 )
    v7 = *(_QWORD *)(a2 + 8);
  v8 = a3 >> 3;
  v35 = a3 >> 3;
  v31[0] = a4 >> 3;
  v34 = (a4 >> 15) + ((((a3 >> 3) & 0xFFF) + 4095 + ((a4 >> 3) & 0xFFF)) >> 12);
  result = MiMapViewInSystemSpace(a1, &BugCheckParameter1, v31, (__int64 *)&v35, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v10 = v31[0] - (unsigned __int16)v8;
    v11 = BugCheckParameter1 | (unsigned __int16)v8;
    v12 = MiSectionControlArea(a1);
    v31[0] = v8 >> 12;
    PagefileSubsection = (__int64 *)MiLocatePagefileSubsection((unsigned int *)(v12 + 128), v31);
    if ( (unsigned int)MiChargeSegmentCommit(PagefileSubsection, (__int64 *)(PagefileSubsection[1] + 8 * v31[0]), v34) )
    {
      v14 = v33;
      if ( v33 && (*v33 & 1) != 0 && v7 )
      {
        v31[1] = v11;
        v31[0] = a4;
        RtlClearAllBitsEx((__int64)v31);
        v15 = RtlEnumRvaListFirst(v7, (unsigned int *)&BugCheckParameter3, &v30);
        if ( v15 )
        {
          LOBYTE(v16) = v30;
          while ( 1 )
          {
            if ( (v16 & 1) == 0 )
              goto LABEL_15;
            if ( (v15 & 0xF) == *((_WORD *)v14 + 2) )
            {
              if ( MmEnableControlFlowGuardXfg )
              {
                if ( (v16 & 8) == 0 )
                  goto LABEL_14;
              }
              else if ( (v16 & 4) == 0 )
              {
LABEL_14:
                _bittestandset64((signed __int64 *)v11, 2 * ((unsigned __int64)v15 >> 4));
                goto LABEL_15;
              }
              _bittestandset64((signed __int64 *)v11, 2 * ((unsigned __int64)v15 >> 4) + 1);
            }
            else
            {
              RtlSetBitsEx((__int64)v31, 2 * ((unsigned __int64)v15 >> 4), 2uLL);
            }
LABEL_15:
            ++HIDWORD(BugCheckParameter3);
            v17 = (unsigned __int8 *)(v37 + *(_QWORD *)(v7 + 16));
            v15 = BugCheckParameter3;
            v18 = *(_QWORD *)(v7 + 24) - v37;
            if ( v18 )
            {
              while ( 1 )
              {
                --v18;
                v19 = *v17 >> 6;
                v20 = *v17++ & 0x3F;
                v15 += v20 * *((_DWORD *)RtlpRvaCompressionTableScales + v19);
                if ( (_DWORD)v19 == 3 )
                  break;
                if ( !v18 )
                  KeBugCheckEx(0x1Au, 0x43666720uLL, v7, (ULONG_PTR)&BugCheckParameter3, v15);
              }
              LODWORD(BugCheckParameter3) = v15;
              LOBYTE(v16) = 0;
              v37 = (_DWORD)v17 - *(_DWORD *)(v7 + 16);
              v21 = *(_DWORD *)(v7 + 8);
              if ( v21 <= 1 )
              {
                if ( v21 == 1 )
                {
                  v29 = *(int **)(v7 + 48);
                  if ( v29 )
                    v16 = *v29;
                  else
                    LOBYTE(v16) = 1;
                }
              }
              else
              {
                v22 = 0;
                v23 = 1;
                v24 = 0LL;
                do
                {
                  if ( _bittest64(*(const signed __int64 **)(v7 + 40), HIDWORD(BugCheckParameter3) * v21 + v22) )
                  {
                    v25 = *(_QWORD *)(v7 + 48);
                    if ( v25 )
                      v26 = *(_DWORD *)(v24 + v25);
                    else
                      LOBYTE(v26) = v23;
                    LOBYTE(v16) = v26 | v16;
                  }
                  ++v22;
                  v23 = __ROL4__(v23, 1);
                  v24 += 4LL;
                }
                while ( v22 < v21 );
                v14 = v33;
              }
              if ( v15 )
                continue;
            }
            break;
          }
        }
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
        MiEliminateZeroPages((__int64)AnyMultiplexedVm, v11 & 0xFFFFFFFFFFFFF000uLL, v28);
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
    MiRemoveFromSystemSpace(BugCheckParameter1, 1);
    return v4;
  }
  return result;
}
