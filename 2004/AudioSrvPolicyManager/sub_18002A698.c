/*
 * XREFs of sub_18002A698 @ 0x18002A698
 * Callers:
 *     sub_180008510 @ 0x180008510 (sub_180008510.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_18000F8F4 @ 0x18000F8F4 (sub_18000F8F4.c)
 *     sub_1800210EC @ 0x1800210EC (sub_1800210EC.c)
 *     sub_1800288C8 @ 0x1800288C8 (sub_1800288C8.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     sub_180039DDC @ 0x180039DDC (sub_180039DDC.c)
 */

void sub_18002A698()
{
  struct _RTL_CRITICAL_SECTION *v0; // rdi
  int v1; // eax
  signed int v2; // ebx
  _DWORD *v3; // rbx
  __int64 v4; // rcx
  _DWORD *v5; // rsi
  int v6; // eax
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  _DWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v0 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v1 = sub_1800288C8(&v8);
  v2 = (unsigned __int16)v1 | 0x80070000;
  if ( v1 <= 0 )
    v2 = v1;
  if ( v2 < 0 )
  {
    sub_180003AB0(retaddr, 2689, (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp", v2);
    goto LABEL_5;
  }
  v3 = v8;
  if ( v8[57] || dword_18004FE60 || !v8[58] || dword_18004FE5C )
  {
    v5 = (_DWORD *)sub_180039DDC(4LL, &unk_18004FFC8);
    if ( v5 )
      *v5 = *v3;
    else
      v5 = 0LL;
    if ( v5 )
    {
      v6 = sub_1800210EC(v4, (__int64)v5);
      v2 = v6;
      if ( v6 < 0 )
      {
        sub_180003AB0(
          retaddr,
          2689,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          v6);
        sub_180039D98(v5);
LABEL_5:
        if ( v0 )
          LeaveCriticalSection(v0);
        goto LABEL_20;
      }
    }
  }
  if ( v0 )
    LeaveCriticalSection(v0);
  v2 = 0;
LABEL_20:
  if ( v2 < 0 )
    sub_18000F8F4(retaddr, 2689, (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp", v2);
}
