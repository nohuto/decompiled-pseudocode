/*
 * XREFs of ?GetWindowBeginStyle@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAK@Z @ 0x1800B4ECC
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B1F40 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     ?_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z @ 0x18000A840 (-_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CWindowPropertyTracker::GetWindowBeginStyle(CWindowPropertyTracker *this, HWND a2, unsigned int *a3)
{
  unsigned int v5; // ebx
  int Record; // eax

  *a3 = 0;
  v5 = -2147467259;
  Record = CWindowPropertyTracker::_FindRecord(this, a2);
  if ( Record >= 0 )
  {
    _mm_lfence();
    v5 = 0;
    *a3 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)Record) + 96LL);
  }
  return v5;
}
