/*
 * XREFs of KiTpWriteMemory @ 0x14051804C
 * Callers:
 *     KiTpWriteBreakpoint @ 0x140517FB8 (KiTpWriteBreakpoint.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiTpWriteUmMemory @ 0x140518174 (KiTpWriteUmMemory.c)
 *     MmDbgCopyMemory @ 0x1405415CC (MmDbgCopyMemory.c)
 *     KdEnterDebugger @ 0x1409B4028 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1409B4190 (KdExitDebugger.c)
 */

__int64 __fastcall KiTpWriteMemory(_KPROCESS *a1, char a2, void *a3, int a4)
{
  int v8; // ebx
  char v9; // r14
  __int64 v10; // rcx
  _OWORD v12[3]; // [rsp+30h] [rbp-68h] BYREF

  memset(v12, 0, sizeof(v12));
  if ( a1 )
    KiStackAttachProcess(a1, 0LL, (__int64)v12);
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
    KiUnstackDetachProcess((__int64)v12, 0LL);
  return (unsigned int)v8;
}
