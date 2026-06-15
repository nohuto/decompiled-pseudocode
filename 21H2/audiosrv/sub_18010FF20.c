/*
 * XREFs of sub_18010FF20 @ 0x18010FF20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     sub_18010ED94 @ 0x18010ED94 (sub_18010ED94.c)
 *     sub_18010F5C8 @ 0x18010F5C8 (sub_18010F5C8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18010FF20(__int64 a1, int a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 72));
  if ( (unsigned int)sub_18010F5C8(a1 - 8) )
  {
    v5 = sub_18010ED94(a1 - 8, a2);
    v4 = 0;
    if ( v5 < 0 )
      v4 = v5;
  }
  else
  {
    v4 = -2147418113;
    sub_18004BD84(
      (int)retaddr,
      584,
      (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
      -2147418113);
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
