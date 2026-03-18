/*
 * XREFs of NtUserDispatchMessage @ 0x1C004CE90
 * Callers:
 *     <none>
 * Callees:
 *     IsPointerInputMessage @ 0x1C004CFC4 (IsPointerInputMessage.c)
 *     xxxDispatchMessage @ 0x1C004CFF0 (xxxDispatchMessage.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserDispatchMessage(__int128 *a1)
{
  unsigned int v2; // edx
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // ecx
  __int64 v6; // rcx
  __int64 v8; // rcx
  __int128 v9; // [rsp+38h] [rbp-40h] BYREF
  __int128 v10; // [rsp+48h] [rbp-30h]
  __int128 v11; // [rsp+58h] [rbp-20h]

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (__int128 *)MmUserProbeAddress;
  v9 = *a1;
  v10 = a1[1];
  v11 = a1[2];
  v2 = DWORD2(v9);
  v3 = 0LL;
  if ( (DWORD2(v9) & 0xFFFE0000) != 0 )
  {
    v8 = 87LL;
    goto LABEL_16;
  }
  if ( (_QWORD)v9
    && ((v4 = ValidateHwnd(v9)) != 0
     && (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 18LL) & 4) != 0
     && *(_QWORD *)(*(_QWORD *)(v4 + 16) + 424LL) != *(_QWORD *)(gptiCurrent + 424LL)
     || ((unsigned int)IsPointerInputMessage(DWORD2(v9)) && v2 != 595 || v2 == 528 && (_WORD)v10 == 582)
     && *((_QWORD *)&v10 + 1) >= (unsigned __int64)MmSystemRangeStart)
    || (v2 >= 0x400 ? (v5 = 0) : (v5 = ((unsigned __int16)MessageTable[v2] >> 13) & 1), v5) )
  {
    v8 = 5LL;
LABEL_16:
    UserSetLastError(v8);
    goto LABEL_13;
  }
  v3 = xxxDispatchMessage(&v9);
LABEL_13:
  UserSessionSwitchLeaveCrit(v6);
  return v3;
}
