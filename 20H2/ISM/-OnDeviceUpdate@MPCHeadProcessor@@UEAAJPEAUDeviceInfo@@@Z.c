/*
 * XREFs of ?OnDeviceUpdate@MPCHeadProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801979A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCHeadProcessor::OnDeviceUpdate(MPCHeadProcessor *this, struct DeviceInfo *a2)
{
  if ( *((_BYTE *)this + 4625) )
    *((_BYTE *)a2 + 1488) = *((_BYTE *)this + 4624);
  return 0LL;
}
