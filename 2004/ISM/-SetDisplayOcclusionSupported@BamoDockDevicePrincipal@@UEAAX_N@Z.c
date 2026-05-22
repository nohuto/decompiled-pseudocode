/*
 * XREFs of ?SetDisplayOcclusionSupported@BamoDockDevicePrincipal@@UEAAX_N@Z @ 0x1801279D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E4 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateDisplayOcclusionSupportedRemoteCacheStatic@BamoDockDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1801281F8 (-UpdateDisplayOcclusionSupportedRemoteCacheStatic@BamoDockDevicePrincipalImpl@BamoImpl@@CAJPEAVB.c)
 */

void __fastcall BamoDockDevicePrincipal::SetDisplayOcclusionSupported(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        char a2)
{
  char *v3; // rsi
  __int64 i; // rbx
  int updated; // eax
  int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::BamoImpl::BamoImplObject *v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = (char *)(this + 1);
  Microsoft::BamoImpl::InternalLock::InternalLock(&v8, this[3]);
  v3[48] = a2;
  for ( i = *((_QWORD *)v3 + 4); ; i = *(_QWORD *)(i + 48) )
  {
    if ( !i )
    {
      v6 = 0;
      goto LABEL_7;
    }
    if ( *(_BYTE *)(i + 32) )
    {
      updated = BamoImpl::BamoDockDevicePrincipalImpl::UpdateDisplayOcclusionSupportedRemoteCacheStatic(
                  (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                  (struct BamoImpl::BamoDockDevicePrincipalImpl *)v3);
      v6 = updated;
      if ( updated < 0 )
        break;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D7,
    (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
    (const char *)(unsigned int)updated);
LABEL_7:
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      28055LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v8);
}
