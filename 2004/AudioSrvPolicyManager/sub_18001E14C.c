/*
 * XREFs of sub_18001E14C @ 0x18001E14C
 * Callers:
 *     sub_18002CE00 @ 0x18002CE00 (sub_18002CE00.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_18000A610 @ 0x18000A610 (sub_18000A610.c)
 *     sub_18001E354 @ 0x18001E354 (sub_18001E354.c)
 *     sub_1800210EC @ 0x1800210EC (sub_1800210EC.c)
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     sub_180039DDC @ 0x180039DDC (sub_180039DDC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001E14C(DWORD *a1, const wchar_t *a2, __int64 a3, DWORD a4)
{
  int v7; // esi
  struct _RTL_CRITICAL_SECTION *v8; // rbp
  DWORD *v9; // rax
  __int64 v10; // rcx
  DWORD *v11; // rbx
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rbx
  struct _RTL_CRITICAL_SECTION *v15; // rdi
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  int v18; // eax
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v7 = 0;
  v8 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  if ( dword_18004FE58 == 1
    && ((dword_18004FE58 = 0, v9 = (DWORD *)sub_180039DDC(4LL, &unk_18004FFC8), v11 = v9, (a1 = v9) == 0LL)
      ? (v11 = 0LL)
      : (DWORD *)(*v9 = a4),
        v11 && (v12 = sub_1800210EC(v10, v11), v13 = v12, v12 < 0)) )
  {
    sub_180003AB0(
      retaddr,
      1620,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      v12);
    sub_180039D98(v11);
  }
  else
  {
    if ( !a2 )
      goto LABEL_26;
    v14 = 0LL;
    v15 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
    EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
    if ( !(unsigned int)sub_18002880C(a4) )
    {
      v16 = (_QWORD *)*((_QWORD *)a1 + 13);
      while ( v16 )
      {
        v17 = v16[2];
        v16 = (_QWORD *)*v16;
        if ( *(_QWORD *)(v17 + 640) == a3 )
        {
          v14 = v17;
          break;
        }
      }
    }
    if ( v15 )
      LeaveCriticalSection(v15);
    if ( v14 )
    {
      v18 = sub_18001E354(v16, v14);
      v7 = v18;
      if ( v18 < 0 )
      {
        if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
          && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
          && *((_BYTE *)off_18004F000 + 25) >= 2u )
        {
          sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x24u, &stru_1800445C8, v18);
        }
        sub_180005724("CApplicationManager::HandleMediaPlaybackRequestForApp", 1644, v7);
      }
    }
    else
    {
LABEL_26:
      if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
        && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
        && *((_BYTE *)off_18004F000 + 25) >= 4u )
      {
        sub_18000A610(*((_QWORD *)off_18004F000 + 2), 0x23u, &stru_1800445C8, a2);
      }
    }
    v13 = v7;
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  return v13;
}
