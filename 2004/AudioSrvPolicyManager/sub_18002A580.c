/*
 * XREFs of sub_18002A580 @ 0x18002A580
 * Callers:
 *     sub_180005CA0 @ 0x180005CA0 (sub_180005CA0.c)
 * Callees:
 *     sub_1800050D0 @ 0x1800050D0 (sub_1800050D0.c)
 *     sub_1800210EC @ 0x1800210EC (sub_1800210EC.c)
 *     sub_1800288C8 @ 0x1800288C8 (sub_1800288C8.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

void sub_18002A580()
{
  struct _RTL_CRITICAL_SECTION *v0; // rsi
  _DWORD *v1; // rdi
  HANDLE ProcessHeap; // rax
  __int64 v3; // rcx
  _DWORD *v4; // rbx
  _DWORD *v5; // [rsp+30h] [rbp+8h] BYREF

  v0 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  if ( !(unsigned int)sub_1800288C8(&v5) )
  {
    v1 = v5;
    if ( v5[57] || dword_18004FE60 || !v5[58] || dword_18004FE5C )
    {
      ProcessHeap = GetProcessHeap();
      v4 = HeapAlloc(ProcessHeap, 0, 4uLL);
      if ( v4 )
        *v4 = *v1;
      else
        v4 = 0LL;
      if ( v4 && (int)sub_1800210EC(v3, (__int64)v4) < 0 )
      {
        if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
          && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
          && *((_BYTE *)off_18004F000 + 25) >= 2u )
        {
          sub_1800050D0(*((_QWORD *)off_18004F000 + 2), 0x20u, &stru_180044DE8);
        }
        sub_180039D98(v4);
      }
    }
  }
  if ( v0 )
    LeaveCriticalSection(v0);
}
