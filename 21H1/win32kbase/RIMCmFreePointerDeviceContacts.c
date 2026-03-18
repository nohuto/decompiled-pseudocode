/*
 * XREFs of RIMCmFreePointerDeviceContacts @ 0x1C0186A64
 * Callers:
 *     RIMFreePointerDevice @ 0x1C01662FC (RIMFreePointerDevice.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C016FF48 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1C01720B0 (RIMIDEResetPointerDeviceMaxCount.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C01867BC (RIMCmAllocPointerDeviceContacts.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

__int64 __fastcall RIMCmFreePointerDeviceContacts(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 936);
  if ( v4 )
  {
    Win32FreePool(v4, a2, a3);
    *(_QWORD *)(a1 + 936) = 0LL;
    *(_DWORD *)(a1 + 944) = 0;
  }
  v5 = *(_QWORD *)(a1 + 912);
  if ( v5 )
  {
    Win32FreePool(v5, a2, a3);
    *(_QWORD *)(a1 + 912) = 0LL;
  }
  result = a1 + 920;
  *(_QWORD *)(a1 + 928) = a1 + 920;
  *(_QWORD *)(a1 + 920) = a1 + 920;
  return result;
}
