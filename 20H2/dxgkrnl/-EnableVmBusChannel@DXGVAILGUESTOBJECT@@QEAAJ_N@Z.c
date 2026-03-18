/*
 * XREFs of ?EnableVmBusChannel@DXGVAILGUESTOBJECT@@QEAAJ_N@Z @ 0x1C004C850
 * Callers:
 *     ?VailEnsureConnection@DXGSESSIONDATA@@QEAAJXZ @ 0x1C02B5464 (-VailEnsureConnection@DXGSESSIONDATA@@QEAAJXZ.c)
 * Callees:
 *     ?EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z @ 0x1C02B40C8 (-EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z.c)
 */

__int64 __fastcall DXGVAILGUESTOBJECT::EnableVmBusChannel(struct _KTHREAD **this, __int64 a2)
{
  __int64 v3; // rax
  struct DXGVMBUSCHANNEL *v4; // rcx
  __int64 result; // rax

  if ( this[4] != KeGetCurrentThread() )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 490LL;
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = this[8];
  result = 3221225473LL;
  if ( v4 )
    return EnableVmBusChannel(v4, 1);
  return result;
}
