/*
 * XREFs of ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x1800D7374
 * Callers:
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180056600 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005BC8C (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_FORCERENDER@@@Z @ 0x1800D72FC (-Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD.c)
 *     ?Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SWITCHREMOTINGMODE@@@Z @ 0x1800DA16C (-Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUta.c)
 *     ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x1801577F8 (-UpdateDebugCounter@CComposition@@QEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CRenderTargetManager::ForceFullRender(CRenderTargetManager *this)
{
  __int64 v1; // rdx
  __int64 *v2; // r8
  unsigned __int64 v3; // r9
  __int64 v4; // rax

  *((_BYTE *)this + 128) = 1;
  v1 = 0LL;
  v2 = (__int64 *)*((_QWORD *)this + 1);
  v3 = (unsigned __int64)(*((_QWORD *)this + 2) - (_QWORD)v2 + 7LL) >> 3;
  if ( (unsigned __int64)v2 > *((_QWORD *)this + 2) )
    v3 = 0LL;
  if ( v3 )
  {
    do
    {
      v4 = *v2;
      ++v1;
      ++v2;
      *(_BYTE *)(v4 + 129) = 1;
    }
    while ( v1 != v3 );
  }
  CRenderTargetManager::EndTargetEnumeration(this);
}
