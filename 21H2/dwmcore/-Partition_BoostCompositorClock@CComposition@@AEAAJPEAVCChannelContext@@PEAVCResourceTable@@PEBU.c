/*
 * XREFs of ?Partition_BoostCompositorClock@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_BOOSTCOMPOSITORCLOCK@@@Z @ 0x18019353C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CComposition::Partition_BoostCompositorClock(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_BOOSTCOMPOSITORCLOCK *a4)
{
  int v4; // eax
  int v5; // edx
  int v6; // eax

  v4 = *((_DWORD *)this + 307);
  v5 = v4 - 1;
  v6 = v4 + 1;
  if ( !*((_BYTE *)a4 + 4) )
    v6 = v5;
  *((_DWORD *)this + 307) = v6;
  return 0LL;
}
