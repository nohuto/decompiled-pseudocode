/*
 * XREFs of NdisMDeregisterMiniportDriver @ 0x1C0061550
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005EE00 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z @ 0x1C0115360 (-ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z.c)
 */

void __stdcall NdisMDeregisterMiniportDriver(NDIS_HANDLE NdisMiniportDriverHandle)
{
  if ( *((char *)NdisMiniportDriverHandle + 26) < 0 )
    ndisBugCheckEx(0x2AuLL, 1uLL, (ULONG_PTR)NdisMiniportDriverHandle, 0LL);
  ndisInternalDeregisterMiniportDriver((struct _NDIS_M_DRIVER_BLOCK *)NdisMiniportDriverHandle);
}
