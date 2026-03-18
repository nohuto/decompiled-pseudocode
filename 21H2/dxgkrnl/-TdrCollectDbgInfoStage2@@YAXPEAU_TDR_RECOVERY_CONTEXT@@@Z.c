/*
 * XREFs of ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0305DE0
 * Callers:
 *     ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x1C02BCEF0 (-PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02BDA44 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z @ 0x1C02CED4C (-DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z.c)
 *     ??0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z @ 0x1C0304748 (--0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z.c)
 *     ??_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z @ 0x1C03047D0 (--_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z.c)
 *     ?AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z @ 0x1C03048A8 (-AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z.c)
 *     ?Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ @ 0x1C030493C (-Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ.c)
 *     ?ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ @ 0x1C030501C (-ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0306A60 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z @ 0x1C039A594 (-DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z.c)
 */

void __fastcall TdrCollectDbgInfoStage2(struct _TDR_RECOVERY_CONTEXT *a1)
{
  int v2; // eax
  CTDR_DUMP_BUFFER *v3; // rcx
  char *v4; // rax
  char *v5; // rbx
  unsigned __int64 v6; // r8
  int v7; // eax
  unsigned int *v8; // rbx
  char *v9; // rax
  char *v10; // rbx
  int v11; // eax
  unsigned int *v12; // rbx
  _DWORD *v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)a1 + 4);
  if ( *((_QWORD *)a1 + 356) )
  {
    v3 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 358);
    if ( v3 )
    {
      if ( v2 != 6 )
      {
        if ( *(_QWORD *)(*((_QWORD *)a1 + 4) + 2792LL) )
        {
          v4 = (char *)CTDR_DUMP_BUFFER::AddSegment(v3, 5, 0x2004u);
          v5 = v4;
          if ( v4 )
          {
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v13, v4, 0x2000);
            v7 = DmmCollectTdrDiagInfo(a1, v5, v6);
            if ( v7 == -2147483643 )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
            }
            else if ( v7 < 0 )
            {
              *((_DWORD *)a1 + 29) |= 0x80000000;
            }
            if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v13) )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              WdLogSingleEntry3(1LL, a1, v5, 0x2000LL);
            }
            if ( v13 )
              *v13 = 0;
          }
          else
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          v8 = (unsigned int *)*((_QWORD *)a1 + 358);
          CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v8);
          *((_QWORD *)a1 + 357) = v8[6];
          *((_DWORD *)a1 + 35) = 5;
          TdrUpdateDbgReport(a1, 1);
          v3 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 358);
        }
        v9 = (char *)CTDR_DUMP_BUFFER::AddSegment(v3, 7, 0x804u);
        v10 = v9;
        if ( v9 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v13, v9, 2048);
          v11 = DxgkCollectCoreDbgInfo(a1, v10);
          if ( v11 == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( v11 < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v13) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            WdLogSingleEntry3(1LL, a1, v10, 2048LL);
          }
          if ( v13 )
            *v13 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v12 = (unsigned int *)*((_QWORD *)a1 + 358);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v12);
        *((_QWORD *)a1 + 357) = v12[6];
        *((_DWORD *)a1 + 35) = 7;
        TdrUpdateDbgReport(a1, 1);
        v3 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 358);
      }
      if ( v3 )
        CTDR_DUMP_BUFFER::`scalar deleting destructor'(v3);
      *((_QWORD *)a1 + 358) = 0LL;
    }
  }
}
