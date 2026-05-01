/*
 * XREFs of sub_18003EB10 @ 0x18003EB10
 * Callers:
 *     sub_18000A1B0 @ 0x18000A1B0 (sub_18000A1B0.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18000BF98 @ 0x18000BF98 (sub_18000BF98.c)
 *     sub_18003E9CC @ 0x18003E9CC (sub_18003E9CC.c)
 *     sub_18003EAB8 @ 0x18003EAB8 (sub_18003EAB8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18003EB10(void *a1, __int64 a2, bool *a3)
{
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  HANDLE hObject; // [rsp+48h] [rbp+10h] BYREF

  *a3 = 0;
  hObject = 0LL;
  v4 = sub_18003E9CC(a1, a2, &hObject);
  v6 = v4;
  if ( v4 >= 0 )
    v6 = sub_18003EAB8((__int64)hObject, v5, a3);
  else
    sub_180003268(retaddr, 25, (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity_capability.cpp", v4);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  return v6;
}
