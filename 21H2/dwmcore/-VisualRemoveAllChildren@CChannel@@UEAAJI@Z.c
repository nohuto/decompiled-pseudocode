/*
 * XREFs of ?VisualRemoveAllChildren@CChannel@@UEAAJI@Z @ 0x18006F690
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18007333C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::VisualRemoveAllChildren(CChannel *this, unsigned int a2)
{
  __int64 v4; // rcx
  unsigned int i; // edx
  unsigned int v6; // ebx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp+8h] BYREF
  char *v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle(this, a2, 195LL);
  v8 = &g_csCompositionEngine;
  EnterCriticalSection(&g_csCompositionEngine);
  v4 = *((_QWORD *)this + 5);
  for ( i = 0; i < *((_DWORD *)this + 7); v4 += *((unsigned int *)this + 6) )
  {
    if ( *(_DWORD *)(v4 + 12) == a2 )
      *(_DWORD *)(v4 + 12) = 0;
    ++i;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v8);
  LODWORD(v8) = 403;
  HIDWORD(v8) = a2;
  v6 = CChannel::SendCommand(this, &v8, 8u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return v6;
}
