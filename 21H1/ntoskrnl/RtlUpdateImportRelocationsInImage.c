/*
 * XREFs of RtlUpdateImportRelocationsInImage @ 0x1403AD048
 * Callers:
 *     MiApplyRetpolineFixupsToKernelAndHal @ 0x140A43490 (MiApplyRetpolineFixupsToKernelAndHal.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x140A435EC (MiApplyImportOptimizationToBootDrivers.c)
 * Callees:
 *     RtlCaptureRetpolineImportRvas @ 0x1403946E8 (RtlCaptureRetpolineImportRvas.c)
 *     RtlApplyImportRelocationToImage @ 0x1403AD28C (RtlApplyImportRelocationToImage.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x1403AD340 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x1403AD3EC (RtlpCaptureDynamicRelocationTableRva.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RtlUpdateImportRelocationsInImage(
        char *BaseOfImage,
        __int64 a2,
        unsigned int a3,
        unsigned int (*a4)(void),
        __int64 a5,
        __int64 a6,
        char a7,
        unsigned __int8 a8)
{
  _DWORD *v9; // rdi
  int v13; // ebx
  int v14; // eax
  char *v15; // rcx
  unsigned __int64 v16; // rdx
  char *i; // rcx
  _DWORD *v18; // rbx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r12
  _DWORD *v21; // rsi
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp-39h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-31h]
  _DWORD *PoolWithTag; // [rsp+58h] [rbp-29h]
  __int64 v26[2]; // [rsp+60h] [rbp-21h] BYREF
  __int128 v27; // [rsp+70h] [rbp-11h]
  __int128 v28; // [rsp+80h] [rbp-1h]

  LODWORD(v24) = 0;
  v9 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  PoolWithTag = 0LL;
  *(_OWORD *)v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v13 = RtlpCaptureRetpolineBinaryInfoForImage(BaseOfImage, a6, (__int64)v26);
  if ( v13 < 0 )
    return (unsigned int)v13;
  if ( a7 )
  {
    if ( !LODWORD(v26[1]) )
      return 0;
    *(_QWORD *)&v28 = a2;
    *((_QWORD *)&v27 + 1) = &BaseOfImage[LODWORD(v26[1])];
    *((_QWORD *)&v28 + 1) = a4;
    goto LABEL_8;
  }
  v14 = RtlCaptureRetpolineImportRvas(BaseOfImage, a2, a3, a4, 0LL, (ULONG *)&NumberOfBytes);
  v13 = v14;
  if ( v14 >= 0 )
    return (unsigned int)-1073741637;
  if ( v14 == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x496C7052u);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    v13 = RtlCaptureRetpolineImportRvas(BaseOfImage, a2, a3, a4, PoolWithTag, (ULONG *)&NumberOfBytes);
    if ( v13 < 0 )
      goto LABEL_20;
    *(_QWORD *)&v27 = v9;
LABEL_8:
    v13 = RtlpCaptureDynamicRelocationTableRva(BaseOfImage, a3);
    if ( v13 >= 0 )
    {
      v15 = &BaseOfImage[(unsigned int)v24];
      v16 = (unsigned __int64)&v15[*((unsigned int *)v15 + 1) + 8];
      for ( i = v15 + 8; ; i += *((unsigned int *)i + 2) + 12 )
      {
        if ( (unsigned __int64)i >= v16 )
        {
          v13 = -1073741637;
          goto LABEL_20;
        }
        if ( *(_QWORD *)i == 3LL )
          break;
      }
      v18 = i + 12;
      v19 = (unsigned __int64)&i[*((unsigned int *)i + 2) + 12];
      v24 = v19;
      if ( (unsigned __int64)(i + 12) < v19 )
      {
        do
        {
          v20 = (unsigned __int64)v18 + (unsigned int)v18[1];
          v21 = v18 + 2;
          if ( (unsigned __int64)(v18 + 2) < v20 )
          {
            do
            {
              if ( (*v21 & 0xFFF) == 0 && v21 != v18 + 2 )
                break;
              RtlApplyImportRelocationToImage(
                (_DWORD)BaseOfImage,
                a3,
                (unsigned int)v26,
                a6,
                *v18,
                (__int64)v21++,
                1,
                a8);
            }
            while ( (unsigned __int64)v21 < v20 );
            v19 = v24;
          }
          v18 = (_DWORD *)((char *)v18 + (unsigned int)v18[1]);
        }
        while ( (unsigned __int64)v18 < v19 );
        v9 = PoolWithTag;
      }
      v13 = 0;
    }
LABEL_20:
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
  }
  return (unsigned int)v13;
}
