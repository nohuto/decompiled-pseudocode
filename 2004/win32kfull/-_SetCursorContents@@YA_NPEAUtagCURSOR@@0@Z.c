/*
 * XREFs of ?_SetCursorContents@@YA_NPEAUtagCURSOR@@0@Z @ 0x1C01EB8E0
 * Callers:
 *     NtUserSetCursorContents @ 0x1C0202570 (NtUserSetCursorContents.c)
 * Callees:
 *     ?zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z @ 0x1C00435AC (-zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C00AF4C4 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 */

char __fastcall _SetCursorContents(struct tagCURSOR *a1, struct tagCURSOR *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx

  if ( a1 != a2 )
  {
    if ( (*((_DWORD *)a1 + 20) & 8) == 0 && (*((_DWORD *)a2 + 20) & 8) == 0 )
    {
      v3 = *((_QWORD *)a1 + 11);
      *((_QWORD *)a1 + 11) = *((_QWORD *)a2 + 11);
      v4 = *((_QWORD *)a2 + 12);
      *((_QWORD *)a2 + 11) = v3;
      v5 = *((_QWORD *)a1 + 12);
      *((_QWORD *)a1 + 12) = v4;
      v6 = *((_QWORD *)a2 + 16);
      *((_QWORD *)a2 + 12) = v5;
      v7 = *((_QWORD *)a1 + 16);
      *((_QWORD *)a1 + 16) = v6;
      v8 = *((_QWORD *)a2 + 13);
      *((_QWORD *)a2 + 16) = v7;
      v9 = *((_QWORD *)a1 + 13);
      *((_QWORD *)a1 + 13) = v8;
      LOWORD(v8) = *((_WORD *)a2 + 42);
      *((_QWORD *)a2 + 13) = v9;
      *((_WORD *)a1 + 42) = v8;
      *((_WORD *)a1 + 43) = *((_WORD *)a2 + 43);
      *((_DWORD *)a1 + 35) = *((_DWORD *)a2 + 35);
      *((_DWORD *)a1 + 36) = *((_DWORD *)a2 + 36);
      *((_DWORD *)a1 + 34) = *((_DWORD *)a2 + 34);
      *((_WORD *)a1 + 37) = *((_WORD *)a2 + 37);
      *((_OWORD *)a1 + 7) = *((_OWORD *)a2 + 7);
    }
    _DestroyCursor(a2, 2u);
    zzzFixupGlobalCursorWhenChanged((struct tagCURSOR **)a1);
  }
  return 1;
}
