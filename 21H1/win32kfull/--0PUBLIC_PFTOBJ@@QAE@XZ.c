/*
 * XREFs of ??0PUBLIC_PFTOBJ@@QAE@XZ @ 0xF5D45
 * Callers:
 *     _NtGdiAddRemoteMMInstanceToDC@12 @ 0x1D9196 (_NtGdiAddRemoteMMInstanceToDC@12.c)
 *     _NtGdiAddRemoteFontToDC@16 @ 0x1E92FF (_NtGdiAddRemoteFontToDC@16.c)
 * Callees:
 *     <none>
 */

PUBLIC_PFTOBJ *__thiscall PUBLIC_PFTOBJ::PUBLIC_PFTOBJ(PUBLIC_PFTOBJ *this)
{
  *(_DWORD *)this = gpPFTPublic;
  return this;
}
