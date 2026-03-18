/*
 * XREFs of ?CleanupCursorObject@@YGXPAUtagCURSOR@@@Z @ 0x787CC
 * Callers:
 *     ?_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z @ 0x785EE (-_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z.c)
 * Callees:
 *     _GreDereferenceObject@8 @ 0x206B0 (_GreDereferenceObject@8.c)
 *     _GreOnCURSINFODestroy@4 @ 0x78876 (_GreOnCURSINFODestroy@4.c)
 */

void __cdecl CleanupCursorObject(struct tagCURSOR *a1)
{
  int v1; // ecx
  int v2; // esi
  HSURF v3; // ecx
  HSURF v4; // ecx

  v2 = v1;
  if ( *(_WORD *)(v1 + 28) )
  {
    Win32FreePool(*(_DWORD *)(v1 + 32));
    *(_DWORD *)(v2 + 32) = 0;
    *(_DWORD *)(v2 + 28) = 0;
  }
  if ( *(_WORD *)(v2 + 36) )
  {
    UserDeleteAtom(*(unsigned __int16 *)(v2 + 36));
    *(_WORD *)(v2 + 36) = 0;
  }
  if ( (*(_BYTE *)(v2 + 44) & 8) != 0 )
  {
    DestroyAniIcon(a1);
  }
  else
  {
    GreOnCURSINFODestroy();
    v3 = *(HSURF *)(v2 + 52);
    if ( v3 )
    {
      GreDereferenceObject(v3, 0);
      GreDecQuotaCount(*(_DWORD *)(v2 + 12));
      *(_DWORD *)(v2 + 52) = 0;
    }
    v4 = *(HSURF *)(v2 + 56);
    if ( v4 )
    {
      GreDereferenceObject(v4, 0);
      GreDecQuotaCount(*(_DWORD *)(v2 + 12));
      *(_DWORD *)(v2 + 56) = 0;
    }
    if ( *(_DWORD *)(v2 + 80) )
    {
      GreDeleteObject(*(_DWORD *)(v2 + 80));
      GreDecQuotaCount(*(_DWORD *)(v2 + 12));
      *(_DWORD *)(v2 + 80) = 0;
    }
    if ( *(_DWORD *)(v2 + 60) )
    {
      GreDeleteObject(*(_DWORD *)(v2 + 60));
      *(_DWORD *)(v2 + 60) = 0;
    }
  }
}
