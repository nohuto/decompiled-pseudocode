/*
 * XREFs of RIMCmFreePointerDeviceContacts @ 0x1C0180D64
 * Callers:
 *     RIMFreePointerDevice @ 0x1C015FFAC (RIMFreePointerDevice.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0169BF8 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1C016BD60 (RIMIDEResetPointerDeviceMaxCount.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C0180ABC (RIMCmAllocPointerDeviceContacts.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

__int64 __fastcall RIMCmFreePointerDeviceContacts(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 936);
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)(a1 + 936) = 0LL;
    *(_DWORD *)(a1 + 944) = 0;
  }
  v3 = *(_QWORD *)(a1 + 912);
  if ( v3 )
  {
    Win32FreePool(v3);
    *(_QWORD *)(a1 + 912) = 0LL;
  }
  result = a1 + 920;
  *(_QWORD *)(a1 + 928) = a1 + 920;
  *(_QWORD *)(a1 + 920) = a1 + 920;
  return result;
}
