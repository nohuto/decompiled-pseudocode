/*
 * XREFs of ?bCreateSemaphores@@YGHPAU_PANDEV@@@Z @ 0x1F6B32
 * Callers:
 *     ?PanEnablePDEV@@YGPAUDHPDEV__@@PAU_devicemodeW@@PAGKPAPAUHSURF__@@KPAKKPAUtagDEVINFO@@PAUHDEV__@@1PAX@Z @ 0x1F5ADF (-PanEnablePDEV@@YGPAUDHPDEV__@@PAU_devicemodeW@@PAGKPAPAUHSURF__@@KPAKKPAUtagDEVINFO@@PAUHDEV__@.c)
 * Callees:
 *     <none>
 */

int __thiscall bCreateSemaphores(HSEMAPHORE *this)
{
  struct _KSEMAPHORE *v2; // eax
  unsigned int v3; // ebx
  HSEMAPHORE *v4; // eax
  unsigned int v5; // esi
  HSEMAPHORE *v6; // edi
  HSEMAPHORE Semaphore; // eax
  _DWORD *v9; // [esp+Ch] [ebp-4h]

  this[19] = EngCreateSemaphore();
  this[103] = EngCreateSemaphore();
  v2 = (struct _KSEMAPHORE *)EngAllocMem(6u, 0x38u, 0x6F6C5350u);
  this[104] = (HSEMAPHORE)v2;
  if ( this[19] && this[103] && v2 )
  {
    KeInitializeSemaphore(v2, 0, 0x7FFFFFFF);
    KeInitializeMutex((PRKMUTEX)(this[104] + 5), 0);
    v3 = 0;
    *((_DWORD *)this[104] + 13) = 0;
    this[101] = (HSEMAPHORE)((int)this[2] / 8);
    this[102] = (HSEMAPHORE)((int)this[3] / 8);
    v4 = this + 20;
    v9 = this + 20;
LABEL_5:
    v5 = 0;
    v6 = v4;
    while ( 1 )
    {
      Semaphore = EngCreateSemaphore();
      *v6 = Semaphore;
      if ( !Semaphore )
        break;
      ++v5;
      ++v6;
      if ( v5 >= 9 )
      {
        ++v3;
        v4 = (HSEMAPHORE *)(v9 + 9);
        v9 += 9;
        if ( v3 < 9 )
          goto LABEL_5;
        return 1;
      }
    }
  }
  return 0;
}
