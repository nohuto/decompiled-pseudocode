/*
 * XREFs of BiSetFirmwareModifiedFromObject @ 0x1405BDF64
 * Callers:
 *     BiDeleteElement @ 0x14076E9AC (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14076F7EC (BcdSetElementDataWithFlags.c)
 *     BcdDeleteObject @ 0x14096A428 (BcdDeleteObject.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x140397F78 (BiSetFirmwareModified.c)
 *     BiOpenStoreKeyFromObject @ 0x1405BDE80 (BiOpenStoreKeyFromObject.c)
 *     BiCloseKey @ 0x14076FD9C (BiCloseKey.c)
 */

__int64 __fastcall BiSetFirmwareModifiedFromObject(void *a1)
{
  int v1; // edi
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v1 = BiOpenStoreKeyFromObject(a1, &v3);
  if ( v1 >= 0 )
    BiSetFirmwareModified(v3, 1);
  if ( v3 )
    BiCloseKey(v3);
  return (unsigned int)v1;
}
