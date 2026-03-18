/*
 * XREFs of ?SpNotifyLSurface@@YGJPAUHDEV__@@PAUHLSURF__@@HKPAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x230F2
 * Callers:
 *     ?hlsurfCreateLogicalSurfaceObject@@YGPAUHLSURF__@@QAUHDEV__@@KPAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1F124 (-hlsurfCreateLogicalSurfaceObject@@YGPAUHLSURF__@@QAUHDEV__@@KPAU_CD_HLSURF_CREATIONCONTEXT@@@Z.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SGPAUHLSURF__@@PAUHDEV__@@PAV1@HHH@Z @ 0x22222 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SGPAUHLSURF__@@PAUHDEV__@@PAV1@HHH@Z.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QAEXPAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x24A46 (-DeInitialize@SFMLOGICALSURFACE@@QAEXPAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?bNeedRenderHint@@YGHAAVPDEVOBJ@@@Z @ 0x23160 (-bNeedRenderHint@@YGHAAVPDEVOBJ@@@Z.c)
 */

int __userpurge SpNotifyLSurface@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        HDEV a3,
        HLSURF a4,
        const void *a5,
        unsigned int a6,
        struct _CD_HLSURF_CREATIONCONTEXT *a7)
{
  int v8; // ecx
  int v10; // esi
  struct PDEVOBJ *v12; // [esp+0h] [ebp-30h]
  _DWORD v13[7]; // [esp+Ch] [ebp-24h] BYREF
  int v14; // [esp+28h] [ebp-8h]
  int v15; // [esp+2Ch] [ebp-4h]

  v15 = a2;
  memset(v13, 0, sizeof(v13));
  v8 = *(_DWORD *)(a2 + 32);
  v14 = a1;
  GreAcquireSemaphore(v8);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_DWORD *)(a2 + 32), 11);
  if ( bNeedRenderHint(v12) )
  {
    v13[0] = a1;
    v13[1] = a4;
    if ( a5 )
      qmemcpy(&v13[2], a5, 0x14u);
    v10 = (*(int (__stdcall **)(_DWORD, int, int, _DWORD *))(a2 + 2272))(
            *(_DWORD *)(a2 + 1108),
            65541 - (a3 != 0),
            28,
            v13);
    EtwBindLogicalSurfaceRHEvent(v14, v14 >> 31, a3, (int)a3 >> 31);
  }
  else
  {
    v10 = -1073741822;
  }
  EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *(_DWORD *)(a2 + 32));
  GreReleaseSemaphoreInternal(*(_DWORD *)(a2 + 32));
  return v10;
}
