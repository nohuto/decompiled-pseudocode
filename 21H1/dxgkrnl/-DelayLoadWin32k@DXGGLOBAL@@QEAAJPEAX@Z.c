/*
 * XREFs of ?DelayLoadWin32k@DXGGLOBAL@@QEAAJPEAX@Z @ 0x1C00191B4
 * Callers:
 *     DxgkInternalDeviceIoctl @ 0x1C01501E0 (DxgkInternalDeviceIoctl.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?CreateWin32kImportTable@@YAJPEAXPEAPEAVDXGKW32KIMPORTS@@@Z @ 0x1C002354C (-CreateWin32kImportTable@@YAJPEAXPEAPEAVDXGKW32KIMPORTS@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::DelayLoadWin32k(DXGGLOBAL *this, void *a2)
{
  unsigned int Win32kImportTable; // edi
  struct DXGKW32KIMPORTS **v5; // rdx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  Win32kImportTable = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (DXGGLOBAL *)((char *)this + 304272), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  v5 = (struct DXGKW32KIMPORTS **)((char *)this + 304264);
  if ( !*((_QWORD *)this + 38033) )
    Win32kImportTable = CreateWin32kImportTable(a2, v5);
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7, (__int64)v5);
  return Win32kImportTable;
}
