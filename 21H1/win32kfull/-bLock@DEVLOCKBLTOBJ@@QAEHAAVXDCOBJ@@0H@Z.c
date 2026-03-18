/*
 * XREFs of ?bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@0H@Z @ 0x59880
 * Callers:
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 *     _GreMaskBlt@52 @ 0x7A502 (_GreMaskBlt@52.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 *     ??0DEVLOCKBLTOBJ@@QAE@AAVXDCOBJ@@0@Z @ 0x1EBF73 (--0DEVLOCKBLTOBJ@@QAE@AAVXDCOBJ@@0@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?TrapAppContainerRenderingWorker@@YG_NAAVXDCOBJ@@AAPAUHSURF__@@1PAK@Z @ 0x5A290 (-TrapAppContainerRenderingWorker@@YG_NAAVXDCOBJ@@AAPAUHSURF__@@1PAK@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QAEHPAVXDCOBJ@@H@Z @ 0x5A4E6 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QAEHPAVXDCOBJ@@H@Z.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QAEHPAVXDCOBJ@@HH@Z @ 0x5A622 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QAEHPAVXDCOBJ@@HH@Z.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     ?bCopySurface@@YGHPAVSURFMEM@@PAU_SURFOBJ@@@Z @ 0x1D1105 (-bCopySurface@@YGHPAVSURFMEM@@PAU_SURFOBJ@@@Z.c)
 */

int __thiscall DEVLOCKBLTOBJ::bLock(DEVLOCKBLTOBJ *this, DC **a2, DC **a3, int a4)
{
  struct XDCOBJ *v5; // ecx
  int v6; // ecx
  DC *v7; // eax
  DC *v8; // eax
  int v9; // ecx
  int v10; // edx
  bool v11; // zf
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v19; // eax
  bool v20; // zf
  DC *v21; // edx
  int v22; // ecx
  int v23; // ecx
  int v24; // eax
  int v25; // edx
  int *v26; // eax
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  DC **v30; // eax
  int *v32; // eax
  int v33; // edx
  DC *v34; // ecx
  int v35; // eax
  struct XDCOBJ *v36; // edx
  DC *v37; // ecx
  DC *v38; // eax
  DC *v39; // eax
  int v40; // eax
  int v41; // eax
  DC **v42; // ecx
  int v43; // eax
  int v44; // eax
  HDC v45; // ecx
  int v46; // eax
  int v47; // eax
  HSURF *v48; // [esp+0h] [ebp-1Ch]
  HSURF *v49; // [esp+0h] [ebp-1Ch]
  struct SURFMEM *v50; // [esp+0h] [ebp-1Ch]
  unsigned int *v51; // [esp+4h] [ebp-18h]
  unsigned int *v52; // [esp+4h] [ebp-18h]
  struct _SURFOBJ *v53; // [esp+4h] [ebp-18h]
  DC *v54; // [esp+Ch] [ebp-10h] BYREF
  DC *v55; // [esp+10h] [ebp-Ch] BYREF
  int v56; // [esp+14h] [ebp-8h]
  int v57; // [esp+18h] [ebp-4h]

  v5 = (DEVLOCKBLTOBJ *)((char *)this + 84);
  *(_DWORD *)v5 = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 1;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 23) = *(_DWORD *)*a2;
  *((_DWORD *)this + 26) = *(_DWORD *)*a3;
  if ( !TrapAppContainerRenderingWorker(v5, (HSURF *)this + 11, v48, v51)
    || !TrapAppContainerRenderingWorker((DEVLOCKBLTOBJ *)((char *)this + 96), 0, v49, v52) )
  {
    return 0;
  }
  *((_DWORD *)this + 12) = 0;
  v6 = 1;
  *((_DWORD *)this + 16) = 0;
  v7 = *a3;
  v56 = 1;
  v57 = 0;
  if ( v7 && (*((_DWORD *)v7 + 6) & 0x200) != 0 || *a2 && (*((_DWORD *)*a2 + 6) & 0x200) != 0 )
  {
    *((_DWORD *)this + 2) = _ghsemDynamicModeChange;
    GreAcquireSemaphoreSharedInternal(_ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
    *((_DWORD *)this + 10) |= 8u;
    if ( !GreGetLockCount() && !GreIsSemaphoreOwnedOrSharedByCurrentThread(_ghsemGreLock) )
    {
      GreAcquireSemaphoreSharedInternal(_ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", _ghsemGreLock);
      v57 = 1;
    }
    v55 = *a3;
    if ( !v55 )
    {
      v6 = 1;
LABEL_26:
      if ( *a2 )
      {
        v55 = (DC *)*((_DWORD *)*a2 + 9);
        v13 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v55);
        v6 = v13 & v56;
        v56 &= v13;
      }
      goto LABEL_28;
    }
    v8 = *a2;
    v54 = v8;
    if ( !v8 )
    {
LABEL_24:
      v54 = (DC *)*((_DWORD *)v55 + 9);
      v12 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v54);
      v6 = v12 & v56;
      v56 &= v12;
      goto LABEL_26;
    }
    v9 = *((_DWORD *)v8 + 6);
    v10 = *((_DWORD *)v55 + 6);
    if ( ((v10 ^ v9) & 0x200) != 0 )
    {
      if ( (**((_BYTE **)v55 + 255) & 1) != 0 && (v9 & 0x8000) != 0 )
        goto LABEL_22;
      if ( (**((_BYTE **)v54 + 255) & 1) == 0 )
      {
LABEL_23:
        v56 = 0;
        goto LABEL_24;
      }
      v11 = (*((_DWORD *)v55 + 6) & 0x8000) == 0;
    }
    else
    {
      if ( (v10 & 0x200) == 0 || (v9 & 0x200) == 0 || (v10 & 0x8000) == 0 )
        goto LABEL_23;
      v11 = (v9 & 0x8000) == 0;
    }
    if ( !v11 )
    {
LABEL_22:
      v56 = 1;
      goto LABEL_24;
    }
    goto LABEL_23;
  }
