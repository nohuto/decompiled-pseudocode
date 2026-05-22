/*
 * XREFs of ?SetUniqueId@BamoDataProviderPrincipal@@UEAAXAEBU_LUID@@@Z @ 0x18003A7A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateUniqueIdRemoteCacheStatic@BamoDataProviderPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180144B94 (-UpdateUniqueIdRemoteCacheStatic@BamoDataProviderPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Mi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoDataProviderPrincipal::SetUniqueId(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        const struct _LUID *a2)
{
  struct _LUID *v3; // rsi
  struct _LUID i; // rbx
  int v5; // edi
  int updated; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _LUID *)(this + 1);
  Microsoft::BamoImpl::InternalLock::InternalLock(&v9, this[3]);
  v3[5] = *a2;
  for ( i = v3[4]; ; i = *(struct _LUID *)(*(_QWORD *)&i + 48LL) )
  {
    if ( !*(_QWORD *)&i )
    {
      v5 = 0;
      goto LABEL_4;
    }
    if ( *(_BYTE *)(*(_QWORD *)&i + 32LL) )
    {
      updated = BamoImpl::BamoDataProviderPrincipalImpl::UpdateUniqueIdRemoteCacheStatic(
                  *(struct Microsoft::BamoImpl::BamoStubImpl **)&i,
                  (struct BamoImpl::BamoDataProviderPrincipalImpl *)v3);
      v5 = updated;
      if ( updated < 0 )
        break;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D7,
    (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
    (const char *)(unsigned int)updated);
LABEL_4:
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1D5D,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v5,
      v7);
    __debugbreak();
  }
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9);
}
