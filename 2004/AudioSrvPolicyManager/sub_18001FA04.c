/*
 * XREFs of sub_18001FA04 @ 0x18001FA04
 * Callers:
 *     sub_1800094B0 @ 0x1800094B0 (sub_1800094B0.c)
 *     sub_180009670 @ 0x180009670 (sub_180009670.c)
 *     sub_18001F6D0 @ 0x18001F6D0 (sub_18001F6D0.c)
 *     sub_18001F850 @ 0x18001F850 (sub_18001F850.c)
 *     sub_18002C770 @ 0x18002C770 (sub_18002C770.c)
 * Callees:
 *     sub_18000FB0C @ 0x18000FB0C (sub_18000FB0C.c)
 *     sub_180010A4C @ 0x180010A4C (sub_180010A4C.c)
 *     sub_180010B0C @ 0x180010B0C (sub_180010B0C.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_180011444 @ 0x180011444 (sub_180011444.c)
 *     sub_180012138 @ 0x180012138 (sub_180012138.c)
 *     sub_18001217C @ 0x18001217C (sub_18001217C.c)
 *     sub_180012658 @ 0x180012658 (sub_180012658.c)
 *     sub_1800126D0 @ 0x1800126D0 (sub_1800126D0.c)
 *     sub_180012748 @ 0x180012748 (sub_180012748.c)
 *     sub_1800127C0 @ 0x1800127C0 (sub_1800127C0.c)
 *     sub_180012868 @ 0x180012868 (sub_180012868.c)
 *     sub_1800129C0 @ 0x1800129C0 (sub_1800129C0.c)
 *     sub_180012B64 @ 0x180012B64 (sub_180012B64.c)
 *     sub_18001E6B8 @ 0x18001E6B8 (sub_18001E6B8.c)
 *     sub_18001E7B8 @ 0x18001E7B8 (sub_18001E7B8.c)
 *     sub_18001F4C8 @ 0x18001F4C8 (sub_18001F4C8.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18001FA04(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  const wchar_t *v5; // rax
  DWORD pcbData; // [rsp+70h] [rbp+8h] BYREF
  int pvData; // [rsp+78h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+80h] [rbp+18h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v8 = v4;
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    v5 = L"NOT_INTERACTIVE";
    if ( *(_DWORD *)(a2 + 208) )
      v5 = (const wchar_t *)L"INTERACTIVE";
    sub_18000FB0C(*((_QWORD *)off_18004F000 + 2), 0x31u, &stru_1800445C8, *(const wchar_t **)(a2 + 24), v5);
  }
  if ( !*(_DWORD *)(a2 + 208) )
  {
    *(_DWORD *)(a2 + 632) = 1;
    *(_DWORD *)(a2 + 636) = 1;
    if ( !(unsigned int)sub_1800127C0(a2) )
    {
      if ( (unsigned int)sub_180012658(a2) && !(unsigned int)sub_180012748(a2) && (unsigned int)sub_180012868(a2, 1)
        || (unsigned int)sub_1800126D0(a2) )
      {
        if ( (unsigned int)sub_180012658(a2) && !(unsigned int)sub_180012748(a2) && (unsigned int)sub_180012868(a2, 1) )
        {
          if ( !(unsigned int)sub_1800113D0(a2) )
            sub_1800129C0((char *)a2);
          *(_DWORD *)(a2 + 636) = 0;
        }
        if ( (unsigned int)sub_1800126D0(a2) )
        {
          if ( !(unsigned int)sub_180011444(a2) )
            sub_1800129C0((char *)a2);
          *(_DWORD *)(a2 + 632) = 0;
        }
        goto LABEL_38;
      }
      if ( dword_180043378[(int)sub_180010A4C(a2)] )
      {
        if ( !dword_180043378[(int)sub_180010B0C(a2)] && *(_DWORD *)(a2 + 216) )
          sub_18001217C(a2);
      }
      else
      {
        if ( !(unsigned int)sub_180012658(a2) )
        {
          sub_180012138((_DWORD *)a2);
LABEL_38:
          sub_18001E6B8(a1, a2, 0xD1u, 1);
          goto LABEL_39;
        }
        if ( (unsigned int)sub_1800127C0(a2) )
          goto LABEL_38;
        if ( (unsigned int)sub_180011444(a2) )
          goto LABEL_38;
        pcbData = 4;
        if ( !RegGetValueW(
                HKEY_LOCAL_MACHINE,
                L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
                L"DisableExemptionForBCMStartupLatency",
                0x18u,
                0LL,
                &pvData,
                &pcbData) )
        {
          if ( pvData )
            goto LABEL_38;
        }
        sub_1800129C0((char *)a2);
      }
    }
    *(_DWORD *)(a2 + 636) = 0;
    goto LABEL_38;
  }
  *(_QWORD *)(a2 + 632) = 0LL;
  if ( (unsigned int)sub_180012658(a2) )
    sub_180012B64(a2);
  *(_QWORD *)(a2 + 564) = 0LL;
  *(_QWORD *)(a2 + 572) = 0LL;
  *(_QWORD *)(a2 + 580) = 0LL;
  *(_DWORD *)(a2 + 588) = 1;
  sub_18001E7B8(a1, *(_DWORD *)(a2 + 212), 1);
LABEL_39:
  sub_18001F4C8(a1, a2, 0);
  if ( v4 )
    LeaveCriticalSection(v4);
}
