/*
 * XREFs of sub_180008510 @ 0x180008510
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001090 @ 0x180001090 (sub_180001090.c)
 *     sub_1800055CC @ 0x1800055CC (sub_1800055CC.c)
 *     sub_18002A698 @ 0x18002A698 (sub_18002A698.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180008510(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  int v4; // eax
  _DWORD *v5; // rcx
  int v7; // [rsp+30h] [rbp-68h] BYREF
  int v8; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-58h] BYREF
  int *v10; // [rsp+60h] [rbp-38h]
  int v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+6Ch] [rbp-2Ch]
  int *v13; // [rsp+70h] [rbp-28h]
  int v14; // [rsp+78h] [rbp-20h]
  int v15; // [rsp+7Ch] [rbp-1Ch]

  if ( a2 != dword_18004FE5C )
  {
    v3 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
    EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
    v4 = dword_18004FE58;
    dword_18004FE5C = a2;
    if ( !a2 )
      v4 = 1;
    dword_18004FE58 = v4;
    v5 = (_DWORD *)*((_QWORD *)sub_1800055CC() + 1);
    if ( *v5 > 4u )
    {
      v15 = 0;
      v12 = 0;
      v7 = dword_18004FE58;
      v8 = dword_18004FE5C;
      v13 = &v7;
      v10 = &v8;
      v14 = 4;
      v11 = 4;
      sub_180001090((__int64)v5, (unsigned __int8 *)dword_180045DC9, 0LL, 0LL, 4u, &v9);
    }
    sub_18002A698();
    if ( v3 )
      LeaveCriticalSection(v3);
  }
  return 0LL;
}
