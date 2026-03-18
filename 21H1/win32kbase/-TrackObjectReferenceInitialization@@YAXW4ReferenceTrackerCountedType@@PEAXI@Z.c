/*
 * XREFs of ?TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z @ 0x1C0035058
 * Callers:
 *     ?InitializeClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C000E720 (-InitializeClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C007B980 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C007D2B0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 * Callees:
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C01574E8 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall TrackObjectReferenceInitialization(
        unsigned int a1,
        struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *a2,
        unsigned int a3)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v4; // rdi
  __int64 v5; // rbx

  if ( a2 )
  {
    v4 = *(&qword_1C024D3D8 + 2 * a1);
    if ( v4 )
    {
      if ( a3 )
      {
        v5 = a3;
        do
        {
          NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v4, a2, 1);
          --v5;
        }
        while ( v5 );
      }
    }
  }
}
