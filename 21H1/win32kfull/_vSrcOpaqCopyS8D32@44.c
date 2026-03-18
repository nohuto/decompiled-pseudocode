/*
 * XREFs of _vSrcOpaqCopyS8D32@44 @ 0x55F00
 * Callers:
 *     <none>
 * Callees:
 *     ?vGetBlendInfo@@YGXKPAVSURFACE@@KPAU_BLENDINFO@@@Z @ 0x835B8 (-vGetBlendInfo@@YGXKPAVSURFACE@@KPAU_BLENDINFO@@@Z.c)
 *     ?vClearTypeLookupTableLoop@@YGXKPAVSURFACE@@PAU_BLENDINFO@@KK@Z @ 0x8372C (-vClearTypeLookupTableLoop@@YGXKPAVSURFACE@@PAU_BLENDINFO@@KK@Z.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

_DWORD *__stdcall vSrcOpaqCopyS8D32(
        int a1,
        int a2,
        int a3,
        _DWORD *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        struct SURFACE *a9,
        struct _BLENDINFO *a10,
        void **a11)
{
  HSEMAPHORE v11; // esi
  unsigned __int8 *v12; // edx
  _DWORD *result; // eax
  _DWORD *v14; // ebx
  int v15; // ecx
  unsigned int v16; // [esp+0h] [ebp-74h]
  unsigned int v17; // [esp+0h] [ebp-74h]
  struct _BLENDINFO *v18; // [esp+4h] [ebp-70h]
  unsigned int v19; // [esp+4h] [ebp-70h]
  unsigned int v20[18]; // [esp+14h] [ebp-60h] BYREF
  CPPEH_RECORD ms_exc; // [esp+5Ch] [ebp-18h]
  int v22; // [esp+7Ch] [ebp+8h]
  int v23; // [esp+90h] [ebp+1Ch]

  v23 = a6 - a5;
  memset(v20, 0, 0x38u);
  v11 = ghsemEUDC2;
  v20[14] = (unsigned int)ghsemEUDC2;
  GreAcquireSemaphore(ghsemEUDC2);
  ms_exc.registration.TryLevel = 0;
  if ( *a11 != hCacheCT
    || a10 != (struct _BLENDINFO *)uBCacheCT
    || a9 != (struct SURFACE *)uFCacheCT
    || gulGamma != uGammaCacheCT )
  {
    vGetBlendInfo((unsigned int)a9, (struct SURFACE *)v20, v16, v18);
    vClearTypeLookupTableLoop((unsigned int)v20, a9, a10, v17, v19);
  }
  v12 = (unsigned __int8 *)(a2 + a1);
  v22 = a2 + a1;
  result = a4;
  v14 = &a4[a5];
  v15 = a8;
  while ( v15 )
  {
    for ( result = v14; ; ++result )
    {
      v20[16] = (unsigned int)result;
      v20[15] = (unsigned int)v12;
      if ( result >= &v14[v23] )
        break;
      *result = (&aulCacheCT)[*v12++];
    }
    v15 = --a8;
    v12 = (unsigned __int8 *)(a3 + v22);
    v22 += a3;
    v14 = (_DWORD *)((char *)v14 + a7);
  }
  ms_exc.registration.TryLevel = -2;
  if ( v11 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v11);
    return (_DWORD *)GreReleaseSemaphoreInternal(v11);
  }
  return result;
}
