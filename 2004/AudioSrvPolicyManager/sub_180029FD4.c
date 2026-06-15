/*
 * XREFs of sub_180029FD4 @ 0x180029FD4
 * Callers:
 *     sub_180029F80 @ 0x180029F80 (sub_180029F80.c)
 * Callees:
 *     sub_180001BC0 @ 0x180001BC0 (sub_180001BC0.c)
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_1800055CC @ 0x1800055CC (sub_1800055CC.c)
 *     sub_18000A4C0 @ 0x18000A4C0 (sub_18000A4C0.c)
 *     sub_1800210EC @ 0x1800210EC (sub_1800210EC.c)
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     sub_180039DDC @ 0x180039DDC (sub_180039DDC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180029FD4(__int64 a1)
{
  DWORD v1; // r14d
  __int64 v2; // rbx
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  __int64 v4; // rax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rdi
  int v8; // r15d
  int v9; // ebp
  _DWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  const char *v13; // rax
  DWORD *v14; // rax
  __int64 v15; // rcx
  DWORD *v16; // rdi
  int v17; // eax
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF
  __int64 v21; // [rsp+68h] [rbp+10h] BYREF

  v1 = **(_DWORD **)a1;
  v2 = **(_QWORD **)(a1 + 8);
  v20 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v21 = (__int64)v3;
  if ( *(_DWORD *)(v2 + 16) != 4 )
    goto LABEL_5;
  v4 = *(_QWORD *)v2 - 0x4E600779654B4EBALL;
  if ( *(_QWORD *)v2 == 0x4E600779654B4EBALL )
    v4 = *(_QWORD *)(v2 + 8) + 0x6256B69B07872B70LL;
  if ( !v4 )
  {
    v6 = sub_18002880C(v1, 0, 0LL, &v20);
    if ( v6 )
    {
      v5 = sub_18000A4C0(
             retaddr,
             2394,
             (int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
             v6);
    }
    else
    {
      v7 = v20;
      v8 = *(_DWORD *)(v20 + 232);
      v9 = *(_BYTE *)(v2 + 20) != 0;
      *(_DWORD *)(v20 + 232) = v9;
      v10 = (_DWORD *)*((_QWORD *)sub_1800055CC() + 1);
      if ( *v10 > 4u )
      {
        LODWORD(v20) = *(_DWORD *)(v7 + 232);
        v13 = "Locked Unchanged";
        if ( v8 != v9 )
          v13 = "Locked Changed";
        v21 = (__int64)v13;
        sub_180001BC0((__int64)v10, byte_18004648D, v11, v12, (void **)&v21, (__int64)&v20);
      }
      if ( v8 != v9
        && (*(_DWORD *)(v7 + 228) || dword_18004FE60 || !*(_DWORD *)(v7 + 232) || dword_18004FE5C)
        && ((v14 = (DWORD *)sub_180039DDC(4LL, &unk_18004FFC8), v16 = v14, (v20 = (__int64)v14) == 0)
          ? (v16 = 0LL)
          : (DWORD *)(*v14 = v1),
            v16 && (v17 = sub_1800210EC(v15, (__int64)v16), v5 = v17, v17 < 0)) )
      {
        sub_180003AB0(
          retaddr,
          2394,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          v17);
        sub_180039D98(v16);
      }
      else
      {
        v5 = 0;
      }
    }
  }
  else
  {
LABEL_5:
    v5 = -2147024809;
    sub_180003AB0(
      retaddr,
      2394,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      -2147024809);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return v5;
}
