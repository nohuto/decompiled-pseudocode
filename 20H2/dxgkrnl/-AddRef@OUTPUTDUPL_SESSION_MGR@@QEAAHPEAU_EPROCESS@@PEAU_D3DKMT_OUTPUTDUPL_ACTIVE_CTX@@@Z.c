/*
 * XREFs of ?AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C02973D0
 * Callers:
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C029FC70 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01686AC (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ @ 0x1C029BA64 (-TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_SESSION_MGR::AddRef(
        struct DXGFASTMUTEX **this,
        struct _EPROCESS *a2,
        struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // edi
  unsigned int v9; // r14d
  unsigned int v10; // r15d
  unsigned int v11; // r8d
  char *Buffer; // rbp
  struct _EPROCESS *v13; // rdx
  int v14; // eax
  AUTOEXPANDALLOCATION *v15; // rcx
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rsi
  struct _EPROCESS *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  _BYTE v24[56]; // [rsp+20h] [rbp-38h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, this[1], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  v8 = 0;
  v9 = -1;
  if ( !a3 || *((_DWORD *)this + 12) < 0x10u )
  {
    v10 = 0;
    v6 = *((unsigned int *)this + 1);
    v11 = 0;
    Buffer = *(char **)this[2];
    while ( v11 < (unsigned int)v6 )
    {
      if ( v8 )
        break;
      v7 = 32LL * v11;
      v13 = *(struct _EPROCESS **)&Buffer[v7 + 8];
      if ( a2 == v13 )
      {
        v14 = *(_DWORD *)&Buffer[v7];
        v9 = v11;
        if ( v14 )
        {
          v8 = 1;
          *(_DWORD *)&Buffer[v7] = v14 + 1;
        }
      }
      else if ( v9 == -1 )
      {
        if ( v13 )
          goto LABEL_12;
        v9 = v11;
      }
      if ( v13 )
      {
LABEL_12:
        if ( *(_DWORD *)&Buffer[v7] )
          ++v10;
      }
      v6 = *((unsigned int *)this + 1);
      ++v11;
    }
    if ( v10 < *(_DWORD *)this || v8 )
    {
      if ( v9 == -1 )
      {
        v15 = this[2];
        v16 = v6 + 1;
        *((_DWORD *)this + 1) = v16;
        Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer(v15, 32 * v16, 1);
        if ( !Buffer )
        {
          v8 = 0;
          goto LABEL_33;
        }
        v9 = *((_DWORD *)this + 1) - 1;
        v17 = 32LL * v9;
        *(_OWORD *)&Buffer[v17] = 0LL;
        *(_OWORD *)&Buffer[v17 + 16] = 0LL;
      }
      v18 = 32LL * v9;
      v19 = *(struct _EPROCESS **)&Buffer[v18 + 8];
      if ( v19 && v19 != a2 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v7, v6);
        *(_QWORD *)(v20 + 24) = 4249LL;
        WdLogEvent5_WdAssertion(v20);
      }
      if ( v9 != -1 )
      {
        if ( v8 )
          goto LABEL_31;
        if ( *(_DWORD *)&Buffer[v18] )
        {
          v21 = WdLogNewEntry5_WdAssertion(v7, v6);
          *(_QWORD *)(v21 + 24) = 4254LL;
          WdLogEvent5_WdAssertion(v21);
        }
        *(_QWORD *)&Buffer[v18 + 8] = a2;
        *(_DWORD *)&Buffer[v18] = 1;
        *(LARGE_INTEGER *)&Buffer[v18 + 16] = KeQueryPerformanceCounter(0LL);
        v8 = 1;
        if ( v10 < *((_DWORD *)this + 6) )
        {
LABEL_31:
          if ( a3 )
          {
            v22 = 3LL * *((unsigned int *)this + 12);
            *(_OWORD *)&this[v22 + 7] = *(_OWORD *)a3;
            this[v22 + 9] = (struct DXGFASTMUTEX *)*((_QWORD *)a3 + 2);
            ++*((_DWORD *)this + 12);
            OUTPUTDUPL_SESSION_MGR::TriggerLowBoxActiveContextWNF((OUTPUTDUPL_SESSION_MGR *)this);
          }
          goto LABEL_33;
        }
        *((_DWORD *)this + 6) = v10 + 1;
      }
      if ( !v8 )
        goto LABEL_33;
      goto LABEL_31;
    }
  }
LABEL_33:
  if ( v24[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24, v6);
  return v8;
}
