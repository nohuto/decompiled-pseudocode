/*
 * XREFs of ?ProcessSetActiveExclusiveView@CHolographicExclusiveMode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICEXCLUSIVEMODE_SETACTIVEEXCLUSIVEVIEW@@@Z @ 0x180254D10
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicExclusiveMode::ProcessSetActiveExclusiveView(
        RTL_SRWLOCK *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICEXCLUSIVEMODE_SETACTIVEEXCLUSIVEVIEW *a3)
{
  RTL_SRWLOCK *v3; // rsi

  v3 = this + 9;
  AcquireSRWLockExclusive(this + 9);
  this[10].Ptr = (PVOID)*((unsigned int *)a3 + 2);
  LODWORD(this[11].Ptr) = *((_DWORD *)a3 + 3);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  return 0LL;
}
