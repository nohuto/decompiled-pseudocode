/*
 * XREFs of ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C0055870
 * Callers:
 *     ?vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C001896C (-vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 * Callees:
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00427C0 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C00445F0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0046274 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ?bCleanup@UMPDOBJ@@QEAAHXZ @ 0x1C005594C (-bCleanup@UMPDOBJ@@QEAAHXZ.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UMPDOBJ::vRelease(struct UMPDOBJ ***a1, int a2)
{
  int v4; // eax
  struct UMPDOBJ **v5; // rcx
  struct UMPDOBJ **v6; // rdx
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]

  if ( qword_1C024F910 )
    v4 = qword_1C024F910();
  else
    v4 = -1073741637;
  if ( v4 >= 0 && qword_1C024F918 )
    qword_1C024F918(a1);
  if ( a2 )
  {
    v5 = a1[5];
    if ( v5[1] != (struct UMPDOBJ *)(a1 + 5) || (v6 = a1[6], *v6 != (struct UMPDOBJ *)(a1 + 5)) )
      __fastfail(3u);
    *v6 = (struct UMPDOBJ *)v5;
    v5[1] = (struct UMPDOBJ *)v6;
  }
  if ( a1 )
  {
    HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v7, (struct OBJECT *)a1, 0, 0, 1);
    if ( v8 )
    {
      TrackHmgrReferenceDecrement(*(_BYTE *)(v7 + 14), (struct OBJECT *)a1);
      --*((_DWORD *)a1 + 2);
      HANDLELOCK::vUnlock((HANDLELOCK *)&v7);
      if ( v8 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v7);
    }
    if ( (unsigned int)UMPDOBJ::bCleanup((UMPDOBJ *)a1) )
      Win32FreePool(a1);
  }
}
