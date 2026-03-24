/*
 * XREFs of ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02654E0
 * Callers:
 *     ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x1C020E5A0 (-PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C020F040 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z @ 0x1C0220FE8 (-DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z.c)
 *     ??0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z @ 0x1C0263E10 (--0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z.c)
 *     ??_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z @ 0x1C0263E64 (--_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z.c)
 *     ?AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z @ 0x1C0263F48 (-AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z.c)
 *     ?Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ @ 0x1C0263FDC (-Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ.c)
 *     ?ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ @ 0x1C026462C (-ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0266190 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z @ 0x1C02DC07C (-DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z.c)
 */

void __fastcall TdrCollectDbgInfoStage2(struct _TDR_RECOVERY_CONTEXT *a1)
{
  int v2; // eax
  CTDR_DUMP_BUFFER *v3; // rcx
  char *v4; // rax
  char *v5; // rbx
  unsigned __int64 v6; // r8
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  unsigned int *v11; // rbx
  char *v12; // rax
  char *v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  unsigned int *v18; // rbx
  CTDR_DUMP_BUFFER *v19; // rcx
  _DWORD *v20; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)a1 + 4);
  if ( *((_QWORD *)a1 + 355) )
  {
    v3 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 357);
    if ( v3 )
    {
      if ( v2 != 6 )
      {
        if ( *(_QWORD *)(*((_QWORD *)a1 + 4) + 2696LL) )
        {
          v4 = (char *)CTDR_DUMP_BUFFER::AddSegment(v3, 5, 0x2004u);
          v5 = v4;
          if ( v4 )
          {
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v20, v4, 0x2000);
            v7 = DmmCollectTdrDiagInfo(a1, v5, v6);
            if ( v7 == -2147483643 )
            {
              *((_DWORD *)a1 + 27) |= 0x40000000u;
            }
            else if ( v7 < 0 )
            {
              *((_DWORD *)a1 + 27) |= 0x80000000;
            }
            if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v20) )
            {
              *((_DWORD *)a1 + 27) |= 0x40000000u;
              v10 = (_QWORD *)WdLogNewEntry5_WdAssertion(v9, v8);
              v10[3] = a1;
              v10[4] = v5;
              v10[5] = 0x2000LL;
              WdLogEvent5_WdAssertion(v10);
            }
            if ( v20 )
              *v20 = 0;
          }
          else
          {
            *((_DWORD *)a1 + 27) |= 0x80000000;
          }
          v11 = (unsigned int *)*((_QWORD *)a1 + 357);
          CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v11);
          *((_QWORD *)a1 + 356) = v11[6];
          *((_DWORD *)a1 + 33) = 5;
          TdrUpdateDbgReport(a1, 1);
          v3 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 357);
        }
        v12 = (char *)CTDR_DUMP_BUFFER::AddSegment(v3, 7, 0x804u);
        v13 = v12;
        if ( v12 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v20, v12, 2048);
          v14 = DxgkCollectCoreDbgInfo(a1, v13);
          if ( v14 == -2147483643 )
          {
            *((_DWORD *)a1 + 27) |= 0x40000000u;
          }
          else if ( v14 < 0 )
          {
            *((_DWORD *)a1 + 27) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v20) )
          {
            *((_DWORD *)a1 + 27) |= 0x40000000u;
            v17 = (_QWORD *)WdLogNewEntry5_WdAssertion(v16, v15);
            v17[3] = a1;
            v17[4] = v13;
            v17[5] = 2048LL;
            WdLogEvent5_WdAssertion(v17);
          }
          if ( v20 )
            *v20 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 27) |= 0x80000000;
        }
        v18 = (unsigned int *)*((_QWORD *)a1 + 357);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v18);
        *((_QWORD *)a1 + 356) = v18[6];
        *((_DWORD *)a1 + 33) = 7;
        TdrUpdateDbgReport(a1, 1);
      }
      v19 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 357);
      if ( v19 )
        CTDR_DUMP_BUFFER::`scalar deleting destructor'(v19);
      *((_QWORD *)a1 + 357) = 0LL;
    }
  }
}
