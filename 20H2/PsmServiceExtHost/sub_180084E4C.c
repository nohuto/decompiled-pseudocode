/*
 * XREFs of sub_180084E4C @ 0x180084E4C
 * Callers:
 *     sub_18002B3C0 @ 0x18002B3C0 (sub_18002B3C0.c)
 * Callees:
 *     sub_18002BF9C @ 0x18002BF9C (sub_18002BF9C.c)
 *     memcpy @ 0x180046822 (memcpy.c)
 */

__int64 __fastcall sub_180084E4C(_QWORD *lpParameter)
{
  _DWORD *v2; // rdx
  unsigned int v3; // ebx
  int v4; // ecx
  unsigned int v5; // eax
  const void *v6; // rdx
  void *v7; // r9
  HANDLE EventW; // rax
  HANDLE Thread; // rax

  v2 = lpParameter + 9;
  v3 = 0;
  lpParameter[5] = lpParameter + 9;
  v4 = *(_DWORD *)lpParameter;
  *v2 = 0;
  v5 = sub_18002BF9C(v4);
  memcpy(v7, v6, v5);
  if ( dword_1800B5058 )
  {
    EventW = CreateEventW(0LL, 1, 0, 0LL);
    lpParameter[8] = EventW;
    if ( !EventW
      || (Thread = CreateThread(0LL, 0LL, sub_180084F80, lpParameter, 0, 0LL), (lpParameter[7] = Thread) == 0LL) )
    {
      if ( (int)GetLastError() > 0 )
        return (unsigned __int16)GetLastError() | 0xC0070000;
      else
        return GetLastError();
    }
  }
  return v3;
}
