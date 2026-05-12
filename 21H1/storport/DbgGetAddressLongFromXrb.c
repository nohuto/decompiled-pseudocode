/*
 * XREFs of DbgGetAddressLongFromXrb @ 0x1C0028D10
 * Callers:
 *     RaidCompleteMiniportRequestCallback @ 0x1C0043558 (RaidCompleteMiniportRequestCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DbgGetAddressLongFromXrb(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 224);
  if ( result )
    return (unsigned __int8)BYTE2(*(_DWORD *)(result + 96)) | ((((unsigned __int8)*(_DWORD *)(result + 96) << 8) | (unsigned int)(unsigned __int8)BYTE1(*(_DWORD *)(result + 96))) << 8);
  return result;
}
