/*
 * XREFs of _PnpCtxGetObjectContext @ 0x1406AD9E8
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x1406AD710 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbDispatchDriverPackage @ 0x1406AD870 (DrvDbDispatchDriverPackage.c)
 *     DrvDbDispatchDriverInfFile @ 0x1406B01F0 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbDispatchDeviceId @ 0x1406B1010 (DrvDbDispatchDeviceId.c)
 *     DrvDbDispatchDriverFile @ 0x14097A4F0 (DrvDbDispatchDriverFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxGetObjectContext(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( (unsigned int)(a2 - 1) > 0xA )
    return (unsigned int)-1073741811;
  else
    *a3 = *(_QWORD *)(a1 + 8LL * a2 + 392);
  return v3;
}
