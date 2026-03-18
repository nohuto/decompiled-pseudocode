/*
 * XREFs of ?PostMessageToChannel@CChannel@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x180028328
 * Callers:
 *     ?PostMessageToClient@CInternalMilCmdConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800281E0 (-PostMessageToClient@CInternalMilCmdConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrAlloc@@YAJ_KPEAPEAX@Z @ 0x180098D48 (-HrAlloc@@YAJ_KPEAPEAX@Z.c)
 */

__int64 __fastcall CChannel::PostMessageToChannel(CChannel *this, const struct MIL_MESSAGE *a2)
{
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // edi
  _OWORD *v7; // rbx
  CChannel **v8; // rcx
  _OWORD *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  v4 = HrAlloc(0x30uLL, (void **)&v10);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x1A5u, 0LL);
  }
  else
  {
    v7 = v10;
    v10[1] = *(_OWORD *)a2;
    *((_QWORD *)v7 + 4) = *((_QWORD *)a2 + 2);
    *((_DWORD *)v7 + 10) = *((_DWORD *)a2 + 6);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
    v8 = (CChannel **)*((_QWORD *)this + 9);
    if ( *v8 != (CChannel *)((char *)this + 64) )
      __fastfail(3u);
    *(_QWORD *)v7 = (char *)this + 64;
    *((_QWORD *)v7 + 1) = v8;
    *v8 = (CChannel *)v7;
    *((_QWORD *)this + 9) = v7;
    SetEvent(*((HANDLE *)this + 10));
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  }
  return v6;
}
