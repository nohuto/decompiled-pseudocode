/*
 * XREFs of ?vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C00BD8BC
 * Callers:
 *     GdiThreadCallout @ 0x1C00BD690 (GdiThreadCallout.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C0099760 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vUMPDThreadCleanup(struct _W32THREAD *a1)
{
  struct _W32THREAD *v2; // rcx
  struct UMPDOBJ ***v3; // rcx
  int v4; // eax
  __int64 v5; // rcx

  while ( 1 )
  {
    if ( a1 && (v2 = (struct _W32THREAD *)*((_QWORD *)a1 + 5), v2 != (struct _W32THREAD *)((char *)a1 + 40)) )
      v3 = (struct UMPDOBJ ***)((char *)v2 - 40);
    else
      v3 = 0LL;
    if ( !v3 )
      break;
    UMPDOBJ::vRelease(v3, 1);
  }
  if ( qword_1C0251900 )
    v4 = qword_1C0251900();
  else
    v4 = -1073741637;
  if ( v4 >= 0 && qword_1C0251908 )
    qword_1C0251908(a1);
  v5 = *((_QWORD *)a1 + 9);
  if ( v5 )
  {
    Win32FreePool(v5);
    *((_QWORD *)a1 + 9) = 0LL;
  }
}
