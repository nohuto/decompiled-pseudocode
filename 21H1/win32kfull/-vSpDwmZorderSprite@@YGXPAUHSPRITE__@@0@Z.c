/*
 * XREFs of ?vSpDwmZorderSprite@@YGXPAUHSPRITE__@@0@Z @ 0x24B82
 * Callers:
 *     _GreZorderSprite@16 @ 0x244DA (_GreZorderSprite@16.c)
 *     ?DwmMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@K@Z @ 0xD03E2 (-DwmMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@K@Z.c)
 * Callees:
 *     _DwmAsyncZorderSprite@12 @ 0x24C1E (_DwmAsyncZorderSprite@12.c)
 */

void __fastcall vSpDwmZorderSprite(int a1, int a2)
{
  int v2; // ebx
  int v3; // edi
  int v4; // esi
  _DWORD *v5; // ecx
  int v6; // eax
  _DWORD *v7; // edx
  char *v8; // eax
  int v9; // edx

  v2 = a2;
  v3 = 0;
  v4 = 0;
  if ( a1 )
  {
    LOBYTE(a2) = 15;
    v4 = HmgLock(a1, a2);
  }
  if ( v2 )
  {
    LOBYTE(a2) = 15;
    v3 = HmgLock(v2, a2);
  }
  if ( v4 )
  {
    v5 = (_DWORD *)(v4 + 16);
    v6 = *(_DWORD *)(v4 + 16);
    if ( *(_DWORD *)(v6 + 4) != v4 + 16
      || (v7 = *(_DWORD **)(v4 + 20), (_DWORD *)*v7 != v5)
      || ((*v7 = v6, *(_DWORD *)(v6 + 4) = v7, !v3) ? (v8 = (char *)g_pDwmState + 44) : (v8 = (char *)(v3 + 16)),
          v9 = *(_DWORD *)v8,
          *(char **)(*(_DWORD *)v8 + 4) != v8) )
    {
      __fastfail(3u);
    }
    *v5 = v9;
    *(_DWORD *)(v4 + 20) = v8;
    *(_DWORD *)(v9 + 4) = v5;
    *(_DWORD *)v8 = v5;
    UserReferenceDwmApiPort();
    DwmAsyncZorderSprite(v2);
  }
  if ( v3 )
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 8));
  if ( v4 )
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 8));
}
