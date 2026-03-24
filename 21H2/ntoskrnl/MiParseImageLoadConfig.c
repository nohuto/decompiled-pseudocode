/*
 * XREFs of MiParseImageLoadConfig @ 0x140712E88
 * Callers:
 *     MiRelocateImage @ 0x1406D54B0 (MiRelocateImage.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x14031CEB0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x1403571E4 (MiDereferenceControlAreaFile.c)
 *     MiFreeImageCfgContext @ 0x14035E8C0 (MiFreeImageCfgContext.c)
 *     MiIsImportOptimizationEnabled @ 0x14035E8EC (MiIsImportOptimizationEnabled.c)
 *     MiIsRetpolineEnabled @ 0x14035E904 (MiIsRetpolineEnabled.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiCaptureRetpolineRelocationTables @ 0x140712C50 (MiCaptureRetpolineRelocationTables.c)
 *     MiFreeImageRetpolineContext @ 0x1407133FC (MiFreeImageRetpolineContext.c)
 *     MiCaptureImageCfgContext @ 0x140713450 (MiCaptureImageCfgContext.c)
 *     MiLogRelocationRva @ 0x1407138D4 (MiLogRelocationRva.c)
 *     RtlCreateRvaList @ 0x1407139BC (RtlCreateRvaList.c)
 *     MiCaptureDynamicRelocationTableRva @ 0x140713B4C (MiCaptureDynamicRelocationTableRva.c)
 *     MiCreateRetpolineRelocationInformation @ 0x140713C88 (MiCreateRetpolineRelocationInformation.c)
 *     MiFreeImageLoadConfig @ 0x14076B228 (MiFreeImageLoadConfig.c)
 */

