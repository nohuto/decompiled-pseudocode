/*
 * XREFs of GreGetDIBitsInternal @ 0x1C009B01C
 * Callers:
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C00937E0 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     GreExtGetObjectW @ 0x1C0099FD8 (GreExtGetObjectW.c)
 *     NtGdiGetDIBitsInternal @ 0x1C009A2F0 (NtGdiGetDIBitsInternal.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C01518B0 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C02B4C6C (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 * Callees:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C009BB08 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00A1580 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026E454 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
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
  DC *v14; // r9
  struct _DC_ATTR *UserAttr; // rax
  int v16; // r14d
  struct _DC_ATTR *v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rax
  _DWORD *v21; // rbx
  unsigned int biSize; // r14d
  LONG v23; // r8d
  LONG v24; // r9d
  int v25; // edx
  DWORD v26; // eax
  _DWORD *v28; // rbx
  _DWORD *v29; // rax
  int v30; // ecx
  DC *v31; // r9
  struct _DC_ATTR *v32; // rax
  __int64 v33; // rbx
  unsigned __int16 v34; // ax
  DC *v35; // [rsp+78h] [rbp-49h] BYREF
  __int64 v36; // [rsp+80h] [rbp-41h]
  DC *v37; // [rsp+88h] [rbp-39h] BYREF
  __int64 v38; // [rsp+90h] [rbp-31h]
  _DWORD *v39; // [rsp+98h] [rbp-29h] BYREF
  int v40; // [rsp+A0h] [rbp-21h] BYREF
  BOOL v41; // [rsp+A4h] [rbp-1Dh]
  unsigned __int8 *v42; // [rsp+A8h] [rbp-19h]
  __int64 v43; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v44; // [rsp+B8h] [rbp-9h] BYREF
  _BYTE v45[56]; // [rsp+C0h] [rbp-1h] BYREF
  HBITMAP v46; // [rsp+110h] [rbp+4Fh]

  v46 = a2;
  v9 = a6;
  if ( !a6 || (v11 = a7, a7 > 2) || (v12 = a9, a9 < 0xC) )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v36 = 0LL;
  DIBitsInternalWorker = 1;
  v41 = 1;
  LOBYTE(a2) = 1;
  v42 = (unsigned __int8 *)(a5 & -(__int64)(a4 != 0));
  v35 = (DC *)HmgLockEx(a1, a2, 0LL);
  v14 = v35;
  if ( !v35 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_39;
  }
  if ( (*((_DWORD *)v35 + 11) & 2) == 0 )
  {
    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v35);
    if ( UserAttr && !DC::SaveAttributes(v35, UserAttr) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v35 + 3);
      v35 = 0LL;
LABEL_21:
      GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      goto LABEL_22;
    }
    *((_DWORD *)v35 + 11) |= 2u;
    v14 = v35;
    LODWORD(v36) = 1;
  }
  if ( (*((_DWORD *)v14 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v14);
LABEL_39:
    v14 = v35;
  }
  if ( !v14 )
    goto LABEL_21;
  v16 = *(_DWORD *)(*((_QWORD *)v14 + 6) + 40LL) & 0x8000;
  v41 = v16 == 0;
  if ( (_DWORD)v36 && (*((_DWORD *)v14 + 11) & 2) != 0 )
  {
    if ( !HIDWORD(v36) )
    {
      v17 = XDCOBJ::GetUserAttr((XDCOBJ *)&v35);
      if ( v17 )
        DC::RestoreAttributes(v35, v17);
      v14 = v35;
    }
    *((_DWORD *)v14 + 11) &= ~2u;
    v14 = v35;
    LODWORD(v36) = 0;
  }
  LODWORD(a6) = 0;
  v18 = *(_QWORD *)v14;
  HmgDecrementExclusiveReferenceCountEx(v14, HIDWORD(v36), &a6);
  if ( (_DWORD)a6 )
    bDeleteDCInternalEx(v18, 0LL);
  if ( !v16 )
    goto LABEL_21;
LABEL_22:
  LOBYTE(v19) = 5;
  v20 = HmgShareLockCheck(v46, v19);
  v39 = (_DWORD *)v20;
  v21 = (_DWORD *)v20;
  if ( v20 )
  {
    biSize = v9->bmiHeader.biSize;
    if ( v42 )
      goto LABEL_40;
    if ( biSize == 12 )
    {
      if ( !HIWORD(v9->bmiHeader.biHeight) )
      {
        LOWORD(v9->bmiHeader.biWidth) = *(_WORD *)(v20 + 56);
        HIWORD(v9->bmiHeader.biWidth) = *(_WORD *)(v20 + 60);
        LOWORD(v9->bmiHeader.biHeight) = 1;
        v34 = *((_WORD *)&galBitsPerPixel + 2 * *(unsigned int *)(v20 + 96));
        HIWORD(v9->bmiHeader.biHeight) = v34;
        if ( v34 >= 0x10u )
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
        v23 = v21[14];
        v9->bmiHeader.biWidth = v23;
        v24 = v21[15];
        v9->bmiHeader.biHeight = v24;
        v9->bmiHeader.biPlanes = 1;
        v9->bmiHeader.biCompression = 0;
        v25 = *((unsigned __int16 *)&galBitsPerPixel + 2 * (unsigned int)v21[24]);
        v9->bmiHeader.biBitCount = v25;
        if ( v25 == 32 || v25 == 16 )
          v9->bmiHeader.biCompression = 3;
        *(_QWORD *)&v9->bmiHeader.biXPelsPerMeter = 0LL;
        v9->bmiHeader.biSizeImage = v24 * (((v23 * v25 + 31) >> 3) & 0xFFFFFFFC);
        v26 = *((_DWORD *)&gacPalEntries + (unsigned int)v21[24]);
        v9->bmiHeader.biClrImportant = v26;
        v9->bmiHeader.biClrUsed = v26;
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
        v28 = 0LL;
        v37 = 0LL;
        v38 = 0LL;
        XDCOBJ::vLock((XDCOBJ *)&v37, a1);
        if ( v37 )
        {
          v44 = *((_QWORD *)v37 + 6);
          v43 = *((_QWORD *)v37 + 11);
          if ( (*(_DWORD *)(v44 + 40) & 0x8000) != 0 )
          {
            DIBitsInternalWorker = GreGetDIBitsInternalWorker(
                                     biSize,
                                     (struct DCOBJ *)&v37,
                                     (struct PDEVOBJ *)&v44,
                                     (struct SURFREF *)&v39,
                                     (struct XEPALOBJ *)&v43,
                                     a1,
                                     v46,
                                     a3,
                                     a4,
                                     v42,
                                     v9,
                                     v11,
                                     a8,
                                     v12);
          }
          else
          {
            NEEDGRELOCK::vLock((NEEDGRELOCK *)v45, (struct XDCOBJ *)&v37);
            if ( v39 )
              v29 = v39 + 6;
            else
              v29 = 0LL;
            if ( v29 )
            {
              v30 = v29[22];
              if ( (v30 & 0x80004000) != 0 && (v30 & 0x200) == 0 )
              {
                v28 = v29 - 6;
                GreLockDisplayDevice(*((_QWORD *)v29 + 3));
              }
            }
            DIBitsInternalWorker = GreGetDIBitsInternalWorker(
                                     biSize,
                                     (struct DCOBJ *)&v37,
                                     (struct PDEVOBJ *)&v44,
                                     (struct SURFREF *)&v39,
                                     (struct XEPALOBJ *)&v43,
                                     a1,
                                     v46,
                                     a3,
                                     a4,
                                     v42,
                                     v9,
                                     v11,
                                     a8,
                                     v12);
            if ( v28 )
              GreUnlockDisplayDevice(*((_QWORD *)v28 + 6));
            NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v45);
          }
          v31 = v37;
          if ( v37 )
          {
            if ( (_DWORD)v38 && (*((_DWORD *)v37 + 11) & 2) != 0 )
            {
              if ( !HIDWORD(v38) )
              {
                v32 = XDCOBJ::GetUserAttr((XDCOBJ *)&v37);
                if ( v32 )
                  DC::RestoreAttributes(v37, v32);
                v31 = v37;
              }
              *((_DWORD *)v31 + 11) &= ~2u;
              v31 = v37;
              LODWORD(v38) = 0;
            }
            v40 = 0;
            v33 = *(_QWORD *)v31;
            HmgDecrementExclusiveReferenceCountEx(v31, HIDWORD(v38), &v40);
            if ( v40 )
              bDeleteDCInternalEx(v33, 0LL);
          }
        }
        else
        {
          DIBitsInternalWorker = 0;
        }
      }
      v21 = v39;
      goto LABEL_32;
    }
  }
  DIBitsInternalWorker = 0;
LABEL_32:
  if ( v21 )
    DEC_SHARE_REF_CNT(v21);
  if ( v41 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  return DIBitsInternalWorker;
}
