/*
 * XREFs of VidSchSetPriorityClassProcessX @ 0x1C00E0C20
 * Callers:
 *     ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z @ 0x1C00E0AFC (-SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VidSchSetPriorityClassProcessX(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  int v5; // ebx
  unsigned int v6; // r12d
  __int64 i; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rdi
  __int64 result; // rax
  __int64 v14; // rax

  v3 = 0;
  v5 = 0;
  v6 = a2;
  for ( i = 232LL; ; i += 8LL )
  {
    if ( *(_QWORD *)((char *)DXGGLOBAL::GetGlobal(a1, a2) + i) )
    {
      v11 = *(_QWORD *)((char *)DXGGLOBAL::GetGlobal(a1, a2) + i);
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
        v12 = *(_QWORD *)(v12 + 8LL * (unsigned int)(*(_DWORD *)v11 - 1) + 16);
      if ( !v12 )
      {
        v14 = WdLogNewEntry5_WdAssertion(v10, v9);
        *(_QWORD *)(v14 + 24) = 286LL;
        WdLogEvent5_WdAssertion(v14);
      }
      result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v11 + 8) + 96LL))(v12, v6, a3);
      v3 = result;
      if ( (int)result < 0 )
        break;
    }
    if ( (unsigned int)++v5 >= 2 )
      return v3;
  }
  return result;
}
