/*
 * XREFs of DCompositionCreateSynchronizationObject @ 0x1C01D43A0
 * Callers:
 *     NtDCompositionCreateSynchronizationObject @ 0x1C01D47A0 (NtDCompositionCreateSynchronizationObject.c)
 * Callees:
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C002D818 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C008C5C0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C01D6084 (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall DCompositionCreateSynchronizationObject(struct DirectComposition::SynchronizationObject **a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  struct DirectComposition::SynchronizationObject *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v8; // [rsp+28h] [rbp-58h]
  _DWORD v9[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v10; // [rsp+58h] [rbp-28h]
  __int64 v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+6Ch] [rbp-14h]
  struct DirectComposition::SynchronizationObject *v14; // [rsp+70h] [rbp-10h]
  __int64 v15; // [rsp+78h] [rbp-8h]
  HANDLE Handle; // [rsp+A8h] [rbp+28h] BYREF
  struct DirectComposition::SynchronizationObject *v17; // [rsp+B0h] [rbp+30h] BYREF

  v17 = 0LL;
  v3 = UserAllocDefaultCompositionSecurityDescriptor(0x80000000, (__int64 *)&v17);
  if ( v3 >= 0 )
  {
    v4 = v17;
    v9[1] = 0;
    v13 = 0;
    Handle = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v15 = 0LL;
    LODWORD(v8) = 40;
    v9[0] = 48;
    v12 = 512;
    v14 = v17;
    v3 = CompositionObject::Create(
           v2,
           (__int64)v9,
           3u,
           0LL,
           3,
           v8,
           (__int64 (__fastcall *)(_QWORD, __int64, __int64))DirectComposition::SynchronizationObject::ObjectInit,
           0LL,
           &Handle);
    if ( v3 >= 0 )
    {
      v17 = 0LL;
      v3 = DirectComposition::SynchronizationObject::ResolveHandle(Handle, 3u, 0, &v17);
      if ( v3 >= 0 )
        *a1 = v17;
      ObCloseHandle(Handle, 0);
    }
    Win32FreePool((__int64)v4, v5, v6);
  }
  return (unsigned int)v3;
}
