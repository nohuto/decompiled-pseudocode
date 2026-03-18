/*
 * XREFs of NtQueryCompositionSurfaceFrameRate @ 0x1C0002340
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C00054E8 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C0005B0C (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C00072FC (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceFrameRate(__int64 a1, unsigned int *a2)
{
  unsigned int v4; // esi
  __int64 v5; // r8
  int v6; // ebx
  unsigned __int64 v7; // rcx
  int v8; // r10d
  unsigned int v9; // r8d
  unsigned int *v10; // r9
  __int64 v11; // r11
  unsigned int v12; // edx
  unsigned int v13; // ecx
  CCompositionSurface *v15; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  KeEnterCriticalRegion();
  LOBYTE(v5) = 1;
  v6 = DxgkCompositionObject::ResolveHandle(a1, 1LL, v5);
  if ( v6 >= 0 )
  {
    v15 = 0LL;
    v6 = CompositionSurfaceObject::LockForRead(0LL, &v15);
    if ( v6 >= 0 )
    {
      v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v8 = 0;
      v9 = -1;
      v10 = (unsigned int *)((char *)v15 + 56);
      v11 = 2LL;
      do
      {
        v12 = *v10;
        if ( *v10 )
        {
          if ( (unsigned int)v7 >= v12 && (unsigned int)v7 - v12 <= 0x3E8 )
          {
            v8 += v10[1];
            if ( v12 < v9 )
              v9 = *v10;
          }
        }
        v10 += 2;
        --v11;
      }
      while ( v11 );
      v13 = v7 - v9;
      if ( v8 && v13 )
        v4 = 1000 * v8 / v13;
      CCompositionSurface::UnlockAndRelease(v15);
    }
    ObfDereferenceObject(0LL);
  }
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v4;
  }
  else
  {
    v6 = -1073741811;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
