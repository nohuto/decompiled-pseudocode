/*
 * XREFs of DxgkIddGetAdapterSessionDiagnostics @ 0x1C0259D1C
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x1C02D4700 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000D03C (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0018834 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1C0044C94 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C020A690 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 */

__int64 __fastcall DxgkIddGetAdapterSessionDiagnostics(
        unsigned int a1,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned int *a4)
{
  __int64 v4; // rdi
  struct _LUID *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  DXGFASTMUTEX **v18; // rcx
  int v19; // eax
  unsigned int v21; // [rsp+20h] [rbp-28h] BYREF
  DXGADAPTER *v22[4]; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v23; // [rsp+58h] [rbp+10h] BYREF

  v23 = a2;
  v22[0] = 0LL;
  v4 = a1;
  DXGADAPTER_REFERENCE::AssignByHandle(v22, a1);
  v10 = (__int64)v22[0];
  if ( !v22[0] )
  {
    v11 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    LODWORD(v10) = -1073741811;
    *(_QWORD *)(v11 + 24) = v4;
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v11);
    goto LABEL_15;
  }
  v21 = 0;
  if ( !DXGADAPTER::IsAdapterSessionized(v22[0], v7, &v21, 0LL) )
  {
    v14 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v14 + 24) = v10;
    LODWORD(v10) = -1073741811;
    *(_QWORD *)(v14 + 32) = -1073741811LL;
LABEL_10:
    WdLogEvent5_WdError(v14);
    goto LABEL_15;
  }
  if ( !DXGGLOBAL::GetGlobal(v13, v12) )
  {
    v14 = WdLogNewEntry5_WdError(v16, v15);
    v10 = -1073741811LL;
LABEL_9:
    *(_QWORD *)(v14 + 24) = v10;
    goto LABEL_10;
  }
  v18 = (DXGFASTMUTEX **)*((_QWORD *)DXGGLOBAL::GetGlobal(v16, v15) + 100);
  if ( !v18 )
  {
    v14 = WdLogNewEntry5_WdError(0LL, v17);
    v10 = -1073741436LL;
    goto LABEL_9;
  }
  v19 = DXGDIAGNOSTICS::ReadDiagnostics(v18, a3, &v23, v21);
  if ( (int)(v19 + 0x80000000) < 0 || v19 == -2147483643 )
    *a4 = v23;
  LODWORD(v10) = v19;
LABEL_15:
  DXGADAPTER_REFERENCE::Assign(v22, 0LL);
  return (unsigned int)v10;
}
