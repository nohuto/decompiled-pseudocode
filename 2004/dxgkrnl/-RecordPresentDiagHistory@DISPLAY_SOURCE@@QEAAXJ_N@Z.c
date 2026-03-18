/*
 * XREFs of ?RecordPresentDiagHistory@DISPLAY_SOURCE@@QEAAXJ_N@Z @ 0x1C0026A7C
 * Callers:
 *     DxgkPresent @ 0x1C0100670 (DxgkPresent.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

void __fastcall DISPLAY_SOURCE::RecordPresentDiagHistory(DISPLAY_SOURCE *this, int a2, char a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  v6 = MEMORY[0xFFFFF78000000320];
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DISPLAY_SOURCE *)((char *)this + 3760), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  if ( *((_DWORD *)this + 990) >= 0xAu )
    *((_DWORD *)this + 990) = 0;
  *((_QWORD *)this + 2 * *((unsigned int *)this + 990) + 475) = v6 * KeQueryTimeIncrement();
  *((_DWORD *)this + 4 * *((unsigned int *)this + 990) + 952) = a2;
  *((_BYTE *)this + 16 * (unsigned int)(*((_DWORD *)this + 990))++ + 3812) = a3;
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8, v7);
}
