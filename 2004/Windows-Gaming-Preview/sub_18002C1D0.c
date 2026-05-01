/*
 * XREFs of sub_18002C1D0 @ 0x18002C1D0
 * Callers:
 *     sub_1800313F0 @ 0x1800313F0 (sub_1800313F0.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180038EAC @ 0x180038EAC (sub_180038EAC.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18002C1D0(_QWORD *a1, HSTRING a2)
{
  HSTRING v3; // rbp
  HSTRING v4; // r14
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // esi
  int v11; // r9d
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  HSTRING v14; // [rsp+50h] [rbp+8h] BYREF
  HSTRING v15; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+60h] [rbp+18h]

  v15 = a2;
  v3 = (HSTRING)a1[2];
  WindowsDeleteString(0LL);
  v14 = v3;
  v4 = (HSTRING)a1[3];
  WindowsDeleteString(0LL);
  v15 = v4;
  v5 = (struct _RTL_CRITICAL_SECTION *)(*a1 + 168LL);
  EnterCriticalSection(v5);
  v16 = v5;
  v6 = *a1;
  v7 = *(_QWORD *)(*a1 + 280LL);
  v8 = 0;
  if ( !v7 || !*(_QWORD *)(v6 + 288) )
  {
    v10 = -2147024891;
    v11 = -2147024891;
    goto LABEL_8;
  }
  v9 = sub_180038EAC(v7, &v14, &v15);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = v9;
LABEL_8:
    sub_180003268(retaddr, 1554, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v11);
    if ( v5 )
      LeaveCriticalSection(v5);
    v8 = v10;
    goto LABEL_11;
  }
  if ( v5 )
    LeaveCriticalSection(v5);
LABEL_11:
  WindowsDeleteString(v4);
  WindowsDeleteString(v3);
  return v8;
}
