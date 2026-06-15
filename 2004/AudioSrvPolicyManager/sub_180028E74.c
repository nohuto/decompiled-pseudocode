/*
 * XREFs of sub_180028E74 @ 0x180028E74
 * Callers:
 *     sub_18001F000 @ 0x18001F000 (sub_18001F000.c)
 *     sub_180028F50 @ 0x180028F50 (sub_180028F50.c)
 *     sub_180029028 @ 0x180029028 (sub_180029028.c)
 * Callees:
 *     sub_18002690C @ 0x18002690C (sub_18002690C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180028E74(_QWORD *a1)
{
  int v2; // esi
  void *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  HANDLE ProcessHeap; // rax
  void *v9; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+48h] [rbp+10h]

  v2 = 0;
  v3 = 0LL;
  v9 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v10 = v4;
  if ( a1[9] )
  {
    v2 = sub_18002690C(a1 + 13, &v9);
    if ( v2 >= 0 && (v5 = (_QWORD *)a1[7]) != 0LL )
    {
      v3 = v9;
      do
      {
        v6 = v5[2];
        v5 = (_QWORD *)*v5;
        if ( !*(_DWORD *)(v6 + 448) )
          MMDevAPI_12(v3, *(unsigned int *)(v6 + 192));
      }
      while ( v5 );
    }
    else
    {
      v3 = v9;
    }
  }
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v3);
  if ( v4 )
    LeaveCriticalSection(v4);
  return (unsigned int)v2;
}
