/*
 * XREFs of sub_1800127C0 @ 0x1800127C0
 * Callers:
 *     sub_18001E354 @ 0x18001E354 (sub_18001E354.c)
 *     sub_18001EA68 @ 0x18001EA68 (sub_18001EA68.c)
 *     sub_18001EBA4 @ 0x18001EBA4 (sub_18001EBA4.c)
 *     sub_18001FA04 @ 0x18001FA04 (sub_18001FA04.c)
 *     sub_180020B70 @ 0x180020B70 (sub_180020B70.c)
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18002C120 @ 0x18002C120 (sub_18002C120.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

__int64 __fastcall sub_1800127C0(__int64 a1)
{
  _QWORD *v2; // rcx
  unsigned int v3; // edi
  __int64 v4; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  v7 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  sub_18001A330(&lpCriticalSection);
  v2 = *(_QWORD **)(a1 + 72);
  v3 = 0;
  if ( v2 )
  {
    while ( 1 )
    {
      v4 = v2[2];
      v2 = (_QWORD *)*v2;
      if ( !*(_DWORD *)(v4 + 448) && (*(_QWORD *)(v4 + 552) || *(_QWORD *)(v4 + 560)) )
        break;
      if ( !v2 )
        goto LABEL_6;
    }
    v3 = 1;
  }
LABEL_6:
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
