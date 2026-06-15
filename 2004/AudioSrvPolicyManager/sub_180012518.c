/*
 * XREFs of sub_180012518 @ 0x180012518
 * Callers:
 *     sub_1800209A0 @ 0x1800209A0 (sub_1800209A0.c)
 * Callees:
 *     sub_18000A680 @ 0x18000A680 (sub_18000A680.c)
 *     sub_180015E4C @ 0x180015E4C (sub_180015E4C.c)
 *     sub_180016160 @ 0x180016160 (sub_180016160.c)
 *     sub_180016294 @ 0x180016294 (sub_180016294.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     sub_18001E454 @ 0x18001E454 (sub_18001E454.c)
 *     sub_18001EC8C @ 0x18001EC8C (sub_18001EC8C.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180012518(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // [rsp+28h] [rbp-18h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-10h] BYREF
  char v6; // [rsp+38h] [rbp-8h]
  int v7; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v8; // [rsp+68h] [rbp+28h] BYREF
  char v9; // [rsp+70h] [rbp+30h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v6 = 0;
  sub_18001A330(&lpCriticalSection);
  v7 = 0;
  v8 = 1;
  sub_18001EC8C(qword_18004FE78, a1, (unsigned int)&v9, (unsigned int)&v7, (__int64)&v8);
  v2 = *(_QWORD **)(a1 + 72);
  while ( v2 )
  {
    v3 = v2[2];
    v2 = (_QWORD *)*v2;
    if ( *(_DWORD *)(v3 + 448) == 1 )
    {
      *(_DWORD *)(v3 + 448) = 0;
      if ( v7 )
        sub_18001E454(qword_18004FE78, *(unsigned int *)(v3 + 196), 3LL);
      sub_180016160(v3, 3LL);
      if ( (*(_BYTE *)(v3 + 480) & 1) != 0 )
      {
        if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
          && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
          && *((_BYTE *)off_18004F000 + 25) >= 4u )
        {
          LODWORD(v4) = *(_DWORD *)(v3 + 192);
          sub_18000A680(
            *((_QWORD *)off_18004F000 + 2),
            0x39u,
            &stru_180043390,
            L"SoundLevelChanged",
            *(const wchar_t **)(v3 + 208),
            v4);
        }
        sub_180016294(v3, 0LL);
      }
      sub_180015E4C(v3, v8);
    }
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
}
