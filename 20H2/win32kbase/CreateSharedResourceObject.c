/*
 * XREFs of CreateSharedResourceObject @ 0x1C0064358
 * Callers:
 *     NtDCompositionCreateSharedResourceHandle @ 0x1C0064110 (NtDCompositionCreateSharedResourceHandle.c)
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00641D8 (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
 * Callees:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C0057640 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C0094F24 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C009B53C (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 */

__int64 __fastcall CreateSharedResourceObject(unsigned int a1, struct DirectComposition::ResourceObject **a2)
{
  __int64 v3; // r14
  int v4; // ebx
  __int64 v5; // rdi
  _DWORD v7[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v8; // [rsp+58h] [rbp-28h]
  __int64 v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+68h] [rbp-18h]
  int v11; // [rsp+6Ch] [rbp-14h]
  __int64 v12; // [rsp+70h] [rbp-10h]
  __int64 v13; // [rsp+78h] [rbp-8h]
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v15; // [rsp+B8h] [rbp+38h] BYREF

  v15 = 0LL;
  v3 = a1;
  v4 = UserAllocDefaultCompositionSecurityDescriptor(0x80000000, &v15);
  if ( v4 >= 0 )
  {
    v5 = v15;
    v7[1] = 0;
    v11 = 0;
    Handle = 0LL;
    v8 = 0LL;
    v9 = 0LL;
    v13 = 0LL;
    v7[0] = 48;
    v10 = 512;
    v12 = v15;
    v4 = CompositionObject::Create(
           &Handle,
           v7,
           3LL,
           0LL,
           1,
           64,
           DirectComposition::ResourceObject::ObjectInit,
           v3,
           &Handle);
    if ( v4 >= 0 )
    {
      v4 = DirectComposition::ResourceObject::ResolveHandle(Handle, 3u, 0, a2);
      ObCloseHandle(Handle, 0);
    }
    Win32FreePool(v5);
  }
  return (unsigned int)v4;
}
