/*
 * XREFs of sub_1800D2E00 @ 0x1800D2E00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800D18C8 @ 0x1800D18C8 (sub_1800D18C8.c)
 *     sub_1800D2ED4 @ 0x1800D2ED4 (sub_1800D2ED4.c)
 */

__int64 __fastcall sub_1800D2E00(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 *v5; // rbx
  __int64 **v6; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 *v9; // [rsp+50h] [rbp+18h] BYREF
  char v10; // [rsp+58h] [rbp+20h] BYREF

  v8 = a2;
  if ( a2 )
  {
    v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 224);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
    v5 = *(__int64 **)(a1 + 272);
    v6 = sub_1800D18C8(&v9, *(__int64 **)(a1 + 264), v5, &v8);
    sub_1800D2ED4(a1 + 264, &v10, *v6, v5);
    if ( v4 )
      LeaveCriticalSection(v4);
    return 0LL;
  }
  else
  {
    sub_18004BD84((int)retaddr, 792, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", -2147467261);
    return 2147500035LL;
  }
}
