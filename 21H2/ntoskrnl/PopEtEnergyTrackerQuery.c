/*
 * XREFs of PopEtEnergyTrackerQuery @ 0x1405EE5A8
 * Callers:
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     KeQueryTimelineBitmapTime @ 0x1402AA050 (KeQueryTimelineBitmapTime.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopEtDataSectionCopyData @ 0x1405EF210 (PopEtDataSectionCopyData.c)
 *     PopEtDataSectionReserve @ 0x1405EF25C (PopEtDataSectionReserve.c)
 *     PopEtDataSectionStart @ 0x1405EF2AC (PopEtDataSectionStart.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x1405EF2CC (PopEtEnergyTrackerCleanupAggregates.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 *     PopEtDataSectionCopyString @ 0x1408F2AFC (PopEtDataSectionCopyString.c)
 *     PopEtEnergyTrackerSnapshotProcesses @ 0x1408F2CF8 (PopEtEnergyTrackerSnapshotProcesses.c)
 */

__int64 __fastcall PopEtEnergyTrackerQuery(void *a1, __int64 a2, unsigned int a3)
{
  char *v5; // rbx
  char v6; // r13
  NTSTATUS v7; // esi
  char *v8; // r11
  unsigned int v9; // r9d
  unsigned int v10; // esi
  unsigned int v11; // r15d
  _QWORD *v12; // r10
  unsigned int v13; // r9d
  __int64 v14; // rdx
  _QWORD **i; // rdx
  unsigned __int16 *v16; // rdx
  __int64 v17; // rax
  int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  char *v22; // rsi
  __m128i v23; // xmm0
  __int64 v24; // rsi
  __int64 v25; // r14
  unsigned int v26; // r12d
  char *v27; // r10
  int v28; // ebx
  unsigned __int8 *v29; // r8
  __int64 v30; // r9
  int v31; // edx
  int v32; // ecx
  __int64 v33; // rdx
  __int64 *v34; // rdx
  unsigned __int64 v35; // r8
  __int64 v36; // rbx
  __int64 v37; // rax
  _DWORD *v38; // rsi
  int v39; // ecx
  __int64 v40; // rdx
  int TimelineBitmapTime; // eax
  __int64 v42; // rdx
  int v43; // r9d
  int v44; // r9d
  int v45; // r9d
  int v46; // r9d
  int v47; // r9d
  int v48; // r9d
  __int64 j; // r10
  __int64 *v50; // rdx
  unsigned int v52; // [rsp+40h] [rbp-148h]
  size_t Size; // [rsp+48h] [rbp-140h] BYREF
  PVOID Object; // [rsp+50h] [rbp-138h] BYREF
  __int64 *v55; // [rsp+58h] [rbp-130h]
  int v56; // [rsp+60h] [rbp-128h]
  int v57; // [rsp+64h] [rbp-124h]
  __m128i v58; // [rsp+68h] [rbp-120h] BYREF
  __int128 v59; // [rsp+78h] [rbp-110h] BYREF
  __int128 v60; // [rsp+88h] [rbp-100h]
  __int128 v61; // [rsp+98h] [rbp-F0h] BYREF
  __int128 v62; // [rsp+A8h] [rbp-E0h]
  char *v63; // [rsp+B8h] [rbp-D0h]
  __int64 v64; // [rsp+C0h] [rbp-C8h]
  _QWORD *v65; // [rsp+C8h] [rbp-C0h]
  __int128 v66; // [rsp+D0h] [rbp-B8h] BYREF
  __int128 v67; // [rsp+E0h] [rbp-A8h]
  __int64 v68; // [rsp+F0h] [rbp-98h]
  __int64 *v69; // [rsp+F8h] [rbp-90h]
  __int128 v70; // [rsp+100h] [rbp-88h] BYREF
  __int128 v71; // [rsp+110h] [rbp-78h]
  __int64 v72; // [rsp+120h] [rbp-68h] BYREF
  __int64 v73; // [rsp+128h] [rbp-60h]
  __int64 v74; // [rsp+130h] [rbp-58h]
  __int128 v75; // [rsp+138h] [rbp-50h] BYREF
  __int128 v76; // [rsp+148h] [rbp-40h]
  __int64 v77; // [rsp+1A8h] [rbp+20h]

  v5 = 0LL;
  Object = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v6 = 0;
  v66 = 0LL;
  v67 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  if ( !PopEtGlobals )
  {
    v7 = -1073741637;
    goto LABEL_80;
  }
  v7 = ObReferenceObjectByHandleWithTag(
         a1,
         1u,
         *(POBJECT_TYPE *)(PopEtGlobals + 32),
         KeGetCurrentThread()->PreviousMode,
         0x74456F50u,
         &Object,
         0LL);
  v5 = (char *)Object;
  if ( v7 >= 0 )
  {
    v75 = 2uLL;
    v76 = (unsigned __int64)Object;
    v7 = PopEtEnergyTrackerSnapshotProcesses(&v75);
    if ( v7 >= 0 )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)(v5 + 16));
      v6 = 1;
      v8 = v5 + 48;
      v9 = *((_DWORD *)v5 + 12);
      v52 = v9;
      v10 = 0;
      v11 = 44;
      v12 = 0LL;
      while ( 1 )
      {
        if ( v12 )
        {
          v13 = *((_DWORD *)v8 + 1);
          Size = v12[1] & (-1LL << (v13 & 0x1F));
          v14 = *((_QWORD *)v8 + 1)
              + 8LL
              * ((37
                * (BYTE6(Size)
                 + 37
                 * (BYTE5(Size)
                  + 37
                  * (BYTE4(Size)
                   + 37
                   * (BYTE3(Size) + 37 * (BYTE2(Size) + 37 * (BYTE1(Size) + 37 * ((unsigned __int8)Size + 11623883)))))))
                + HIBYTE(Size)) & ((v13 >> 5) - 1));
          v9 = v52;
        }
        else
        {
          v12 = (_QWORD *)*((_QWORD *)v8 + 1);
          v14 = (__int64)v12;
        }
        if ( !v12 )
          goto LABEL_11;
        if ( (*v12 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
          v5 = (char *)Object;
        v12 = (_QWORD *)*v12;
        if ( ((unsigned __int8)v12 & 1) != 0 )
        {
LABEL_11:
          for ( i = (_QWORD **)(v14 + 8);
                (unsigned __int64)i < *((_QWORD *)v8 + 1) + 8 * ((unsigned __int64)*((unsigned int *)v8 + 1) >> 5);
                ++i )
          {
            v12 = *i;
            if ( ((unsigned __int8)*i & 1) == 0 )
              goto LABEL_14;
          }
          v12 = 0LL;
        }
LABEL_14:
        if ( !v12 )
          break;
        v16 = (unsigned __int16 *)v12[2];
        if ( v10 >= 0x10000000 )
        {
          v7 = -1073741619;
          goto LABEL_80;
        }
        v11 += v16[39];
        v10 += v16[37] + v16[38] + v16[36];
        v17 = v12[3];
        if ( v17 )
          v10 += ((unsigned int)(*(_QWORD *)(v17 + 24) >> 16) >> 1) & 0x1FFFFFFF;
      }
      LODWORD(Size) = 72;
      v61 = 0LL;
      v62 = 0LL;
      HIDWORD(v61) = 96;
      LODWORD(v62) = 8;
      PopEtDataSectionReserve(&v61, v9, &Size);
      v70 = 0LL;
      v71 = 0LL;
      HIDWORD(v70) = 432;
      LODWORD(v71) = 8;
      PopEtDataSectionReserve(&v70, v52, &Size);
      v66 = 0LL;
      v67 = 0LL;
      HIDWORD(v66) = 1;
      LODWORD(v67) = 4;
      PopEtDataSectionReserve(&v66, v11, &Size);
      v59 = 0LL;
      v60 = 0LL;
      HIDWORD(v59) = 2;
      LODWORD(v60) = 2;
      PopEtDataSectionReserve(&v59, v10, &Size);
      v18 = Size;
      if ( (unsigned int)Size > a3 || (unsigned int)Size >= 0x7FFFFFFF )
      {
        if ( a3 >= 0xC )
        {
          *(_QWORD *)a2 = 0LL;
          *(_DWORD *)a2 = 2097170;
          *(_DWORD *)(a2 + 8) = v18;
        }
        v7 = -1073741789;
        goto LABEL_80;
      }
      memset((void *)a2, 0, (unsigned int)Size);
      PopEtDataSectionStart(&v61, a2);
      PopEtDataSectionStart(&v70, v19);
      PopEtDataSectionStart(&v66, v20);
      PopEtDataSectionStart(&v59, v21);
      v73 = a2;
      *(_DWORD *)a2 = 2097170;
      *(_DWORD *)(a2 + 4) = 72;
      *(_DWORD *)(a2 + 8) = v18;
      *(_DWORD *)(a2 + 12) = *((_DWORD *)v5 + 150);
      *(_DWORD *)(a2 + 24) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      *(_DWORD *)(a2 + 36) = v61;
      *(_DWORD *)(a2 + 40) = v52;
      *(_DWORD *)(a2 + 56) = 1048672;
      *(_DWORD *)(a2 + 52) = DWORD1(v67);
      *(_WORD *)(a2 + 60) = 12;
      v22 = (char *)Object;
      PopEtDataSectionCopyData(&v66, (char *)Object + 32, 12LL);
      *(_DWORD *)(a2 + 44) = DWORD1(v67);
      PopEtDataSectionCopyData(&v66, v22 + 604, 16LL);
      v23 = *(__m128i *)(v22 + 620);
      v58 = v23;
      v58.m128i_i32[0] = *((_DWORD *)v22 + 151) + _mm_cvtsi128_si32(v23);
      v58.m128i_i32[1] = *((_DWORD *)v22 + 152) + v23.m128i_i32[1];
      v58.m128i_i32[2] = *((_DWORD *)v22 + 153) + v23.m128i_i32[2];
      v58.m128i_i32[3] = *((_DWORD *)v22 + 154) + v23.m128i_i32[3];
      *(_DWORD *)(a2 + 48) = DWORD1(v67);
      PopEtDataSectionCopyData(&v66, &v58, 16LL);
      v24 = 0LL;
      v25 = *((_QWORD *)&v62 + 1);
      v26 = HIDWORD(v61);
      while ( 1 )
      {
        v27 = (char *)Object + 48;
        v63 = (char *)Object + 48;
        if ( !v24 )
        {
          v33 = *((_QWORD *)Object + 7);
          v65 = (_QWORD *)v33;
          v24 = v33;
          v64 = v33;
          goto LABEL_28;
        }
        v64 = v24;
        v28 = *((_DWORD *)Object + 13) >> 5;
        v72 = *(_QWORD *)(v24 + 8) & (-1LL << (*((_DWORD *)Object + 13) & 0x1F));
        v29 = (unsigned __int8 *)&v72;
        v55 = &v72;
        v30 = 8LL;
        v68 = 8LL;
        v31 = 314159;
        v32 = 314159;
        while ( v30 >= 8 )
        {
          v31 = v29[7]
              + 37
              * (v29[6]
               + 37 * (v29[5] + 37 * (v29[4] + 37 * (v29[3] + 37 * (v29[2] + 37 * (v29[1] + 37 * (*v29 + 37 * v31)))))));
          v32 = v31;
          v29 += 8;
          v55 = (__int64 *)v29;
          v30 -= 8LL;
          v68 = v30;
        }
        if ( v30 >= 1 )
        {
          v43 = v30 - 1;
          if ( !v43 )
            goto LABEL_62;
          v44 = v43 - 1;
          if ( !v44 )
            goto LABEL_61;
          v45 = v44 - 1;
          if ( !v45 )
            goto LABEL_60;
          v46 = v45 - 1;
          if ( !v46 )
            goto LABEL_59;
          v47 = v46 - 1;
          if ( !v47 )
            goto LABEL_58;
          v48 = v47 - 1;
          if ( !v48 )
            goto LABEL_57;
          if ( v48 == 1 )
            break;
        }
LABEL_27:
        v33 = *((_QWORD *)Object + 7) + 8LL * (v31 & (unsigned int)(v28 - 1));
        v65 = (_QWORD *)v33;
LABEL_28:
        v69 = 0LL;
        if ( !v24 )
          goto LABEL_33;
        if ( (*(_QWORD *)v24 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        {
          v25 = *((_QWORD *)&v62 + 1);
          v26 = HIDWORD(v61);
          v33 = (__int64)v65;
          v24 = v64;
          v27 = v63;
        }
        if ( v24 && (v24 = *(_QWORD *)v24, (v24 & 1) == 0) )
        {
LABEL_37:
          v64 = v24;
        }
        else
        {
LABEL_33:
          v34 = (__int64 *)(v33 + 8);
          v35 = *((_QWORD *)v27 + 1) + 8 * ((unsigned __int64)*((unsigned int *)v27 + 1) >> 5);
          while ( 1 )
          {
            v69 = v34;
            if ( (unsigned __int64)v34 >= v35 )
              break;
            v24 = *v34;
            if ( (*v34 & 1) == 0 )
            {
              v65 = v34;
              goto LABEL_37;
            }
            ++v34;
          }
          v24 = 0LL;
        }
        if ( !v24 )
        {
          v56 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          v57 = KiQueryUnbiasedInterruptTime() / 0x2710uLL;
          v74 = MEMORY[0xFFFFF78000000014];
          v38 = Object;
          v39 = v56;
          v40 = v73;
          *(_DWORD *)(v73 + 16) = v56 - *((_DWORD *)Object + 148);
          *(_DWORD *)(v40 + 20) = v57 - v38[149];
          *(_DWORD *)(v40 + 28) = v39;
          TimelineBitmapTime = KeQueryTimelineBitmapTime();
          *(_DWORD *)(v42 + 32) = TimelineBitmapTime;
          *(_QWORD *)(v42 + 64) = v74;
          for ( j = 0LL; ; *(_DWORD *)(j + 484) &= ~0x80000000 )
          {
            if ( j )
            {
              v77 = *(_QWORD *)(j + 8) & (-1LL << (v38[17] & 0x1F));
              v50 = (__int64 *)(*((_QWORD *)v38 + 9)
                              + 8LL
                              * ((37
                                * (BYTE6(v77)
                                 + 37
                                 * (BYTE5(v77)
                                  + 37
                                  * (BYTE4(v77)
                                   + 37
                                   * (BYTE3(v77)
                                    + 37 * (BYTE2(v77) + 37 * (BYTE1(v77) + 37 * ((unsigned __int8)v77 + 11623883)))))))
                                + HIBYTE(v77)) & (unsigned int)((v38[17] >> 5) - 1)));
            }
            else
            {
              j = *((_QWORD *)v38 + 9);
              v50 = (__int64 *)j;
            }
            if ( !j || (j = *(_QWORD *)j, (j & 1) != 0) )
            {
              for ( ++v50;
                    (unsigned __int64)v50 < *((_QWORD *)v38 + 9) + 8 * ((unsigned __int64)(unsigned int)v38[17] >> 5);
                    ++v50 )
              {
                j = *v50;
                if ( (*v50 & 1) == 0 )
                  goto LABEL_70;
              }
              j = 0LL;
            }
LABEL_70:
            if ( !j )
              break;
          }
          v5 = (char *)Object;
          PopEtEnergyTrackerCleanupAggregates(Object, v50);
          ++*((_DWORD *)v5 + 150);
          v38[148] = v56;
          v38[149] = v57;
          *(_OWORD *)(v5 + 604) = 0LL;
          *(__m128i *)(v5 + 620) = v58;
          v7 = 0;
          goto LABEL_80;
        }
        v36 = *(_QWORD *)(v24 + 16);
        *(_QWORD *)v25 = *(_QWORD *)(v24 + 32);
        *(_DWORD *)(v25 + 8) = *(_DWORD *)(v24 + 40);
        *(_DWORD *)(v25 + 12) = (unsigned __int16)*(_DWORD *)(v24 + 44);
        *(_DWORD *)(v25 + 64) = *(_DWORD *)(v24 + 504);
        *(_DWORD *)(v25 + 68) = *(_DWORD *)(v24 + 508);
        *(_OWORD *)(v25 + 72) = *(_OWORD *)(v24 + 480);
        *(_QWORD *)(v25 + 88) = *(_QWORD *)(v24 + 496);
        *(_DWORD *)(v25 + 20) = **(_DWORD **)(v36 + 32);
        *(_DWORD *)(v25 + 24) = *(_DWORD *)(*(_QWORD *)(v36 + 32) + 4LL);
        *(_DWORD *)(v25 + 40) = DWORD1(v67);
        *(_WORD *)(v25 + 52) = *(_WORD *)(v36 + 78);
        PopEtDataSectionCopyData(&v66, *(_QWORD *)(v36 + 64), *(unsigned __int16 *)(v36 + 78));
        *(_WORD *)(v25 + 44) = *(_WORD *)(v36 + 72);
        *(_DWORD *)(v25 + 16) = DWORD1(v60);
        PopEtDataSectionCopyString(&v59, *(_QWORD *)(v36 + 40), *(unsigned __int16 *)(v36 + 72));
        *(_WORD *)(v25 + 46) = *(_WORD *)(v36 + 74);
        *(_DWORD *)(v25 + 28) = DWORD1(v60);
        PopEtDataSectionCopyString(&v59, *(_QWORD *)(v36 + 48), *(unsigned __int16 *)(v36 + 74));
        *(_WORD *)(v25 + 48) = *(_WORD *)(v36 + 76);
        *(_DWORD *)(v25 + 32) = DWORD1(v60);
        PopEtDataSectionCopyString(&v59, *(_QWORD *)(v36 + 56), *(unsigned __int16 *)(v36 + 76));
        v37 = *(_QWORD *)(v24 + 24);
        if ( v37 )
        {
          *(_WORD *)(v25 + 50) = (unsigned __int16)WORD1(*(_QWORD *)(v37 + 24)) >> 1;
          *(_DWORD *)(v25 + 36) = DWORD1(v60);
          PopEtDataSectionCopyString(&v59, *(_QWORD *)(v24 + 24) + 32LL, *(unsigned __int16 *)(v25 + 50));
        }
        else
        {
          *(_WORD *)(v25 + 50) = 0;
          *(_DWORD *)(v25 + 36) = DWORD1(v60);
        }
        *(_DWORD *)(v25 + 56) = DWORD1(v71);
        *(_DWORD *)(v25 + 60) = 432;
        PopEtDataSectionCopyData(&v70, v24 + 48, HIDWORD(v70));
        if ( v26 + DWORD1(v62) <= DWORD2(v61) )
        {
          DWORD1(v62) += v26;
          v25 += v26;
          *((_QWORD *)&v62 + 1) = v25;
        }
      }
      v32 = *v29++ + 37 * v32;
      v55 = (__int64 *)v29;
LABEL_57:
      v32 = *v29++ + 37 * v32;
      v55 = (__int64 *)v29;
LABEL_58:
      v32 = *v29++ + 37 * v32;
      v55 = (__int64 *)v29;
LABEL_59:
      v32 = *v29++ + 37 * v32;
      v55 = (__int64 *)v29;
LABEL_60:
      v32 = *v29++ + 37 * v32;
      v55 = (__int64 *)v29;
LABEL_61:
      v32 = *v29++ + 37 * v32;
      v55 = (__int64 *)v29;
LABEL_62:
      v31 = *v29 + 37 * v32;
      v55 = (__int64 *)(v29 + 1);
      goto LABEL_27;
    }
  }
LABEL_80:
  if ( v6 )
    PopReleaseRwLock((ULONG_PTR)(v5 + 16));
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x74456F50u);
  return (unsigned int)v7;
}
