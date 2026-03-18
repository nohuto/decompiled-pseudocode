/*
 * XREFs of ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C026ADB8
 * Callers:
 *     ?RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6AX0KIE0@ZP6AX00KEIU_GUID@@I@Z@Z @ 0x1C004599C (-RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6.c)
 *     ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1C026A664 (-SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z.c)
 *     ?UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z @ 0x1C026AC50 (-UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGGLOBAL::ValidateAdapterValidAndInRunningState(struct _KTHREAD **this, struct DXGADAPTER *a2)
{
  __int64 v4; // rax
  struct DXGADAPTER **v5; // rbx
  char v6; // cl
  struct DXGADAPTER *i; // rax

  if ( this[75] != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 5513LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = this + 83;
  v6 = 0;
  for ( i = *v5; i != (struct DXGADAPTER *)v5 && i; i = *(struct DXGADAPTER **)i )
  {
    if ( i == a2 )
      return *((_DWORD *)a2 + 50) == 1;
  }
  return v6;
}
