/*
 * XREFs of NtQueryCompositionSurfaceBinding @ 0x1C0004DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C00054E8 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z @ 0x1C0005818 (-QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0005A8C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C00072FC (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceBinding(CCompositionSurface *a1, unsigned __int64 a2, char *a3)
{
  unsigned __int64 *v4; // rbx
  unsigned __int64 v6; // rsi
  char v7; // r8
  int Binding; // ebx
  CCompositionSurface *v10; // [rsp+28h] [rbp-570h] BYREF
  PVOID Object; // [rsp+30h] [rbp-568h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-560h]
  char *v13; // [rsp+48h] [rbp-550h]
  HANDLE Src[164]; // [rsp+50h] [rbp-548h] BYREF

  v4 = (unsigned __int64 *)a2;
  v10 = a1;
  v13 = a3;
  v6 = 0LL;
  v12 = 0LL;
  Object = 0LL;
  memset(Src, 0, sizeof(Src));
  if ( a2 )
  {
    if ( a2 + 8 < a2 || a2 + 8 > MmUserProbeAddress )
      v4 = (unsigned __int64 *)MmUserProbeAddress;
    v6 = *v4;
    v12 = *v4;
  }
  KeEnterCriticalRegion();
  Binding = CompositionSurfaceObject::ResolveHandle(a1, 1u, v7, (struct CompositionSurfaceObject **)&Object);
  if ( Binding >= 0 )
  {
    v10 = 0LL;
    Binding = CompositionSurfaceObject::LockForRead((CompositionSurfaceObject *)Object, &v10);
    if ( Binding >= 0 )
    {
      Binding = CCompositionSurface::QueryBinding(v10, v6, (struct CSM_BUFFER_INFO *)Src);
      CCompositionSurface::UnlockAndRelease(v10);
    }
    ObfDereferenceObject(Object);
  }
  if ( a3 )
  {
    if ( a3 + 1312 < a3 || (unsigned __int64)(a3 + 1312) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(a3, Src, 0x520uLL);
  }
  else
  {
    Binding = -1073741811;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)Binding;
}
