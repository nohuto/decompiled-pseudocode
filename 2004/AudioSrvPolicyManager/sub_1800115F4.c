/*
 * XREFs of sub_1800115F4 @ 0x1800115F4
 * Callers:
 *     sub_18001E354 @ 0x18001E354 (sub_18001E354.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_18000A610 @ 0x18000A610 (sub_18000A610.c)
 *     sub_180011760 @ 0x180011760 (sub_180011760.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     sub_18001E6B8 @ 0x18001E6B8 (sub_18001E6B8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800115F4(char *pv)
{
  _UNKNOWN **v2; // rcx
  int v3; // edi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)(pv + 32);
  v6 = 0;
  sub_18001A330(&lpCriticalSection);
  if ( *((_DWORD *)pv + 108) )
  {
    v2 = (_UNKNOWN **)off_18004F000;
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 5u )
    {
      sub_18000A610(*((_QWORD *)off_18004F000 + 2), 0x11u, &stru_180043390, *((const wchar_t **)pv + 3));
      v2 = (_UNKNOWN **)off_18004F000;
    }
    v3 = -2147024809;
  }
  else
  {
    *((_DWORD *)pv + 141) = 2;
    *((_DWORD *)pv + 142) = 1;
    *((_DWORD *)pv + 143) = 0;
    *((_DWORD *)pv + 144) = 1;
    *((_DWORD *)pv + 145) = 2;
    *((_DWORD *)pv + 146) = 1;
    *((_DWORD *)pv + 147) = 2;
    v3 = sub_180011760(pv);
    if ( v3 >= 0 )
    {
      *((_DWORD *)pv + 108) = 1;
      sub_18001E6B8(qword_18004FE78, pv, 163LL, 0LL);
      goto LABEL_15;
    }
    v2 = (_UNKNOWN **)off_18004F000;
  }
  if ( v2 != &off_18004F000 && (*((_DWORD *)v2 + 7) & 0x40000000) != 0 && *((_BYTE *)v2 + 25) >= 2u )
    sub_1800050FC((TRACEHANDLE)v2[2], 0x12u, &stru_180043390, v3);
  sub_180005724("CApplication::GrantGoodFaithPLMExemption", 1273, v3);
LABEL_15:
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v3;
}
