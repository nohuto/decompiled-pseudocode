/*
 * XREFs of ?MilConnection_CreateChannel@@YAJPEAUHMIL_CONNECTION__@@PEAPEAUIDwmChannel@@@Z @ 0x1800D8A20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800386EC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?CreateKernelChannel@CInternalMilCmdConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x1800D8AA0 (-CreateKernelChannel@CInternalMilCmdConnection@@AEAAJPEAPEAVCChannel@@@Z.c)
 */

__int64 __fastcall MilConnection_CreateChannel(struct HMIL_CONNECTION__ *this, struct IDwmChannel **a2)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rcx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+48h] [rbp+10h] BYREF
  struct CChannel *v10; // [rsp+50h] [rbp+18h] BYREF

  if ( a2 )
  {
    if ( this )
    {
      v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
      v4 = CInternalMilCmdConnection::CreateKernelChannel(this, &v10);
      v6 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x3Fu, 0LL);
      CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x6Bu, 0LL);
      else
        *a2 = v10;
    }
    else
    {
      v6 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2147024809, 0x67u, 0LL);
    }
  }
  else
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x66u, 0LL);
  }
  return (unsigned int)v6;
}
