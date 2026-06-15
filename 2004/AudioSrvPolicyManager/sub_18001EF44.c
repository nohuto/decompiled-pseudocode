/*
 * XREFs of sub_18001EF44 @ 0x18001EF44
 * Callers:
 *     PbmIsPlaying @ 0x180023860 (PbmIsPlaying.c)
 * Callees:
 *     sub_1800106D4 @ 0x1800106D4 (sub_1800106D4.c)
 *     sub_18001DBC4 @ 0x18001DBC4 (sub_18001DBC4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001EF44(volatile signed __int32 *a1, __int64 a2)
{
  __int64 v3; // rbp
  unsigned int v4; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  volatile signed __int32 *v6; // rcx
  volatile signed __int32 *v8; // [rsp+60h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+68h] [rbp+10h]

  v8 = a1;
  v3 = qword_18004FE78;
  v4 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v9 = v5;
  v6 = *(volatile signed __int32 **)(a2 + 256);
  v8 = v6;
  if ( !v6 )
  {
    if ( (int)sub_18001DBC4(v3, *(const WCHAR **)(a2 + 208), *(_QWORD *)(a2 + 240), *(_DWORD *)(a2 + 196), &v8, 0, 0LL) < 0 )
      goto LABEL_5;
    v6 = v8;
  }
  v4 = sub_1800106D4((__int64)v6);
LABEL_5:
  if ( v5 )
    LeaveCriticalSection(v5);
  return v4;
}
