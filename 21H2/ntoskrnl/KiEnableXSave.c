/*
 * XREFs of KiEnableXSave @ 0x14099C204
 * Callers:
 *     KiRestoreXSaveSupport @ 0x14099585C (KiRestoreXSaveSupport.c)
 *     KiInitializeKernel @ 0x14099E6F0 (KiInitializeKernel.c)
 *     KiConfigureDynamicProcessor @ 0x1409B0810 (KiConfigureDynamicProcessor.c)
 * Callees:
 *     <none>
 */

__int64 KiEnableXSave()
{
  unsigned __int64 v0; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v0 = __readcr4();
  result = 0x40000LL;
  if ( (KeFeatureBits & 0x800000) != 0 )
  {
    if ( (v0 & 0x40000) == 0 )
      __writecr4(v0 | 0x40000);
    __asm { xsetbv }
    if ( MEMORY[0xFFFFF780000005F0] )
      __writemsr(0xDA0u, MEMORY[0xFFFFF780000005F0]);
    CurrentPrcb = KeGetCurrentPrcb();
    result = (__int64)&CurrentPrcb->ProcessorState.ContextFrame;
    if ( CurrentPrcb->Context != &CurrentPrcb->ProcessorState.ContextFrame )
      CurrentPrcb->ContextFlagsInit |= 0x100040u;
  }
  else if ( (v0 & 0x40000) != 0 )
  {
    __writecr4(v0 & 0xFFFFFFFFFFFBFFFFuLL);
  }
  return result;
}
