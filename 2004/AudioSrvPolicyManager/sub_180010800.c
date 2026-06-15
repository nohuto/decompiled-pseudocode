/*
 * XREFs of sub_180010800 @ 0x180010800
 * Callers:
 *     sub_180010BC0 @ 0x180010BC0 (sub_180010BC0.c)
 *     sub_18001E454 @ 0x18001E454 (sub_18001E454.c)
 * Callees:
 *     sub_180013134 @ 0x180013134 (sub_180013134.c)
 *     sub_180016160 @ 0x180016160 (sub_180016160.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180010800(__int64 a1, unsigned int a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v8 = 0;
  sub_18001A330(&lpCriticalSection);
  v4 = *(_QWORD **)(a1 + 72);
  while ( v4 )
  {
    v5 = v4[2];
    v4 = (_QWORD *)*v4;
    if ( !*(_DWORD *)(v5 + 448) )
      sub_180016160(v5, a2);
  }
  sub_180013134(a1);
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
