/*
 * XREFs of ?SetScaleOverride@BamoSystemCursorControllerPrincipal@@UEAAXM@Z @ 0x18002FF80
 * Callers:
 *     ??0SystemCursorController@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18002FED8 (--0SystemCursorController@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateScaleOverrideRemoteCacheStatic@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18013CE20 (-UpdateScaleOverrideRemoteCacheStatic@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@CAJPEAVB.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoSystemCursorControllerPrincipal::SetScaleOverride(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        float a2)
{
  float *v2; // rsi
  __int64 i; // rbx
  int v4; // edi
  int updated; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::BamoImpl::BamoImplObject *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = (float *)(this + 1);
  Microsoft::BamoImpl::InternalLock::InternalLock(&v8, this[3]);
  v2[10] = a2;
  for ( i = *((_QWORD *)v2 + 4); ; i = *(_QWORD *)(i + 48) )
  {
    if ( !i )
    {
      v4 = 0;
      goto LABEL_4;
    }
    if ( *(_BYTE *)(i + 32) )
    {
      updated = BamoImpl::BamoSystemCursorControllerPrincipalImpl::UpdateScaleOverrideRemoteCacheStatic(
                  (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                  (struct BamoImpl::BamoSystemCursorControllerPrincipalImpl *)v2);
      v4 = updated;
      if ( updated < 0 )
        break;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D7,
    (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
    (const char *)(unsigned int)updated,
    v6);
LABEL_4:
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xC45C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v4,
      v6);
    __debugbreak();
  }
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v8);
}
