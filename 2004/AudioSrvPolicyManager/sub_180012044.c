/*
 * XREFs of sub_180012044 @ 0x180012044
 * Callers:
 *     sub_18001EA68 @ 0x18001EA68 (sub_18001EA68.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_18000FBC8 @ 0x18000FBC8 (sub_18000FBC8.c)
 *     sub_180016AA0 @ 0x180016AA0 (sub_180016AA0.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

__int64 __fastcall sub_180012044(__int64 a1)
{
  _QWORD *v2; // rbx
  unsigned int v3; // edi
  __int64 v4; // rcx
  char v6[4]; // [rsp+20h] [rbp-38h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v8; // [rsp+38h] [rbp-20h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v8 = 0;
  sub_18001A330(&lpCriticalSection);
  v2 = *(_QWORD **)(a1 + 72);
  v3 = 0;
  if ( v2 )
  {
    while ( 1 )
    {
      v4 = v2[2];
      v2 = (_QWORD *)*v2;
      if ( !*(_DWORD *)(v4 + 448) && sub_180016AA0(v4 + 16) < 0.000099999997 )
        break;
      if ( !v2 )
        goto LABEL_5;
    }
    v3 = 1;
  }
LABEL_5:
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 5u )
  {
    *(_DWORD *)v6 = v3;
    sub_18000FBC8(*((_QWORD *)off_18004F000 + 2), 0x1Du, &stru_180043390, *(const wchar_t **)(a1 + 24), *(_DWORD *)v6);
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
