/*
 * XREFs of ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C00C1B48
 * Callers:
 *     bDynamicModeChange @ 0x1C00BE134 (bDynamicModeChange.c)
 * Callees:
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0027540 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C007FBC0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00820E8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vChangeWndObjs(struct SURFACE *a1, struct PDEV *a2, struct SURFACE *a3, struct PDEV *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r8d
  _QWORD *v11; // rax
  _QWORD *i; // rbx
  struct SURFACE *v13; // rax
  __int64 j; // rdi
  int v15; // r8d
  __int64 k; // rdi
  int v17; // r8d
  HSEMAPHORE v18[5]; // [rsp+20h] [rbp-28h] BYREF
  struct PDEV *v19; // [rsp+58h] [rbp+10h] BYREF
  struct PDEV *v20; // [rsp+68h] [rbp+20h] BYREF

  v18[0] = ghsemWndobj;
  EngAcquireSemaphore(ghsemWndobj);
  v11 = qword_1C0251738;
  v19 = a2;
  v20 = a4;
  if ( qword_1C0251738 )
    v11 = (_QWORD *)qword_1C0251738(v9);
  for ( i = (_QWORD *)*v11; i; i = (_QWORD *)i[1] )
  {
    v13 = (struct SURFACE *)i[4];
    if ( v13 == a1 )
    {
      for ( j = i[3]; j; j = *(_QWORD *)(j + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v20, v8, v10);
        PDEVOBJ::vUnreferencePdev(&v19, 0, v15);
      }
    }
    else if ( v13 == a3 )
    {
      for ( k = i[3]; k; k = *(_QWORD *)(k + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v19, v8, v10);
        PDEVOBJ::vUnreferencePdev(&v20, 0, v17);
      }
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)v18, v8, v10);
}
