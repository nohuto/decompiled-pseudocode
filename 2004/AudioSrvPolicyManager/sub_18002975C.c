/*
 * XREFs of sub_18002975C @ 0x18002975C
 * Callers:
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18002C120 @ 0x18002C120 (sub_18002C120.c)
 * Callees:
 *     sub_180024B50 @ 0x180024B50 (sub_180024B50.c)
 *     sub_180026030 @ 0x180026030 (sub_180026030.c)
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002975C(DWORD SessionId, __int64 a2, unsigned int a3, int a4, __int64 a5, int *a6)
{
  struct _RTL_CRITICAL_SECTION *v10; // rdi
  int v11; // eax
  int v12; // ebx
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v15[4]; // [rsp+38h] [rbp-20h] BYREF

  v10 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v15[1] = v10;
  v11 = sub_18002880C(SessionId, 1, 0LL, &v14);
  if ( v11 )
  {
    v12 = (unsigned __int16)v11 | 0x80070000;
    if ( v11 <= 0 )
      v12 = v11;
  }
  else
  {
    v12 = sub_180026030(v14, a2, v15);
    if ( v12 >= 0 )
      v12 = sub_180024B50(v15[0], a3, a4, a5, a6);
  }
  if ( v10 )
    LeaveCriticalSection(v10);
  return (unsigned int)v12;
}
