/*
 * XREFs of sub_18001F4C8 @ 0x18001F4C8
 * Callers:
 *     sub_180011230 @ 0x180011230 (sub_180011230.c)
 *     sub_18001E848 @ 0x18001E848 (sub_18001E848.c)
 *     sub_18001F600 @ 0x18001F600 (sub_18001F600.c)
 *     sub_18001FA04 @ 0x18001FA04 (sub_18001FA04.c)
 * Callees:
 *     sub_180012658 @ 0x180012658 (sub_180012658.c)
 *     sub_180012868 @ 0x180012868 (sub_180012868.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     sub_180028F50 @ 0x180028F50 (sub_180028F50.c)
 *     sub_180029028 @ 0x180029028 (sub_180029028.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18001F4C8(__int64 a1, __int64 a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbp
  DWORD v6; // r15d
  int v7; // edi
  BOOL v8; // r14d
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v12; // [rsp+28h] [rbp-20h]

  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v6 = *(_DWORD *)(a2 + 212);
  v7 = 1;
  v8 = (unsigned int)sub_180012868(a2, 0) && *(_DWORD *)(a2 + 208)
    || (unsigned int)sub_180012868(a2, 1) && (unsigned int)sub_180012658(a2);
  if ( !a3 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)(a2 + 32);
    v12 = 0;
    sub_18001A330((__int64)&lpCriticalSection);
    v9 = *(_QWORD **)(a2 + 72);
    while ( v9 )
    {
      v10 = v9[2];
      v9 = (_QWORD *)*v9;
      if ( !*(_DWORD *)(v10 + 448) && *(_DWORD *)(v10 + 520) )
      {
        a3 = 1;
        break;
      }
    }
    if ( v12 )
      LeaveCriticalSection(lpCriticalSection);
    if ( !a3 )
      v7 = 0;
  }
  if ( !v8 || v7 )
    sub_180029028(v6);
  else
    sub_180028F50(v6);
  if ( v5 )
    LeaveCriticalSection(v5);
}
