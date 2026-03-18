/*
 * XREFs of ?DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ @ 0x1C0047C24
 * Callers:
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C0115474 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     NtDxgkVailDisconnect @ 0x1C02B88E0 (NtDxgkVailDisconnect.c)
 * Callees:
 *     ?DisableVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C02B4E68 (-DisableVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 */

void __fastcall DXGVAILOBJECT::DisableVmBusChannel(struct _KTHREAD **this, __int64 a2)
{
  __int64 v3; // rax
  struct DXGVMBUSCHANNEL *v4; // rcx

  if ( this[7] != KeGetCurrentThread() )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 358LL;
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = this[13];
  if ( v4 )
    DisableVmBusChannel(v4);
}
