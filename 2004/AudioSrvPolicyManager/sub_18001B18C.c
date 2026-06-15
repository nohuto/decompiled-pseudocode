/*
 * XREFs of sub_18001B18C @ 0x18001B18C
 * Callers:
 *     sub_180014E80 @ 0x180014E80 (sub_180014E80.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_1800152B8 @ 0x1800152B8 (sub_1800152B8.c)
 *     sub_18001B50C @ 0x18001B50C (sub_18001B50C.c)
 *     sub_18001B65C @ 0x18001B65C (sub_18001B65C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001B18C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbp
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  int v7; // ebx

  v5 = qword_18004FE78;
  v6 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v7 = sub_18001B50C(v5, a2);
  if ( v7 >= 0 )
  {
    v7 = sub_1800152B8(a2, a3);
    if ( v7 >= 0 )
      goto LABEL_9;
    sub_18001B65C(v5, a2);
  }
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 2u )
  {
    sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x11u, &stru_1800445C8, v7);
  }
  sub_180005724("CApplicationManager::RegisterSession", 575, v7);
LABEL_9:
  if ( v6 )
    LeaveCriticalSection(v6);
  return (unsigned int)v7;
}
