/*
 * XREFs of ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C0268420
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01277D0 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C01290D0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C015CAC4 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ @ 0x1C0168D68 (-GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ.c)
 */

__int64 __fastcall DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(
        DXGADAPTERSOURCEHASH *this,
        unsigned int a2,
        struct _LUID *a3,
        unsigned int *a4)
{
  unsigned int ActualBufferSize; // eax
  __int64 v9; // r8
  _QWORD *v10; // r10
  __int64 v11; // rcx
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rax
  struct _LUID *v15; // rcx
  unsigned int v16; // ebx
  _BYTE v18[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  ActualBufferSize = AUTOEXPANDALLOCATION::GetActualBufferSize((DXGADAPTERSOURCEHASH *)((char *)this + 40));
  v11 = *((unsigned int *)this + 15);
  v12 = ActualBufferSize >> 4;
  v13 = (unsigned int)(1 << v11);
  if ( ActualBufferSize >> 4 > (unsigned int)v13 )
    v12 = 1 << v11;
  if ( a2 >= v12 )
  {
    v14 = WdLogNewEntry5_WdWarning(v11, v13, v9);
    *(_QWORD *)(v14 + 32) = v12;
LABEL_7:
    *(_QWORD *)(v14 + 24) = a2;
    WdLogEvent5_WdWarning(v14);
    v16 = -1073741811;
    goto LABEL_9;
  }
  v15 = (struct _LUID *)(*v10 + 16LL * a2);
  if ( (v15[1].HighPart & 1) == 0 )
  {
    v14 = WdLogNewEntry5_WdWarning(v15, v13, v9);
    goto LABEL_7;
  }
  v16 = 0;
  *a3 = *v15;
  *a4 = v15[1].LowPart;
LABEL_9:
  if ( v18[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18, v13);
  return v16;
}
