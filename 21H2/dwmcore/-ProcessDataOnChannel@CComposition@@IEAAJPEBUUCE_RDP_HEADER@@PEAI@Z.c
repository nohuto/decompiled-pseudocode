/*
 * XREFs of ?ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x180060F90
 * Callers:
 *     ?ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x180060EC0 (-ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x1800BDCA4 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800C085C (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 */

__int64 __fastcall CComposition::ProcessDataOnChannel(
        CComposition *this,
        const struct UCE_RDP_HEADER *a2,
        unsigned int *a3)
{
  int AttachedChannel; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // ecx
  struct CChannelContext *v12; // [rsp+48h] [rbp+10h] BYREF

  *a3 = 0;
  v12 = 0LL;
  AttachedChannel = CComposition::GetAttachedChannel(this, *((_DWORD *)a2 + 4), &v12);
  v8 = AttachedChannel;
  if ( AttachedChannel < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, AttachedChannel, 0x1DDu, 0LL);
  }
  else
  {
    v9 = CComposition::ProcessCommandBatch(this, *((const void **)a2 + 3), *((_DWORD *)a2 + 8), v12, a3);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1E1u, 0LL);
  }
  if ( v12 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v12);
  return v8;
}
