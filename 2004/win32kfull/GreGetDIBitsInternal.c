/*
 * XREFs of GreGetDIBitsInternal @ 0x1C0075B1C
 * Callers:
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0065070 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     GreExtGetObjectW @ 0x1C0065958 (GreExtGetObjectW.c)
 *     NtGdiGetDIBitsInternal @ 0x1C00F2BF0 (NtGdiGetDIBitsInternal.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C014F270 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C02B61EC (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C00D0890 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026FA74 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetDIBitsInternal(
        HDC a1,
        HBITMAP a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        struct tagBITMAPINFO *a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  struct tagBITMAPINFO *v9; // rdi
  unsigned int v11; // r12d
  unsigned int v12; // r15d
  unsigned int DIBitsInternalWorker; // esi
  __int64 v14; // rdx
  __int64 v15; // r8
  DC *v16; // r9
  struct _DC_ATTR *UserAttr; // rax
  int v18; // r14d
  struct _DC_ATTR *v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  _DWORD *v22; // rbx
  unsigned int biSize; // r14d
  LONG v24; // r8d
  LONG v25; // r9d
  int v26; // edx
  DWORD v27; // eax
  _DWORD *v29; // rbx
  _DWORD *v30; // rax
  int v31; // ecx
  DC *v32; // r9
  struct _DC_ATTR *v33; // rax
  __int64 v34; // rbx
  unsigned __int16 v35; // ax
  DC *v36; // [rsp+78h] [rbp-49h] BYREF
  __int64 v37; // [rsp+80h] [rbp-41h]
  DC *v38; // [rsp+88h] [rbp-39h] BYREF
  __int64 v39; // [rsp+90h] [rbp-31h]
  _DWORD *v40; // [rsp+98h] [rbp-29h] BYREF
  int v41; // [rsp+A0h] [rbp-21h] BYREF
  BOOL v42; // [rsp+A4h] [rbp-1Dh]
  unsigned __int8 *v43; // [rsp+A8h] [rbp-19h]
  __int64 v44; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v45; // [rsp+B8h] [rbp-9h] BYREF
  _BYTE v46[56]; // [rsp+C0h] [rbp-1h] BYREF
  HBITMAP v47; // [rsp+110h] [rbp+4Fh]

  v47 = a2;
  v9 = a6;
  if ( !a6 || (v11 = a7, a7 > 2) || (v12 = a9, a9 < 0xC) )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v37 = 0LL;
  DIBitsInternalWorker = 1;
  v42 = 1;
  LOBYTE(a2) = 1;
  v43 = (unsigned __int8 *)(a5 & -(__int64)(a4 != 0));
  v36 = (DC *)HmgLockEx(a1, a2, 0LL);
  v16 = v36;
  if ( !v36 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_39;
  }
  if ( (*((_DWORD *)v36 + 11) & 2) == 0 )
  {
    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v36);
    if ( UserAttr && !DC::SaveAttributes(v36, UserAttr) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v36 + 3);
      v36 = 0LL;
LABEL_21:
      GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange, v14, v15, v16);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      goto LABEL_22;
    }
    *((_DWORD *)v36 + 11) |= 2u;
    v16 = v36;
    LODWORD(v37) = 1;
  }
  if ( (*((_DWORD *)v16 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v16);
LABEL_39:
    v16 = v36;
  }
  if ( !v16 )
    goto LABEL_21;
  v18 = *(_DWORD *)(*((_QWORD *)v16 + 6) + 40LL) & 0x8000;
  v42 = v18 == 0;
  if ( (_DWORD)v37 && (*((_DWORD *)v16 + 11) & 2) != 0 )
  {
    if ( !HIDWORD(v37) )
    {
      v19 = XDCOBJ::GetUserAttr((XDCOBJ *)&v36);
      if ( v19 )
        DC::RestoreAttributes(v36, v19);
      v16 = v36;
    }
    *((_DWORD *)v16 + 11) &= ~2u;
    v16 = v36;
    LODWORD(v37) = 0;
  }
  LODWORD(a6) = 0;
  v20 = *(_QWORD *)v16;
  HmgDecrementExclusiveReferenceCountEx(v16, HIDWORD(v37), &a6);
  if ( (_DWORD)a6 )
    bDeleteDCInternalEx(v20, 0LL);
  if ( !v18 )
    goto LABEL_21;
LABEL_22:
  LOBYTE(v14) = 5;
  v21 = HmgShareLockCheck(v47, v14);
  v40 = (_DWORD *)v21;
  v22 = (_DWORD *)v21;
  if ( v21 )
  {
    biSize = v9->bmiHeader.biSize;
    if ( v43 )
      goto LABEL_40;
    if ( biSize == 12 )
    {
      if ( !HIWORD(v9->bmiHeader.biHeight) )
      {
        LOWORD(v9->bmiHeader.biWidth) = *(_WORD *)(v21 + 56);
        HIWORD(v9->bmiHeader.biWidth) = *(_WORD *)(v21 + 60);
        LOWORD(v9->bmiHeader.biHeight) = 1;
        v35 = *((_WORD *)&galBitsPerPixel + 2 * *(unsigned int *)(v21 + 96));
        HIWORD(v9->bmiHeader.biHeight) = v35;
        if ( v35 >= 0x10u )
          HIWORD(v9->bmiHeader.biHeight) = 24;
        goto LABEL_32;
      }
      goto LABEL_40;
    }
    if ( v12 >= 0x28 )
    {
      if ( !v9->bmiHeader.biBitCount )
      {
        if ( biSize > 0x28 )
          memset(v9, 0, v9->bmiHeader.biSize);
        v9->bmiHeader.biSize = 40;
        v24 = v22[14];
        v9->bmiHeader.biWidth = v24;
        v25 = v22[15];
        v9->bmiHeader.biHeight = v25;
        v9->bmiHeader.biPlanes = 1;
        v9->bmiHeader.biCompression = 0;
        v26 = *((unsigned __int16 *)&galBitsPerPixel + 2 * (unsigned int)v22[24]);
        v9->bmiHeader.biBitCount = v26;
        if ( v26 == 32 || v26 == 16 )
          v9->bmiHeader.biCompression = 3;
        *(_QWORD *)&v9->bmiHeader.biXPelsPerMeter = 0LL;
        v9->bmiHeader.biSizeImage = v25 * (((v24 * v26 + 31) >> 3) & 0xFFFFFFFC);
        v27 = *((_DWORD *)&gacPalEntries + (unsigned int)v22[24]);
        v9->bmiHeader.biClrImportant = v27;
        v9->bmiHeader.biClrUsed = v27;
        goto LABEL_32;
      }
LABEL_40:
      if ( biSize >= 0x28 && v9->bmiHeader.biCompression - 4 <= 1 )
      {
        EngSetLastError(0x57u);
        DIBitsInternalWorker = 0;
      }
      else
      {
        v29 = 0LL;
        v38 = 0LL;
        v39 = 0LL;
        XDCOBJ::vLock((XDCOBJ *)&v38, a1);
        if ( v38 )
        {
          v45 = *((_QWORD *)v38 + 6);
          v44 = *((_QWORD *)v38 + 11);
          if ( (*(_DWORD *)(v45 + 40) & 0x8000) != 0 )
          {
            DIBitsInternalWorker = GreGetDIBitsInternalWorker(
                                     biSize,
                                     (struct DCOBJ *)&v38,
                                     (struct PDEVOBJ *)&v45,
                                     (struct SURFREF *)&v40,
                                     (struct XEPALOBJ *)&v44,
                                     a1,
                                     v47,
                                     a3,
                                     a4,
                                     v43,
                                     v9,
                                     v11,
                                     a8,
                                     v12);
          }
          else
          {
            NEEDGRELOCK::vLock((NEEDGRELOCK *)v46, (struct XDCOBJ *)&v38);
            if ( v40 )
              v30 = v40 + 6;
            else
              v30 = 0LL;
            if ( v30 )
            {
              v31 = v30[22];
              if ( (v31 & 0x80004000) != 0 && (v31 & 0x200) == 0 )
              {
                v29 = v30 - 6;
                GreLockDisplayDevice(*((_QWORD *)v30 + 3));
              }
            }
            DIBitsInternalWorker = GreGetDIBitsInternalWorker(
                                     biSize,
                                     (struct DCOBJ *)&v38,
                                     (struct PDEVOBJ *)&v45,
                                     (struct SURFREF *)&v40,
                                     (struct XEPALOBJ *)&v44,
                                     a1,
                                     v47,
                                     a3,
                                     a4,
                                     v43,
                                     v9,
                                     v11,
                                     a8,
                                     v12);
            if ( v29 )
              GreUnlockDisplayDevice(*((_QWORD *)v29 + 6));
            NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v46);
          }
          v32 = v38;
          if ( v38 )
          {
            if ( (_DWORD)v39 && (*((_DWORD *)v38 + 11) & 2) != 0 )
            {
              if ( !HIDWORD(v39) )
              {
                v33 = XDCOBJ::GetUserAttr((XDCOBJ *)&v38);
                if ( v33 )
                  DC::RestoreAttributes(v38, v33);
                v32 = v38;
              }
              *((_DWORD *)v32 + 11) &= ~2u;
              v32 = v38;
              LODWORD(v39) = 0;
            }
            v41 = 0;
            v34 = *(_QWORD *)v32;
            HmgDecrementExclusiveReferenceCountEx(v32, HIDWORD(v39), &v41);
            if ( v41 )
              bDeleteDCInternalEx(v34, 0LL);
          }
        }
        else
        {
          DIBitsInternalWorker = 0;
        }
      }
      v22 = v40;
      goto LABEL_32;
    }
  }
  DIBitsInternalWorker = 0;
LABEL_32:
  if ( v22 )
    DEC_SHARE_REF_CNT(v22);
  if ( v42 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  return DIBitsInternalWorker;
}
