/*
 * XREFs of sub_18002D00C @ 0x18002D00C
 * Callers:
 *     PbmReportApplicationState @ 0x180024200 (PbmReportApplicationState.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_180018844 @ 0x180018844 (sub_180018844.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

__int64 __fastcall sub_18002D00C(__int64 a1, __int64 a2, int a3, int a4, _QWORD *a5)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  int v14; // edi
  unsigned __int64 v15; // r9
  __int64 v17; // [rsp+20h] [rbp-38h]

  ProcessHeap = GetProcessHeap();
  v10 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v13 = v10;
  if ( v10 )
    *v10 = 0LL;
  else
    v13 = 0LL;
  if ( v13 )
  {
    *((_DWORD *)v13 + 2) = a3;
    v15 = -1LL;
    *((_DWORD *)v13 + 3) = a4;
    v13[2] = a2;
    do
      ++v15;
    while ( *(_WORD *)(a1 + 2 * v15) );
    v14 = sub_180018844(v12, v11, a1, v15, v17, v13);
    if ( v14 >= 0 )
    {
      *a5 = v13;
      v13 = 0LL;
    }
  }
  else
  {
    v14 = -2147024882;
  }
  if ( v13 )
  {
    if ( *v13 )
    {
      CoTaskMemFree((LPVOID)*v13);
      *v13 = 0LL;
    }
    sub_180039D98(v13);
  }
  if ( v14 < 0 )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x24u, &stru_180045198, v14);
    }
    sub_180005724("ApplicationStateChangedContext::CreateInstance", 1028, v14);
  }
  return (unsigned int)v14;
}
