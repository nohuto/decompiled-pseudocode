/*
 * XREFs of ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C008B734
 * Callers:
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C006D360 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 * Callees:
 *     ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C007FB6C (-FreeDCAttributes@@YAXPEAVDC@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0080AA0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00810A0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0082370 (HmgDecrementShareReferenceCountEx.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0083120 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C008B880 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C008B8AC (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C008B8E0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C008B9DC (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C008BC0C (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C008BC60 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __fastcall vDeleteDCInternalWorker(struct DC **this, int a2)
{
  DC *v4; // rcx
  struct DC *v5; // rdx
  struct _ENTRY *EntryFromObject; // rax
  struct DC *v7; // r10
  REGION *v8; // rax
  REGION *v9; // rcx
  struct DC *v10; // r10
  REGION *v11; // rcx
  REGION *v12; // rcx
  REGION *v13; // rcx
  REGION *v14; // rax
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF
  __int64 v16; // [rsp+40h] [rbp+18h] BYREF

  if ( !a2 )
    FreeDCAttributes(*this);
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*this + 17));
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*this + 18));
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct HOBJ__ ***)*this + 19));
  HmgDecrementShareReferenceCountEx(*((_QWORD *)*this + 12), 0LL);
  v4 = *this;
  v16 = *((_QWORD *)*this + 6);
  DC::vReleaseVis(v4);
  v5 = *this;
  *((_DWORD *)v5 + 9) |= 0x10u;
  EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, v5);
  *((_BYTE *)EntryFromObject + 15) |= 4u;
  if ( DC::prgnVisSnap(*this) )
  {
    v8 = DC::prgnVisSnap(v7);
    REGION::vDeleteREGION(v8);
    v7 = *this;
  }
  v9 = (REGION *)*((_QWORD *)v7 + 143);
  if ( v9 )
  {
    REGION::vDeleteREGION(v9);
    v7 = *this;
  }
  if ( DC::prgnRao(v7) )
  {
    v14 = DC::prgnRao(v10);
    REGION::vDeleteREGION(v14);
    v10 = *this;
  }
  v11 = (REGION *)*((_QWORD *)v10 + 144);
  if ( v11 )
  {
    REGION::vDeleteREGION(v11);
    v10 = *this;
  }
  v12 = (REGION *)*((_QWORD *)v10 + 145);
  if ( v12 )
  {
    REGION::vDeleteREGION(v12);
    v10 = *this;
  }
  v13 = (REGION *)*((_QWORD *)v10 + 146);
  if ( v13 )
  {
    REGION::vDeleteREGION(v13);
    v10 = *this;
  }
  v15 = *((_QWORD *)v10 + 7);
  XDCOBJ::bDeleteDC((XDCOBJ *)this, a2);
  PDEVOBJ::vUnreferencePdev(&v16, a2 != 0);
  if ( v15 )
    PDEVOBJ::vUnreferencePdev(&v15, a2 != 0);
}
