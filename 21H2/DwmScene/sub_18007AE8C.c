/*
 * XREFs of sub_18007AE8C @ 0x18007AE8C
 * Callers:
 *     sub_180079884 @ 0x180079884 (sub_180079884.c)
 *     sub_1800C3600 @ 0x1800C3600 (sub_1800C3600.c)
 * Callees:
 *     sub_180067014 @ 0x180067014 (sub_180067014.c)
 *     sub_18006730C @ 0x18006730C (sub_18006730C.c)
 *     sub_18007AD60 @ 0x18007AD60 (sub_18007AD60.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18007AE8C(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0LL;
  sub_180067014(a1 + 112, (__int64)&v6);
  v4 = 0;
  if ( (unsigned int)sub_18007AD60(a1) )
  {
    while ( *(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL * v4) != *a2 )
    {
      if ( ++v4 >= (unsigned int)sub_18007AD60(a1) )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v4 = -1;
  }
  if ( BYTE8(v6) )
    sub_18006730C(v6);
  return v4;
}
