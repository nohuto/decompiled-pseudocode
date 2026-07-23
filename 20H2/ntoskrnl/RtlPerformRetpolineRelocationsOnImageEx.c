/*
 * XREFs of RtlPerformRetpolineRelocationsOnImageEx @ 0x14058E4AC
 * Callers:
 *     RtlPerformRetpolineRelocationsOnImage @ 0x14058E46C (RtlPerformRetpolineRelocationsOnImage.c)
 *     MiReloadBootLoadedDrivers @ 0x140A4E0B0 (MiReloadBootLoadedDrivers.c)
 *     MiApplyRetpolineFixupsToKernelAndHal @ 0x140A4EF80 (MiApplyRetpolineFixupsToKernelAndHal.c)
 * Callees:
 *     RtlpApplyGenericRetpolineFixup @ 0x1403004F0 (RtlpApplyGenericRetpolineFixup.c)
 *     RtlApplyImportRelocationToImage @ 0x1403B587C (RtlApplyImportRelocationToImage.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x1403B5930 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x1403B59DC (RtlpCaptureDynamicRelocationTableRva.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     RtlpConstructIndirectRelocationFixup @ 0x14058E89C (RtlpConstructIndirectRelocationFixup.c)
 *     RtlpConstructSwitchJumpRelocationFixup @ 0x14058EA54 (RtlpConstructSwitchJumpRelocationFixup.c)
 *     RtlpIsAddressInIgnoreRegion @ 0x14058EB1C (RtlpIsAddressInIgnoreRegion.c)
 */

