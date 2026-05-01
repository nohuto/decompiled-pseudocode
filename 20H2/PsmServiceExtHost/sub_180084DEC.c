/*
 * XREFs of sub_180084DEC @ 0x180084DEC
 * Callers:
 *     sub_180036520 @ 0x180036520 (sub_180036520.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall sub_180084DEC(__int64 a1)
{
  BOOL result; // eax

  if ( *(_QWORD *)(a1 + 56) )
  {
    SetEvent(*(HANDLE *)(a1 + 64));
    WaitForSingleObject(*(HANDLE *)(a1 + 56), 0xFFFFFFFF);
    CloseHandle(*(HANDLE *)(a1 + 56));
    return CloseHandle(*(HANDLE *)(a1 + 64));
  }
  return result;
}
