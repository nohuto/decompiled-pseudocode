/*
 * XREFs of ?bFilteredOut@PFEOBJ@@QAEHPAU_EFFILTER_INFO@@@Z @ 0x88D68
 * Callers:
 *     ?bScanLists@FHOBJ@@QAEHPAVEFSOBJ@@KPAU_EFFILTER_INFO@@@Z @ 0x88C9C (-bScanLists@FHOBJ@@QAEHPAVEFSOBJ@@KPAU_EFFILTER_INFO@@@Z.c)
 *     ?bScanLists@FHOBJ@@QAEHPAVEFSOBJ@@PBGKPAU_EFFILTER_INFO@@@Z @ 0x89B06 (-bScanLists@FHOBJ@@QAEHPAVEFSOBJ@@PBGKPAU_EFFILTER_INFO@@@Z.c)
 * Callees:
 *     ?jMapCharset@@YGEEAAVPFEOBJ@@@Z @ 0x4AF54 (-jMapCharset@@YGEEAAVPFEOBJ@@@Z.c)
 *     ?bFilterNotEnum@PFEOBJ@@QAEHXZ @ 0x88E14 (-bFilterNotEnum@PFEOBJ@@QAEHXZ.c)
 */

int __thiscall PFEOBJ::bFilteredOut(PFEOBJ *this, struct _EFFILTER_INFO *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // edi
  unsigned __int8 v8; // bl
  int v10; // [esp+10h] [ebp-4h]

  v3 = *(_DWORD *)this;
  v4 = *(_DWORD *)(*(_DWORD *)this + 8);
  v10 = *(_DWORD *)(v3 + 20);
  if ( (v4 & 2) != 0 )
    return 1;
  v5 = *(_DWORD *)(*(_DWORD *)(v3 + 20) + 48);
  if ( (v5 & 0x800000) != 0 )
    return 1;
  if ( (v4 & 8) != 0 )
    return 1;
  v6 = 0;
  if ( *((_DWORD *)a2 + 6) )
  {
    if ( (v5 & 2) != 0 )
      return 1;
  }
  if ( *((_DWORD *)a2 + 3) && (v5 & 1) != 0 )
    return 1;
  if ( *((_DWORD *)a2 + 4) && (v5 & 1) == 0 )
    return 1;
  if ( *(_DWORD *)a2
    && (v4 & 1) == 0
    && (v5 & 2) != 0
    && (*((_DWORD *)a2 + 1) != *(_DWORD *)(v10 + 128) || *((_DWORD *)a2 + 2) != *(_DWORD *)(v10 + 132)) )
  {
    return 1;
  }
  if ( *((_DWORD *)a2 + 7) && *((_DWORD *)a2 + 8) && (v5 & 2) != 0 )
    return 1;
  if ( PFEOBJ::bFilterNotEnum(this) || *((_DWORD *)a2 + 5) && (*(_BYTE *)(*(_DWORD *)this + 8) & 1) == 0 )
    return 1;
  if ( (*(_BYTE *)(*(_DWORD *)this + 8) & 0x44) != 0 )
    return 1;
  if ( *((_DWORD *)a2 + 9) != 1 )
  {
    v8 = *((_BYTE *)a2 + 36);
    if ( jMapCharset(v8, this) != v8 )
      return 1;
  }
  return v6;
}
