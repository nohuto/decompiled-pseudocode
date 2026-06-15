/*
 * XREFs of sub_180029CD0 @ 0x180029CD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001BC0 @ 0x180001BC0 (sub_180001BC0.c)
 *     sub_1800050D0 @ 0x1800050D0 (sub_1800050D0.c)
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_1800055CC @ 0x1800055CC (sub_1800055CC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_1800210EC @ 0x1800210EC (sub_1800210EC.c)
 *     sub_180025744 @ 0x180025744 (sub_180025744.c)
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180029CD0(DWORD SessionId, __int64 a2, __int64 a3)
{
  signed int v5; // edi
  struct _RTL_CRITICAL_SECTION *v6; // rbp
  int v7; // eax
  __int64 v8; // r8
  const char *v9; // rdx
  const char *v10; // rax
  __int64 v11; // rsi
  int v12; // r12d
  int v13; // r14d
  _DWORD *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  const char *v17; // rax
  HANDLE ProcessHeap; // rax
  _DWORD *v19; // rax
  __int64 v20; // rcx
  void *v21; // rbx
  __int64 v23; // [rsp+60h] [rbp+8h] BYREF
  __int64 v24; // [rsp+70h] [rbp+18h] BYREF

  v5 = 0;
  v23 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v24 = (__int64)v6;
  if ( *(_DWORD *)(a3 + 16) != 4
    || *(_QWORD *)a3 != 0x4DDFAD232B84C20ELL
    || *(_QWORD *)(a3 + 8) != 0xA5FC7EBDFF05DB93uLL )
  {
    goto LABEL_41;
  }
  v7 = sub_18002880C(SessionId, 0, 0LL, &v23);
  v9 = (const char *)&off_18004F000;
  if ( v7 )
  {
    v5 = (unsigned __int16)v7 | 0x80070000;
    if ( v7 <= 0 )
      v5 = v7;
LABEL_35:
    if ( v5 < 0 )
    {
      if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
        && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
        && *((_BYTE *)off_18004F000 + 25) >= 2u )
      {
        sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x1Au, &stru_180044DE8, v5);
      }
      sub_180005724("TsSessionIdDisplayNotificationCallback", 2349, v5);
    }
    goto LABEL_41;
  }
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 5u )
  {
    if ( *(_DWORD *)(a3 + 20) == 2 )
    {
      v10 = "Dim";
    }
    else
    {
      v9 = "On";
      v10 = "Off";
      if ( *(_DWORD *)(a3 + 20) == 1 )
        v10 = "On";
    }
    sub_180025744(*((_QWORD *)off_18004F000 + 2), (__int64)v9, v8, SessionId, v10);
  }
  v11 = v23;
  v12 = *(_DWORD *)(v23 + 228);
  v13 = *(_DWORD *)(a3 + 20) != 0;
  *(_DWORD *)(v23 + 228) = v13;
  v14 = (_DWORD *)*((_QWORD *)sub_1800055CC() + 1);
  if ( *v14 > 4u )
  {
    LODWORD(v23) = *(_DWORD *)(v11 + 228);
    v17 = "Display Setting Unchanged";
    if ( v12 != v13 )
      v17 = "Display Setting Changed";
    v24 = (__int64)v17;
    sub_180001BC0((__int64)v14, byte_180046516, v15, v16, (void **)&v24, (__int64)&v23);
  }
  if ( v12 != v13 && (*(_DWORD *)(v11 + 228) || dword_18004FE60 || !*(_DWORD *)(v11 + 232) || dword_18004FE5C) )
  {
    ProcessHeap = GetProcessHeap();
    v19 = HeapAlloc(ProcessHeap, 0, 4uLL);
    v21 = v19;
    v23 = (__int64)v19;
    if ( v19 )
      *v19 = SessionId;
    else
      v21 = 0LL;
    if ( v21 && (int)sub_1800210EC(v20, (__int64)v21) < 0 )
    {
      if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
        && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
        && *((_BYTE *)off_18004F000 + 25) >= 2u )
      {
        sub_1800050D0(*((_QWORD *)off_18004F000 + 2), 0x19u, &stru_180044DE8);
      }
      sub_180039D98(v21);
      goto LABEL_35;
    }
  }
LABEL_41:
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
