/*
 * XREFs of sub_180012868 @ 0x180012868
 * Callers:
 *     sub_180011230 @ 0x180011230 (sub_180011230.c)
 *     sub_1800112C0 @ 0x1800112C0 (sub_1800112C0.c)
 *     sub_18001EA68 @ 0x18001EA68 (sub_18001EA68.c)
 *     sub_18001EBA4 @ 0x18001EBA4 (sub_18001EBA4.c)
 *     sub_18001F4C8 @ 0x18001F4C8 (sub_18001F4C8.c)
 *     sub_18001FA04 @ 0x18001FA04 (sub_18001FA04.c)
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18002C120 @ 0x18002C120 (sub_18002C120.c)
 * Callees:
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

__int64 __fastcall sub_180012868(__int64 a1, int a2)
{
  __int64 v2; // rsi
  _QWORD *v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  v2 = a2;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v9 = 0;
  sub_18001A330(&lpCriticalSection);
  v4 = *(_QWORD **)(a1 + 72);
  v5 = 0;
  while ( v4 )
  {
    v6 = v4[2];
    v4 = (_QWORD *)*v4;
    if ( !*(_DWORD *)(v6 + 448) && *(_DWORD *)(v6 + 4 * v2 + 528) )
    {
      v5 = 1;
      break;
    }
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
