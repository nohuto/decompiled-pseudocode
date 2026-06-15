/*
 * XREFs of sub_18001FFCC @ 0x18001FFCC
 * Callers:
 *     sub_180025140 @ 0x180025140 (sub_180025140.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_18001A918 @ 0x18001A918 (sub_18001A918.c)
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001FFCC(
        __int64 a1,
        const wchar_t *a2,
        DWORD a3,
        _BYTE *a4,
        _BYTE *a5,
        __int64 a6,
        _BYTE *a7,
        __int64 a8)
{
  struct _RTL_CRITICAL_SECTION *v11; // rdi
  struct _RTL_CRITICAL_SECTION *v12; // rsi
  int v13; // eax
  signed int v14; // ebx

  v11 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    sub_18001A918(*((_QWORD *)off_18004F000 + 2), 0x35u, &stru_1800445C8, a3, a2);
  }
  *a4 = 0;
  *a5 = 0;
  *a7 = 0;
  v12 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 5u )
  {
    sub_18001A918(*((_QWORD *)off_18004F000 + 2), 0x1Bu, &stru_180044DE8, a3, a2);
  }
  v13 = sub_18002880C(a3);
  if ( v13 )
  {
    v14 = (unsigned __int16)v13 | 0x80070000;
    if ( v13 <= 0 )
      v14 = v13;
  }
  else
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _BYTE *, _BYTE *, __int64, _BYTE *, __int64))(*MEMORY[0x100] + 32LL))(
            MEMORY[0x100],
            a2,
            a4,
            a5,
            a6,
            a7,
            a8);
  }
  if ( v14 < 0 )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x1Cu, &stru_180044DE8, v14);
    }
    sub_180005724("TsSessionIdAddEndpointVolumeReference", 2459, v14);
  }
  if ( v12 )
    LeaveCriticalSection(v12);
  if ( v11 )
    LeaveCriticalSection(v11);
  return 0LL;
}
