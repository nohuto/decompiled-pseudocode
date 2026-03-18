/*
 * XREFs of ?SetInertiaCenterpoint@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@W4ScrollAxis@@PEAVCConditionalExpressionMarshaler@2@PEA_N@Z @ 0x1C01EB14C
 * Callers:
 *     ?SetReferenceProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01EB370 (-SetReferenceProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChann.c)
 * Callees:
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C00981E0 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     ?GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPEAVCWeakReferenceBase@2@@Z @ 0x1C01CF014 (-GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPE.c)
 */

__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::SetInertiaCenterpoint(
        __int64 a1,
        DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        _BYTE *a5)
{
  __int64 v5; // r14
  int WeakReferenceBase; // ebp
  __int64 v9; // rbx
  struct DirectComposition::CResourceMarshaler *v10; // rax
  struct DirectComposition::CWeakReferenceBase *v11; // rsi
  struct DirectComposition::CWeakReferenceBase *v13; // [rsp+50h] [rbp+8h] BYREF

  v5 = a3;
  WeakReferenceBase = 0;
  v9 = *(_QWORD *)(a1 + 8LL * a3 + 328);
  if ( v9 )
    v10 = *(struct DirectComposition::CResourceMarshaler **)(v9 + 16);
  else
    v10 = 0LL;
  if ( a4 == v10 )
  {
    if ( v9 && !v10 )
    {
      DirectComposition::CApplicationChannel::ReleaseWeakReference(
        a2,
        *(struct DirectComposition::CWeakReferenceBase **)(a1 + 8LL * a3 + 328));
      *(_QWORD *)(a1 + 8 * v5 + 328) = 0LL;
LABEL_14:
      *(_DWORD *)(a1 + 16) &= (_DWORD)v5 != 0 ? -268435457 : -134217729;
      *a5 = 1;
    }
  }
  else
  {
    v11 = 0LL;
    v13 = 0LL;
    if ( !a4 )
    {
LABEL_8:
      if ( v9 )
        DirectComposition::CApplicationChannel::ReleaseWeakReference(
          a2,
          (struct DirectComposition::CWeakReferenceBase *)v9);
      *(_QWORD *)(a1 + 8 * v5 + 328) = v11;
      goto LABEL_14;
    }
    WeakReferenceBase = DirectComposition::CApplicationChannel::GetWeakReferenceBase(a2, a4, &v13);
    if ( WeakReferenceBase >= 0 )
    {
      v11 = v13;
      goto LABEL_8;
    }
  }
  return (unsigned int)WeakReferenceBase;
}
