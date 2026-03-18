/*
 * XREFs of ?Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C029B1A0
 * Callers:
 *     ?ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C02A1840 (-ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     ?TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ @ 0x1C029BA64 (-TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ.c)
 */

void __fastcall OUTPUTDUPL_SESSION_MGR::Release(
        struct DXGFASTMUTEX **this,
        struct _EPROCESS *a2,
        struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *a3)
{
  LONGLONG v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // r8d
  __int64 v9; // rsi
  unsigned int v10; // eax
  __int64 v11; // rbx
  __int128 v12; // rtt
  unsigned int v13; // r8d
  __int64 v14; // rdx
  struct DXGFASTMUTEX **v15; // r10
  __int64 v16; // rax
  _BYTE v17[40]; // [rsp+20h] [rbp-28h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, this[1], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v8 = *((_DWORD *)this + 1);
  v9 = *(_QWORD *)this[2];
  v10 = 0;
  if ( v8 )
  {
    while ( 1 )
    {
      v7 = 32LL * v10;
      if ( a2 == *(struct _EPROCESS **)(v7 + v9 + 8) )
      {
        v6 = *(unsigned int *)(v7 + v9);
        if ( (_DWORD)v6 )
          break;
      }
      if ( ++v10 >= v8 )
        goto LABEL_8;
    }
    v11 = 32LL * v10;
    *(_DWORD *)(v11 + v9) = v6 - 1;
    if ( (_DWORD)v6 == 1 )
    {
      PerformanceFrequency.QuadPart = 0LL;
      v12 = (__int64)(*(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency) - *(_QWORD *)(v11 + v9 + 16));
      v6 = v12 % PerformanceFrequency.QuadPart;
      *(_DWORD *)(v11 + v9 + 24) += v12 / PerformanceFrequency.QuadPart;
    }
  }
LABEL_8:
  if ( a3 )
  {
    v13 = *((_DWORD *)this + 12);
    v14 = 0LL;
    if ( v13 )
    {
      while ( 1 )
      {
        v15 = &this[3 * v14];
        if ( v15[7] == *(struct DXGFASTMUTEX **)a3 )
        {
          v7 = 3 * v14;
          if ( LODWORD(this[3 * v14 + 9]) == *((_DWORD *)a3 + 4)
            && LODWORD(this[3 * v14 + 8]) == *((_DWORD *)a3 + 2)
            && HIDWORD(this[3 * v14 + 8]) == *((_DWORD *)a3 + 3) )
          {
            break;
          }
        }
        v14 = (unsigned int)(v14 + 1);
        if ( (unsigned int)v14 >= v13 )
          goto LABEL_15;
      }
      memmove(
        v15 + 7,
        &this[2 * (unsigned int)(v14 + 1) + 7] + (unsigned int)(v14 + 1),
        24LL * (v13 - (unsigned int)v14 - 1));
      --*((_DWORD *)this + 12);
      OUTPUTDUPL_SESSION_MGR::TriggerLowBoxActiveContextWNF((OUTPUTDUPL_SESSION_MGR *)this);
    }
    else
    {
LABEL_15:
      v16 = WdLogNewEntry5_WdAssertion(v7, v14);
      *(_QWORD *)(v16 + 24) = 4337LL;
      WdLogEvent5_WdAssertion(v16);
    }
  }
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17, v6);
}
