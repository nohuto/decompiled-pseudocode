/*
 * XREFs of EditionUnloadCursorsAndIcons @ 0x1C0122960
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0040298 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall EditionUnloadCursorsAndIcons(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rsi
  char *v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 result; // rax
  __int64 v11; // rbp

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(a1, a2, 9, 10, (__int64)&WPP_fa2cb857af273f1c9fc7df7b6f9bea47_Traceguids);
  }
  v3 = (__int64 *)&unk_1C032FD18;
  v4 = 7LL;
  v5 = (char *)&unk_1C032FD18;
  do
  {
    if ( *v3 )
    {
      v6 = *v3;
      *(_QWORD *)(v6 + 24) = PsGetCurrentProcessWin32Process(a1, a2, a3);
      HMAssignmentUnlock(v5);
    }
    v5 += 552;
    v3 += 69;
    --v4;
  }
  while ( v4 );
  v7 = 0LL;
  v8 = 0LL;
  v9 = 19LL;
  do
  {
    result = gasyscur[0];
    v11 = *(_QWORD *)(v7 + gasyscur[0] + 8);
    if ( v11 )
    {
      *(_QWORD *)(v11 + 24) = PsGetCurrentProcessWin32Process(a1, a2, a3);
      result = HMAssignmentUnlock(&gasyscur[v8 + 1]);
    }
    v8 += 69LL;
    v7 += 552LL;
    --v9;
  }
  while ( v9 );
  if ( gpCursorSizes )
    result = Win32FreePool(gpCursorSizes);
  gpCursorSizes = 0LL;
  return result;
}
