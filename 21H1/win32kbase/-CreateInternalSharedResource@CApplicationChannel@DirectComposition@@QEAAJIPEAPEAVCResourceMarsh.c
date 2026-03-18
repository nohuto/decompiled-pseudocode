/*
 * XREFs of ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00B7114
 * Callers:
 *     ?CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z @ 0x1C008E2AC (-CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z.c)
 * Callees:
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C00B7208 (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?CheckForShellResourceAccess@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C00B7258 (-CheckForShellResourceAccess@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@.c)
 *     CreateSharedResourceObject @ 0x1C00B7294 (CreateSharedResourceObject.c)
 *     GetSharedResourceData @ 0x1C00B7394 (GetSharedResourceData.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateInternalSharedResource(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        PVOID *a3)
{
  int v6; // ebx
  char *v7; // rdi
  __int128 v9; // [rsp+20h] [rbp-20h] BYREF
  __int64 (__fastcall *v10)(char *, _QWORD, PVOID *); // [rsp+30h] [rbp-10h]
  PVOID Object; // [rsp+70h] [rbp+30h] BYREF

  *a3 = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  if ( (unsigned __int8)GetSharedResourceData(a2, &v9) )
  {
    Object = 0LL;
    v6 = CreateSharedResourceObject((unsigned int)v9, &Object);
    if ( v6 >= 0 )
    {
      v7 = (char *)Object;
      if ( v10 )
      {
        Object = 0LL;
        v6 = v10(v7 + 24, a2, &Object);
        if ( v6 >= 0 )
        {
          v6 = DirectComposition::CApplicationChannel::CheckForShellResourceAccess(
                 this,
                 (struct DirectComposition::CResourceMarshaler *)Object);
          if ( v6 < 0
            || (v6 = DirectComposition::CApplicationChannel::RegisterResource(
                       this,
                       (struct DirectComposition::CResourceMarshaler *)Object),
                v6 < 0) )
          {
            if ( Object )
              (*(void (__fastcall **)(PVOID, __int64))(*(_QWORD *)Object + 80LL))(Object, 1LL);
          }
          else
          {
            *a3 = Object;
          }
        }
      }
      else
      {
        v6 = -1073741811;
      }
      ObfDereferenceObject(v7);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
