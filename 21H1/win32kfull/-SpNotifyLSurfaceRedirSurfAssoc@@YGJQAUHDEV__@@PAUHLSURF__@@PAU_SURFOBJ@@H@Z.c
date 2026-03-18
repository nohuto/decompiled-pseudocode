/*
 * XREFs of ?SpNotifyLSurfaceRedirSurfAssoc@@YGJQAUHDEV__@@PAUHLSURF__@@PAU_SURFOBJ@@H@Z @ 0x23086
 * Callers:
 *     ?SetShape@SFMLOGICALSURFACE@@QAEHPAUHDEV__@@PAU_SURFOBJ@@@Z @ 0x22FA6 (-SetShape@SFMLOGICALSURFACE@@QAEHPAUHDEV__@@PAU_SURFOBJ@@@Z.c)
 * Callees:
 *     ?vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0x219D2 (-vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     ?bNeedRenderHint@@YGHAAVPDEVOBJ@@@Z @ 0x23160 (-bNeedRenderHint@@YGHAAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QAE@XZ @ 0x5A936 (--1DEVLOCKOBJ@@QAE@XZ.c)
 */

int __userpurge SpNotifyLSurfaceRedirSurfAssoc@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        HDEV a3,
        HLSURF a4,
        struct _SURFOBJ *a5,
        int a6)
{
  int v8; // esi
  struct PDEVOBJ *v10; // [esp+0h] [ebp-50h]
  _BYTE v11[20]; // [esp+10h] [ebp-40h] BYREF
  int v12; // [esp+24h] [ebp-2Ch]
  int v13; // [esp+28h] [ebp-28h]
  int v14; // [esp+2Ch] [ebp-24h]
  __int16 v15; // [esp+30h] [ebp-20h]
  _DWORD v16[3]; // [esp+40h] [ebp-10h] BYREF
  int v17; // [esp+4Ch] [ebp-4h] BYREF

  v17 = a2;
  GreAcquireSemaphore(*(_DWORD *)(a2 + 32));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_DWORD *)(a2 + 32), 11);
  v16[0] = a3;
  v16[2] = a1;
  v8 = -1073741822;
  v16[1] = (_DWORD)a3[1];
  if ( bNeedRenderHint(v10) )
  {
    v15 = 256;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v11, (struct PDEVOBJ *)&v17);
    v8 = (*(int (__stdcall **)(_DWORD, int, int, _DWORD *))(a2 + 2272))(
           *(_DWORD *)(a2 + 1108),
           65543 - (a4 != 0),
           12,
           v16);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v11);
  }
  EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *(_DWORD *)(a2 + 32));
  GreReleaseSemaphoreInternal(*(_DWORD *)(a2 + 32));
  return v8;
}
