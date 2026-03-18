/*
 * XREFs of BiSetFirmwareModifiedFromObject @ 0x14064CD04
 * Callers:
 *     BiDeleteElement @ 0x14080271C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140803250 (BcdSetElementDataWithFlags.c)
 *     BcdDeleteObject @ 0x140A1CC1C (BcdDeleteObject.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x1403A7718 (BiSetFirmwareModified.c)
 *     BiOpenStoreKeyFromObject @ 0x14064CC20 (BiOpenStoreKeyFromObject.c)
 *     BiCloseKey @ 0x1408132F0 (BiCloseKey.c)
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
