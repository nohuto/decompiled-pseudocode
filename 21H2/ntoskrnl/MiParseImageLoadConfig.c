/*
 * XREFs of MiParseImageLoadConfig @ 0x140706ABC
 * Callers:
 *     MiRelocateImage @ 0x1407074F0 (MiRelocateImage.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x140280D08 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140281750 (MiReferenceControlAreaFile.c)
 *     MiIsRetpolineEnabled @ 0x14029C6C4 (MiIsRetpolineEnabled.c)
 *     MiIsImportOptimizationEnabled @ 0x14029C6DC (MiIsImportOptimizationEnabled.c)
 *     MiFreeImageCfgContext @ 0x14029C764 (MiFreeImageCfgContext.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1406ACDDC (MiCaptureRetpolineRelocationTables.c)
 *     MiCreateRetpolineRelocationInformation @ 0x1406ACFF0 (MiCreateRetpolineRelocationInformation.c)
 *     LdrCaptureDynamicRelocationTableHeader @ 0x140706200 (LdrCaptureDynamicRelocationTableHeader.c)
 *     RtlCreateRvaList @ 0x1407064E8 (RtlCreateRvaList.c)
 *     MiCaptureImageCfgContext @ 0x140706680 (MiCaptureImageCfgContext.c)
 *     MiInitializeRvaStates @ 0x140706A48 (MiInitializeRvaStates.c)
 *     MiFreeImageRetpolineContext @ 0x14070705C (MiFreeImageRetpolineContext.c)
 *     MiLogRelocationRva @ 0x1407E5148 (MiLogRelocationRva.c)
 *     MiFreeImageLoadConfig @ 0x1407FB114 (MiFreeImageLoadConfig.c)
 */

