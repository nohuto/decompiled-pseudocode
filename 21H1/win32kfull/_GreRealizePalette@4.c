/*
 * XREFs of _GreRealizePalette@4 @ 0xBF88E
 * Callers:
 *     _xxxRealizePalette@4 @ 0xBF854 (_xxxRealizePalette@4.c)
 *     ?DrvRealizeHalftonePalette@@YGPAVPALETTE@@PAUHDEV__@@H@Z @ 0x1D12FD (-DrvRealizeHalftonePalette@@YGPAVPALETTE@@PAUHDEV__@@H@Z.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ?vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0x219D2 (-vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AAEXXZ @ 0x5E6E4 (-RestoreAttributes@XDCOBJ@@AAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?vCopyEntriesFrom@XEPALOBJ@@QAEXV1@@Z @ 0x21E207 (-vCopyEntriesFrom@XEPALOBJ@@QAEXV1@@Z.c)
 *     ?ptransMatchAPal@@YGPAU_TRANSLATE@@PAVDC@@VXEPALOBJ@@1HPAK2@Z @ 0x222F82 (-ptransMatchAPal@@YGPAU_TRANSLATE@@PAVDC@@VXEPALOBJ@@1HPAK2@Z.c)
 */

int __thiscall GreRealizePalette(HDC this)
{
  unsigned int v1; // ebx
  int v2; // eax
  _DWORD *v3; // ecx
  _DWORD *v4; // eax
  int v5; // esi
  unsigned int v6; // edi
  int v7; // esi
  _DWORD *v9; // ecx
  _DWORD *v10; // edx
  int v11; // eax
  HDC v12; // edi
  int v13; // ecx
  _DWORD *v14; // eax
  _DWORD *v15; // ecx
  int matched; // eax
  HDC v17; // esi
  _DWORD *v18; // ecx
  _DWORD *v19; // edx
  int v20; // eax
  HDC v21; // edi
  int v22; // ecx
  _DWORD *v23; // eax
  _DWORD *v24; // ecx
  HDC v25; // esi
  void (__stdcall *v26)(_DWORD, _DWORD **, _DWORD, _DWORD, _DWORD); // edx
  int v27; // [esp+20h] [ebp-6Ch] BYREF
  _DWORD *v28; // [esp+24h] [ebp-68h] BYREF
  _DWORD *v29; // [esp+28h] [ebp-64h] BYREF
  int v30; // [esp+2Ch] [ebp-60h] BYREF
  int v31; // [esp+30h] [ebp-5Ch] BYREF
  int v32; // [esp+34h] [ebp-58h] BYREF
  int v33; // [esp+38h] [ebp-54h] BYREF
  int v34; // [esp+3Ch] [ebp-50h] BYREF
  int v35; // [esp+40h] [ebp-4Ch] BYREF
  int v36; // [esp+44h] [ebp-48h] BYREF
  int v37; // [esp+48h] [ebp-44h]
  int v38; // [esp+4Ch] [ebp-40h]
  _DWORD v39[3]; // [esp+50h] [ebp-3Ch] BYREF
  _BYTE v40[20]; // [esp+5Ch] [ebp-30h] BYREF
  _DWORD v41[3]; // [esp+70h] [ebp-1Ch] BYREF
  __int16 v42; // [esp+7Ch] [ebp-10h]

  v1 = 0;
  v31 = 0;
  v30 = 0;
  memset(v39, 0, sizeof(v39));
  XDCOBJ::vLock((XDCOBJ *)v39, this);
  v2 = v39[0];
  if ( !v39[0] )
    goto LABEL_7;
  v29 = *(_DWORD **)(v39[0] + 36);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)((char *)&v27 + 3));
  NEEDGRELOCK::vLock((NEEDGRELOCK *)&v35, (struct PDEVOBJ *)&v29);
  v34 = v29[10];
  GreAcquireSemaphore(v34);
  memset(v41, 0, sizeof(v41));
  v42 = 256;
  DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v40, (struct PDEVOBJ *)&v29);
  v3 = v29;
  v4 = (_DWORD *)v29[278];
  v28 = v4;
  v5 = *(_DWORD *)(v39[0] + 60);
  v6 = *(_DWORD *)v5;
  if ( (v29[364] & 0x100) != 0 )
  {
    v33 = _ghsemPalette;
    GreAcquireSemaphore(_ghsemPalette);
    if ( (HPALETTE)v6 == hForePalette
      || *(_DWORD *)(*(_DWORD *)(v39[0] + 1020) + 228) == 1
      && ((unsigned __int16)v6 | (v6 >> 8) & 0xFF0000) == ((unsigned __int16)hForePalette | ((unsigned int)hForePalette >> 8) & 0xFF0000)
      && hForePID == (struct _W32PROCESS *)PsGetCurrentProcessWin32Process() )
    {
      if ( (struct PALETTE *)v5 == ppalDefault )
        goto LABEL_77;
      v18 = *(_DWORD **)(v5 + 52);
      if ( v18 && v18 == *(_DWORD **)(v5 + 56) )
      {
        v19 = (_DWORD *)v28[20];
        v20 = v19 == v28 ? v28[6] : v19[6];
        if ( *v18 == v20 )
          goto LABEL_77;
      }
      GreAcquireHmgrSemaphore();
      v21 = *(HDC *)(v5 + 32);
      while ( v21 )
      {
        v36 = 0;
        v37 = 0;
        v38 = 0;
        XDCOBJ::vLock((XDCOBJ *)&v36, v21);
        if ( !v36 )
          goto LABEL_73;
        *(_DWORD *)(*(_DWORD *)(v36 + 1020) + 184) = *(_DWORD *)(*(_DWORD *)(v39[0] + 1020) + 184) | 0xF;
        v21 = *(HDC *)(v36 + 1024);
        XDCOBJ::RestoreAttributes((XDCOBJ *)&v36);
        v36 = 0;
      }
      v22 = *(_DWORD *)(v5 + 60);
      if ( v22 )
      {
        if ( v22 != *(_DWORD *)(v5 + 52) )
          Win32FreePool(*(_DWORD *)(v5 + 60));
        *(_DWORD *)(v5 + 60) = 0;
      }
      v23 = *(_DWORD **)(v5 + 52);
      v24 = v23;
      if ( v23 && !*v23 )
      {
        if ( *(_DWORD **)(v5 + 56) != v23 )
          Win32FreePool(*(_DWORD *)(v5 + 52));
        *(_DWORD *)(v5 + 52) = 0;
        v24 = 0;
      }
      if ( v24 )
        vMatchAPal(v39[0], v28, v5, &v30, &v31);
      else
        *(_DWORD *)(v5 + 52) = ptransMatchAPal(v28, v5, &v30, &v31);
      *(_DWORD *)(v5 + 60) = *(_DWORD *)(v5 + 56);
      *(_DWORD *)(v5 + 56) = *(_DWORD *)(v5 + 52);
LABEL_73:
      v25 = *(HDC *)(v5 + 32);
      while ( v25 != v21 )
      {
        v36 = 0;
        v37 = 0;
        v38 = 0;
        XDCOBJ::vLock((XDCOBJ *)&v36, v25);
        _InterlockedDecrement((volatile signed __int32 *)(v36 + 8));
        v25 = *(HDC *)(v36 + 1024);
        XDCOBJ::vUnlockFast((XDCOBJ *)&v36);
      }
    }
    else
    {
      if ( (struct PALETTE *)v5 == ppalDefault )
        goto LABEL_77;
      v9 = *(_DWORD **)(v5 + 56);
      if ( v9 )
      {
        v10 = (_DWORD *)v28[20];
        v11 = v10 == v28 ? v28[6] : v10[6];
        if ( *v9 == v11 )
          goto LABEL_77;
      }
      GreAcquireHmgrSemaphore();
      v12 = *(HDC *)(v5 + 32);
      while ( v12 )
      {
        v36 = 0;
        v37 = 0;
        v38 = 0;
        XDCOBJ::vLock((XDCOBJ *)&v36, v12);
        if ( !v36 )
          goto LABEL_43;
        *(_DWORD *)(*(_DWORD *)(v36 + 1020) + 184) = *(_DWORD *)(*(_DWORD *)(v39[0] + 1020) + 184) | 0xF;
        v12 = *(HDC *)(v36 + 1024);
        XDCOBJ::RestoreAttributes((XDCOBJ *)&v36);
        v36 = 0;
      }
      v13 = *(_DWORD *)(v5 + 60);
      if ( v13 )
      {
        if ( v13 != *(_DWORD *)(v5 + 52) )
          Win32FreePool(*(_DWORD *)(v5 + 60));
        *(_DWORD *)(v5 + 60) = 0;
      }
      v14 = *(_DWORD **)(v5 + 52);
      v15 = v14;
      if ( v14 && !*v14 )
      {
        if ( *(_DWORD **)(v5 + 56) != v14 )
          Win32FreePool(*(_DWORD *)(v5 + 52));
        *(_DWORD *)(v5 + 52) = 0;
        v15 = 0;
      }
      if ( !v15 )
      {
        v37 = 0;
        v36 = 0;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v36, 1u, v28[5], 0, 0, 0, 0, 0x800u, 1) )
        {
          XEPALOBJ::vCopyEntriesFrom(&v36, v28);
          *(_DWORD *)(v36 + 44) = v28[11];
          *(_DWORD *)(v36 + 16) = v28[4];
          XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v36);
          *(_DWORD *)(v5 + 52) = ptransMatchAPal(v36, v5, &v32, &v32);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v36);
        v15 = *(_DWORD **)(v5 + 52);
      }
      *(_DWORD *)(v5 + 60) = *(_DWORD *)(v5 + 56);
      if ( v15 )
      {
        matched = ptransMatchAPal(v28, v5, &v30, &v31);
        *(_DWORD *)(v5 + 56) = matched;
        if ( !matched )
          *(_DWORD *)(v5 + 56) = *(_DWORD *)(v5 + 52);
      }
      else
      {
        *(_DWORD *)(v5 + 56) = 0;
      }
