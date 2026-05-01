/*
 * XREFs of sub_180002F50 @ 0x180002F50
 * Callers:
 *     sub_180002D50 @ 0x180002D50 (sub_180002D50.c)
 * Callees:
 *     sub_180004934 @ 0x180004934 (sub_180004934.c)
 *     sub_180007F10 @ 0x180007F10 (sub_180007F10.c)
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 *     sub_180021E08 @ 0x180021E08 (sub_180021E08.c)
 *     sub_180034650 @ 0x180034650 (sub_180034650.c)
 */

__int64 __fastcall sub_180002F50(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  sub_180021E08(a1 - 64, 0LL, &v8, 0LL);
  if ( (int)sub_180007F10(v8, a2, &v9) < 0 )
  {
    return (unsigned int)-1058275323;
  }
  else
  {
    sub_180034650(a1, 0LL);
    if ( v9 > *(_QWORD *)(a1 + 896) )
    {
      v6 = -1058275323;
    }
    else
    {
      v5 = (unsigned int)-((unsigned int)sub_180004934(a1, 28LL) == 0);
      v6 = v5 & 0xC0EC0005;
    }
    sub_18001E830(v5, v4, 1LL);
    RtlReleaseSRWLockShared(a1);
  }
  return v6;
}
