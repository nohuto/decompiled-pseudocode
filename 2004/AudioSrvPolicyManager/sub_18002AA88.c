/*
 * XREFs of sub_18002AA88 @ 0x18002AA88
 * Callers:
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002AA88(DWORD SessionId)
{
  unsigned int v2; // ebx
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  int v4; // eax
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v6 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 5u )
  {
    sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x26u, &stru_180044DE8, SessionId);
  }
  v4 = sub_18002880C(SessionId, 1, 0LL, &v6);
  if ( v4 )
  {
    v2 = (unsigned __int16)v4 | 0x80070000;
    if ( v4 <= 0 )
      v2 = v4;
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x27u, &stru_180044DE8, v2);
    }
    sub_180005724("TS_SessionIdStreamStarted", 2767, v2);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return v2;
}
