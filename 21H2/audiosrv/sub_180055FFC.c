/*
 * XREFs of sub_180055FFC @ 0x180055FFC
 * Callers:
 *     sub_180067AA4 @ 0x180067AA4 (sub_180067AA4.c)
 * Callees:
 *     sub_180056100 @ 0x180056100 (sub_180056100.c)
 *     sub_180056634 @ 0x180056634 (sub_180056634.c)
 *     sub_1800579A4 @ 0x1800579A4 (sub_1800579A4.c)
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     sub_180068344 @ 0x180068344 (sub_180068344.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180055FFC(LPVOID *lpParameter, __int64 a2)
{
  unsigned int v3; // ebx
  _QWORD *v4; // rcx
  HRESULT Instance; // eax
  int v6; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]

  v3 = 0;
  if ( a2 )
  {
    v4 = lpParameter + 4;
    if ( *v4 != a2 )
      sub_1800579A4(v4);
  }
  Instance = sub_180056634(lpParameter + 7);
  if ( Instance < 0 )
    return (unsigned int)Instance;
  Instance = sub_180056634(lpParameter + 8);
  if ( Instance < 0 )
    return (unsigned int)Instance;
  Instance = CoCreateInstance(&rclsid, 0LL, 0x17u, &stru_18015C908, lpParameter + 5);
  if ( Instance < 0 )
    return (unsigned int)Instance;
  Instance = sub_180068344(lpParameter);
  if ( Instance < 0 )
  {
    return (unsigned int)Instance;
  }
  else
  {
    sub_180066980(&lpCriticalSection, lpParameter + 10);
    v6 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)lpParameter[5] + 72LL))(
           lpParameter[5],
           (unsigned __int64)(lpParameter + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)lpParameter >> 64));
    if ( v6 < 0 || (*((_DWORD *)lpParameter + 12) = 1, v6 = sub_180056100(lpParameter), v6 < 0) )
      v3 = v6;
    if ( v9 )
      LeaveCriticalSection(lpCriticalSection);
  }
  return v3;
}
