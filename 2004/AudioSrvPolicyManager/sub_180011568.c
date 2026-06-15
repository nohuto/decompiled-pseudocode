/*
 * XREFs of sub_180011568 @ 0x180011568
 * Callers:
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18002C120 @ 0x18002C120 (sub_18002C120.c)
 * Callees:
 *     sub_180016294 @ 0x180016294 (sub_180016294.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

__int64 __fastcall sub_180011568(__int64 a1)
{
  unsigned int v2; // edi
  _QWORD *v3; // rcx
  __int64 v4; // r8
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  v7 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v2 = -2147023728;
  sub_18001A330(&lpCriticalSection);
  v3 = *(_QWORD **)(a1 + 72);
  while ( v3 )
  {
    v4 = v3[2];
    v3 = (_QWORD *)*v3;
    if ( !*(_DWORD *)(v4 + 448) && (*(_DWORD *)(v4 + 480) & 0x1000) != 0 )
    {
      v2 = sub_180016294(v4, 12LL);
      break;
    }
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
