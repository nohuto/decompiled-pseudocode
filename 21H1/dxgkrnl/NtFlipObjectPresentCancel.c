/*
 * XREFs of NtFlipObjectPresentCancel @ 0x1C0067950
 * Callers:
 *     <none>
 * Callees:
 *     ?PresentCancel@FlipManagerObject@@QEAAJAEA_K@Z @ 0x1C0066948 (-PresentCancel@FlipManagerObject@@QEAAJAEA_K@Z.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0068918 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtFlipObjectPresentCancel(void *a1, unsigned __int64 *a2)
{
  char v3; // r8
  int v4; // ebx
  FlipManagerObject *v5; // rdi
  FlipManagerObject *v7; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v8 = *a2;
  }
  KeEnterCriticalRegion();
  v4 = FlipManagerObject::ResolveHandle(a1, 2u, v3, &v7);
  v5 = v7;
  if ( v4 >= 0 )
    v4 = FlipManagerObject::PresentCancel(v7, &v8);
  if ( v5 )
    ObfDereferenceObject(v5);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
