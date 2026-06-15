/*
 * XREFs of sub_180021E3C @ 0x180021E3C
 * Callers:
 *     sub_180021A3C @ 0x180021A3C (sub_180021A3C.c)
 *     HHOSTEDAPPMANAGERCONTEXTRundown @ 0x180023F40 (HHOSTEDAPPMANAGERCONTEXTRundown.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     sub_180021F84 @ 0x180021F84 (sub_180021F84.c)
 *     sub_1800220B0 @ 0x1800220B0 (sub_1800220B0.c)
 *     sub_180022174 @ 0x180022174 (sub_180022174.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180021E3C(__int64 a1, int a2, int a3, int a4, int a5)
{
  int v8; // ecx
  int v9; // ebx
  __int64 v10; // rsi
  __int64 v11; // rcx
  int v12; // edi
  BOOL v13; // edx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v16; // [rsp+38h] [rbp-20h]
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  v17 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)&unk_18004FF40;
  v16 = 0;
  sub_18001A330((__int64)&lpCriticalSection);
  v9 = sub_180021F84(v8, a2, a3, a4, (__int64)&v17);
  if ( v9 < 0 )
    goto LABEL_12;
  v10 = v17;
  v11 = *(unsigned int *)(v17 + 12);
  if ( a5 )
  {
    v12 = v11 + 1;
LABEL_6:
    *(_DWORD *)(v17 + 12) = v12;
    goto LABEL_7;
  }
  v12 = *(_DWORD *)(v17 + 12);
  if ( (_DWORD)v11 )
  {
    v12 = v11 - 1;
    goto LABEL_6;
  }
LABEL_7:
  v13 = v12 != 0;
  if ( ((_DWORD)v11 != 0) == v13 || (v9 = sub_180022174(v11, a2, a3, a4, v13), v9 >= 0) )
  {
    if ( !v12 )
      sub_1800220B0(v11, v10);
    goto LABEL_17;
  }
LABEL_12:
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 2u )
  {
    sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x10u, &stru_1800447D0, v9);
  }
  sub_180005724("CHostedAppInteractivityManager::AddHostedAppInteractivityNotification", 418, v9);
LABEL_17:
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v9;
}
