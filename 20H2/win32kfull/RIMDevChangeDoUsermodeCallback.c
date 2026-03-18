/*
 * XREFs of RIMDevChangeDoUsermodeCallback @ 0x1C0123A88
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1C0123A20 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxClientRimDevCallback @ 0x1C0123C64 (xxxClientRimDevCallback.c)
 */

_UNKNOWN **__fastcall RIMDevChangeDoUsermodeCallback(_DWORD *a1)
{
  _UNKNOWN **result; // rax
  __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int16 v8; // r8
  __int16 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = *((_QWORD *)a1 + 3);
  v4 = *(_QWORD *)(v2 + 424);
  if ( *(_BYTE *)(v2 + 136) != 3 )
  {
    result = (_UNKNOWN **)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( result )
    {
      result = (_UNKNOWN **)gptiCurrent;
      if ( gptiCurrent )
      {
        result = (_UNKNOWN **)PsGetCurrentProcess(v6, v5, v7);
        if ( *(_UNKNOWN ***)(v4 + 32) == result )
        {
          if ( *(_QWORD *)(v4 + 640) )
          {
            *(_BYTE *)(v4 + 82) = 1;
            if ( *(_BYTE *)(v4 + 80) && !*(_BYTE *)(v4 + 81) || (*(_DWORD *)(v4 + 884) & 2) != 0 )
              RIMUnlockExclusive(v4 + 568);
            RIMUnlockExclusive(v4 + 104);
            RawInputManagerDeviceObjectReference(v2);
            v8 = 0;
            v9 = 0;
            *(_QWORD *)(gptiCurrent + 1352LL) = v2;
            if ( *(_BYTE *)(v2 + 136) == 2 )
            {
              v10 = *(_QWORD *)(v2 + 552);
              if ( v10 )
              {
                v8 = *(_WORD *)(v10 + 40);
                v9 = *(_WORD *)(v10 + 42);
              }
            }
            v11 = *(_QWORD *)(v2 + 104);
            if ( (*(_DWORD *)(v2 + 272) & 0x2000) != 0 )
            {
              v12 = *a1;
              if ( *a1 == 1 )
              {
                *a1 = 2;
                v12 = 2;
              }
              if ( v12 == 4 )
                *a1 = 3;
              v13 = *(_DWORD *)(v2 + 272);
              if ( (v13 & 0x20000) != 0 || (v13 & 0x40000) != 0 )
                v11 = *(_QWORD *)(v2 + 432);
            }
            xxxClientRimDevCallback(
              *a1,
              a1[1],
              *(_DWORD *)(*((_QWORD *)a1 + 3) + 72LL),
              a1[2],
              *(_QWORD *)(v4 + 72),
              v11,
              v8,
              v9,
              *(_QWORD *)(v4 + 400),
              *(_QWORD *)(v4 + 640));
            *(_QWORD *)(gptiCurrent + 1352LL) = 0LL;
            RIMLockExclusive(v4 + 104);
            if ( *(_BYTE *)(v4 + 80) && !*(_BYTE *)(v4 + 81) || (*(_DWORD *)(v4 + 884) & 2) != 0 )
              RIMLockExclusive(v4 + 568);
            *(_BYTE *)(v4 + 82) = 0;
            if ( (*(_DWORD *)(v2 + 288) & 0x80u) != 0 || (*(_DWORD *)(v2 + 272) & 0x2000) != 0 )
            {
              v14 = *a1;
              if ( *a1 == 2 )
              {
                *(_DWORD *)(v2 + 272) |= 0x400000u;
                v14 = *a1;
              }
              if ( v14 == 3 )
                *(_DWORD *)(v2 + 272) |= 0x800000u;
            }
            return (_UNKNOWN **)RawInputManagerDeviceObjectDereference(v2);
          }
        }
      }
    }
  }
  return result;
}
