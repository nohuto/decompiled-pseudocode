/*
 * XREFs of sub_1800295AC @ 0x1800295AC
 * Callers:
 *     TS_SessionChanged @ 0x18002A7F0 (TS_SessionChanged.c)
 * Callees:
 *     sub_180017F24 @ 0x180017F24 (sub_180017F24.c)
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 *     sub_1800289C8 @ 0x1800289C8 (sub_1800289C8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800295AC(DWORD SessionId)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+58h] [rbp+20h]

  v8 = 0LL;
  v7 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v9 = v2;
  v3 = sub_18002880C(SessionId, 0, &v8, &v7);
  v4 = v3;
  if ( v3 == 1168 )
  {
    v4 = 0;
  }
  else if ( !v3 )
  {
    v5 = v7;
    *(_DWORD *)(v7 + 48) = 1;
    sub_180017F24(v5 + 176);
    *(_DWORD *)(v5 + 224) = 1065353216;
    *(_DWORD *)(v5 + 304) = 0;
    *(_BYTE *)(v5 + 324) = 0;
    sub_1800289C8(v5, v8, 0xFFFF);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v4;
}
