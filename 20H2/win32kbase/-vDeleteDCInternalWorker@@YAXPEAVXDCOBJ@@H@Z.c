/*
 * XREFs of ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C004BBCC
 * Callers:
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C003A250 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 * Callees:
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C003C800 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C003C850 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C0040A10 (-FreeDCAttributes@@YAXPEAVDC@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0042480 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0042ED0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0043DF0 (HmgDecrementShareReferenceCountEx.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0044450 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C004BD20 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C004BD4C (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C004BD80 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C004BE7C (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 */

void __fastcall vDeleteDCInternalWorker(struct DC **a1, int a2)
{
  DC *v4; // rcx
  struct DC *v5; // rdx
  struct _ENTRY *EntryFromObject; // rax
  struct DC *v7; // rbx
  REGION *v8; // rax
  REGION *v9; // rcx
  REGION *v10; // rcx
  REGION *v11; // rcx
  REGION *v12; // rcx
  __int64 v13; // rbx
  REGION *v14; // rax
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF
  __int64 v16; // [rsp+40h] [rbp+18h] BYREF

  if ( !a2 )
    FreeDCAttributes(*a1);
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*a1 + 17));
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*a1 + 18));
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct HOBJ__ ***)*a1 + 19));
  HmgDecrementShareReferenceCountEx(*((_QWORD *)*a1 + 12), 0LL);
  v4 = *a1;
  v15 = *((_QWORD *)*a1 + 6);
  DC::vReleaseVis(v4);
  v5 = *a1;
  *((_DWORD *)v5 + 9) |= 0x10u;
  EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, v5);
  *((_BYTE *)EntryFromObject + 15) |= 4u;
  v7 = *a1;
  if ( DC::prgnVisSnap(*a1) )
  {
    v8 = DC::prgnVisSnap(v7);
    REGION::vDeleteREGION(v8);
    v7 = *a1;
  }
  v9 = (REGION *)*((_QWORD *)v7 + 143);
  if ( v9 )
  {
    REGION::vDeleteREGION(v9);
    v7 = *a1;
  }
  if ( DC::prgnRao(v7) )
  {
    v14 = DC::prgnRao(v7);
    REGION::vDeleteREGION(v14);
    v7 = *a1;
  }
  v10 = (REGION *)*((_QWORD *)v7 + 144);
  if ( v10 )
  {
    REGION::vDeleteREGION(v10);
    v7 = *a1;
  }
  v11 = (REGION *)*((_QWORD *)v7 + 145);
  if ( v11 )
  {
    REGION::vDeleteREGION(v11);
    v7 = *a1;
  }
  v12 = (REGION *)*((_QWORD *)v7 + 146);
  if ( v12 )
  {
    REGION::vDeleteREGION(v12);
    v7 = *a1;
  }
  v13 = *((_QWORD *)v7 + 7);
  v16 = v13;
  XDCOBJ::bDeleteDC((XDCOBJ *)a1, a2);
  PDEVOBJ::vUnreferencePdev(&v15, a2 != 0);
  if ( v13 )
    PDEVOBJ::vUnreferencePdev(&v16, a2 != 0);
}