__int64 __fastcall MiParseImageLoadConfig(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4, __int64 a5, __int64 a6)
{
  ULONG_PTR v10; // r13
  int RetpolineRelocationInformation; // ebx
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned int v14; // edi
  __int16 v15; // ax
  unsigned int v16; // eax
  unsigned int *v17; // rdx
  unsigned int v18; // eax
  int v19; // edx
  __int64 v20; // rax
  int v21; // r9d
  int v22; // eax
  __int64 v23; // r8
  int v25; // eax
  size_t v26; // [rsp+28h] [rbp-350h]
  unsigned int v27; // [rsp+84h] [rbp-2F4h] BYREF
  __int64 v28; // [rsp+88h] [rbp-2F0h]
  __int64 v29; // [rsp+90h] [rbp-2E8h]
  int v30; // [rsp+98h] [rbp-2E0h]
  __int64 v31; // [rsp+A0h] [rbp-2D8h]
  __int64 v32; // [rsp+A8h] [rbp-2D0h]
  __int64 v33; // [rsp+B0h] [rbp-2C8h]
  __int64 v34; // [rsp+B8h] [rbp-2C0h]
  __int64 v35; // [rsp+C0h] [rbp-2B8h]
  __int64 v36; // [rsp+C8h] [rbp-2B0h]
  __int64 *v37; // [rsp+D0h] [rbp-2A8h]
  __int64 v38; // [rsp+D8h] [rbp-2A0h]
  __int64 v39; // [rsp+E0h] [rbp-298h]
  __int64 v40; // [rsp+E8h] [rbp-290h]
  __int64 v41; // [rsp+F0h] [rbp-288h]
  __int64 *v42; // [rsp+F8h] [rbp-280h]
  int Src[68]; // [rsp+100h] [rbp-278h] BYREF
  _BYTE v44[288]; // [rsp+210h] [rbp-168h] BYREF

  v28 = a1;
  v35 = a1;
  v40 = a1;
  v36 = a2;
  v41 = a2;
  v30 = a3;
  v37 = a4;
  v42 = a4;
  v38 = a6;
  memset(v44, 0, 0x118uLL);
  v27 = 0;
  v10 = 0LL;
  v34 = 0LL;
  RetpolineRelocationInformation = 0;
  memset(Src, 0, sizeof(Src));
  v12 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  v31 = v12;
  v32 = v12;
  v29 = *a4;
  v33 = v29;
  v13 = *((unsigned int *)a4 + 24);
  if ( (_DWORD)v13 )
  {
    v14 = *((_DWORD *)a4 + 25);
    v15 = *((_WORD *)a4 + 24);
    if ( v15 == 523 )
    {
      v16 = 148;
    }
    else
    {
      if ( v15 != 267 )
        goto LABEL_29;
      v16 = 92;
    }
    if ( (unsigned int)v13 + v16 > (unsigned int)v13 && (unsigned int)v13 + v16 <= *((_DWORD *)a4 + 4) )
    {
      v17 = (unsigned int *)(a2 + v13);
      v39 = a2 + v13;
      if ( v14 >= v16 )
        goto LABEL_7;
      if ( *(_WORD *)(v12 + 48) == 332 )
      {
        if ( v14 > 4 )
          v14 = *v17;
        if ( v14 >= v16 )
        {
LABEL_7:
          if ( v14 >= 0x118 )
            v14 = 280;
          v18 = *((_DWORD *)a4 + 24);
          if ( v18 + v14 > v18 && v18 + v14 <= *((_DWORD *)a4 + 4) )
          {
            memmove(v44, v17, v14);
            v10 = MiReferenceControlAreaFile(v28);
            MiLogRelocationRva(*((unsigned int *)a4 + 24), v14, v10, v28);
            *(_QWORD *)Src = v40;
            *(_QWORD *)&Src[2] = v10;
            *(_QWORD *)&Src[4] = v41;
            *(_QWORD *)&Src[6] = v29;
            Src[8] = v30;
            Src[9] = 0;
            *(_QWORD *)&Src[10] = v42;
            *(_QWORD *)&Src[12] = v44;
            Src[14] = v14;
            RetpolineRelocationInformation = MiCaptureImageCfgContext(v28, v10, a2, v29, a3);
            if ( RetpolineRelocationInformation >= 0 )
            {
              v19 = *(_DWORD *)a6;
              *(_DWORD *)a6 = *(_DWORD *)a6;
              v20 = v31;
              *(_DWORD *)(a6 + 4) = *(_WORD *)(v31 + 48) == 452;
              *(_WORD *)(a6 + 8) = *(_WORD *)(v20 + 48);
              v21 = 0;
              if ( (v19 & 1) != 0 )
              {
                Src[32] = 1;
                *(_QWORD *)&Src[38] = MiImageCfgRvaIteratorFirst;
                *(_QWORD *)&Src[40] = MiImageCfgRvaIteratorNext;
                v21 = 1;
                if ( (v19 & 8) != 0 )
                {
                  Src[33] = 4;
                  *(_OWORD *)&Src[48] = 0LL;
                  v21 = 2;
                }
              }
              Src[35] = v21;
              if ( !v21
                || (RetpolineRelocationInformation = RtlCreateRvaList((int)Src, v19, 452, v21, &Src[32], v26, a6 + 16),
                    RetpolineRelocationInformation >= 0) )
              {
                if ( (MiIsRetpolineEnabled() || MiIsImportOptimizationEnabled()) && *((_WORD *)a4 + 24) == 523 )
                {
                  v22 = MiCaptureDynamicRelocationTableRva(a2, a3, v29, 523, (__int64)v44, v14, (__int64)&v27);
                  RetpolineRelocationInformation = v22;
                  if ( v22 == -1073741637 )
                  {
LABEL_21:
                    RetpolineRelocationInformation = 0;
                    goto LABEL_22;
                  }
                  if ( v22 >= 0 )
                  {
                    v25 = MiCaptureRetpolineRelocationTables(a2, a3, v23, v27, (unsigned int *)&Src[24]);
                    RetpolineRelocationInformation = v25;
                    if ( v25 == -1073741637 )
                      goto LABEL_21;
                    if ( v25 >= 0 )
                      RetpolineRelocationInformation = MiCreateRetpolineRelocationInformation(
                                                         &Src[24],
                                                         (unsigned int)Src[22],
                                                         a3,
                                                         a6 + 24);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_29:
  if ( RetpolineRelocationInformation < 0 )
    MiFreeImageLoadConfig(a6);
LABEL_22:
  if ( v10 )
    MiDereferenceControlAreaFile(v28, v10);
  MiFreeImageCfgContext((__int64)&Src[16]);
  MiFreeImageRetpolineContext(&Src[24]);
  return (unsigned int)RetpolineRelocationInformation;
}