LABEL_43:
      v17 = *(HDC *)(v5 + 32);
      while ( v17 != v12 )
      {
        v36 = 0;
        v37 = 0;
        v38 = 0;
        XDCOBJ::vLock((XDCOBJ *)&v36, v17);
        _InterlockedDecrement((volatile signed __int32 *)(v36 + 8));
        v17 = *(HDC *)(v36 + 1024);
        XDCOBJ::vUnlockFast((XDCOBJ *)&v36);
      }
    }
    GreReleaseHmgrSemaphore();
LABEL_77:
    SEMOBJ::vUnlock((SEMOBJ *)&v33);
    v3 = v29;
    v4 = v28;
  }
  if ( v30 )
  {
    if ( (v3[6] & 0x400) == 0 )
    {
      v26 = (void (__stdcall *)(_DWORD, _DWORD **, _DWORD, _DWORD, _DWORD))v3[273];
      if ( v26 )
      {
        v26(*(_DWORD *)(v3[4] + 1108), &v28, 0, 0, v4[5]);
        v4 = v28;
      }
    }
    if ( v4[5] == 256 )
    {
      do
      {
        if ( (((unsigned int)*(&aPalHalftone + v1) ^ *(_DWORD *)(v4[19] + 4 * v1)) & 0xFFFFFF) != 0 )
          break;
        ++v1;
      }
      while ( v1 < 0x100 );
      if ( v1 == 256 )
        v4[4] |= 0x100000u;
      else
        v4[4] &= ~0x100000u;
    }
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v40);
  if ( v41[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v41);
  SEMOBJ::vUnlock((SEMOBJ *)&v34);
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v35);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  v2 = v39[0];
LABEL_7:
  v7 = v31 | (v30 << 16);
  if ( v2 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v39);
  return v7;
}
