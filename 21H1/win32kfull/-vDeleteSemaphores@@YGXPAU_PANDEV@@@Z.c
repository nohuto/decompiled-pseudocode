/*
 * XREFs of ?vDeleteSemaphores@@YGXPAU_PANDEV@@@Z @ 0x1F6E09
 * Callers:
 *     ?PanEnablePDEV@@YGPAUDHPDEV__@@PAU_devicemodeW@@PAGKPAPAUHSURF__@@KPAKKPAUtagDEVINFO@@PAUHDEV__@@1PAX@Z @ 0x1F5ADF (-PanEnablePDEV@@YGPAUDHPDEV__@@PAU_devicemodeW@@PAGKPAPAUHSURF__@@KPAKKPAUtagDEVINFO@@PAUHDEV__@.c)
 * Callees:
 *     <none>
 */

void __thiscall vDeleteSemaphores(int this)
{
  HSEMAPHORE *v2; // esi
  int v3; // ebx
  int v4; // [esp+Ch] [ebp-4h]

  if ( *(_DWORD *)(this + 76) )
    EngDeleteSemaphore(*(HSEMAPHORE *)(this + 76));
  if ( *(_DWORD *)(this + 412) )
    EngDeleteSemaphore(*(HSEMAPHORE *)(this + 412));
  if ( *(_DWORD *)(this + 416) )
    EngFreeMem(*(PVOID *)(this + 416));
  v2 = (HSEMAPHORE *)(this + 80);
  v4 = 9;
  do
  {
    v3 = 9;
    do
    {
      if ( *v2 )
        EngDeleteSemaphore(*v2);
      ++v2;
      --v3;
    }
    while ( v3 );
    --v4;
  }
  while ( v4 );
}
