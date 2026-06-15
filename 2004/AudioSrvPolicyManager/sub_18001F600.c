/*
 * XREFs of sub_18001F600 @ 0x18001F600
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     sub_18001F4C8 @ 0x18001F4C8 (sub_18001F4C8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001F600(__int64 a1, _DWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbp
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v12; // [rsp+28h] [rbp-20h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v5 = *(_QWORD *)a2;
  v6 = *(_QWORD *)(*(_QWORD *)a2 + 256LL);
  LODWORD(a2) = a2[2];
  lpCriticalSection = (LPCRITICAL_SECTION)(v5 + 32);
  v12 = 0;
  sub_18001A330((__int64)&lpCriticalSection);
  v7 = *(_DWORD *)(v5 + 520);
  v8 = v7 - 1;
  v9 = v7 + 1;
  if ( (_DWORD)a2 )
    v9 = v8;
  *(_DWORD *)(v5 + 520) = v9;
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v6 )
    sub_18001F4C8(a1, v6, 0);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
