/*
 * XREFs of sub_18001F000 @ 0x18001F000
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 *     sub_180028E74 @ 0x180028E74 (sub_180028E74.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001F000(__int64 a1, DWORD *a2)
{
  DWORD v2; // ebx
  unsigned int v3; // edi
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  int v5; // eax
  __int64 v7; // [rsp+38h] [rbp+10h]

  v2 = *a2;
  v3 = 0;
  v4 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v5 = sub_18002880C(v2);
  if ( v5 )
  {
    v3 = (unsigned __int16)v5 | 0x80070000;
    if ( v5 <= 0 )
      v3 = v5;
  }
  else
  {
    sub_180028E74(v7);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v3;
}
