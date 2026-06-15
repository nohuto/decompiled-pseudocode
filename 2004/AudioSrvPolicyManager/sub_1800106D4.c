/*
 * XREFs of sub_1800106D4 @ 0x1800106D4
 * Callers:
 *     sub_18001EF44 @ 0x18001EF44 (sub_18001EF44.c)
 * Callees:
 *     sub_180016B98 @ 0x180016B98 (sub_180016B98.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

__int64 __fastcall sub_1800106D4(__int64 a1)
{
  _QWORD *v2; // rbx
  unsigned int v3; // esi
  __int64 v4; // rdi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v7 = 0;
  sub_18001A330(&lpCriticalSection);
  v2 = *(_QWORD **)(a1 + 72);
  v3 = 0;
  while ( v2 )
  {
    v4 = v2[2];
    v2 = (_QWORD *)*v2;
    if ( !*(_DWORD *)(v4 + 448)
      && ((unsigned int)sub_180016B98(v4, 2LL)
       || (unsigned int)sub_180016B98(v4, 10LL)
       || (unsigned int)sub_180016B98(v4, 1LL)
       || (unsigned int)sub_180016B98(v4, 11LL)) )
    {
      v3 = 1;
      break;
    }
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
