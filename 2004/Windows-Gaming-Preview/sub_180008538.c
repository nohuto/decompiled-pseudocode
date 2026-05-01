/*
 * XREFs of sub_180008538 @ 0x180008538
 * Callers:
 *     sub_180008CD4 @ 0x180008CD4 (sub_180008CD4.c)
 *     sub_180047180 @ 0x180047180 (sub_180047180.c)
 * Callees:
 *     sub_1800032E0 @ 0x1800032E0 (sub_1800032E0.c)
 *     sub_18000336C @ 0x18000336C (sub_18000336C.c)
 *     sub_18000339C @ 0x18000339C (sub_18000339C.c)
 *     sub_18000343C @ 0x18000343C (sub_18000343C.c)
 *     sub_180005164 @ 0x180005164 (sub_180005164.c)
 *     sub_1800062A8 @ 0x1800062A8 (sub_1800062A8.c)
 *     sub_180006368 @ 0x180006368 (sub_180006368.c)
 *     sub_1800066D4 @ 0x1800066D4 (sub_1800066D4.c)
 *     sub_1800069F8 @ 0x1800069F8 (sub_1800069F8.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180008538(_QWORD *lpMem)
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
  _QWORD v12[8]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v13[64]; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v14[64]; // [rsp+A0h] [rbp-48h] BYREF
  __int64 retaddr; // [rsp+E8h] [rbp+0h]

  if ( !byte_18005AC18 )
  {
    v2 = (int)qword_18005ABE0;
    if ( qword_18005ABE0 )
      v2 = (unsigned __int8)qword_18005ABE0();
    if ( !v2 )
    {
      v3 = (void *)lpMem[1];
      v4 = WaitForSingleObjectEx(v3, 0xFFFFFFFF, 0);
      if ( v4 != 258 )
      {
        if ( !v4 )
        {
LABEL_10:
          v5 = (*(_DWORD *)lpMem)-- == 1;
          if ( v5 )
          {
            sub_18000343C((__int64)(lpMem + 2));
            if ( v3 )
            {
              LastError = GetLastError();
              sub_18000339C(v3);
              SetLastError(LastError);
            }
            v7 = 0LL;
            sub_1800066D4((__int64)(lpMem + 4));
            v8 = (void *)lpMem[3];
            if ( v8 )
              sub_18000336C(v8);
            v9 = (void *)lpMem[2];
            if ( v9 )
              sub_18000336C(v9);
            v10 = (void *)lpMem[1];
            if ( v10 )
              sub_18000336C(v10);
            ProcessHeap = GetProcessHeap();
            HeapFree(ProcessHeap, 0, lpMem);
          }
          else
          {
            v7 = v3;
          }
          if ( v7 )
            sub_18000339C(v7);
          return;
        }
        if ( v4 != 128 )
        {
          sub_1800032E0(retaddr);
          JUMPOUT(0x180008703LL);
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
    sub_1800062A8((__int64)v12);
    if ( *((_BYTE *)lpMem + 96) )
      sub_180005164((__int64)v12, (__int64)(lpMem + 5));
    if ( *((_BYTE *)lpMem + 160) )
      sub_180005164((__int64)v13, (__int64)(lpMem + 13));
    if ( *((_BYTE *)lpMem + 224) )
      sub_180005164((__int64)v14, (__int64)(lpMem + 21));
    sub_180006368(v12);
    sub_1800069F8(v12);
  }
}
