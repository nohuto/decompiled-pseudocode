/*
 * XREFs of sub_1800293D4 @ 0x1800293D4
 * Callers:
 *     TS_SessionChanged @ 0x18002A7F0 (TS_SessionChanged.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_1800277B0 @ 0x1800277B0 (sub_1800277B0.c)
 *     sub_1800278D4 @ 0x1800278D4 (sub_1800278D4.c)
 *     sub_180027958 @ 0x180027958 (sub_180027958.c)
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 *     sub_1800289C8 @ 0x1800289C8 (sub_1800289C8.c)
 *     sub_180036708 @ 0x180036708 (sub_180036708.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800293D4(DWORD SessionId)
{
  int v2; // esi
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 v4; // rbx
  _UNKNOWN **v5; // rcx
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+68h] [rbp+20h]

  v2 = sub_180036708(SessionId);
  v3 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v8 = v3;
  if ( (unsigned int)sub_18002880C(SessionId, 1, &v7, &v6) )
    goto LABEL_27;
  v4 = v6;
  sub_1800277B0(v6);
  sub_1800289C8(v4, v7, v2);
  if ( *(_QWORD *)(v4 + 40) != -130LL && *(_WORD *)(*(_QWORD *)(v4 + 40) + 130LL) )
    goto LABEL_13;
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x14u, &stru_180044DE8, *(_DWORD *)v4);
  }
  *(_DWORD *)(v4 + 52) = 0;
  *(_DWORD *)(v4 + 344) = 0;
  if ( (int)sub_1800278D4(-1, *(_DWORD *)v4) >= 0 )
    goto LABEL_13;
  v5 = (_UNKNOWN **)off_18004F000;
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 2u )
  {
    sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x15u, &stru_180044DE8, *(_DWORD *)v4);
LABEL_13:
    v5 = (_UNKNOWN **)off_18004F000;
  }
  if ( v2 )
  {
    if ( v2 != 0xFFFF )
    {
      if ( v5 != &off_18004F000 && (*((_DWORD *)v5 + 7) & 0x40000000) != 0 && *((_BYTE *)v5 + 25) >= 4u )
        sub_1800050FC((TRACEHANDLE)v5[2], 0x16u, &stru_180044DE8, *(_DWORD *)v4);
      *(_DWORD *)(v4 + 52) = 0;
      *(_DWORD *)(v4 + 344) = 0;
      if ( (int)sub_1800278D4(-1, *(_DWORD *)v4) < 0
        && off_18004F000 != (_UNKNOWN *)&off_18004F000
        && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
        && *((_BYTE *)off_18004F000 + 25) >= 2u )
      {
        sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x17u, &stru_180044DE8, *(_DWORD *)v4);
      }
    }
  }
  else if ( *(_QWORD *)(*(_QWORD *)(v4 + 40) + 200LL) )
  {
    sub_180027958((int *)v4);
  }
LABEL_27:
  if ( v3 )
    LeaveCriticalSection(v3);
}
