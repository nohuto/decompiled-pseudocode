/*
 * XREFs of ?WindowNodeSetCompositionSurface@CChannel@@UEAAJIPEAX@Z @ 0x1801AD270
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18007333C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::WindowNodeSetCompositionSurface(CDataStreamWriter **this, unsigned int a2, void *a3)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v7; // rax
  signed int LastError; // eax
  __int64 v9; // rcx
  signed int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx
  __m128i si128; // [rsp+40h] [rbp-18h] BYREF
  HANDLE TargetHandle; // [rsp+60h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+70h] [rbp+18h] BYREF

  TargetHandle = 0LL;
  v16 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  CChannel::CheckHandle((__int64)this, a2, 204);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  si128.m128i_i32[1] = a2;
  if ( a3 )
  {
    SetLastError(0);
    CurrentProcess = GetCurrentProcess();
    v7 = GetCurrentProcess();
    if ( !DuplicateHandle(v7, a3, CurrentProcess, &TargetHandle, 0, 0, 2u) )
    {
      LastError = GetLastError();
      v10 = LastError;
      if ( LastError > 0 )
        v10 = (unsigned __int16)LastError | 0x80070000;
      if ( v10 >= 0 )
        v10 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v10, 0x6FAu);
      goto LABEL_12;
    }
    si128.m128i_i64[1] = (__int64)TargetHandle;
  }
  v11 = CChannel::SendCommand(this, &si128, 0x10u);
  v10 = v11;
  if ( v11 >= 0 )
  {
    TargetHandle = 0LL;
    goto LABEL_14;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x6FFu);
LABEL_12:
  if ( TargetHandle )
    CloseHandle(TargetHandle);
LABEL_14:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v16);
  return (unsigned int)v10;
}
