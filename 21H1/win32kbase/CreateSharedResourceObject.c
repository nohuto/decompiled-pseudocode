/*
 * XREFs of CreateSharedResourceObject @ 0x1C00B7294
 * Callers:
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00B7114 (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
 *     NtDCompositionCreateSharedResourceHandle @ 0x1C00B74D0 (NtDCompositionCreateSharedResourceHandle.c)
 * Callees:
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C001B764 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C002D818 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C008C5C0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

__int64 __fastcall CreateSharedResourceObject(unsigned int a1, struct DirectComposition::ResourceObject **a2)
{
  __int64 v3; // r14
  int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v9; // [rsp+28h] [rbp-58h]
  _DWORD v10[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v11; // [rsp+58h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+6Ch] [rbp-14h]
  __int64 v15; // [rsp+70h] [rbp-10h]
  __int64 v16; // [rsp+78h] [rbp-8h]
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v18; // [rsp+B8h] [rbp+38h] BYREF

  v18 = 0LL;
  v3 = a1;
  v4 = UserAllocDefaultCompositionSecurityDescriptor(0x80000000, &v18);
  if ( v4 >= 0 )
  {
    v5 = v18;
    v10[1] = 0;
    v14 = 0;
    Handle = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    v16 = 0LL;
    LODWORD(v9) = 64;
    v10[0] = 48;
    v13 = 512;
    v15 = v18;
    v4 = CompositionObject::Create(
           (__int64)&Handle,
           (__int64)v10,
           3u,
           0LL,
           1,
           v9,
           (__int64 (__fastcall *)(_QWORD, __int64, __int64))DirectComposition::ResourceObject::ObjectInit,
           v3,
           &Handle);
    if ( v4 >= 0 )
    {
      v4 = DirectComposition::ResourceObject::ResolveHandle(Handle, 3LL, 0LL, a2);
      ObCloseHandle(Handle, 0);
    }
    Win32FreePool(v5, v6, v7);
  }
  return (unsigned int)v4;
}
