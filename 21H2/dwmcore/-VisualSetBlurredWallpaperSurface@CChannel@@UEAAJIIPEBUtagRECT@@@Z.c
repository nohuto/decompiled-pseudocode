/*
 * XREFs of ?VisualSetBlurredWallpaperSurface@CChannel@@UEAAJIIPEBUtagRECT@@@Z @ 0x1800F61B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180070B20 (-CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18007333C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::VisualSetBlurredWallpaperSurface(
        CDataStreamWriter **this,
        unsigned int a2,
        int a3,
        const struct tagRECT *a4)
{
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx
  _DWORD v14[8]; // [rsp+30h] [rbp-20h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+70h] [rbp+20h] BYREF

  v15 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  CChannel::CheckHandle((__int64)this, a2, 195);
  CChannel::CheckOptionalHandle((__int64)this, a3);
  v14[0] = 406;
  v14[1] = a2;
  v14[2] = a3;
  v8 = CChannel::SendCommand(this, v14, 0xCu);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0x4D9u);
  }
  else
  {
    v14[0] = 407;
    memset(&v14[1], 0, 20);
    v14[1] = a2;
    if ( a4 )
      *(struct tagRECT *)&v14[2] = *a4;
    v11 = CChannel::SendCommand(this, v14, 0x18u);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x4E5u);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v15);
  return v10;
}
