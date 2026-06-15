/*
 * XREFs of sub_180036660 @ 0x180036660
 * Callers:
 *     sub_180017BB0 @ 0x180017BB0 (sub_180017BB0.c)
 * Callees:
 *     sub_18001A074 @ 0x18001A074 (sub_18001A074.c)
 */

__int16 *__fastcall sub_180036660(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int16 *v3; // rdi

  v2 = a2;
  EnterCriticalSection(&stru_18004F0F8);
  v3 = 0LL;
  if ( (int)v2 <= dword_18004F128 && (int)v2 >= 0 )
  {
    if ( (_DWORD)v2 == dword_18004F128 )
    {
      v3 = off_18004F0E0;
    }
    else
    {
      if ( (int)v2 >= dword_18004F128 )
      {
        sub_18001A074();
        JUMPOUT(0x1800366D1LL);
      }
      v3 = *(__int16 **)(qword_18004F120 + 8 * v2);
    }
  }
  LeaveCriticalSection(&stru_18004F0F8);
  return v3;
}
