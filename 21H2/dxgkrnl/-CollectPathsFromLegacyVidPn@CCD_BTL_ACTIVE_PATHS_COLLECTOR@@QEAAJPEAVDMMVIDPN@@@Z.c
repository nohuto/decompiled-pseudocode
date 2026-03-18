/*
 * XREFs of ?CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C03AA898
 * Callers:
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C03AAA6C (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0011EC8 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C0019678 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C01AB8B4 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     ?SetUsedReservedFields@CCD_TOPOLOGY@@QEAA?AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODALITY_RESERVED_FIELD@@@Z @ 0x1C01AC378 (-SetUsedReservedFields@CCD_TOPOLOGY@@QEAA-AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODAL.c)
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
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // r8d
  __int64 v13; // rax
  unsigned int v14; // r9d
  const struct _LUID *v15; // rdx
  __int64 v16; // rdi
  _QWORD *v17; // rcx
  int v18; // r9d
  __int64 v19; // rcx
  unsigned int v20; // r10d
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v25; // [rsp+60h] [rbp+8h] BYREF

  CCD_TOPOLOGY::SetUsedReservedFields(*(_QWORD *)this, &v25, 96);
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
        if ( (((unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(_DWORD *)(296LL * v6 + v7 + 188)) - 1) & 0xFFFFFFFD) != 0 )
        {
          v9 = *(_DWORD *)(v8 + v7 + 152);
          v10 = v9;
          v11 = *(_DWORD *)(v8 + v7 + 156);
        }
        else
        {
          v11 = *(_DWORD *)(v8 + v7 + 152);
          v10 = v11;
          v9 = *(_DWORD *)(v8 + v7 + 156);
        }
        v12 = *(_DWORD *)(v8 + v7 + 156);
        *(_DWORD *)(v8 + v7 + 212) = v9;
        *(_DWORD *)(v8 + v7 + 208) = v11;
        v13 = *(_QWORD *)(v8 + v7 + 56) | 0x820000LL;
        *(_QWORD *)(v8 + v7 + 224) = 0LL;
        *(_DWORD *)(v8 + v7 + 232) = v10;
        *(_DWORD *)(v8 + v7 + 236) = v12;
        *(_QWORD *)(v8 + v7 + 56) = v13;
        if ( (v13 & 0x4000000000000LL) == 0 )
        {
          v14 = v6;
          if ( v6 < *(unsigned __int16 *)(v7 + 20) )
          {
            v15 = (const struct _LUID *)(v8 + v7 + 72);
            do
            {
              v16 = 296LL * v14;
              if ( CCD_TOPOLOGY::IsMatchingSource(
                     (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v16 + v7 + 56),
                     v15,
                     *(_DWORD *)(v8 + v7 + 80)) )
              {
                *v17 |= 0x4000000000000uLL;
                *(_DWORD *)(v16 + v7 + 240) = v6 | 0xFE570000;
              }
              v14 = v18 + 1;
            }
            while ( v14 < *(unsigned __int16 *)(v7 + 20) );
          }
        }
        ++v6;
      }
      while ( v6 < *(unsigned __int16 *)(v7 + 20) );
    }
    v4 = 0;
  }
  v19 = v25;
  if ( v25 )
  {
    v20 = 0;
    if ( *(_WORD *)(*(_QWORD *)(v25 + 64) + 20LL) )
    {
      do
      {
        v21 = *(_QWORD *)(v19 + 64);
        v22 = v20++;
        v23 = 296 * v22;
        *(_OWORD *)(v23 + v21 + 312) = 0LL;
        *(_OWORD *)(v23 + v21 + 328) = 0LL;
        *(_QWORD *)(v23 + v21 + 344) = 0LL;
      }
      while ( v20 < *(unsigned __int16 *)(*(_QWORD *)(v19 + 64) + 20LL) );
    }
    *(_DWORD *)(v19 + 88) = 0;
  }
  return (unsigned int)v4;
}