LABEL_28:
  v14 = *((_DWORD *)*a3 + 6);
  if ( (v14 & 0x200) != 0 )
  {
    if ( (v14 & 0x8000) == 0 || !v6 )
    {
      v11 = v57 == 0;
      v15 = *((_DWORD *)*a3 + 11);
      *((_DWORD *)this + 1) = v15;
      *((_DWORD *)this + 4) = *((_DWORD *)*a3 + 9);
      v16 = v15;
      if ( !v11 )
      {
        v16 = v15;
        if ( v15 == _ghsemGreLock )
        {
          EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", _ghsemGreLock);
          GreReleaseSemaphoreInternal(_ghsemGreLock);
          v16 = *((_DWORD *)this + 1);
          v57 = 0;
        }
      }
      GreAcquireSemaphore(v16);
      EtwTraceGreLockAcquireSemaphoreExclusive(
        L"hsemSrc",
        *((_DWORD *)this + 1),
        _ghsemGreLock != *((_DWORD *)this + 1) ? 11 : 2);
    }
    if ( (!*a2 || (*((_DWORD *)*a2 + 6) & 0x200) == 0) && !GreGetLockCount() )
    {
      *((_DWORD *)this + 10) |= 0x1000u;
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        *(_DWORD *)(ThreadWin32Thread + 176) = 0;
        *(_DWORD *)(ThreadWin32Thread + 172) = 0;
      }
      GreIncLockCount();
      GreAcquireSemaphoreSharedInternal(_ghsemDCVisRgn);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", _ghsemDCVisRgn);
    }
    if ( (*((_DWORD *)*a3 + 6) & 0x5000) == 0x1000 )
    {
      v19 = *((_DWORD *)this + 10);
      v20 = (v19 & 0x1000) == 0;
LABEL_71:
      if ( !v20 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", _ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(_ghsemDCVisRgn);
        v19 = *((_DWORD *)this + 10);
      }
      *((_DWORD *)this + 10) = v19 & 0xFFFFFFFE;
LABEL_87:
      if ( v57 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", _ghsemGreLock);
        GreReleaseSemaphoreInternal(_ghsemGreLock);
      }
      return 0;
    }
  }
  v21 = *a2;
  if ( !*a2 )
    goto LABEL_62;
  v22 = *((_DWORD *)v21 + 6);
  if ( (v22 & 0x200) != 0 )
  {
    if ( (v22 & 0x8000) == 0 || !v56 )
    {
      v11 = v57 == 0;
      v23 = *((_DWORD *)v21 + 11);
      *(_DWORD *)this = v23;
      *((_DWORD *)this + 3) = *((_DWORD *)*a2 + 9);
      v24 = v23;
      if ( !v11 )
      {
        v24 = v23;
        if ( v23 == _ghsemGreLock )
        {
          EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", _ghsemGreLock);
          GreReleaseSemaphoreInternal(_ghsemGreLock);
          v24 = *(_DWORD *)this;
          v57 = 0;
        }
      }
      GreAcquireSemaphore(v24);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_DWORD *)this, _ghsemGreLock != *(_DWORD *)this ? 11 : 2);
      v25 = *((_DWORD *)this + 10);
      if ( (v25 & 0x200) == 0 && (*((_DWORD *)*a2 + 6) & 0x4000) != 0 )
        *((_DWORD *)this + 10) = v25 | 0x200;
    }
    if ( !GreGetLockCount() )
    {
      *((_DWORD *)this + 10) |= 0x1000u;
      v56 = (int)KeGetCurrentThread();
      if ( !IsThreadCrossSessionAttached() )
      {
        v26 = (int *)PsGetThreadWin32Thread(v56);
        if ( v26 )
        {
          v27 = *v26;
          if ( v27 )
          {
            *(_DWORD *)(v27 + 176) = 0;
            *(_DWORD *)(v27 + 172) = 0;
          }
        }
      }
      GreIncLockCount();
      GreAcquireSemaphoreSharedInternal(_ghsemDCVisRgn);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", _ghsemDCVisRgn);
    }
    v21 = *a2;
    if ( (*((_DWORD *)*a2 + 6) & 0x5000) == 0x1000 )
    {
      v19 = *((_DWORD *)this + 10);
      v20 = (v19 & 0x1000) == 0;
      goto LABEL_71;
    }
  }
  if ( v21 )
  {
    v19 = *((_DWORD *)this + 10);
    v28 = v19;
    if ( (v19 & 0x1000) != 0 && ((unsigned int)&loc_80000 & *((_DWORD *)v21 + 6)) != 0 )
    {
      v20 = *((_DWORD *)this + 2) == 0;
      goto LABEL_71;
    }
  }
  else
  {
LABEL_62:
    v28 = *((_DWORD *)this + 10);
  }
  v29 = v28 & 0x1000;
  v56 = v29;
  if ( (v28 & 0x1000) != 0 )
  {
    if ( ((unsigned int)&loc_80000 & *((_DWORD *)*a3 + 6)) != 0 )
    {
      if ( *((_DWORD *)this + 2) )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", _ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(_ghsemDCVisRgn);
        v28 = *((_DWORD *)this + 10);
      }
      *((_DWORD *)this + 10) = v28 & 0xFFFFFFFE;
      goto LABEL_87;
    }
    v29 = v56;
  }
  if ( v21 && (v29 || (*((_DWORD *)v21 + 6) & 0x200) == 0) && (*((_BYTE *)v21 + 24) & 0x10) != 0 && !DC::bCompute(v21) )
  {
LABEL_84:
    if ( *((_DWORD *)this + 2) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", _ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(_ghsemDCVisRgn);
    }
    *((_DWORD *)this + 10) &= ~1u;
    goto LABEL_87;
  }
  if ( (*((_DWORD *)this + 10) & 0x1000) == 0 && (*((_DWORD *)*a3 + 6) & 0x200) != 0 )
    goto LABEL_90;
  v30 = a3;
  if ( (*((_BYTE *)*a3 + 24) & 0x10) != 0 )
  {
    if ( !DC::bCompute(*a3) )
      goto LABEL_84;
LABEL_90:
    v30 = a3;
  }
  if ( (*((_DWORD *)*a2 + 6) & 0x200) != 0 || (*((_DWORD *)*v30 + 6) & 0x200) != 0 )
  {
    if ( (*((_DWORD *)this + 10) & 0x1000) == 0 )
      goto LABEL_117;
    if ( (*((_DWORD *)*a2 + 6) & 0x200) != 0 )
    {
      if ( *((_DWORD *)this + 21) )
        UserIsCurrentProcessImmersiveAppContainer();
      else
        DC::vSetRendering(*a2);
      v56 = (int)KeGetCurrentThread();
      if ( !IsThreadCrossSessionAttached() )
      {
        v32 = (int *)PsGetThreadWin32Thread(v56);
        if ( v32 )
        {
          v33 = *v32;
          v56 = v33;
          if ( v33 )
          {
            *(_DWORD *)(v33 + 172) = (char *)this + 48;
            if ( (*((_DWORD *)*a2 + 6) & 0x4000) == 0 )
            {
              *(_DWORD *)(v33 + 180) |= 1u;
              *((_DWORD *)*a2 + 435) = 0;
              GreAcquireSemaphoreSharedInternal(_ghsemVisRgnUniqueness);
              EtwTraceGreLockAcquireSemaphoreShared(L"ghsemVisRgnUniqueness", _ghsemVisRgnUniqueness);
              *(_DWORD *)(v56 + 188) = giVisRgnUniqueness;
              EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnUniqueness", _ghsemVisRgnUniqueness);
              GreReleaseSemaphoreInternal(_ghsemVisRgnUniqueness);
            }
          }
        }
      }
    }
    v34 = *a3;
    if ( *(_DWORD *)*a3 != *(_DWORD *)*a2 && (*((_DWORD *)v34 + 6) & 0x200) != 0 )
    {
      if ( *((_DWORD *)this + 24) )
        UserIsCurrentProcessImmersiveAppContainer();
      else
        DC::vSetRendering(v34);
      v56 = (int)KeGetCurrentThread();
      if ( !IsThreadCrossSessionAttached() )
      {
        v35 = PsGetThreadWin32Thread(v56);
        if ( v35 )
        {
          if ( *(_DWORD *)v35 )
            *(_DWORD *)(*(_DWORD *)v35 + 176) = a3;
        }
      }
    }
  }
  else if ( !GreGetLockCount() )
  {
    *((_DWORD *)this + 10) |= 0x800000u;
    GreIncLockCount();
  }
  if ( (*((_DWORD *)this + 10) & 0x1000) != 0 && *((_DWORD *)this + 2) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", _ghsemDCVisRgn);
    GreReleaseSemaphoreInternal(_ghsemDCVisRgn);
  }
