/*
 * XREFs of BiSetFirmwareModifiedFromObject @ 0x1405BE684
 * Callers:
 *     BiDeleteElement @ 0x140770DBC (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140771BFC (BcdSetElementDataWithFlags.c)
 *     BcdDeleteObject @ 0x14096B7C8 (BcdDeleteObject.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x14039870C (BiSetFirmwareModified.c)
 *     BiOpenStoreKeyFromObject @ 0x1405BE5A0 (BiOpenStoreKeyFromObject.c)
 *     BiCloseKey @ 0x1407721AC (BiCloseKey.c)
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
