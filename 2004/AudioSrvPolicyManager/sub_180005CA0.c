/*
 * XREFs of sub_180005CA0 @ 0x180005CA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001090 @ 0x180001090 (sub_180001090.c)
 *     sub_1800055CC @ 0x1800055CC (sub_1800055CC.c)
 *     sub_18002A580 @ 0x18002A580 (sub_18002A580.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180005CA0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // eax
  _DWORD *v6; // rcx
  int v8; // [rsp+30h] [rbp-68h] BYREF
  int v9; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+40h] [rbp-58h] BYREF
  int *v11; // [rsp+60h] [rbp-38h]
  int v12; // [rsp+68h] [rbp-30h]
  int v13; // [rsp+6Ch] [rbp-2Ch]
  int *v14; // [rsp+70h] [rbp-28h]
  int v15; // [rsp+78h] [rbp-20h]
  int v16; // [rsp+7Ch] [rbp-1Ch]

  if ( *(_DWORD *)(a3 + 16) == 4 && *(_QWORD *)a3 == 0x470FEAA4E1233993LL && *(_QWORD *)(a3 + 8) == 0x71FBB6C151A3E79DLL )
  {
    v3 = *(_DWORD *)(a3 + 20);
    if ( (v3 != 0) != dword_18004FE60 )
    {
      v4 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
      EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
      v5 = dword_18004FE58;
      dword_18004FE60 = v3 != 0;
      if ( !v3 )
        v5 = 1;
      dword_18004FE58 = v5;
      v6 = (_DWORD *)*((_QWORD *)sub_1800055CC() + 1);
      if ( *v6 > 4u )
      {
        v16 = 0;
        v13 = 0;
        v8 = dword_18004FE58;
        v9 = dword_18004FE60;
        v14 = &v8;
        v11 = &v9;
        v15 = 4;
        v12 = 4;
        sub_180001090((__int64)v6, (unsigned __int8 *)dword_180045F53, 0LL, 0LL, 4u, &v10);
      }
      sub_18002A580();
      if ( v4 )
        LeaveCriticalSection(v4);
    }
  }
  return 0LL;
}
