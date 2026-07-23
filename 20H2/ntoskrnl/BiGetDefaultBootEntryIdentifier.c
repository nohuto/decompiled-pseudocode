/*
 * XREFs of BiGetDefaultBootEntryIdentifier @ 0x140971AB0
 * Callers:
 *     BcdOpenObject @ 0x14077FC60 (BcdOpenObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     BcdOpenObject @ 0x14077FC60 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14077FDEC (BcdCloseObject.c)
 *     BcdGetElementDataWithFlags @ 0x1407803E0 (BcdGetElementDataWithFlags.c)
 */

__int64 __fastcall BiGetDefaultBootEntryIdentifier(void *a1, _OWORD *a2)
{
  NTSTATUS ElementDataWithFlags; // ebx
  BCD_FLAGS v4; // r8d
  ULONG BufferSize; // [rsp+30h] [rbp-38h] BYREF
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp-30h] BYREF
  __int128 Buffer; // [rsp+40h] [rbp-28h] BYREF

  BcdObjectHandle = 0LL;
  Buffer = 0LL;
  ElementDataWithFlags = BcdOpenObject(a1, &GUID_WINDOWS_BOOTMGR, &BcdObjectHandle);
  if ( ElementDataWithFlags >= 0 )
  {
    BufferSize = 16;
    ElementDataWithFlags = BcdGetElementDataWithFlags(BcdObjectHandle, 0x23000003u, v4, &Buffer, &BufferSize);
    if ( ElementDataWithFlags >= 0 )
      *a2 = Buffer;
  }
  if ( BcdObjectHandle )
    BcdCloseObject(BcdObjectHandle);
  return (unsigned int)ElementDataWithFlags;
}
