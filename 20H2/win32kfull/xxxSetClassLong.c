/*
 * XREFs of xxxSetClassLong @ 0x1C015641C
 * Callers:
 *     NtUserSetClassLong @ 0x1C0156330 (NtUserSetClassLong.c)
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     xxxSetClassData @ 0x1C010EA44 (xxxSetClassData.c)
 */

unsigned __int64 __fastcall xxxSetClassLong(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  unsigned int v11; // r9d
  _QWORD *i; // rdx
  __int64 v14; // rcx

  v5 = (unsigned int)a3;
  v6 = (int)a2;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) != PsGetCurrentProcessWin32Process(a1, a2, a3) )
  {
    v14 = 5LL;
    goto LABEL_10;
  }
  if ( (int)v6 < 0 )
  {
    if ( (int)v6 >= -34 && byte_1C02EADBA[v6] <= 4u )
      return xxxSetClassData((struct tagWND *)a1, v6, v5, a4);
    goto LABEL_8;
  }
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 56LL);
  if ( (int)v6 + 4 < (unsigned int)v6 || (v10 = *(_QWORD *)(v8 + 8), (unsigned int)(v6 + 4) > *(_DWORD *)(v10 + 12)) )
  {
LABEL_8:
    v14 = 1413LL;
LABEL_10:
    UserSetLastError(v14, v8, v9);
    return 0LL;
  }
  v11 = *(_DWORD *)(v10 + v6 + 88);
  *(_DWORD *)(v10 + v6 + 88) = v5;
  for ( i = *(_QWORD **)(v8 + 64); i; i = (_QWORD *)*i )
    *(_DWORD *)(i[1] + v6 + 88) = v5;
  return v11;
}
