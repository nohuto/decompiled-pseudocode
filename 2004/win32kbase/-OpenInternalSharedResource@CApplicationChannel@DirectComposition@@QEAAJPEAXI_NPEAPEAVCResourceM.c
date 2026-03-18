/*
 * XREFs of ?OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00A823C
 * Callers:
 *     ?OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z @ 0x1C00A819C (-OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z.c)
 * Callees:
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C002F9D4 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C009EA14 (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?CheckForShellResourceAccess@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C00A86B8 (-CheckForShellResourceAccess@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@.c)
 *     GetSharedResourceData @ 0x1C00A87F4 (GetSharedResourceData.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::OpenInternalSharedResource(
        DirectComposition::CApplicationChannel *this,
        void *a2,
        unsigned int a3,
        __int64 a4,
        struct DirectComposition::CResourceMarshaler **Object)
{
  struct DirectComposition::CResourceMarshaler **v5; // r15
  __int64 v8; // r8
  char v9; // r9
  void *v10; // r10
  __int64 (__fastcall *v11)(struct DirectComposition::CResourceMarshaler **, _QWORD, struct DirectComposition::CResourceMarshaler ***); // rdi
  __int64 v12; // rdx
  int v13; // eax
  struct DirectComposition::CResourceMarshaler **v14; // rsi
  int v15; // ebx
  __int128 v17; // [rsp+20h] [rbp-20h] BYREF
  __int64 (__fastcall *v18)(struct DirectComposition::CResourceMarshaler **, _QWORD, struct DirectComposition::CResourceMarshaler ***); // [rsp+30h] [rbp-10h]

  v5 = Object;
  v18 = 0LL;
  *Object = 0LL;
  v17 = 0LL;
  if ( (unsigned __int8)GetSharedResourceData(a3, &v17) )
  {
    Object = 0LL;
    LOBYTE(v8) = 1;
    if ( v9 )
    {
      Object = 0LL;
      v12 = 2LL;
      v11 = v18;
    }
    else
    {
      v11 = (__int64 (__fastcall *)(struct DirectComposition::CResourceMarshaler **, _QWORD, struct DirectComposition::CResourceMarshaler ***))*((_QWORD *)&v17 + 1);
      v12 = 1LL;
    }
    v13 = DirectComposition::ResourceObject::ResolveHandle(
            v10,
            v12,
            v8,
            (struct DirectComposition::ResourceObject **)&Object);
    v14 = Object;
    v15 = v13;
    if ( v13 >= 0 )
    {
      if ( v11 )
      {
        Object = 0LL;
        v15 = v11(v14 + 3, a3, &Object);
        if ( v15 >= 0 )
        {
          v15 = DirectComposition::CApplicationChannel::CheckForShellResourceAccess(
                  this,
                  (struct DirectComposition::CResourceMarshaler *)Object);
          if ( v15 < 0
            || (v15 = DirectComposition::CApplicationChannel::RegisterResource(
                        this,
                        (struct DirectComposition::CResourceMarshaler *)Object),
                v15 < 0) )
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
        v15 = -1073741811;
      }
      ObfDereferenceObject(v14);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v15;
}
