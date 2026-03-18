/*
 * XREFs of ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C026CC84
 * Callers:
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0016A90 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGHWQUEUE@@QEAAXXZ @ 0x1C0025540 (-ReleaseReference@DXGHWQUEUE@@QEAAXXZ.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00DD900 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1C00E5294 (--1DXGCONTEXT@@QEAA@XZ.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C00E9B60 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C014C8D8 (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkCddDestroy@@YAJIIIQEAXE@Z @ 0x1C0165C70 (-DxgkCddDestroy@@YAJIIIQEAXE@Z.c)
 *     ?DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAU_LUID@@PEAPEAU_OBJECT_TYPE@@@Z @ 0x1C0166080 (-DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAU_LUID@@PEAPEAU_OBJECT_TYPE@@@Z.c)
 *     ?DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C026C70C (-DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_GDXGHWQUEUE@@IEAAPEAXI@Z @ 0x1C0045F94 (--_GDXGHWQUEUE@@IEAAPEAXI@Z.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C026CAEC (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyHwQueueOnHost@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@@Z @ 0x1C026CDD4 (-DestroyHwQueueOnHost@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@@Z.c)
 */

void __fastcall DXGCONTEXT::DestroyHwQueue(DXGCONTEXT *this, struct DXGHWQUEUE *P, PERESOURCE **a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rcx
  PVOID *v16; // rax

  if ( !P )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v6 + 24) = 525LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v7 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v7 + 136)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v10 + 24) = 526LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v13 + 24) = 527LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !P )
  {
    v14 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v14 + 24) = 530LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 209LL) )
    DXGCONTEXT::DestroyHwQueueOnHost(this, P);
  DXGHWQUEUE::DestroyCoreState(P, a3);
  v15 = *(_QWORD **)P;
  if ( *(struct DXGHWQUEUE **)(*(_QWORD *)P + 8LL) != P || (v16 = (PVOID *)*((_QWORD *)P + 1), *v16 != P) )
    __fastfail(3u);
  *v16 = v15;
  v15[1] = v16;
  DXGHWQUEUE::`scalar deleting destructor'(P);
}
