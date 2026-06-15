/*
 * XREFs of sub_180012748 @ 0x180012748
 * Callers:
 *     sub_1800112C0 @ 0x1800112C0 (sub_1800112C0.c)
 *     sub_1800129C0 @ 0x1800129C0 (sub_1800129C0.c)
 *     sub_180012B64 @ 0x180012B64 (sub_180012B64.c)
 *     sub_18001EA68 @ 0x18001EA68 (sub_18001EA68.c)
 *     sub_18001EBA4 @ 0x18001EBA4 (sub_18001EBA4.c)
 *     sub_18001FA04 @ 0x18001FA04 (sub_18001FA04.c)
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18002C120 @ 0x18002C120 (sub_18002C120.c)
 * Callees:
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

__int64 __fastcall sub_180012748(__int64 a1)
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
  while ( v2 )
  {
    v4 = v2[2];
    v2 = (_QWORD *)*v2;
    if ( !*(_DWORD *)(v4 + 448) && *(_DWORD *)(v4 + 468) )
    {
      v3 = 1;
      break;
    }
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
