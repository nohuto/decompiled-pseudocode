/*
 * XREFs of sub_180011444 @ 0x180011444
 * Callers:
 *     sub_18001EA68 @ 0x18001EA68 (sub_18001EA68.c)
 *     sub_18001FA04 @ 0x18001FA04 (sub_18001FA04.c)
 *     sub_180020668 @ 0x180020668 (sub_180020668.c)
 *     sub_18002C120 @ 0x18002C120 (sub_18002C120.c)
 * Callees:
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

__int64 __fastcall sub_180011444(__int64 a1)
{
  unsigned int v2; // edi
  _QWORD *v3; // rcx
  __int64 v4; // rdx
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
      v2 += *(_DWORD *)(v4 + 340);
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
