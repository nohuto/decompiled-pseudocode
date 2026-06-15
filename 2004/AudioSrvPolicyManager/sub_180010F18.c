/*
 * XREFs of sub_180010F18 @ 0x180010F18
 * Callers:
 *     sub_180010E60 @ 0x180010E60 (sub_180010E60.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_18000A680 @ 0x18000A680 (sub_18000A680.c)
 *     sub_18000FAA8 @ 0x18000FAA8 (sub_18000FAA8.c)
 *     sub_180016294 @ 0x180016294 (sub_180016294.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 */

void __fastcall sub_180010F18(__int64 a1, int a2)
{
  __int64 v4; // r8
  _UNKNOWN **v5; // rcx
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // edx
  const wchar_t *v11; // rax
  __int64 v12; // [rsp+28h] [rbp-58h]
  int v13; // [rsp+30h] [rbp-50h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-48h] BYREF
  char v15; // [rsp+40h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+48h] [rbp-38h] BYREF
  const wchar_t *v17; // [rsp+58h] [rbp-28h]
  int v18; // [rsp+60h] [rbp-20h]
  int v19; // [rsp+64h] [rbp-1Ch]
  int *v20; // [rsp+68h] [rbp-18h]
  __int64 v21; // [rsp+70h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v15 = 0;
  sub_18001A330(&lpCriticalSection);
  v5 = (_UNKNOWN **)off_18004F000;
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0xEu, &stru_180043390, a2);
    v5 = (_UNKNOWN **)off_18004F000;
  }
  v6 = *(_QWORD **)(a1 + 72);
  while ( v6 )
  {
    v7 = v6[2];
    v6 = (_QWORD *)*v6;
    if ( (*(_BYTE *)(v7 + 480) & 1) != 0 && !*(_DWORD *)(v7 + 448) )
    {
      if ( v5 != &off_18004F000 && (*((_DWORD *)v5 + 7) & 0x40000000) != 0 && *((_BYTE *)v5 + 25) >= 4u )
      {
        LODWORD(v12) = *(_DWORD *)(v7 + 192);
        sub_18000A680(
          (TRACEHANDLE)v5[2],
          0xFu,
          &stru_180043390,
          L"SoundLevelChanged",
          *(const wchar_t **)(a1 + 24),
          v12);
      }
      if ( byte_180050000 < 0 )
      {
        v8 = *(_QWORD *)(a1 + 24);
        v13 = a2;
        if ( v8 )
        {
          v9 = -1LL;
          do
            ++v9;
          while ( *(_WORD *)(v8 + 2 * v9) );
          v10 = 2 * v9 + 2;
        }
        else
        {
          v10 = 10;
        }
        v18 = v10;
        v11 = L"NULL";
        v19 = 0;
        if ( v8 )
          v11 = (const wchar_t *)v8;
        v21 = 4LL;
        v17 = v11;
        v20 = &v13;
        sub_18000FAA8(v8, &stru_180043520, v4, 3u, &v16);
      }
      sub_180016294(v7, 0LL);
      v5 = (_UNKNOWN **)off_18004F000;
    }
  }
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
}
