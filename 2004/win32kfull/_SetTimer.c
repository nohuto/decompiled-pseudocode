/*
 * XREFs of _SetTimer @ 0x1C01EB858
 * Callers:
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0236B80 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 * Callees:
 *     InternalSetTimer @ 0x1C0089420 (InternalSetTimer.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall SetTimer(unsigned __int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v9; // rdx
  __int64 v10; // r8

  if ( !a1 || PsGetCurrentProcessWin32Process(a1) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) )
    return InternalSetTimer(a1, a2, a3, a4, a5, 0);
  UserSetLastError(5LL, v9, v10);
  return 0LL;
}
