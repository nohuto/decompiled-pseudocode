/*
 * XREFs of _UmfdDispatchEscape@4 @ 0x8B7AC
 * Callers:
 *     _NtGdiExtEscape@32 @ 0x8B698 (_NtGdiExtEscape@32.c)
 * Callees:
 *     ?UmfdEscXFORMOBJ_iGetXform@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x8AFFE (-UmfdEscXFORMOBJ_iGetXform@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngUnmapFontFileFD@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x8B50C (-UmfdEscEngUnmapFontFileFD@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscSendCompleteWaitReceive@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x8BA08 (-UmfdEscSendCompleteWaitReceive@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngMapFontFileFD@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x8BD34 (-UmfdEscEngMapFontFileFD@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscHostUnhandledException@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0xCFF6C (-UmfdEscHostUnhandledException@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngComputeGlyphSet@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0xDFBB0 (-UmfdEscEngComputeGlyphSet@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscParseFontResources@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0xE8B2C (-UmfdEscParseFontResources@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?OnHostReady@UmfdHostLifeTimeManager@@SGXXZ @ 0xEC3BC (-OnHostReady@UmfdHostLifeTimeManager@@SGXXZ.c)
 *     ?UmfdEscEngFntCacheFlush@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0xECB1A (-UmfdEscEngFntCacheFlush@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _EngFntCacheFault@8 @ 0x1E8664 (_EngFntCacheFault@8.c)
 *     ?UmfdEscEngCreateFile@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1FCB63 (-UmfdEscEngCreateFile@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFileChangeTime@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1FCC4D (-UmfdEscEngGetFileChangeTime@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFilePath@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1FCD05 (-UmfdEscEngGetFilePath@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscFONTOBJ_pifi@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1FCDEC (-UmfdEscFONTOBJ_pifi@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscPATHOBJ_bCloseFigure@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1FCE17 (-UmfdEscPATHOBJ_bCloseFigure@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscPATHOBJ_bCommonTo@@YGHP6GHPAU_PATHOBJ@@PAU_POINTFIX@@K@Z01K@Z @ 0x1FCE3C (-UmfdEscPATHOBJ_bCommonTo@@YGHP6GHPAU_PATHOBJ@@PAU_POINTFIX@@K@Z01K@Z.c)
 *     ?UmfdEscPATHOBJ_bMoveTo@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1FCF1B (-UmfdEscPATHOBJ_bMoveTo@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 */

volatile void *__fastcall UmfdDispatchEscape(unsigned int a1)
{
  volatile void *v2; // eax
  volatile void *result; // eax
  struct tagUMFD_ESCAPE_ARGUMENT *v4; // [esp+0h] [ebp-44h]
  unsigned int v5; // [esp+4h] [ebp-40h]
  volatile void *v6[7]; // [esp+10h] [ebp-34h] BYREF
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  v6[6] = (volatile void *)a1;
  memset(v6, 0, 0x18u);
  ms_exc.registration.TryLevel = 0;
  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a1 + 24 > _MmUserProbeAddress || a1 + 24 < a1 )
    *(_BYTE *)_MmUserProbeAddress = 0;
  qmemcpy(v6, (const void *)a1, 0x18u);
  ms_exc.registration.TryLevel = -2;
  switch ( (unsigned int)v6[0] )
  {
    case 0u:
      UmfdEscSendCompleteWaitReceive(v4);
      break;
    case 1u:
      UmfdEscXFORMOBJ_iGetXform(v6);
      break;
    case 3u:
      UmfdEscFONTOBJ_pifi(v4);
      break;
    case 4u:
      UmfdEscPATHOBJ_bCloseFigure(v4);
      break;
    case 5u:
      UmfdEscPATHOBJ_bMoveTo(v4);
      break;
    case 6u:
    case 7u:
      v2 = (volatile void *)UmfdEscPATHOBJ_bCommonTo(
                              (int (__stdcall *)(struct _PATHOBJ *, struct _POINTFIX *, unsigned int))v6[2],
                              (struct _PATHOBJ *)v6[3],
                              (struct _POINTFIX *)v4,
                              v5);
      goto LABEL_13;
    case 8u:
      UmfdEscEngFntCacheFlush(v4);
      break;
    case 9u:
      EngFntCacheFault((ULONG)v6[1], (ULONG)v6[2]);
      break;
    case 0xAu:
      UmfdEscEngMapFontFileFD(v4);
      break;
    case 0xBu:
      UmfdEscEngUnmapFontFileFD(v6);
      break;
    case 0xCu:
      UmfdEscEngGetFileChangeTime(v4);
      break;
    case 0xDu:
      UmfdEscEngGetFilePath(v4);
      break;
    case 0xEu:
      UmfdEscEngComputeGlyphSet(v4);
      break;
    case 0xFu:
      UmfdEscEngCreateFile(v4);
      break;
    case 0x10u:
      UmfdEscParseFontResources(v4);
      break;
    case 0x11u:
      v2 = (volatile void *)((gbJpn98FixPitch != 0) | (*(_DWORD *)(_gpGdiSharedMemory + 1048724) != 0 ? 2 : 0));
LABEL_13:
      v6[1] = v2;
      break;
    case 0x12u:
      UmfdHostLifeTimeManager::OnHostReady();
      break;
    case 0x13u:
      UmfdEscHostUnhandledException(v4);
      break;
    default:
      break;
  }
  ms_exc.registration.TryLevel = 1;
  result = v6[0];
  switch ( (unsigned int)v6[0] )
  {
    case 0u:
    case 1u:
    case 2u:
    case 3u:
    case 4u:
    case 5u:
    case 6u:
    case 7u:
    case 8u:
    case 0xAu:
    case 0xCu:
    case 0xDu:
    case 0xEu:
    case 0xFu:
    case 0x10u:
    case 0x11u:
      ProbeForWrite((volatile void *)(a1 + 4), 4u, 4u);
      result = v6[1];
      *(volatile void **)(a1 + 4) = v6[1];
      break;
    default:
      return result;
  }
  return result;
}
