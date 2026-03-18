/*
 * XREFs of ?ProcessSetInertiaCenterpointX@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETINERTIACENTERPOINTX@@@Z @ 0x18021BE48
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x180113E04 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ??4?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z @ 0x1801F3B6C (--4-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetInertiaCenterpointX(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETINERTIACENTERPOINTX *a3)
{
  __int64 *v4; // rbx
  __int64 Resource; // rax

  v4 = (__int64 *)((char *)this + 368);
  Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x2Bu);
  Microsoft::WRL::ComPtr<CConditionalExpression>::operator=(v4, Resource);
  if ( *v4 )
    *(_DWORD *)(*v4 + 208) = *((_DWORD *)a3 + 1);
  if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 424LL) + 448LL) |= 4u;
  return 0LL;
}
