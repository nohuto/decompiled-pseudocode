/*
 * XREFs of MemUtilGetProcessSnapshot @ 0x180032E6C
 * Callers:
 *     MemUtilQueryProcessMetrics @ 0x180032CD8 (MemUtilQueryProcessMetrics.c)
 * Callees:
 *     memset_0 @ 0x18004651A (memset_0.c)
 */

__int64 __fastcall MemUtilGetProcessSnapshot(_QWORD *a1, int a2)
{
  ULONG v2; // edi
  SIZE_T v3; // rbx
  HANDLE ProcessHeap; // rax
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  int v9; // eax
  HANDLE v10; // rax
  HANDLE v12; // rax
  _DWORD SystemInformation[3]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v14; // [rsp+2Ch] [rbp-14h]
  int v15; // [rsp+3Ch] [rbp-4h]
  ULONG ReturnLength; // [rsp+70h] [rbp+30h] BYREF

  v15 = 0;
  v2 = 8;
  SystemInformation[0] = 45;
  v3 = 9616LL;
  SystemInformation[2] = 8;
  v14 = 0LL;
  ReturnLength = 9616;
  SystemInformation[1] = 1802856515;
  while ( 1 )
  {
    ProcessHeap = GetProcessHeap();
    v7 = HeapAlloc(ProcessHeap, 0, v3);
    v8 = v7;
    if ( !v7 )
      break;
    memset_0(v7 + 2, 0, 0x68uLL);
    *v8 = 8;
    v8[1] = a2;
    HIDWORD(v14) = ReturnLength;
    *(_QWORD *)((char *)&v14 + 4) = v8;
    v9 = NtQuerySystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20u, &ReturnLength);
    if ( v9 >= 0 )
    {
      *a1 = v8;
      return 0;
    }
    if ( v9 != -1073741789 )
    {
      v2 = RtlNtStatusToDosError(v9);
      break;
    }
    v10 = GetProcessHeap();
    HeapFree(v10, 0, v8);
    v3 = ReturnLength;
  }
  if ( v8 )
  {
    v12 = GetProcessHeap();
    HeapFree(v12, 0, v8);
  }
  return v2;
}
