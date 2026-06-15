/*
 * XREFs of sub_1800112C0 @ 0x1800112C0
 * Callers:
 *     sub_180011230 @ 0x180011230 (sub_180011230.c)
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 * Callees:
 *     sub_1800114B8 @ 0x1800114B8 (sub_1800114B8.c)
 *     sub_180012658 @ 0x180012658 (sub_180012658.c)
 *     sub_180012748 @ 0x180012748 (sub_180012748.c)
 *     sub_180012868 @ 0x180012868 (sub_180012868.c)
 *     sub_180016B98 @ 0x180016B98 (sub_180016B98.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     sub_18001E6B8 @ 0x18001E6B8 (sub_18001E6B8.c)
 *     sub_180029028 @ 0x180029028 (sub_180029028.c)
 */

__int64 __fastcall sub_1800112C0(__int64 a1)
{
  int v2; // esi
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  __int64 result; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  v2 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v7 = 0;
  sub_18001A330(&lpCriticalSection);
  v3 = *(_QWORD **)(a1 + 72);
  while ( v3 )
  {
    v4 = v3[2];
    v3 = (_QWORD *)*v3;
    if ( !*(_DWORD *)(v4 + 448) )
      v2 += sub_180016B98(v4, 2LL);
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  if ( !v2 || (unsigned int)sub_180012868(a1, 1LL) )
  {
    result = sub_180012658(a1);
    if ( (_DWORD)result )
    {
      result = sub_180012748(a1);
      if ( !(_DWORD)result )
      {
        result = sub_180012868(a1, 1LL);
        if ( !(_DWORD)result )
          return sub_18001E6B8(qword_18004FE78, a1, 209LL, 0LL);
      }
    }
  }
  else
  {
    sub_1800114B8(a1, 4LL, 4LL, 1LL);
    sub_18001E6B8(qword_18004FE78, a1, 209LL, 0LL);
    return sub_180029028(*(_DWORD *)(a1 + 212));
  }
  return result;
}
