/*
 * XREFs of HmgDecProcessHandleCount @ 0x1C007F53C
 * Callers:
 *     HmgAlloc @ 0x1C007AF10 (HmgAlloc.c)
 *     HmgSetOwner @ 0x1C007B240 (HmgSetOwner.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C007B980 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     GreCreateRectRgnIndirect @ 0x1C007CB20 (GreCreateRectRgnIndirect.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C007D2B0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     GreSetDCOwnerEx @ 0x1C0089500 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C00A8CA0 (GreSetBrushOwner.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0076C90 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C007B8A0 (GreReleaseHmgrSemaphore.c)
 *     ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1C007F590 (-GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z.c)
 */

void __fastcall HmgDecProcessHandleCount(unsigned int a1)
{
  int v1; // edx
  __int64 v2; // rcx
  struct _W32PROCESS *W32ProcessFromId; // rbx
  int v4; // r8d
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // r8d
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 && a1 != -2147483630 )
  {
    Object = 0LL;
    W32ProcessFromId = GetW32ProcessFromId(a1, (struct _EPROCESS **)&Object);
    if ( W32ProcessFromId )
    {
      GreAcquireHmgrSemaphore(v2, v1, v4);
      --*((_DWORD *)W32ProcessFromId + 15);
      GreReleaseHmgrSemaphore(v6, v5, v7);
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
}
