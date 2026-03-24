/*
 * XREFs of GetLPCreateDCompositionDirectInkFactoryPartner @ 0x18024D2DC
 * Callers:
 *     ?CreateDirectInkFactory@CD2DGenericInk@@SAJPEAUID2D1DeviceContext@@PEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x18024D25C (-CreateDirectInkFactory@CD2DGenericInk@@SAJPEAUID2D1DeviceContext@@PEAPEAUIDCompositionDirectInk.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall GetLPCreateDCompositionDirectInkFactoryPartner(FARPROC *a1)
{
  signed int v1; // ebx
  FARPROC ProcAddress; // rax
  HMODULE LibraryW; // rax
  signed int LastError; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx

  v1 = dword_18034BDB0;
  if ( dword_18034BDB0 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, dword_18034BDB0, 0x18u, 0LL);
    goto LABEL_13;
  }
  ProcAddress = (FARPROC)qword_18034BDA8;
  if ( qword_18034BDA8 )
    goto LABEL_11;
  SetLastError(0);
  LibraryW = LoadLibraryW(L"Windows.UI.Input.Inking.dll");
  if ( LibraryW )
  {
    ProcAddress = GetProcAddress(LibraryW, "CreateDCompositionDirectInkFactoryPartner");
    qword_18034BDA8 = (__int64)ProcAddress;
    if ( !ProcAddress )
    {
      v1 = -2147467261;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147467261, 0x23u, 0LL);
      goto LABEL_13;
    }
LABEL_11:
    *a1 = ProcAddress;
    goto LABEL_13;
  }
  LastError = GetLastError();
  v1 = LastError;
  if ( LastError > 0 )
    v1 = (unsigned __int16)LastError | 0x80070000;
  if ( v1 >= 0 )
    v1 = -2003304445;
  MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v1, 0x1Du, 0LL);
LABEL_13:
  dword_18034BDB0 = v1;
  return (unsigned int)v1;
}
