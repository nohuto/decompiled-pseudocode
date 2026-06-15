/*
 * XREFs of sub_180021D00 @ 0x180021D00
 * Callers:
 *     sub_180021BB4 @ 0x180021BB4 (sub_180021BB4.c)
 *     sub_180021F84 @ 0x180021F84 (sub_180021F84.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_180018844 @ 0x180018844 (sub_180018844.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

__int64 __fastcall sub_180021D00(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _DWORD *v12; // rbx
  int v13; // edi
  unsigned __int64 v14; // r9
  __int64 v16; // [rsp+20h] [rbp-38h]

  ProcessHeap = GetProcessHeap();
  v9 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v12 = v9;
  if ( v9 )
  {
    v9[2] = -1;
    *(_QWORD *)v9 = 0LL;
    v9[3] = 0;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v12 )
  {
    v12[2] = a3;
    v14 = -1LL;
    *((_QWORD *)v12 + 2) = a2;
    do
      ++v14;
    while ( *(_WORD *)(a1 + 2 * v14) );
    v13 = sub_180018844(v11, v10, a1, v14, v16, v12);
    if ( v13 >= 0 )
    {
      *a4 = v12;
      v12 = 0LL;
    }
  }
  else
  {
    v13 = -2147024882;
  }
  if ( v12 )
  {
    if ( *(_QWORD *)v12 )
    {
      CoTaskMemFree(*(LPVOID *)v12);
      *(_QWORD *)v12 = 0LL;
    }
    sub_180039D98(v12);
  }
  if ( v13 < 0 )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0xFu, &stru_1800447D0, v13);
    }
    sub_180005724("CHostedAppInteractivity::CreateInstance", 329, v13);
  }
  return (unsigned int)v13;
}
