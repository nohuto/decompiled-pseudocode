/*
 * XREFs of ?EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z @ 0x1C02B0B68
 * Callers:
 *     ?EnableVmBusChannel@DXGVAILGUESTOBJECT@@QEAAJ_N@Z @ 0x1C004B900 (-EnableVmBusChannel@DXGVAILGUESTOBJECT@@QEAAJ_N@Z.c)
 *     ?EnableVmBusChannel@DXGVAILOBJECT@@QEAAJXZ @ 0x1C004B960 (-EnableVmBusChannel@DXGVAILOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ?Enable@DXGVMBUSCHANNEL@@QEAAJ_N@Z @ 0x1C02B0944 (-Enable@DXGVMBUSCHANNEL@@QEAAJ_N@Z.c)
 */

__int64 __fastcall EnableVmBusChannel(struct DXGVMBUSCHANNEL *a1, char a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return DXGVMBUSCHANNEL::Enable(a1, a2);
  return result;
}
