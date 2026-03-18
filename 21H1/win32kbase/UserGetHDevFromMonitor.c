/*
 * XREFs of UserGetHDevFromMonitor @ 0x1C002F854
 * Callers:
 *     DrvGetCurrentDpiInfo @ 0x1C002F614 (DrvGetCurrentDpiInfo.c)
 *     NtHWCursorUpdatePointer @ 0x1C01545B0 (NtHWCursorUpdatePointer.c)
 * Callees:
 *     HMValidateSharedHandle @ 0x1C006DE88 (HMValidateSharedHandle.c)
 */

__int64 __fastcall UserGetHDevFromMonitor(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = HMValidateSharedHandle(a1);
  result = 0LL;
  if ( v1 )
    return *(_QWORD *)(v1 + 232);
  return result;
}
