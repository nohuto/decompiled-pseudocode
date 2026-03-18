/*
 * XREFs of ?CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C02ECC0C
 * Callers:
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C02ECDE8 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000A564 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C000C6CC (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C012E6A4 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     ?SetUsedReservedFields@CCD_TOPOLOGY@@QEAA?AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODALITY_RESERVED_FIELD@@@Z @ 0x1C0130C88 (-SetUsedReservedFields@CCD_TOPOLOGY@@QEAA-AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODAL.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::CollectPathsFromLegacyVidPn(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this,
        struct DMMVIDPN *a2)
{
  struct DMMVIDPN *v3; // r11
  int v4; // r9d
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // r10
  __int64 v8; // r11
  int v9; // eax
  int v10; // ecx
  __int64 v11; // rax
  unsigned int v12; // r9d
  const struct _LUID *v13; // rdx
  __int64 v14; // rdi
  _QWORD *v15; // rcx
  int v16; // r9d
  __int64 v17; // rcx
  unsigned int v18; // r10d
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v23; // [rsp+60h] [rbp+8h] BYREF

  CCD_TOPOLOGY::SetUsedReservedFields(*(_QWORD *)this, &v23, 96);
  v4 = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(this, v3, 0);
  if ( v4 >= 0 )
  {
    v5 = *(_QWORD *)this;
    v6 = 0;
    v7 = *(_QWORD *)(v5 + 64);
    if ( *(_WORD *)(v7 + 20) )
    {
      do
      {
        if ( (((unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(_DWORD *)(272LL * v6 + v7 + 180)) - 1) & 0xFFFFFFFD) != 0 )
        {
          v9 = *(_DWORD *)(v8 + v7 + 148);
          v10 = *(_DWORD *)(v8 + v7 + 144);
        }
        else
        {
          v9 = *(_DWORD *)(v8 + v7 + 144);
          v10 = *(_DWORD *)(v8 + v7 + 148);
        }
        *(_DWORD *)(v8 + v7 + 204) = v10;
        *(_DWORD *)(v8 + v7 + 200) = v9;
        *(_DWORD *)(v8 + v7 + 224) = *(_DWORD *)(v8 + v7 + 144);
        *(_DWORD *)(v8 + v7 + 228) = *(_DWORD *)(v8 + v7 + 148);
        v11 = *(_QWORD *)(v8 + v7 + 48) | 0x820000LL;
        *(_QWORD *)(v8 + v7 + 216) = 0LL;
        *(_QWORD *)(v8 + v7 + 48) = v11;
        if ( (v11 & 0x4000000000000LL) == 0 )
        {
          v12 = v6;
          if ( v6 < *(unsigned __int16 *)(v7 + 20) )
          {
            v13 = (const struct _LUID *)(v8 + v7 + 64);
            do
            {
              v14 = 272LL * v12;
              if ( CCD_TOPOLOGY::IsMatchingSource(
                     (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v14 + v7 + 48),
                     v13,
                     *(_DWORD *)(v8 + v7 + 72)) )
              {
                *v15 |= 0x4000000000000uLL;
                *(_DWORD *)(v14 + v7 + 232) = v6 | 0xFE570000;
              }
              v12 = v16 + 1;
            }
            while ( v12 < *(unsigned __int16 *)(v7 + 20) );
          }
        }
        ++v6;
      }
      while ( v6 < *(unsigned __int16 *)(v7 + 20) );
    }
    v4 = 0;
  }
  v17 = v23;
  if ( v23 )
  {
    v18 = 0;
    if ( *(_WORD *)(*(_QWORD *)(v23 + 64) + 20LL) )
    {
      do
      {
        v19 = *(_QWORD *)(v17 + 64);
        v20 = v18++;
        v21 = 272 * v20;
        *(_OWORD *)(v21 + v19 + 280) = 0LL;
        *(_OWORD *)(v21 + v19 + 296) = 0LL;
        *(_QWORD *)(v21 + v19 + 312) = 0LL;
      }
      while ( v18 < *(unsigned __int16 *)(*(_QWORD *)(v17 + 64) + 20LL) );
    }
    *(_DWORD *)(v17 + 88) = 0;
  }
  return (unsigned int)v4;
}
