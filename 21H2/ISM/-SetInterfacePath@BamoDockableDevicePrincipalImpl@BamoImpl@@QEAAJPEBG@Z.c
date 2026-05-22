/*
 * XREFs of ?SetInterfacePath@BamoDockableDevicePrincipalImpl@BamoImpl@@QEAAJPEBG@Z @ 0x180127F48
 * Callers:
 *     ?SetInterfacePath@BamoDockableDevicePrincipal@@UEAAJPEBG@Z @ 0x180127EF0 (-SetInterfacePath@BamoDockableDevicePrincipal@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyString@Util@BamoImpl@Microsoft@@YAJPEBGPEAPEAG@Z @ 0x1800E390C (-CopyString@Util@BamoImpl@Microsoft@@YAJPEBGPEAPEAG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1800F01BC (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-FreeProcessHeap@details@wil@@YAX0@ZU.c)
 *     ?UpdateInterfacePathRemoteCacheStatic@BamoDockableDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180128740 (-UpdateInterfacePathRemoteCacheStatic@BamoDockableDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubI.c)
 */

__int64 __fastcall BamoImpl::BamoDockableDevicePrincipalImpl::SetInterfacePath(
        wil::details **this,
        Microsoft::BamoImpl::Util *a2,
        unsigned __int16 **a3,
        const char *a4)
{
  int v5; // eax
  int v6; // ebx
  wil::details *i; // rbx
  int updated; // eax
  int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  wil::details *v12; // [rsp+40h] [rbp+18h] BYREF

  v5 = Microsoft::BamoImpl::Util::CopyString(a2, (unsigned __int16 *)&v12, a3, a4);
  v6 = v5;
  if ( v5 >= 0 )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void wil::details::FreeProcessHeap(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      this + 5,
      v12);
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x715F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v5);
  }
  if ( v6 >= 0 )
  {
    for ( i = this[4]; ; i = (wil::details *)*((_QWORD *)i + 6) )
    {
      if ( !i )
      {
        v10 = 0;
        goto LABEL_12;
      }
      if ( *((_BYTE *)i + 32) )
      {
        updated = BamoImpl::BamoDockableDevicePrincipalImpl::UpdateInterfacePathRemoteCacheStatic(
                    i,
                    (struct BamoImpl::BamoDockableDevicePrincipalImpl *)this);
        v10 = updated;
        if ( updated < 0 )
          break;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D7,
      (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
      (const char *)(unsigned int)updated);
LABEL_12:
    if ( v10 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        28668LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6FFA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
}
