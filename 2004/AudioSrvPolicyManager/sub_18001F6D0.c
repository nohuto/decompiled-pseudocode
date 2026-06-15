/*
 * XREFs of sub_18001F6D0 @ 0x18001F6D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800050D0 @ 0x1800050D0 (sub_1800050D0.c)
 *     sub_18000FBC8 @ 0x18000FBC8 (sub_18000FBC8.c)
 *     sub_180012D98 @ 0x180012D98 (sub_180012D98.c)
 *     sub_18001B50C @ 0x18001B50C (sub_18001B50C.c)
 *     sub_18001FA04 @ 0x18001FA04 (sub_18001FA04.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001F6D0(__int64 a1, __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdi
  BOOL v7; // r15d
  int v8; // edx
  int v9; // ecx
  bool v10; // sf
  char v12[4]; // [rsp+20h] [rbp-28h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v5 = *a2;
  v6 = *(_QWORD *)(*a2 + 256);
  if ( v6 || (sub_18001B50C(a1, *a2), (v6 = *(_QWORD *)(v5 + 256)) != 0) )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 4u )
    {
      *(_DWORD *)v12 = *((_DWORD *)a2 + 2);
      sub_18000FBC8(
        *((_QWORD *)off_18004F000 + 2),
        0x2Cu,
        &stru_1800445C8,
        *(const wchar_t **)(v5 + 208),
        *(_DWORD *)v12);
    }
    v7 = *(_DWORD *)(v6 + 208) != 0;
    v8 = *((_DWORD *)a2 + 2);
    if ( !*(_DWORD *)(v5 + 448) )
    {
      v9 = v8 != 0 ? -1 : 1;
      v10 = v9 + *(_DWORD *)(v5 + 540) < 0;
      *(_DWORD *)(v5 + 540) += v9;
      if ( v10 )
      {
        if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
          && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
          && *((_BYTE *)off_18004F000 + 25) >= 2u )
        {
          sub_1800050D0(*((_QWORD *)off_18004F000 + 2), 0x3Au, &stru_180043390);
        }
        *(_DWORD *)(v5 + 540) = 0;
      }
      else
      {
        sub_180012D98(*(_QWORD *)(v5 + 256), v8 != 0 ? -1 : 1);
      }
    }
    if ( v7 != (*(_DWORD *)(v6 + 208) != 0) )
      sub_18001FA04(a1, v6);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
