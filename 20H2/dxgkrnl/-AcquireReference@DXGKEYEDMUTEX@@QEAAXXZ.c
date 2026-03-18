/*
 * XREFs of ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C003FC54
 * Callers:
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C0048150 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     DxgkShareObjectsInternal @ 0x1C011A590 (DxgkShareObjectsInternal.c)
 *     DxgkpAcquireKeyedMutexFromHandle @ 0x1C0237A34 (DxgkpAcquireKeyedMutexFromHandle.c)
 *     ?CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C0275A1C (-CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C028EAA4 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C028FD28 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGKEYEDMUTEX::AcquireReference(DXGKEYEDMUTEX *this, __int64 a2)
{
  __int64 v2; // rax

  if ( _InterlockedAdd64((volatile signed __int64 *)this + 3, 1uLL) <= 0 )
  {
    v2 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v2 + 24) = 689LL;
    WdLogEvent5_WdAssertion(v2);
  }
}