LABEL_117:
  if ( v57 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", _ghsemGreLock);
    GreReleaseSemaphoreInternal(_ghsemGreLock);
  }
  v54 = (DC *)*((_DWORD *)this + 10);
  if ( ((unsigned __int16)v54 & 0x1000) == 0 )
  {
LABEL_156:
    v42 = a2;
    goto LABEL_157;
  }
  v36 = (struct XDCOBJ *)a3;
  if ( *a3 )
    v37 = (DC *)*((_DWORD *)*a3 + 126);
  else
    v37 = 0;
  v38 = *a2;
  v55 = v38;
  if ( v38 )
    v39 = (DC *)*((_DWORD *)v38 + 126);
  else
    v39 = 0;
  v56 = 0;
  if ( v37 && v39 && v37 != v39 )
  {
    if ( v37 >= v39 )
    {
      v56 = DEVLOCKBLTOBJ::bPrepareTrgDco(this, (struct XDCOBJ *)a2, 1) == 0;
      v54 = 0;
      _InterlockedOr((volatile signed __int32 *)&v54, 0);
      v40 = DEVLOCKBLTOBJ::bPrepareSrcDco(this, (struct XDCOBJ *)a3, 0, 1);
    }
    else
    {
      *((_DWORD *)this + 10) = (unsigned int)v54 | 0x8000;
      if ( !DEVLOCKBLTOBJ::bPrepareSrcDco(this, (struct XDCOBJ *)a3, (int)v37, 1) )
        v56 = 1;
      v54 = 0;
      _InterlockedOr((volatile signed __int32 *)&v54, 0);
      v40 = DEVLOCKBLTOBJ::bPrepareTrgDco(this, (struct XDCOBJ *)a2, 1);
    }
  }
  else
  {
    if ( v55 )
    {
      v41 = DEVLOCKBLTOBJ::bPrepareTrgDco(this, (struct XDCOBJ *)a2, 1);
      v36 = (struct XDCOBJ *)a3;
      if ( !v41 )
        v56 = 1;
    }
    if ( *a2 )
    {
      v37 = *(DC **)v36;
      if ( *(_DWORD *)*a2 == **(_DWORD **)v36 )
        goto LABEL_142;
    }
    v40 = DEVLOCKBLTOBJ::bPrepareSrcDco(this, v36, (int)v37, 0);
  }
  if ( !v40 )
  {
LABEL_153:
    *((_DWORD *)this + 10) &= ~1u;
    return 0;
  }
  v36 = (struct XDCOBJ *)a3;
