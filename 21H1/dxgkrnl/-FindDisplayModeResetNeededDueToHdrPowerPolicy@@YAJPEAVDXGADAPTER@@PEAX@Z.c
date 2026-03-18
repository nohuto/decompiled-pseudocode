/*
 * XREFs of ?FindDisplayModeResetNeededDueToHdrPowerPolicy@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02651D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?DmmNeedDisplayModeResetDueToHdrPowerPolicy@@YA_NPEAVDXGADAPTER@@_N@Z @ 0x1C02D9CD0 (-DmmNeedDisplayModeResetDueToHdrPowerPolicy@@YA_NPEAVDXGADAPTER@@_N@Z.c)
 */

__int64 __fastcall FindDisplayModeResetNeededDueToHdrPowerPolicy(struct DXGADAPTER *a1, _BYTE *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGGLOBAL *Global; // rax
  unsigned int v8; // ebx
  _BYTE v10[8]; // [rsp+20h] [rbp-28h] BYREF
  struct DXGADAPTER *v11; // [rsp+28h] [rbp-20h]
  char v12; // [rsp+30h] [rbp-18h]

  if ( !a1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v4 + 24) = 6098LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v11 = a1;
  v12 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
  if ( *((_DWORD *)a1 + 50) == 1
    && (Global = DXGGLOBAL::GetGlobal(v6, v5),
        DmmNeedDisplayModeResetDueToHdrPowerPolicy(a1, *((_BYTE *)Global + 304444))) )
  {
    *a2 = 1;
    v8 = -2147483622;
  }
  else
  {
    v8 = 0;
  }
  if ( v12 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
  return v8;
}
