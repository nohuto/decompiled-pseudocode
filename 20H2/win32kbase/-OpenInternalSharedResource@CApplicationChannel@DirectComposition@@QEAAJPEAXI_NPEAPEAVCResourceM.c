/*
 * XREFs of ?OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0064AFC
 * Callers:
 *     ?OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z @ 0x1C0064C10 (-OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z.c)
 * Callees:
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C00642CC (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?CheckForShellResourceAccess@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C006431C (-CheckForShellResourceAccess@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@.c)
 *     GetSharedResourceData @ 0x1C0064458 (GetSharedResourceData.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C0094F24 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::OpenInternalSharedResource(
        DirectComposition::CConnection **this,
        void *a2,
        unsigned int a3,
        __int64 a4,
        struct DirectComposition::CResourceMarshaler **Object)
{
  struct DirectComposition::CResourceMarshaler **v5; // r15
  char v8; // r9
  void *v9; // r10
  __int64 (__fastcall *v10)(struct DirectComposition::CResourceMarshaler **, _QWORD, struct DirectComposition::CResourceMarshaler ***); // rdi
  unsigned int v11; // edx
  int v12; // eax
  struct DirectComposition::CResourceMarshaler **v13; // rsi
  int v14; // ebx
  __int128 v16; // [rsp+20h] [rbp-20h] BYREF
  __int64 (__fastcall *v17)(struct DirectComposition::CResourceMarshaler **, _QWORD, struct DirectComposition::CResourceMarshaler ***); // [rsp+30h] [rbp-10h]

  v5 = Object;
  v17 = 0LL;
  *Object = 0LL;
  v16 = 0LL;
  if ( GetSharedResourceData(a3, (__int64)&v16) )
  {
    Object = 0LL;
    if ( v8 )
    {
      Object = 0LL;
      v11 = 2;
      v10 = v17;
    }
    else
    {
      v10 = (__int64 (__fastcall *)(struct DirectComposition::CResourceMarshaler **, _QWORD, struct DirectComposition::CResourceMarshaler ***))*((_QWORD *)&v16 + 1);
      v11 = 1;
    }
    v12 = DirectComposition::ResourceObject::ResolveHandle(
            v9,
            v11,
            1,
            (struct DirectComposition::ResourceObject **)&Object);
    v13 = Object;
    v14 = v12;
    if ( v12 >= 0 )
    {
      if ( v10 )
      {
        Object = 0LL;
        v14 = v10(v13 + 3, a3, &Object);
        if ( v14 >= 0 )
        {
          v14 = DirectComposition::CApplicationChannel::CheckForShellResourceAccess(
                  this,
                  (struct DirectComposition::CResourceMarshaler *)Object);
          if ( v14 < 0
            || (v14 = DirectComposition::CApplicationChannel::RegisterResource(
                        (DirectComposition::CApplicationChannel *)this,
                        (struct DirectComposition::CResourceMarshaler *)Object),
                v14 < 0) )
          {
            if ( Object )
              (*((void (__fastcall **)(struct DirectComposition::CResourceMarshaler **, __int64))*Object + 10))(
                Object,
                1LL);
          }
          else
          {
            *v5 = (struct DirectComposition::CResourceMarshaler *)Object;
          }
        }
      }
      else
      {
        v14 = -1073741811;
      }
      ObfDereferenceObject(v13);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v14;
}
