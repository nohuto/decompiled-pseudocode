/*
 * XREFs of KiTpWriteMemory @ 0x140573408
 * Callers:
 *     KiTpWriteBreakpoint @ 0x140573374 (KiTpWriteBreakpoint.c)
 * Callees:
 *     MmDbgCopyMemory @ 0x14028F978 (MmDbgCopyMemory.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiTpWriteUmMemory @ 0x14057352C (KiTpWriteUmMemory.c)
 *     KdEnterDebugger @ 0x140A6F7A0 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140A6F900 (KdExitDebugger.c)
 */

__int64 __fastcall KiTpWriteMemory(_KPROCESS *a1, char a2, char *a3, _DWORD *a4)
{
  int v8; // ebx
  char v9; // r14
  __int64 v10; // rcx
  _OWORD v12[3]; // [rsp+30h] [rbp-68h] BYREF

  memset(v12, 0, sizeof(v12));
  if ( a1 )
    KiStackAttachProcess(a1, 0LL, (__int64)v12, a4);
  if ( a2 == 1 )
  {
    v8 = KiTpWriteUmMemory(a1, a3, a4, 1LL);
  }
  else if ( (KiDynamicTraceEnabled & 4) != 0 )
  {
    v8 = MmDbgCopyMemory(a3, (__int64)a4, 1u, 1u, 1);
    if ( v8 < 0 )
    {
      v9 = KdEnterDebugger(0LL, 0LL);
      v8 = MmDbgCopyMemory(a3, (__int64)a4, 1u, 1u, 5);
      if ( v8 < 0 )
        v8 = MmDbgCopyMemory(a3, (__int64)a4, 1u, 1u, 69);
      LOBYTE(v10) = v9;
      KdExitDebugger(v10);
    }
  }
  else
  {
    v8 = -1073741790;
  }
  if ( a1 )
    KiUnstackDetachProcess((__int64)v12, 0LL);
  return (unsigned int)v8;
}
