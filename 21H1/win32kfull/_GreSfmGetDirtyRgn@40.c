/*
 * XREFs of _GreSfmGetDirtyRgn@40 @ 0x22718
 * Callers:
 *     _NtGdiHLSurfGetInformation@16 @ 0x2259C (_NtGdiHLSurfGetInformation@16.c)
 * Callees:
 *     ?GrepSfmGetDirtyRgn@@YGJPAVSFMLOGICALSURFACE@@_KPAPAUHRGN__@@222PAU_POINTL@@PAH4@Z @ 0x227E8 (-GrepSfmGetDirtyRgn@@YGJPAVSFMLOGICALSURFACE@@_KPAPAUHRGN__@@222PAU_POINTL@@PAH4@Z.c)
 */

int __fastcall GreSfmGetDirtyRgn(
        int a1,
        _DWORD *a2,
        struct SFMLOGICALSURFACE *a3,
        unsigned __int64 a4,
        HRGN *a5,
        HRGN *a6,
        HRGN *a7,
        HRGN *a8,
        struct _POINTL *a9)
{
  int v9; // esi
  int v10; // edx
  int DirtyRgn; // edi
  int *v13; // [esp+0h] [ebp-10h]
  int *v14; // [esp+4h] [ebp-Ch]

  v9 = 0;
  if ( a2 )
    *a2 = 0;
  if ( HIDWORD(a4) )
    *(_DWORD *)HIDWORD(a4) = 0;
  GreAcquireSemaphoreSharedInternal(_ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", _ghsemDwmState);
  if ( UserIsCurrentProcessDwm() )
  {
    if ( g_pDwmState )
    {
      if ( a1 && (LOBYTE(v10) = 18, (v9 = HmgShareLockCheck(a1, v10)) != 0) )
        DirtyRgn = GrepSfmGetDirtyRgn(a3, a4, a5, a6, a7, a8, a9, v13, v14);
      else
        DirtyRgn = -1073741816;
      if ( v9 )
        DEC_SHARE_REF_CNT(v9);
    }
    else
    {
      DirtyRgn = -1071775733;
    }
  }
  else
  {
    DirtyRgn = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
  GreReleaseSemaphoreInternal(_ghsemDwmState);
  return DirtyRgn;
}
