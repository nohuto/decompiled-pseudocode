/*
 * XREFs of ?UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z @ 0x1800A2734
 * Callers:
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x1800386C0 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x1800A1628 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 *     ?ProcessVendorMessages@LampArrayDevice@@AEAAXPEAUViewClientListEntry@1@@Z @ 0x1800A2508 (-ProcessVendorMessages@LampArrayDevice@@AEAAXPEAUViewClientListEntry@1@@Z.c)
 */

__int64 __fastcall LampArrayDevice::UpdateFromActiveViewClient(LampArrayDevice *this, unsigned int *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned int v4; // r15d
  unsigned __int64 v6; // rbx
  char v7; // bp
  unsigned __int64 *v8; // r8
  unsigned __int64 *i; // rcx
  unsigned __int64 j; // rax
  LONGLONG v11; // rax
  LONGLONG v12; // rcx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v16; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  bool v18; // [rsp+50h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp+10h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 104);
  v4 = -1;
  *a2 = -1;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  v6 = *((_QWORD *)this + 12);
  v7 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v8 = (unsigned __int64 *)((char *)this + 32);
  for ( i = (unsigned __int64 *)*((_QWORD *)this + 4); i != v8; i = (unsigned __int64 *)*i )
  {
    if ( *(_DWORD *)(i[4] + 4184) )
    {
      for ( j = *v8; (unsigned __int64 *)j != v8; j = *(_QWORD *)j )
      {
        if ( *(_DWORD *)(j + 24) == *(_DWORD *)(i[4] + 4184) )
        {
          v6 = j;
          v7 = 1;
          goto LABEL_10;
        }
      }
      break;
    }
  }
LABEL_10:
  if ( this != (LampArrayDevice *)-56LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  if ( v6 && v6 == *((_QWORD *)this + 12) && *(_DWORD *)(*(_QWORD *)(v6 + 32) + 4188LL) )
    v6 &= -(__int64)(v7 != 0);
  LampArrayDevice::ProcessVendorMessages((HidLampArrayDevice **)this, (struct LampArrayDevice::ViewClientListEntry *)v6);
  QueryPerformanceCounter(&PerformanceCount);
  v11 = PerformanceCount.QuadPart - *((_QWORD *)this + 24);
  v12 = *((_QWORD *)this + 25);
  if ( v11 < v12 )
  {
    v16 = 1000 * (v12 - v11) / *((_QWORD *)this + 23);
    if ( v16 > 0xFFFFFFFFLL )
      LODWORD(v16) = -1;
    v4 = v16;
  }
  else
  {
    v18 = 0;
    v13 = LampArrayDevice::ProcessLampState(this, (struct LampArrayDevice::ViewClientListEntry *)v6, &v18);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x111,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
        (const char *)(unsigned int)v13);
      if ( v2 )
        LeaveCriticalSection(v2);
      return v14;
    }
    if ( v18 )
      QueryPerformanceCounter((LARGE_INTEGER *)this + 24);
  }
  *a2 = v4;
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
