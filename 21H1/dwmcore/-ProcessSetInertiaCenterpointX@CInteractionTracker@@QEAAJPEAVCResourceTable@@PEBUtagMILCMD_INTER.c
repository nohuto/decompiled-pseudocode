/*
 * XREFs of ?ProcessSetInertiaCenterpointX@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETINERTIACENTERPOINTX@@@Z @ 0x1801CE53C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800809A4 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??4?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z @ 0x1801CB744 (--4-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x1801CBF78 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetInertiaCenterpointX(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETINERTIACENTERPOINTX *a3)
{
  __int64 *v4; // rbx
  __int64 Resource; // rax

  v4 = (__int64 *)((char *)this + 360);
  Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x2Bu);
  Microsoft::WRL::ComPtr<CConditionalExpression>::operator=(v4, Resource);
  if ( *v4 )
    *(_DWORD *)(*v4 + 200) = *((_DWORD *)a3 + 1);
  if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 272LL) + 416LL) |= 4u;
  return 0LL;
}
