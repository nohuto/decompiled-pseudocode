/*
 * XREFs of sub_18010F970 @ 0x18010F970
 * Callers:
 *     sub_180110050 @ 0x180110050 (sub_180110050.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18010F5C8 @ 0x18010F5C8 (sub_18010F5C8.c)
 *     sub_1801112AC @ 0x1801112AC (sub_1801112AC.c)
 *     sub_180112F8C @ 0x180112F8C (sub_180112F8C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18010F970(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-158h] BYREF
  char v6; // [rsp+28h] [rbp-150h]
  __int64 v7; // [rsp+30h] [rbp-148h]
  char v8; // [rsp+38h] [rbp-140h]
  _DWORD v9[72]; // [rsp+40h] [rbp-138h] BYREF
  _UNKNOWN *retaddr; // [rsp+178h] [rbp+0h]

  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 80));
  if ( !(unsigned int)sub_18010F5C8(a1) )
    goto LABEL_5;
  memset(&v9[4], 0, 0x104uLL);
  v9[0] = 0;
  v9[3] = 2;
  v9[2] = 3;
  v9[1] = 2;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 8LL))(*(_QWORD *)(a1 + 56));
  v7 = a1;
  v8 = 1;
  if ( *(_QWORD *)(a1 + 144) || (v2 = sub_1801112AC(qword_18019E608, *(_QWORD *)(a1 + 136), v9), v3 = v2, v2 >= 0) )
  {
LABEL_5:
    v3 = 0;
  }
  else
  {
    sub_18004BD84(
      (int)retaddr,
      921,
      (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
      v2);
    sub_180112F8C(qword_18019E608, *(_QWORD *)(a1 + 136), *(_QWORD *)(a1 + 144));
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
