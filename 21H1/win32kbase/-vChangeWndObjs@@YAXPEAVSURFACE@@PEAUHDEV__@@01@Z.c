/*
 * XREFs of ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C004DF64
 * Callers:
 *     bDynamicModeChange @ 0x1C0099854 (bDynamicModeChange.c)
 * Callees:
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C00177C0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C007B7C8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C008B8E0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vChangeWndObjs(struct SURFACE *a1, HDEV a2, struct SURFACE *a3, HDEV a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r8d
  _QWORD *v11; // rax
  _QWORD *i; // rbx
  struct SURFACE *v13; // rax
  __int64 j; // rdi
  __int64 k; // rdi
  HSEMAPHORE v16[5]; // [rsp+20h] [rbp-28h] BYREF
  HDEV v17; // [rsp+58h] [rbp+10h] BYREF
  HDEV v18; // [rsp+68h] [rbp+20h] BYREF

  v16[0] = ghsemWndobj;
  EngAcquireSemaphore(ghsemWndobj);
  v11 = qword_1C02576F8;
  v17 = a2;
  v18 = a4;
  if ( qword_1C02576F8 )
    v11 = (_QWORD *)qword_1C02576F8(v9);
  for ( i = (_QWORD *)*v11; i; i = (_QWORD *)i[1] )
  {
    v13 = (struct SURFACE *)i[4];
    if ( v13 == a1 )
    {
      for ( j = i[3]; j; j = *(_QWORD *)(j + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v18, v8, v10);
        PDEVOBJ::vUnreferencePdev(&v17, 0LL);
      }
    }
    else if ( v13 == a3 )
    {
      for ( k = i[3]; k; k = *(_QWORD *)(k + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v17, v8, v10);
        PDEVOBJ::vUnreferencePdev(&v18, 0LL);
      }
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)v16);
}
