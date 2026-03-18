/*
 * XREFs of ?ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0282E70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?SetCsStartRunningTime@DXGPROCESS@@QEAAXI_K@Z @ 0x1C0047C64 (-SetCsStartRunningTime@DXGPROCESS@@QEAAXI_K@Z.c)
 *     ?CollectRunningTime@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@PEA_K@Z @ 0x1C0283190 (-CollectRunningTime@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@PEA_K@Z.c)
 *     ?AddGPUTimeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@0@Z @ 0x1C02BDBC0 (-AddGPUTimeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@0@Z.c)
 *     ?EnableCoreDripsBlockerAccountingForProcess@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C02BDD3C (-EnableCoreDripsBlockerAccountingForProcess@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 */

__int64 __fastcall ApplyCsFunctionAdapterCallback(struct DXGADAPTER *a1, int *a2)
{
  __int64 v2; // rsi
  __int64 v4; // rbx
  __int64 v5; // r14
  struct ADAPTER_RENDER *v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  struct _EPROCESS *v16; // rbx
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rdi
  DXGGLOBAL *v19; // rax
  unsigned __int64 v20; // rdi
  struct _EPROCESS *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  DXGGLOBAL *Global; // rax
  bool v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  _BYTE v29[8]; // [rsp+20h] [rbp-38h] BYREF
  struct DXGADAPTER *v30; // [rsp+28h] [rbp-30h]
  char v31; // [rsp+30h] [rbp-28h]
  unsigned __int64 v32; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)a2;
  v4 = a2[2];
  v30 = a1;
  v31 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
  if ( *((_DWORD *)a1 + 50) == 1 )
  {
    v5 = *((unsigned int *)a1 + 58);
    if ( (unsigned int)v5 < 6 )
    {
      v6 = (struct ADAPTER_RENDER *)*((_QWORD *)a1 + 338);
      v32 = 0LL;
      v7 = DXGPROCESS::CollectRunningTime((DXGPROCESS *)v2, v6, &v32);
      v11 = v7;
      if ( v7 < 0 )
      {
        v12 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8, v10);
        v12[3] = v4;
        v12[4] = v2;
        v12[5] = a1;
        v12[6] = v11;
        WdLogEvent5_WdWarning(v12);
        goto LABEL_14;
      }
      v13 = (unsigned int)(v4 - 1);
      if ( (_DWORD)v4 == 1 )
      {
        DXGPROCESS::SetCsStartRunningTime((DXGPROCESS *)v2, (unsigned int)v5, v32);
        v21 = *(struct _EPROCESS **)(v2 + 56);
        *(_DWORD *)(v2 + 80) = 1;
        v20 = *((_QWORD *)a1 + 28);
        Global = DXGGLOBAL::GetGlobal(v27, v26);
        v25 = 1;
      }
      else
      {
        if ( (_DWORD)v4 != 2 )
        {
          v14 = WdLogNewEntry5_WdError(v13, v8);
          *(_QWORD *)(v14 + 24) = v4;
          WdLogEvent5_WdError(v14);
          goto LABEL_14;
        }
        v15 = *(_QWORD *)(*(_QWORD *)(v2 + 72) + 8 * v5);
        if ( v32 > v15 && *(_DWORD *)(v2 + 80) )
        {
          v16 = *(struct _EPROCESS **)(v2 + 56);
          v17 = v32 - v15;
          v18 = *((_QWORD *)a1 + 28);
          v19 = DXGGLOBAL::GetGlobal(v13, v15);
          DXGGLOBAL::AddGPUTimeCoreDripsBlockerTracking(v19, v18, v16, v17);
        }
        DXGPROCESS::SetCsStartRunningTime((DXGPROCESS *)v2, (unsigned int)v5, 0LL);
        *(_DWORD *)(v2 + 80) = 0;
        v20 = *((_QWORD *)a1 + 28);
        v21 = *(struct _EPROCESS **)(v2 + 56);
        Global = DXGGLOBAL::GetGlobal(v23, v22);
        v25 = 0;
      }
      DXGGLOBAL::EnableCoreDripsBlockerAccountingForProcess(Global, v20, v21, v25);
    }
  }
LABEL_14:
  if ( v31 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
  return 0LL;
}
