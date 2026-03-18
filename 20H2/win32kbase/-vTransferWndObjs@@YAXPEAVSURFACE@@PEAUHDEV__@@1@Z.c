/*
 * XREFs of ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1C014A4DC
 * Callers:
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C0145EAC (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 * Callees:
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0011970 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C003D898 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C004BD80 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vTransferWndObjs(struct SURFACE *a1, struct PDEV *a2, HDEV a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // r8d
  __int64 *v9; // rax
  __int64 i; // rbx
  __int64 j; // rdi
  int v12; // r8d
  HDEV v13; // [rsp+48h] [rbp+10h] BYREF
  struct PDEV *v14; // [rsp+50h] [rbp+18h] BYREF
  HSEMAPHORE v15; // [rsp+58h] [rbp+20h] BYREF

  v15 = ghsemWndobj;
  EngAcquireSemaphore(ghsemWndobj);
  v9 = (__int64 *)qword_1C024F738;
  v14 = a2;
  v13 = a3;
  if ( qword_1C024F738 )
    v9 = (__int64 *)qword_1C024F738(v7);
  for ( i = *v9; i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(struct SURFACE **)(i + 32) == a1 )
    {
      for ( j = *(_QWORD *)(i + 24); j; j = *(_QWORD *)(j + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v13, v6, v8);
        PDEVOBJ::vUnreferencePdev(&v14, 0, v12);
      }
    }
  }
  SEMOBJ::vUnlock((PERESOURCE *)&v15);
}
