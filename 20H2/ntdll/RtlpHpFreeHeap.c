/*
 * XREFs of RtlpHpFreeHeap @ 0x180024920
 * Callers:
 *     RtlpHpMetadataFree @ 0x180005968 (RtlpHpMetadataFree.c)
 *     RtlpHpAllocateHeap @ 0x18000776C (RtlpHpAllocateHeap.c)
 *     RtlpAllocateHeapInternal @ 0x18002AA20 (RtlpAllocateHeapInternal.c)
 *     RtlpHpReallocMove @ 0x18010E6F0 (RtlpHpReallocMove.c)
 * Callees:
 *     RtlpHpExtrasGet @ 0x1800021A0 (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeapInternal @ 0x180002210 (RtlpHpSizeHeapInternal.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180002B78 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeFree @ 0x180003280 (RtlpHpLargeFree.c)
 *     RtlpHpSegPageRangeShrink @ 0x1800069A0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVsChunkSize @ 0x180021698 (RtlpHpVsChunkSize.c)
 *     RtlpHpSizeHeap @ 0x1800243E0 (RtlpHpSizeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180024FE0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpVsContextFree @ 0x180028500 (RtlpHpVsContextFree.c)
 *     RtlpHpLargeAllocSize @ 0x18008475C (RtlpHpLargeAllocSize.c)
 *     RtlpCallInterceptRoutine @ 0x1800F37C4 (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapFreeEvent @ 0x18010A428 (RtlpLogHeapFreeEvent.c)
 *     RtlpLogHeapFailure @ 0x18010E31C (RtlpLogHeapFailure.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18010EF28 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpHpFreeHeap(__int64 a1, unsigned __int64 a2, int a3, __int64 *a4, _WORD *a5)
{
  int v6; // esi
  int v7; // edx
  int v9; // ecx
  int v10; // edx
  int v12; // r8d
  _WORD *v13; // r14
  unsigned int v14; // ebp
  unsigned __int64 v15; // r15
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r14
  unsigned __int64 v19; // rdx
  __int64 DescriptorValidateSafe; // r8
  char v21; // r9
  char v22; // r9
  unsigned __int8 v23; // r9
  char v24; // cl
  unsigned __int64 v25; // r10
  int v26; // r12d
  unsigned int v27; // r9d
  unsigned int v28; // edx
  int v29; // r11d
  __int64 v30; // rcx
  unsigned int v31; // r8d
  unsigned int v32; // eax
  char v33; // cl
  unsigned __int64 v34; // rdx
  int v35; // r8d
  __int64 v36; // r8
  __int64 v37; // rdx
  unsigned __int64 v38; // r8
  __int16 v39; // ax
  int v40; // ecx
  BOOL v41; // r8d
  unsigned __int64 v42; // r15
  __int16 v43; // ax
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // r14
  unsigned __int64 v47; // rdx
  __int64 v48; // rbx
  char v49; // dl
  char v50; // dl
  unsigned __int8 v51; // dl
  char v52; // cl
  __int64 v53; // rax
  bool v54; // zf
  __int64 v55; // rdx
  __int64 v56; // r9
  _DWORD *SharedData; // rcx
  __int64 v58; // rcx
  unsigned int v59; // ebp
  __int64 v61; // r8
  signed __int64 v62; // rax
  signed __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // r9
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // r9
  __int64 v69; // rcx
  int v70; // eax
  __int64 v71; // rdx
  char v72; // al
  signed __int32 v73[8]; // [rsp+0h] [rbp-78h] BYREF
  signed __int64 v74; // [rsp+30h] [rbp-48h]
  signed __int64 v75; // [rsp+38h] [rbp-40h]
  unsigned int v76; // [rsp+80h] [rbp+8h] BYREF
  int v77; // [rsp+90h] [rbp+18h] BYREF

  v6 = 0;
  v7 = *(_DWORD *)(a1 + 20);
  v9 = *(_DWORD *)(a1 + 220);
  v10 = a3 | v7 & 0x11000001;
  v12 = 0;
  if ( v9 )
    LOBYTE(v12) = v9 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v13 = a5;
  v14 = v10 | 1;
  v15 = 0LL;
  if ( !v12 )
    v14 = v10;
  if ( a5 )
  {
    v15 = -1LL;
    if ( (_WORD)a2 )
    {
      v16 = 0;
    }
    else
    {
      v67 = RtlCSparseBitmapBitmaskRead((__int64)&unk_18016DC50, 2 * ((a2 - qword_18016DC48) >> 20));
      if ( !v67 || (v16 = v67 - 1, v16 == 2) )
      {
        v37 = RtlpHpLargeAllocSize(a1, a2, v14, &v77);
        goto LABEL_29;
      }
    }
    v17 = 192LL * v16;
    v18 = v17 + a1 + 256;
    if ( (RtlpHpAppCompatFlags & 1) != 0 )
    {
      DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(v17 + a1 + 256, a2);
    }
    else
    {
      v19 = a2 & *(_QWORD *)v18;
      if ( ((unsigned __int64)RtlpHpHeapGlobals ^ v18 ^ v19 ^ *(_QWORD *)(v19 + 0x10)) == 0xA2E64EADA2E64EADuLL )
        DescriptorValidateSafe = v19 + 32 * ((unsigned __int64)(unsigned int)(a2 - v19) >> *(_BYTE *)(v18 + 8));
      else
        DescriptorValidateSafe = 0LL;
    }
    if ( !DescriptorValidateSafe )
      goto LABEL_105;
    v21 = *(_BYTE *)(DescriptorValidateSafe + 24);
    if ( (v21 & 1) == 0 )
      goto LABEL_105;
    if ( (v21 & 2) != 0 )
    {
      v23 = v21 & 0xC;
      if ( v23 < 8u && (((1 << *(_BYTE *)(v18 + 8)) - 1) & a2) != 0 )
        goto LABEL_105;
    }
    else
    {
      DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31);
      v22 = *(_BYTE *)(DescriptorValidateSafe + 24);
      if ( (v22 & 3) != 3 )
        goto LABEL_105;
      v23 = v22 & 0xC;
      if ( v23 < 8u )
        goto LABEL_105;
    }
    v24 = *(_BYTE *)(v18 + 8);
    v25 = (DescriptorValidateSafe & *(_QWORD *)v18)
        + ((DescriptorValidateSafe - (DescriptorValidateSafe & *(_QWORD *)v18)) >> 5 << v24);
    if ( a2 <= v25 )
    {
      if ( (*(_WORD *)(DescriptorValidateSafe + 8) & 1) != 0 )
      {
        _InterlockedOr(v73, 0);
        v24 = *(_BYTE *)(v18 + 8);
        v70 = 1;
      }
      else
      {
        v70 = 0;
      }
      v71 = *(unsigned __int8 *)(DescriptorValidateSafe + 31);
      v77 = v70;
      v37 = (v71 << v24) - *(unsigned int *)(DescriptorValidateSafe + 4);
    }
    else if ( v23 == 8 )
    {
      v26 = *(_DWORD *)((DescriptorValidateSafe & *(_QWORD *)v18)
                      + ((DescriptorValidateSafe - (DescriptorValidateSafe & *(_QWORD *)v18)) >> 5 << v24)
                      + 0x28);
      v27 = (unsigned int)v25 >> 12;
      v28 = DWORD2(RtlpHpHeapGlobals) ^ v26 ^ ((unsigned int)v25 >> 12);
      v29 = (unsigned __int16)v28;
      v30 = *(_QWORD *)(*(_QWORD *)(v18 + 24)
                      + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v28 + 15) >> 4]
                      + 128);
      v31 = a2 - HIWORD(v28) - v25;
      v32 = *(_DWORD *)(v30 + 72);
      v33 = *(_BYTE *)(v30 + 76);
      if ( v32 )
      {
        v34 = (v31 * (unsigned __int64)v32) >> v33;
        v35 = v31 - v34 * v29;
      }
      else
      {
        LODWORD(v34) = v31 >> v33;
        v35 = ((1 << v33) - 1) & v31;
      }
      if ( v35 )
      {
        v37 = -1LL;
      }
      else
      {
        v36 = *(_QWORD *)(v25 + 8 * ((unsigned __int64)(unsigned int)(2 * v34) >> 6) + 48) >> ((2 * v34) & 0x3F);
        if ( (v36 & 1) != 0 )
        {
          v37 = WORD4(RtlpHpHeapGlobals) ^ (unsigned int)(unsigned __int16)(v26 ^ v27);
          if ( (v36 & 2) != 0 )
          {
            v38 = WORD4(RtlpHpHeapGlobals) ^ (unsigned __int64)(unsigned __int16)(v26 ^ v27);
            v39 = *(_WORD *)(v38 + a2 - 2);
            v40 = v39 & 0x4000;
            if ( (v39 & 0x4000) != 0 )
            {
              _InterlockedOr(v73, 0);
              v39 = *(_WORD *)(v38 + a2 - 2);
            }
            v41 = v40 != 0;
            if ( v39 < 0 )
              v37 = (unsigned int)(v37 - 1);
            else
              v37 = (unsigned int)v37 - (v39 & 0x3FFF);
          }
          else
          {
            v41 = 0;
          }
          v77 = v41;
        }
        else
        {
          v37 = -1LL;
        }
      }
    }
    else
    {
      v37 = RtlpHpVsChunkSize(*(_QWORD *)(v18 + 32), a2, DescriptorValidateSafe, &v77);
    }
    v13 = a5;
LABEL_29:
    if ( v37 != -1 )
    {
      if ( a4 )
        *a4 = v37;
      if ( v77 )
      {
        v42 = v37 + a2;
        if ( (v14 & 0x10000000) != 0 )
          v42 += 16LL;
        v15 = (v42 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v15 )
        {
          v43 = *(_WORD *)v15;
LABEL_37:
          *v13 = v43;
          goto LABEL_38;
        }
      }
      else
      {
        v15 = 0LL;
      }
LABEL_77:
      v43 = 0;
      goto LABEL_37;
    }
LABEL_105:
    v13 = a5;
    goto LABEL_77;
  }
  if ( a4 )
    *a4 = RtlpHpSizeHeapInternal(a1, a2, v14, 0LL);
LABEL_38:
  if ( (v14 & 0x1000000) == 0 )
  {
    if ( *(_DWORD *)(a1 + 24) )
    {
      if ( (v15 || (v15 = RtlpHpExtrasGet(a1, a2, v14, a4)) != 0) && v15 != -1LL )
      {
        v72 = *(_BYTE *)(v15 + 2);
        if ( (v72 & 0xF) != 0 && (int)RtlpCallInterceptRoutine(v72 & 0xF, a1, a2, 3, v15 + 16) < 0 )
          return 0LL;
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 20) & 0x10000000) == 0 || RtlpHpSizeHeap(a1, a2, v14) != -1 )
  {
    if ( (_WORD)a2 )
    {
      v44 = 0;
    }
    else
    {
      v64 = RtlCSparseBitmapBitmaskRead((__int64)&unk_18016DC50, 2 * ((a2 - qword_18016DC48) >> 20));
      if ( !v64 || (v44 = v64 - 1, v44 == 2) )
      {
        v59 = RtlpHpLargeFree((__int128 *)a1, a2, v14) != 0;
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v66 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v66 = 2147353472LL;
        if ( *(_BYTE *)v66 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v59 )
          RtlpLogHeapFreeEvent(a1, a2, 3LL, v65);
        return v59;
      }
    }
    v45 = 192LL * v44;
    v46 = v45 + a1 + 256;
    if ( (RtlpHpAppCompatFlags & 1) != 0 )
    {
      v48 = RtlpHpSegGetDescriptorValidateSafe(v45 + a1 + 256, a2);
    }
    else
    {
      v47 = a2 & *(_QWORD *)v46;
      if ( (v46 ^ (unsigned __int64)RtlpHpHeapGlobals ^ v47 ^ *(_QWORD *)(v47 + 0x10)) == 0xA2E64EADA2E64EADuLL )
        v48 = v47 + 32 * ((unsigned __int64)(unsigned int)(a2 - v47) >> *(_BYTE *)(v46 + 8));
      else
        v48 = 0LL;
    }
    if ( v48 )
    {
      v49 = *(_BYTE *)(v48 + 24);
      if ( (v49 & 1) != 0 )
      {
        if ( (v49 & 2) != 0 )
        {
          v51 = v49 & 0xC;
          if ( v51 >= 8u || (((1 << *(_BYTE *)(v46 + 8)) - 1) & a2) == 0 )
          {
LABEL_51:
            v52 = *(_BYTE *)(v46 + 8);
            v53 = v48 & *(_QWORD *)v46;
            if ( a2 <= v53 + ((v48 - v53) >> 5 << v52) )
            {
              RtlpHpSegPageRangeShrink(v46, v48, 0, v14);
              if ( (unsigned int)RtlGetCurrentServiceSessionId() )
                v69 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v69 = 2147353472LL;
              if ( *(_BYTE *)v69 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
                RtlpLogHeapFreeEvent(*(_QWORD *)(v46 + 56), a2, 3LL, v68);
              return 1;
            }
            else
            {
              v54 = v51 == 8;
              v55 = v53 + ((v48 - v53) >> 5 << v52);
              if ( v54 )
              {
                LODWORD(a5) = RtlpHpLfhSubsegmentFreeBlock(*(_QWORD *)(v46 + 24), v55, a2, v14);
              }
              else
              {
                LODWORD(a5) = RtlpHpVsContextFree(*(_QWORD *)(v46 + 32), v55, a2, v14, (__int64)&v76);
                if ( (_DWORD)a5 )
                {
                  v61 = *(_QWORD *)(v46 + 24);
                  if ( v76 <= (unsigned int)*(unsigned __int16 *)(v61 + 60) - 16 )
                  {
                    v56 = RtlpLfhBucketIndexMap[(unsigned __int64)(v76 + 15) >> 4];
                    if ( (*(_QWORD *)(v61 + 8 * v56 + 128) & 1) != 0 )
                    {
                      do
                      {
                        v62 = *(_QWORD *)(v61 + 8 * v56 + 128);
                        v75 = v62;
                        v63 = v62;
                        v74 = v62;
                        if ( (v62 & 1) == 0 )
                          break;
                        if ( WORD1(v75) > 1u )
                        {
                          WORD1(v74) = WORD1(v75) - 1;
                          v63 = v74;
                        }
                      }
                      while ( v62 != _InterlockedCompareExchange64(
                                       (volatile signed __int64 *)(v61 + 8 * v56 + 128),
                                       v63,
                                       v62) );
                    }
                  }
                }
              }
              SharedData = NtCurrentPeb()->SharedData;
              if ( SharedData && *SharedData )
                v58 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v58 = 2147353472LL;
              v59 = (unsigned int)a5;
              if ( *(_BYTE *)v58 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              {
                if ( (_DWORD)a5 )
                {
                  LOBYTE(v6) = (*(_BYTE *)(v48 + 24) & 0xC) != 8;
                  RtlpLogHeapFreeEvent(*(_QWORD *)(v46 + 56), a2, (unsigned int)(v6 + 2), v56);
                }
              }
            }
            return v59;
          }
        }
        else
        {
          v48 += -32LL * *(unsigned __int8 *)(v48 + 31);
          v50 = *(_BYTE *)(v48 + 24);
          if ( (v50 & 3) == 3 )
          {
            v51 = v50 & 0xC;
            if ( v51 >= 8u )
              goto LABEL_51;
          }
        }
      }
    }
    RtlpLogHeapFailure(9, *(_QWORD *)(v46 + 56), a2, 0, 0LL, 0LL);
    return 0;
  }
  RtlpLogHeapFailure(9, a1, a2, 0, 0LL, 0LL);
  return 0LL;
}
