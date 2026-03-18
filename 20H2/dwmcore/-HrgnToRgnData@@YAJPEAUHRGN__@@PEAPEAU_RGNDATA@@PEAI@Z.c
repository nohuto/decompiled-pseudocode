/*
 * XREFs of ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x1800A7420
 * Callers:
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x1800A733C (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall HrgnToRgnData(HRGN hrgn, struct _RGNDATA **a2, unsigned int *a3)
{
  signed int v5; // edi
  struct _RGNDATA *v6; // rbx
  DWORD RegionData; // esi
  HANDLE ProcessHeap; // rax
  __int64 v9; // rcx
  __int64 result; // rax
  signed int LastError; // eax
  __int64 v12; // rcx
  signed int v13; // eax
  __int64 v14; // rcx

  v5 = 0;
  v6 = 0LL;
  SetLastError(0);
  RegionData = GetRegionData(hrgn, 0, 0LL);
  if ( !RegionData )
  {
    LastError = GetLastError();
    v5 = LastError;
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
    if ( v5 >= 0 )
      v5 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v5, 0x82u, 0LL);
    goto LABEL_16;
  }
  ProcessHeap = GetProcessHeap();
  v6 = (struct _RGNDATA *)HeapAlloc(ProcessHeap, 0, RegionData);
  if ( !v6 )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x85u, 0LL);
    goto LABEL_4;
  }
  SetLastError(0);
  if ( !GetRegionData(hrgn, RegionData, v6) )
  {
    v13 = GetLastError();
    v5 = v13;
    if ( v13 > 0 )
      v5 = (unsigned __int16)v13 | 0x80070000;
    if ( v5 >= 0 )
      v5 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v5, 0x88u, 0LL);
LABEL_16:
    if ( v6 )
    {
      operator delete(v6);
      v6 = 0LL;
    }
  }
LABEL_4:
  result = (unsigned int)v5;
  *a2 = v6;
  return result;
}
