/*
 * XREFs of sub_18001D0A0 @ 0x18001D0A0
 * Callers:
 *     sub_180019674 @ 0x180019674 (sub_180019674.c)
 *     sub_1801312C0 @ 0x1801312C0 (sub_1801312C0.c)
 * Callees:
 *     sub_18000C578 @ 0x18000C578 (sub_18000C578.c)
 *     sub_18000C788 @ 0x18000C788 (sub_18000C788.c)
 *     sub_18000C8F4 @ 0x18000C8F4 (sub_18000C8F4.c)
 *     sub_18000D91C @ 0x18000D91C (sub_18000D91C.c)
 *     sub_1800191A0 @ 0x1800191A0 (sub_1800191A0.c)
 *     sub_1800195DC @ 0x1800195DC (sub_1800195DC.c)
 *     sub_180019C4C @ 0x180019C4C (sub_180019C4C.c)
 *     sub_18001C464 @ 0x18001C464 (sub_18001C464.c)
 *     sub_18001DFF4 @ 0x18001DFF4 (sub_18001DFF4.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_18001D0A0(char *lpMem)
{
  int v2; // eax
  void *v3; // rsi
  DWORD v4; // eax
  bool v5; // zf
  DWORD LastError; // ebx
  void *v7; // rbx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  HANDLE ProcessHeap; // rax
  _QWORD v12[24]; // [rsp+30h] [rbp-C8h] BYREF
  _UNKNOWN *retaddr; // [rsp+F8h] [rbp+0h]

  if ( !byte_18021F508 )
  {
    v2 = (int)qword_18021F500;
    if ( qword_18021F500 )
      v2 = (unsigned __int8)qword_18021F500();
    if ( !v2 )
    {
      v3 = (void *)*((_QWORD *)lpMem + 1);
      v4 = WaitForSingleObjectEx(v3, 0xFFFFFFFF, 0);
      if ( v4 != 258 )
      {
        if ( !v4 )
        {
LABEL_10:
          v5 = (*(_DWORD *)lpMem)-- == 1;
          if ( v5 )
          {
            sub_18000C788((__int64)(lpMem + 16));
            if ( v3 )
            {
              LastError = GetLastError();
              sub_18000D91C(v3);
              SetLastError(LastError);
            }
            v7 = 0LL;
            sub_1800195DC((struct _RTL_CRITICAL_SECTION *)(lpMem + 32));
            v8 = (void *)*((_QWORD *)lpMem + 3);
            if ( v8 )
              sub_18000C578(v8);
            v9 = (void *)*((_QWORD *)lpMem + 2);
            if ( v9 )
              sub_18000C578(v9);
            v10 = (void *)*((_QWORD *)lpMem + 1);
            if ( v10 )
              sub_18000C578(v10);
            ProcessHeap = GetProcessHeap();
            HeapFree(ProcessHeap, 0, lpMem);
          }
          else
          {
            v7 = v3;
          }
          if ( v7 )
            sub_18000D91C(v7);
          return;
        }
        if ( v4 != 128 )
        {
          sub_18000C8F4((int)retaddr, 2892, (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
          JUMPOUT(0x18001D219LL);
        }
      }
      if ( (v4 & 0xFFFFFF7F) != 0 )
        v3 = 0LL;
      goto LABEL_10;
    }
  }
  v5 = (*(_DWORD *)lpMem)-- == 1;
  if ( v5 )
  {
    sub_1800191A0((__int64)v12);
    sub_18001DFF4(lpMem + 32, v12);
    sub_18001C464(v12);
    sub_180019C4C(v12);
  }
}
