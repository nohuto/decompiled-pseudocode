/*
 * XREFs of ?RectangleGeometrySetRectangle@CChannel@@UEAAJIMMMMMMMMMMMM_N@Z @ 0x18005F3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18005D6EC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18005DBF8 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18005E020 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CChannel::RectangleGeometrySetRectangle(
        CChannel *this,
        unsigned int a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13,
        float a14,
        bool a15)
{
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // ebx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  int v29; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v30; // [rsp+3Ch] [rbp-55h]
  float v31; // [rsp+40h] [rbp-51h]
  _DWORD v32[20]; // [rsp+48h] [rbp-49h] BYREF
  struct _RTL_CRITICAL_SECTION *v33; // [rsp+A8h] [rbp+17h] BYREF

  v33 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 138);
  v32[0] = 336;
  *(float *)&v32[2] = a7;
  *(float *)&v32[3] = a8;
  *(float *)&v32[4] = a9;
  *(float *)&v32[5] = a10;
  *(float *)&v32[6] = a11;
  *(float *)&v32[7] = a12;
  *(float *)&v32[8] = a13;
  *(float *)&v32[9] = a14;
  v32[1] = a2;
  v32[10] = a15;
  v17 = CChannel::SendCommand(this, v32, 0x2Cu);
  v19 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x72Eu, 0LL);
  }
  else
  {
    v29 = 334;
    v31 = a3;
    v30 = a2;
    v20 = CChannel::SendCommand(this, &v29, 0xCu);
    v19 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x736u, 0LL);
    }
    else
    {
      v29 = 339;
      v31 = a4;
      v30 = a2;
      v22 = CChannel::SendCommand(this, &v29, 0xCu);
      v19 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x73Eu, 0LL);
      }
      else
      {
        v29 = 337;
        v31 = a5;
        v30 = a2;
        v24 = CChannel::SendCommand(this, &v29, 0xCu);
        v19 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x746u, 0LL);
        }
        else
        {
          v29 = 333;
          v31 = a6;
          v30 = a2;
          v26 = CChannel::SendCommand(this, &v29, 0xCu);
          v19 = v26;
          if ( v26 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x74Eu, 0LL);
        }
      }
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v33);
  return v19;
}