LABEL_142:
  if ( v56 )
    goto LABEL_153;
  v42 = a2;
  v54 = *(DC **)v36;
  if ( (*(_DWORD *)(*((_DWORD *)v54 + 9) + 24) & 0x8000) != 0 && *((_DWORD *)*a2 + 126) && *(_DWORD *)this )
    goto LABEL_153;
  if ( (*(_DWORD *)(*((_DWORD *)*a2 + 9) + 24) & 0x8000) != 0 && *((_DWORD *)v54 + 126) && *((_DWORD *)this + 1) )
  {
    *((_DWORD *)this + 9) = v36;
    *((_DWORD *)this + 8) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v36 + 504) + 20);
    v11 = bCopySurface(v50, v53) == 0;
    v43 = *((_DWORD *)this + 5);
    if ( v11 )
    {
      if ( v43 )
      {
        DEC_SHARE_REF_CNT(*((_DWORD *)this + 5));
        bDeleteSurface(*(_DWORD *)(*((_DWORD *)this + 5) + 20));
        *((_DWORD *)this + 5) = 0;
      }
      *((_DWORD *)this + 8) = 0;
      *((_DWORD *)this + 9) = 0;
      goto LABEL_153;
    }
    hbmSelectBitmap(*(_DWORD *)*a3, *(_DWORD *)(v43 + 20), 1, 0);
    EtwTraceGreLockReleaseSemaphore(L"hsemSrc", *((_DWORD *)this + 1));
    GreReleaseSemaphoreInternal(*((_DWORD *)this + 1));
    v44 = *((_DWORD *)this + 2);
    *((_DWORD *)this + 1) = 0;
    *((_DWORD *)this + 4) = 0;
    if ( v44 )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v44);
      GreReleaseSemaphoreInternal(*((_DWORD *)this + 2));
      *((_DWORD *)this + 2) = 0;
    }
    goto LABEL_156;
  }
LABEL_157:
  if ( (*((_DWORD *)this + 10) & 0x801000) == 0 )
    return 1;
  v45 = *(HDC *)*v42;
  v46 = *((_DWORD *)this + 12);
  if ( !v46 )
  {
    XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 48), v45);
    v46 = *((_DWORD *)this + 12);
    if ( !v46 )
      goto LABEL_162;
    *((_BYTE *)this + 61) = 0;
  }
  *(_DWORD *)(v46 + 28) |= 2u;
  *((_BYTE *)this + 60) = 1;
LABEL_162:
  if ( *(_DWORD *)*a3 != *(_DWORD *)*a2 )
  {
    v47 = *((_DWORD *)this + 16);
    if ( v47 )
    {
LABEL_166:
      *(_DWORD *)(v47 + 28) |= 2u;
      *((_BYTE *)this + 76) = 1;
      return 1;
    }
    XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 64), *(HDC *)*a3);
    v47 = *((_DWORD *)this + 16);
    if ( v47 )
    {
      *((_BYTE *)this + 77) = 0;
      goto LABEL_166;
    }
  }
  return 1;
}
