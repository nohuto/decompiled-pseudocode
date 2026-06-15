/*
 * XREFs of sub_18001E354 @ 0x18001E354
 * Callers:
 *     sub_18001E14C @ 0x18001E14C (sub_18001E14C.c)
 * Callees:
 *     sub_18000A610 @ 0x18000A610 (sub_18000A610.c)
 *     sub_1800115F4 @ 0x1800115F4 (sub_1800115F4.c)
 *     sub_1800127C0 @ 0x1800127C0 (sub_1800127C0.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

__int64 __fastcall sub_18001E354(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  int v4; // edi
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  USHORT v7; // dx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]

  if ( *(_DWORD *)(a2 + 208) )
    goto LABEL_15;
  v10 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a2 + 32);
  sub_18001A330((__int64)&lpCriticalSection);
  v3 = *(_QWORD **)(a2 + 72);
  v4 = 0;
  while ( v3 )
  {
    v5 = v3[2];
    v3 = (_QWORD *)*v3;
    if ( !*(_DWORD *)(v5 + 448) && *(_DWORD *)(v5 + 264) )
    {
      v4 = 1;
      break;
    }
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v4 || (unsigned int)sub_1800127C0(a2) )
  {
LABEL_15:
    v6 = off_18004F000;
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      v7 = 37;
      goto LABEL_19;
    }
  }
  else
  {
    sub_1800115F4((char *)a2);
    v6 = off_18004F000;
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      v7 = 38;
LABEL_19:
      sub_18000A610(v6[2], v7, &stru_1800445C8, *(const wchar_t **)(a2 + 24));
    }
  }
  return 0LL;
}
