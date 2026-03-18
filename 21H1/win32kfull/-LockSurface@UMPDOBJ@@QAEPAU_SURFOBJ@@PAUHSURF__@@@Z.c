/*
 * XREFs of ?LockSurface@UMPDOBJ@@QAEPAU_SURFOBJ@@PAUHSURF__@@@Z @ 0x1F3D38
 * Callers:
 *     _NtGdiEngLockSurface@4 @ 0x218894 (_NtGdiEngLockSurface@4.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

struct _SURFOBJ *__thiscall UMPDOBJ::LockSurface(UMPDOBJ *this, HSURF hsurf)
{
  int v2; // esi
  _DWORD *v3; // ebx
  SURFOBJ *v4; // eax
  unsigned int pvBits; // ecx
  SURFOBJ *v6; // edx
  HDEV hdev; // eax
  _DWORD v9[14]; // [esp+10h] [ebp-54h] BYREF
  SURFOBJ *pso; // [esp+48h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+4Ch] [ebp-18h]

  v2 = 0;
  v3 = 0;
  if ( !hsurf )
    return 0;
  v4 = EngLockSurface(hsurf);
  pso = v4;
  if ( !v4 )
    return 0;
  pvBits = (unsigned int)v4->pvBits;
  if ( pvBits && !v4->iType && pvBits >= (unsigned int)_MmSystemRangeStart )
  {
    v6 = pso;
  }
  else
  {
    v3 = EngAllocUserMem(0x3Cu, 0x706D7547u);
    v9[13] = v3;
    v6 = pso;
    if ( v3 )
    {
      qmemcpy(v9, pso, 0x34u);
      hdev = pso->hdev;
      if ( hdev )
        v9[3] = (_DWORD)hdev[3];
      ms_exc.registration.TryLevel = 0;
      *v3 = 1431130959;
      v3[1] = hsurf;
      qmemcpy(v3 + 2, v9, 0x34u);
      if ( v9[2] )
        v3[4] = *(_DWORD *)(v9[2] + 4);
      ms_exc.registration.TryLevel = -2;
      v2 = 0;
    }
  }
  EngUnlockSurface(v6);
  if ( v3 )
    return (struct _SURFOBJ *)(v3 + 2);
  return (struct _SURFOBJ *)v2;
}
