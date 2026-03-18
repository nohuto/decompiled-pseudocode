/*
 * XREFs of HmgIncProcessHandleCountEx @ 0x1C00CEF34
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

__int64 __fastcall HmgIncProcessHandleCountEx(int a1, __int64 a2, int a3)
{
  unsigned int v4; // edi
  int v5; // edx
  __int64 v6; // rcx
  struct _W32PROCESS *W32ProcessFromId; // rbx
  int v8; // r8d
  __int64 v9; // rdx
  unsigned int v10; // ecx
  int v11; // r8d
  PVOID Object; // [rsp+48h] [rbp+20h] BYREF

  v4 = 1;
  if ( a1 && a1 != -2147483630 )
  {
    Object = 0LL;
    W32ProcessFromId = GetW32ProcessFromId(a1, (struct _EPROCESS **)&Object);
    if ( W32ProcessFromId )
    {
      GreAcquireHmgrSemaphore(v6, v5, v8);
      if ( a3 || *((_DWORD *)W32ProcessFromId + 15) < gProcessHandleQuota )
      {
        v10 = *((_DWORD *)W32ProcessFromId + 16);
        if ( ++*((_DWORD *)W32ProcessFromId + 15) > v10 )
          v10 = *((_DWORD *)W32ProcessFromId + 15);
        *((_DWORD *)W32ProcessFromId + 16) = v10;
      }
      else
      {
        v4 = 0;
      }
      GreReleaseHmgrSemaphore(v10, v9, v11);
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
  return v4;
}
