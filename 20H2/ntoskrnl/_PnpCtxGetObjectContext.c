/*
 * XREFs of _PnpCtxGetObjectContext @ 0x1406E52D8
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x1406E4910 (DrvDbDispatchDeviceId.c)
 *     DrvDbDispatchDriverInfFile @ 0x1406E4E80 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbDispatchDriverDatabase @ 0x1406E5000 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbDispatchDriverPackage @ 0x1406E5160 (DrvDbDispatchDriverPackage.c)
 *     DrvDbDispatchDriverFile @ 0x140981660 (DrvDbDispatchDriverFile.c)
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
