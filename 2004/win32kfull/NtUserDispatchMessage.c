/*
 * XREFs of NtUserDispatchMessage @ 0x1C00A3800
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     IsPointerInputMessage @ 0x1C00A3934 (IsPointerInputMessage.c)
 *     xxxDispatchMessage @ 0x1C00A54AC (xxxDispatchMessage.c)
 */

__int64 __fastcall NtUserDispatchMessage(__int128 *a1)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // rcx
  __int128 v12; // [rsp+38h] [rbp-40h] BYREF
  __int128 v13; // [rsp+48h] [rbp-30h]
  __int128 v14; // [rsp+58h] [rbp-20h]

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (__int128 *)MmUserProbeAddress;
  v12 = *a1;
  v13 = a1[1];
  v14 = a1[2];
  v3 = DWORD2(v12);
  v4 = 0LL;
  if ( (DWORD2(v12) & 0xFFFE0000) != 0 )
  {
    v11 = 87LL;
    goto LABEL_16;
  }
  if ( (_QWORD)v12
    && ((v5 = ValidateHwnd(v12)) != 0
     && (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 18LL) & 4) != 0
     && (v3 = *(_QWORD *)(v5 + 16), *(_QWORD *)(v3 + 416) != *(_QWORD *)(gptiCurrent + 416LL))
     || ((unsigned int)IsPointerInputMessage(DWORD2(v12)) && (_DWORD)v3 != 595 || (_DWORD)v3 == 528 && (_WORD)v13 == 582)
     && *((_QWORD *)&v13 + 1) >= (unsigned __int64)MmSystemRangeStart)
    || ((unsigned int)v3 >= 0x400 ? (v6 = 0) : (v6 = ((unsigned __int16)MessageTable[(unsigned int)v3] >> 13) & 1), v6) )
  {
    v11 = 5LL;
LABEL_16:
    UserSetLastError(v11, v3, v2);
    goto LABEL_13;
  }
  v4 = xxxDispatchMessage(&v12);
LABEL_13:
  UserSessionSwitchLeaveCrit(v8, v7, v9);
  return v4;
}
