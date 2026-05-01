/*
 * XREFs of sub_18001124C @ 0x18001124C
 * Callers:
 *     sub_18000F894 @ 0x18000F894 (sub_18000F894.c)
 *     sub_1800158A4 @ 0x1800158A4 (sub_1800158A4.c)
 *     sub_18002005C @ 0x18002005C (sub_18002005C.c)
 *     sub_180034F94 @ 0x180034F94 (sub_180034F94.c)
 *     sub_18003E47C @ 0x18003E47C (sub_18003E47C.c)
 * Callees:
 *     sub_1800022EC @ 0x1800022EC (sub_1800022EC.c)
 *     sub_18000336C @ 0x18000336C (sub_18000336C.c)
 */

__int64 __fastcall sub_18001124C(void **a1)
{
  unsigned int v2; // edi
  HANDLE Event; // rbp
  void *v4; // rsi
  DWORD LastError; // ebx

  v2 = 0;
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    v4 = *a1;
    if ( *a1 )
    {
      LastError = GetLastError();
      sub_18000336C(v4);
      SetLastError(LastError);
    }
    *a1 = Event;
  }
  else
  {
    return (unsigned int)sub_1800022EC();
  }
  return v2;
}
