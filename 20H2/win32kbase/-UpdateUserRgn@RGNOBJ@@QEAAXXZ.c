/*
 * XREFs of ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0040510
 * Callers:
 *     GreSetRectRgn @ 0x1C001CDA0 (GreSetRectRgn.c)
 *     GreDeleteObject @ 0x1C0039BA0 (GreDeleteObject.c)
 *     NtGdiDeleteObjectApp @ 0x1C003A900 (NtGdiDeleteObjectApp.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003DA14 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C003EE60 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreCombineRgn @ 0x1C003F0E0 (GreCombineRgn.c)
 *     SetRectRgnIndirect @ 0x1C00403F0 (SetRectRgnIndirect.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00462B0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreGetRegionData @ 0x1C0090460 (GreGetRegionData.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C00455B0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

void __fastcall RGNOBJ::UpdateUserRgn(RGNOBJ *this)
{
  _DWORD *v2; // rsi
  unsigned int v3; // ebx
  __int64 v4; // rdi
  unsigned int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // r13d
  unsigned int v9; // r9d
  __int64 v10; // r14
  unsigned int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rdx
  _DWORD *v14; // rdx
  __int64 v15; // rcx

  v2 = *(_DWORD **)this;
  if ( *(_QWORD *)this )
  {
    v3 = (unsigned __int16)*v2 | (*v2 >> 8) & 0xFF0000;
    if ( v3 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)*v2,
                                    1)
             + 13) == HIWORD(v3) )
          v3 = (unsigned __int16)v3;
      }
      else
      {
        v3 = (unsigned __int16)*v2;
      }
    }
    v4 = *((_QWORD *)gpHandleManager + 2);
    v5 = *(_DWORD *)(v4 + 2056);
    if ( v3 >= v5 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
    {
      v10 = 0LL;
      v8 = 1;
    }
    else
    {
      if ( v3 >= v5 )
        v6 = ((v3 - v5) >> 16) + 1;
      else
        v6 = 0LL;
      v7 = *(_QWORD *)(v4 + 8 * v6 + 8);
      v8 = 1;
      if ( (_DWORD)v6 )
        v9 = v3 + ((1 - (_DWORD)v6) << 16) - v5;
      else
        v9 = v3;
      v10 = 0LL;
      if ( v9 < *(_DWORD *)(v7 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v7 + 24) + 8LL * (v9 >> 8)) + 16LL * (unsigned __int8)v9 + 8) )
      {
        v10 = *(_QWORD *)v7 + 24LL * v9;
      }
    }
    if ( v3 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v3,
                                    1)
             + 13) == HIWORD(v3) )
          v3 = (unsigned __int16)v3;
      }
      else
      {
        v3 = (unsigned __int16)v3;
      }
    }
    v11 = *(_DWORD *)(v4 + 2056);
    if ( v3 >= v11 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
      goto LABEL_42;
    if ( v3 >= v11 )
      v12 = ((v3 - v11) >> 16) + 1;
    else
      v12 = 0LL;
    v13 = *(_QWORD *)(v4 + 8 * v12 + 8);
    if ( (_DWORD)v12 )
      v3 += ((1 - (_DWORD)v12) << 16) - v11;
    if ( v3 >= *(_DWORD *)(v13 + 20) )
LABEL_42:
      v14 = 0LL;
    else
      v14 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8LL * (v3 >> 8)) + 16LL * (unsigned __int8)v3 + 8);
    if ( v14 != v2 )
      v10 = 0LL;
    v15 = *(_QWORD *)(v10 + 16);
    if ( v15 && (*(_DWORD *)v15 & 0x10) != 0 )
    {
      if ( v2[21] != 1 )
        v8 = (v2[20] > 0x38u) + 2;
      *(_DWORD *)(v15 + 4) = v8;
      *(_OWORD *)(v15 + 8) = *(_OWORD *)(*(_QWORD *)this + 96LL);
    }
  }
}
