/*
 * XREFs of NtFlipObjectCreate @ 0x1C0068640
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJPEAV1@PEAXPEAPEAVIDxgkCompositionObject@@@Z3PEAPEAX@Z @ 0x1C0017E7C (-Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJP.c)
 */

__int64 __fastcall NtFlipObjectCreate(HANDLE *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  int v4; // edi
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF

  Handle = 0LL;
  KeEnterCriticalRegion();
  if ( a1 )
  {
    LOBYTE(v2) = 1;
    v4 = DxgkCompositionObject::Create(
           v2,
           0LL,
           0xF0000u,
           v3,
           4,
           272,
           (__int64 (__fastcall *)(PVOID, __int64, char *))FlipManagerObject::ObjectInit,
           0LL,
           &Handle);
    if ( v4 >= 0 )
    {
      if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a1 = Handle;
      Handle = 0LL;
    }
    if ( Handle )
      ObCloseHandle(Handle, 1);
  }
  else
  {
    v4 = -1073741811;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
