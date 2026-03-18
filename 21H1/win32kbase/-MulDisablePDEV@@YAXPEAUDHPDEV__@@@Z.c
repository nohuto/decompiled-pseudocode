/*
 * XREFs of ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C014B4F0
 * Callers:
 *     <none>
 * Callees:
 *     EngFreeMem @ 0x1C000D2D0 (EngFreeMem.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C008B8E0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MulDisablePDEV(struct PDEV ***pv, __int64 a2, int a3)
{
  struct PDEV **i; // rbx

  if ( qword_1C0256EE8 )
    qword_1C0256EE8(pv[4]);
  for ( i = *pv; i; i = (struct PDEV **)*i )
    PDEVOBJ::vUnreferencePdev(i + 7, 0, a3);
  EngFreeMem(pv);
}
