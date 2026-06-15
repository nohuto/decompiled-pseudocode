/*
 * XREFs of sub_1800289C8 @ 0x1800289C8
 * Callers:
 *     sub_1800293D4 @ 0x1800293D4 (sub_1800293D4.c)
 *     sub_1800295AC @ 0x1800295AC (sub_1800295AC.c)
 *     TS_SessionChanged @ 0x18002A7F0 (TS_SessionChanged.c)
 * Callees:
 *     sub_180025BB0 @ 0x180025BB0 (sub_180025BB0.c)
 *     sub_18002B478 @ 0x18002B478 (sub_18002B478.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

void __fastcall sub_1800289C8(__int64 a1, __int64 a2, int a3)
{
  int v3; // edi
  _QWORD *v7; // r14
  unsigned int *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _DWORD v11[8]; // [rsp+20h] [rbp-58h] BYREF

  v3 = 0;
  if ( a3 != 0xFFFF && a3 )
    v3 = ++dword_180050004;
  if ( *(_DWORD *)(a1 + 4) != a3 || *(_DWORD *)(a1 + 8) != v3 )
  {
    v7 = *(_QWORD **)(a1 + 16);
    *(_DWORD *)(a1 + 4) = a3;
    *(_DWORD *)(a1 + 8) = v3;
    while ( v7 )
    {
      v8 = (unsigned int *)v7[2];
      v7 = (_QWORD *)*v7;
      v11[0] = 32;
      v11[1] = 0x2000;
      v9 = *v8;
      v11[6] = a3;
      v11[7] = v3;
      MMDevAPI_12(v11, v9);
    }
  }
  if ( *(_DWORD *)(a1 + 48) && *(_DWORD *)(a1 + 4) == 0xFFFF && !*(_DWORD *)(a1 + 32) && !*(_QWORD *)(a1 + 72) )
  {
    EnterCriticalSection(&CriticalSection);
    sub_18002B478(v10, a2);
    sub_180025BB0(a1);
    sub_180039D98((void *)a1);
    LeaveCriticalSection(&CriticalSection);
  }
}