int __fastcall RtlPerformRetpolineRelocationsOnImageEx(
        char *BaseOfImage,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  char *v9; // r13
  __int64 v10; // r14
  unsigned __int64 v11; // rbx
  __int64 v12; // r12
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r15
  int result; // eax
  char *v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r13
  unsigned int *v21; // rbx
  unsigned int v22; // r15d
  unsigned __int64 v23; // r14
  unsigned int *v24; // rdi
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // r13
  unsigned int *v27; // rdi
  unsigned __int64 v28; // r14
  unsigned int *v29; // rsi
  unsigned __int64 v30; // r13
  int v31; // ebx
  unsigned __int64 v32; // r12
  unsigned int *v33; // rdi
  unsigned __int64 v34; // r14
  unsigned int *v35; // rsi
  int v36; // ebx
  unsigned __int64 v38; // [rsp+50h] [rbp-81h]
  unsigned __int64 v39; // [rsp+50h] [rbp-81h]
  unsigned __int64 v40; // [rsp+60h] [rbp-71h]
  __int64 v41[2]; // [rsp+70h] [rbp-61h] BYREF
  __int128 v42; // [rsp+80h] [rbp-51h]
  __int128 v43; // [rsp+90h] [rbp-41h]
  unsigned __int64 v44; // [rsp+A0h] [rbp-31h] BYREF
  int v45; // [rsp+A8h] [rbp-29h]
  __int16 v46; // [rsp+ACh] [rbp-25h]
  char *v47; // [rsp+B0h] [rbp-21h] BYREF
  int v48; // [rsp+B8h] [rbp-19h]
  __int16 v49; // [rsp+BCh] [rbp-15h]

  LODWORD(v44) = 0;
  v9 = BaseOfImage;
  v10 = a7;
  v11 = 0LL;
  v12 = a8;
  v13 = 0LL;
  v47 = BaseOfImage;
  v14 = 0LL;
  *(_OWORD *)v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  result = RtlpCaptureRetpolineBinaryInfoForImage(
             BaseOfImage,
             a2,
             a3,
             a4 & -(__int64)(a6 != 0),
             (_DWORD *)(a5 & -(__int64)(a6 != 0)),
             (__int64)v41);
  if ( result >= 0 )
  {
    result = RtlpCaptureDynamicRelocationTableRva(v9, a3, (int *)&v44);
    if ( result >= 0 )
    {
      v17 = &v9[(unsigned int)v44];
      v18 = (unsigned __int64)&v17[*((unsigned int *)v17 + 1) + 8];
      v19 = (unsigned __int64)(v17 + 8);
      if ( v19 >= v18 )
        return -1073741637;
      do
      {
        switch ( *(_QWORD *)v19 )
        {
          case 3LL:
            v11 = v19;
            break;
          case 4LL:
            v13 = v19;
            break;
          case 5LL:
            v14 = v19;
            break;
        }
        v19 += *(unsigned int *)(v19 + 8) + 12LL;
      }
      while ( v19 < v18 );
      v40 = v14;
      if ( v11 )
      {
        v20 = *(unsigned int *)(v11 + 8) + v11 + 12;
        v21 = (unsigned int *)(v11 + 12);
        v44 = v20;
        if ( (unsigned __int64)v21 < v20 )
        {
          v22 = a3;
          do
          {
            if ( !(unsigned __int8)RtlpIsAddressInIgnoreRegion(*v21, v10, v12, a9) )
            {
              v23 = (unsigned __int64)v21 + v21[1];
              v24 = v21 + 2;
              if ( (unsigned __int64)(v21 + 2) < v23 )
              {
                v25 = (unsigned __int64)v47;
                do
                {
                  if ( (*v24 & 0xFFF) != 0 || v24 == v21 + 2 )
                    RtlApplyImportRelocationToImage(v25, v22, (__int64)v41, a5, *v21, v24, a6, 0);
                  ++v24;
                }
                while ( (unsigned __int64)v24 < v23 );
                v20 = v44;
              }
              v12 = a8;
              v10 = a7;
            }
            v21 = (unsigned int *)((char *)v21 + v21[1]);
          }
          while ( (unsigned __int64)v21 < v20 );
          v14 = v40;
        }
        if ( !v13 )
          goto LABEL_42;
      }
      else if ( !v13 )
      {
        if ( !v14 )
          return -1073741637;
        goto LABEL_44;
      }
      v26 = *(unsigned int *)(v13 + 8) + v13 + 12;
      v27 = (unsigned int *)(v13 + 12);
      v38 = v26;
      if ( v13 + 12 < v26 )
      {
        do
        {
          if ( !(unsigned __int8)RtlpIsAddressInIgnoreRegion(*v27, v10, v12, a9) )
          {
            v28 = (unsigned __int64)v27 + v27[1];
            v29 = v27 + 2;
            if ( (unsigned __int64)(v27 + 2) < v28 )
            {
              v30 = (unsigned __int64)v47;
              do
              {
                if ( (*(_WORD *)v29 & 0xFFF) != 0 || v29 == v27 + 2 )
                {
                  v31 = (*(_WORD *)v29 & 0xFFF) + *v27;
                  v44 = 0LL;
                  v45 = 0;
                  v46 = 0;
                  RtlpConstructIndirectRelocationFixup(v31, (unsigned int)v41, a5, (_DWORD)v29, a6, (__int64)&v44);
                  RtlpApplyGenericRetpolineFixup(v30, a3, &v44, v31);
                }
                v29 = (unsigned int *)((char *)v29 + 2);
              }
              while ( (unsigned __int64)v29 < v28 );
              v26 = v38;
            }
            v12 = a8;
            v10 = a7;
          }
          v27 = (unsigned int *)((char *)v27 + v27[1]);
        }
        while ( (unsigned __int64)v27 < v26 );
        v14 = v40;
      }
LABEL_42:
      if ( !v14 )
        return 0;
      v9 = v47;
LABEL_44:
      v32 = *(unsigned int *)(v14 + 8) + v14 + 12;
      v33 = (unsigned int *)(v14 + 12);
      v39 = v32;
      while ( (unsigned __int64)v33 < v32 )
      {
        if ( !(unsigned __int8)RtlpIsAddressInIgnoreRegion(*v33, v10, a8, a9) )
        {
          v34 = (unsigned __int64)v33 + v33[1];
          v35 = v33 + 2;
          if ( (unsigned __int64)(v33 + 2) < v34 )
          {
            do
            {
              if ( (*(_WORD *)v35 & 0xFFF) != 0 || v35 == v33 + 2 )
              {
                v36 = (*(_WORD *)v35 & 0xFFF) + *v33;
                v47 = 0LL;
                v48 = 0;
                v49 = 0;
                RtlpConstructSwitchJumpRelocationFixup(v36, (unsigned int)v41, a5, (_DWORD)v35, a6, (__int64)&v47);
                RtlpApplyGenericRetpolineFixup((unsigned __int64)v9, a3, &v47, v36);
              }
              v35 = (unsigned int *)((char *)v35 + 2);
            }
            while ( (unsigned __int64)v35 < v34 );
            v32 = v39;
          }
          v10 = a7;
        }
        v33 = (unsigned int *)((char *)v33 + v33[1]);
      }
      return 0;
    }
  }
  return result;
}
