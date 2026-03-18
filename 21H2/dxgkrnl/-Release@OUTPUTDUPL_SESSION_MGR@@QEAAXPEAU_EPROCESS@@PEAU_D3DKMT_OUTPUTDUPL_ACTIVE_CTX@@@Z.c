/*
 * XREFs of ?Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C0323B94
 * Callers:
 *     ?ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C0328D38 (-ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ @ 0x1C03243D8 (-TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ.c)
 */

void __fastcall OUTPUTDUPL_SESSION_MGR::Release(
        OUTPUTDUPL_SESSION_MGR *this,
        struct _EPROCESS *a2,
        struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *a3)
{
  unsigned int v6; // r8d
  __int64 v7; // rsi
  unsigned int v8; // eax
  __int64 v9; // rcx
  int v10; // edx
  __int64 v11; // rbx
  __int128 v12; // rtt
  unsigned int v13; // r8d
  __int64 v14; // rdx
  char *v15; // r10
  _BYTE v16[16]; // [rsp+50h] [rbp-28h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+80h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (OUTPUTDUPL_SESSION_MGR *)((char *)this + 8), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  v6 = *((_DWORD *)this + 1);
  v7 = **((_QWORD **)this + 7);
  v8 = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      v9 = 32LL * v8;
      if ( a2 == *(struct _EPROCESS **)(v9 + v7 + 8) )
      {
        v10 = *(_DWORD *)(v9 + v7);
        if ( v10 )
          break;
      }
      if ( ++v8 >= v6 )
        goto LABEL_8;
    }
    v11 = 32LL * v8;
    *(_DWORD *)(v11 + v7) = v10 - 1;
    if ( v10 == 1 )
    {
      PerformanceFrequency.QuadPart = 0LL;
      v12 = (__int64)(*(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency) - *(_QWORD *)(v11 + v7 + 16));
      *(_DWORD *)(v11 + v7 + 24) += v12 / PerformanceFrequency.QuadPart;
    }
  }
LABEL_8:
  if ( a3 )
  {
    v13 = *((_DWORD *)this + 32);
    v14 = 0LL;
    if ( v13 )
    {
      while ( 1 )
      {
        v15 = (char *)this + 24 * v14;
        if ( *((_QWORD *)v15 + 17) == *(_QWORD *)a3
          && *((_DWORD *)this + 6 * v14 + 38) == *((_DWORD *)a3 + 4)
          && *((_DWORD *)this + 6 * v14 + 36) == *((_DWORD *)a3 + 2)
          && *((_DWORD *)this + 6 * v14 + 37) == *((_DWORD *)a3 + 3) )
        {
          break;
        }
        v14 = (unsigned int)(v14 + 1);
        if ( (unsigned int)v14 >= v13 )
          goto LABEL_15;
      }
      memmove(
        v15 + 136,
        (char *)this + 16 * (unsigned int)(v14 + 1) + 8 * (unsigned int)(v14 + 1) + 136,
        24LL * (v13 - (unsigned int)v14 - 1));
      --*((_DWORD *)this + 32);
      OUTPUTDUPL_SESSION_MGR::TriggerLowBoxActiveContextWNF(this);
    }
    else
    {
LABEL_15:
      WdLogSingleEntry1(1LL, 4300LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bFound", 4300LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
}
