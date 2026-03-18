/*
 * XREFs of HmgDecProcessHandleCount @ 0x1C003E660
 * Callers:
 *     GreSetBrushOwner @ 0x1C001C210 (GreSetBrushOwner.c)
 *     HmgSetOwner @ 0x1C003D030 (HmgSetOwner.c)
 *     HmgAlloc @ 0x1C003D700 (HmgAlloc.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C003DC40 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     GreSetDCOwnerEx @ 0x1C004A4E0 (GreSetDCOwnerEx.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1C003E6B4 (-GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C005EA20 (GreAcquireHmgrSemaphore.c)
 */

void __fastcall HmgDecProcessHandleCount(unsigned int a1)
{
  struct _W32PROCESS *W32ProcessFromId; // rbx
  __int64 v2; // rdx
  int v3; // ecx
  int v4; // r8d
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 && a1 != -2147483630 )
  {
    Object = 0LL;
    W32ProcessFromId = GetW32ProcessFromId(a1, (struct _EPROCESS **)&Object);
    if ( W32ProcessFromId )
    {
      GreAcquireHmgrSemaphore();
      --*((_DWORD *)W32ProcessFromId + 15);
      GreReleaseHmgrSemaphore(v3, v2, v4);
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
}
