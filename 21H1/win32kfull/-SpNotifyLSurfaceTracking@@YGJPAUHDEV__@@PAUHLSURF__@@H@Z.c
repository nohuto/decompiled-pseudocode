/*
 * XREFs of ?SpNotifyLSurfaceTracking@@YGJPAUHDEV__@@PAUHLSURF__@@H@Z @ 0x1CD545
 * Callers:
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QAEXPAUHDEV__@@PAUSfmState@@H@Z @ 0x20314 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QAEXPAUHDEV__@@PAUSfmState@@H@Z.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QAEJPAUHDEV__@@PAUSfmState@@@Z @ 0x21CFA (-StopSfmStateTracking@SFMLOGICALSURFACE@@QAEJPAUHDEV__@@PAUSfmState@@@Z.c)
 * Callees:
 *     ?bNeedRenderHint@@YGHAAVPDEVOBJ@@@Z @ 0x23160 (-bNeedRenderHint@@YGHAAVPDEVOBJ@@@Z.c)
 */

int __userpurge SpNotifyLSurfaceTracking@<eax>(int a1@<edx>, HDEV a2@<ecx>, HDEV a3, HLSURF a4, int a5)
{
  int v7; // edi
  int v9; // [esp+Ch] [ebp-8h] BYREF
  HDEV v10; // [esp+10h] [ebp-4h] BYREF

  v10 = a2;
  GreAcquireSemaphore(*((_DWORD *)a2 + 8));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *((_DWORD *)a2 + 8), 11);
  if ( bNeedRenderHint(&v10) )
  {
    v9 = a1;
    v10 = a3;
    v7 = (*((int (__stdcall **)(_DWORD, int, int, int *))a2 + 568))(*((_DWORD *)a2 + 277), 65544, 8, &v9);
  }
  else
  {
    v7 = -1073741822;
  }
  EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *((_DWORD *)a2 + 8));
  GreReleaseSemaphoreInternal(*((_DWORD *)a2 + 8));
  return v7;
}