__int64 __fastcall MiParseImageLoadConfig(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  bool v9; // r15
  int RvaList; // ebx
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned int v13; // edi
  __int16 v14; // ax
  unsigned int v15; // eax
  unsigned int *v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // eax
  int v23; // eax
  char Src; // [rsp+20h] [rbp-3B8h]
  size_t Size; // [rsp+28h] [rbp-3B0h]
  int v27; // [rsp+80h] [rbp-358h] BYREF
  int v28; // [rsp+84h] [rbp-354h] BYREF
  unsigned __int64 v29; // [rsp+88h] [rbp-350h]
  unsigned __int64 v30; // [rsp+90h] [rbp-348h]
  int v31; // [rsp+98h] [rbp-340h]
  __int64 v32; // [rsp+A0h] [rbp-338h]
  __int64 v33; // [rsp+A8h] [rbp-330h]
  unsigned __int64 v34; // [rsp+B0h] [rbp-328h]
  __int64 v35; // [rsp+B8h] [rbp-320h]
  __int64 v36; // [rsp+C0h] [rbp-318h]
  unsigned __int64 v37; // [rsp+C8h] [rbp-310h]
  __int64 v38; // [rsp+D0h] [rbp-308h]
  __int64 v39; // [rsp+D8h] [rbp-300h]
  _QWORD v40[2]; // [rsp+E0h] [rbp-2F8h] BYREF
  __int64 v41; // [rsp+F0h] [rbp-2E8h]
  unsigned __int64 v42; // [rsp+F8h] [rbp-2E0h]
  __int64 v43; // [rsp+100h] [rbp-2D8h]
  int v44[80]; // [rsp+110h] [rbp-2C8h] BYREF
  _BYTE v45[320]; // [rsp+250h] [rbp-188h] BYREF

  v36 = a1;
  v41 = a1;
  v37 = a2;
  v42 = a2;
  v38 = a3;
  v43 = a3;
  v31 = a4;
  v39 = a5;
  memset(v45, 0, 0x138uLL);
  v40[0] = 0LL;
  v28 = 0;
  v9 = 0;
  v30 = 0LL;
  v35 = 0LL;
  v27 = 0;
  RvaList = 0;
  memset(v44, 0, sizeof(v44));
  v11 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  v32 = v11;
  v33 = v11;
  v29 = *(_QWORD *)a3;
  v34 = v29;
  v12 = *(unsigned int *)(a3 + 96);
  if ( (_DWORD)v12 )
  {
    v13 = *(_DWORD *)(a3 + 100);
    v14 = *(_WORD *)(a3 + 48);
    if ( v14 == 523 )
    {
      v15 = 148;
    }
    else
    {
      if ( v14 != 267 )
        goto LABEL_21;
      v15 = 92;
    }
    if ( (unsigned int)v12 + v15 <= (unsigned int)v12 || (unsigned int)v12 + v15 > *(_DWORD *)(a3 + 16) )
      goto LABEL_21;
    v16 = (unsigned int *)(v12 + a2);
    v40[1] = v12 + a2;
    if ( v13 < v15 )
    {
      if ( *(_WORD *)(v11 + 48) != 332 )
        goto LABEL_21;
      if ( v13 > 4 )
        v13 = *v16;
      if ( v13 < v15 )
        goto LABEL_21;
    }
    if ( v13 >= 0x138 )
      v13 = 312;
    v17 = *(_DWORD *)(a3 + 96);
    if ( v17 + v13 <= v17 )
      goto LABEL_21;
    if ( v17 + v13 > *(_DWORD *)(a3 + 16) )
      goto LABEL_21;
    memmove(v45, v16, v13);
    v30 = MiReferenceControlAreaFile(a1);
    MiLogRelocationRva(*(unsigned int *)(a3 + 96), v13, v30, a1);
    *(_QWORD *)v44 = v41;
    *(_QWORD *)&v44[2] = v30;
    *(_QWORD *)&v44[4] = v42;
    *(_QWORD *)&v44[6] = v29;
    v44[8] = v31;
    v44[9] = 0;
    *(_QWORD *)&v44[10] = v43;
    *(_QWORD *)&v44[12] = v45;
    v44[14] = v13;
    RvaList = MiCaptureImageCfgContext(a1, v30, a2, v29, a4, a3, (__int64)v45, v13, &v27, (__int64)&v44[16]);
    if ( RvaList < 0 )
      goto LABEL_21;
    *(_DWORD *)a5 |= v27;
    v18 = v32;
    *(_WORD *)(a5 + 4) = *(_WORD *)(v32 + 48) == 452;
    *(_WORD *)(a5 + 6) = *(_WORD *)(v18 + 48);
    MiInitializeRvaStates((unsigned int *)a5, &v44[38], &v44[32], (unsigned int *)&v44[36]);
    if ( v44[36] )
    {
      RvaList = RtlCreateRvaList(v44, v19, v20, (unsigned int)v44[36], &v44[32], Size, (__int64 *)(a5 + 8));
      if ( RvaList < 0 )
        goto LABEL_21;
    }
    if ( MiIsRetpolineEnabled() || MiIsImportOptimizationEnabled() )
      v9 = *(_WORD *)(a3 + 48) == 523;
    if ( !v9 )
      goto LABEL_21;
    v21 = LdrCaptureDynamicRelocationTableHeader(a2, a4, (__int64)v45, v13, v29, *(_WORD *)(a3 + 48), &v28, v40);
    RvaList = v21;
    if ( v21 == -1073741637 )
    {
      RvaList = 0;
    }
    else if ( v21 < 0 )
    {
      goto LABEL_21;
    }
    if ( v28 )
    {
      v23 = MiCaptureRetpolineRelocationTables(a2, a4, v28, v40, Src, (unsigned int *)&v44[24]);
      RvaList = v23;
      if ( v23 == -1073741637 )
      {
        RvaList = 0;
        goto LABEL_23;
      }
      if ( v23 >= 0 )
        RvaList = MiCreateRetpolineRelocationInformation((__int64)&v44[24], v44[22], a4, (_QWORD *)(a5 + 16));
    }
  }
LABEL_21:
  if ( RvaList < 0 )
    MiFreeImageLoadConfig(a5);
LABEL_23:
  if ( v30 )
    MiDereferenceControlAreaFile(a1, v30);
  MiFreeImageCfgContext((__int64)&v44[16]);
  MiFreeImageRetpolineContext(&v44[24]);
  return (unsigned int)RvaList;
}
