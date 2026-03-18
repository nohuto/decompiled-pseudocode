/*
 * XREFs of ?CreateSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180194B5C
 * Callers:
 *     ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x180194C40 (-OnPresentComplete@CaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ @ 0x18008F15C (-CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ.c)
 */

__int64 __fastcall CaptureBitsResponse::CreateSectionBitmap(CaptureBitsResponse *this)
{
  int v2; // eax
  __int64 v3; // rcx
  signed int v4; // ebx
  HANDLE FileMappingW; // rax
  signed int LastError; // eax
  __int64 v7; // rcx

  v2 = CaptureBitsResponse::CalcSectionBitmapSize((enum DXGI_FORMAT *)this);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0xDEu, 0LL);
  }
  else
  {
    SetLastError(0);
    FileMappingW = CreateFileMappingW((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 4u, 0, *((_DWORD *)this + 426), 0LL);
    *((_QWORD *)this + 211) = FileMappingW;
    if ( !FileMappingW )
    {
      LastError = GetLastError();
      v4 = LastError;
      if ( LastError > 0 )
        v4 = (unsigned __int16)LastError | 0x80070000;
      if ( v4 >= 0 )
        v4 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v4, 0xE6u, 0LL);
    }
  }
  return (unsigned int)v4;
}
