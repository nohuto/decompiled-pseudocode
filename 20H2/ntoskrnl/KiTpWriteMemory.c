/*
 * XREFs of KiTpWriteMemory @ 0x14051BA1C
 * Callers:
 *     KiTpWriteBreakpoint @ 0x14051B988 (KiTpWriteBreakpoint.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiTpWriteUmMemory @ 0x14051BB44 (KiTpWriteUmMemory.c)
 *     MmDbgCopyMemory @ 0x140544F9C (MmDbgCopyMemory.c)
 *     KdEnterDebugger @ 0x1409BA028 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1409BA190 (KdExitDebugger.c)
 */

__int64 __fastcall KiTpWriteMemory(_KPROCESS *a1, char a2, void *a3, int a4)
{
  int v8; // ebx
  char v9; // r14
  __int64 v10; // rcx
  _OWORD v12[3]; // [rsp+30h] [rbp-68h] BYREF

  memset(v12, 0, sizeof(v12));
  if ( a1 )
    KiStackAttachProcess(a1, 0, (__int64)v12);
  if ( a2 == 1 )
  {
    v8 = KiTpWriteUmMemory((_DWORD)a1, (_DWORD)a3, a4, 1uLL);
  }
  else if ( (KiDynamicTraceEnabled & 4) != 0 )
  {
    v8 = MmDbgCopyMemory(a3, 1);
    if ( v8 < 0 )
    {
      v9 = KdEnterDebugger(0LL, 0LL);
      v8 = MmDbgCopyMemory(a3, 5);
      if ( v8 < 0 )
        v8 = MmDbgCopyMemory(a3, 69);
      LOBYTE(v10) = v9;
      KdExitDebugger(v10);
    }
  }
  else
  {
    v8 = -1073741790;
  }
  if ( a1 )
    KiUnstackDetachProcess((__int64)v12, 0);
  return (unsigned int)v8;
}
