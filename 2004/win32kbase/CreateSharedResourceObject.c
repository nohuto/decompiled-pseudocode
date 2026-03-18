/*
 * XREFs of CreateSharedResourceObject @ 0x1C00A86F4
 * Callers:
 *     NtDCompositionCreateSharedResourceHandle @ 0x1C00A8350 (NtDCompositionCreateSharedResourceHandle.c)
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00A85C4 (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
 * Callees:
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C002F9D4 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C003C318 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C0096B50 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

__int64 __fastcall CreateSharedResourceObject(unsigned int a1, struct DirectComposition::ResourceObject **a2)
{
  __int64 v3; // r14
  int v4; // ebx
  __int64 v5; // rdi
  __int64 v7; // [rsp+28h] [rbp-58h]
  _DWORD v8[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v9; // [rsp+58h] [rbp-28h]
  __int64 v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+6Ch] [rbp-14h]
  __int64 v13; // [rsp+70h] [rbp-10h]
  __int64 v14; // [rsp+78h] [rbp-8h]
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v16; // [rsp+B8h] [rbp+38h] BYREF

  v16 = 0LL;
  v3 = a1;
  v4 = UserAllocDefaultCompositionSecurityDescriptor(0x80000000, &v16);
  if ( v4 >= 0 )
  {
    v5 = v16;
    v8[1] = 0;
    v12 = 0;
    Handle = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v14 = 0LL;
    LODWORD(v7) = 64;
    v8[0] = 48;
    v11 = 512;
    v13 = v16;
    v4 = CompositionObject::Create(
           (__int64)&Handle,
           (__int64)v8,
           3u,
           0LL,
           1,
           v7,
           (__int64 (__fastcall *)(_QWORD, __int64, __int64))DirectComposition::ResourceObject::ObjectInit,
           v3,
           &Handle);
    if ( v4 >= 0 )
    {
      v4 = DirectComposition::ResourceObject::ResolveHandle(Handle, 3LL, 0LL, a2);
      ObCloseHandle(Handle, 0);
    }
    Win32FreePool(v5);
  }
  return (unsigned int)v4;
}
