/*
 * XREFs of _wil_details_StagingConfig_Load@20 @ 0x4B30692A
 * Callers:
 *     _wil_StagingConfig_QueryFeatureState@20 @ 0x4B3A1088 (_wil_StagingConfig_QueryFeatureState@20.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtQueryWnfStateData@24 @ 0x4B2F3FB0 (_NtQueryWnfStateData@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __thiscall wil_details_StagingConfig_Load(_BYTE *this, int a2, int a3, int a4)
{
  _BYTE *v4; // edi
  int v5; // esi
  unsigned int v6; // ebx
  int WnfStateData; // ecx
  int v8; // eax
  int Heap; // eax
  unsigned int v11; // edx
  __int16 v12; // ax
  int v13; // edx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v18; // [esp+10h] [ebp-2Ch] BYREF
  int v19; // [esp+14h] [ebp-28h]
  int v20; // [esp+18h] [ebp-24h] BYREF
  int v21; // [esp+1Ch] [ebp-20h]
  unsigned int v22; // [esp+20h] [ebp-1Ch] BYREF
  _DWORD v23[2]; // [esp+24h] [ebp-18h] BYREF
  _DWORD v24[2]; // [esp+2Ch] [ebp-10h] BYREF

  v4 = this;
  v20 = a3;
  v5 = 0;
  memset(this, 0, 0x34u);
  v24[0] = __WIL_WNF_WIL_MACHINE_FEATURE_STORE;
  v24[1] = 1099564858;
  v21 = 0;
  v6 = a3 != 0 ? 0xC8 : 0;
  v22 = v6;
  WnfStateData = NtQueryWnfStateData((int)v24, 0, 0, (int)(v4 + 8), a3, (int)&v22);
  v19 = WnfStateData;
  if ( !WnfStateData )
  {
    if ( !v20 )
      goto LABEL_5;
    v5 = v20;
  }
  if ( WnfStateData != -1073741789 )
  {
    v8 = v21;
LABEL_19:
    if ( WnfStateData || !v5 )
    {
      if ( v8 )
      {
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v8);
        return v19;
      }
      return WnfStateData;
    }
    v11 = v22;
    if ( v22 > 4 )
      v4[12] = *(_BYTE *)v5;
    if ( v11 >= 0x10
      && v4[12] == 2
      && *(_WORD *)(v5 + 2) >= 0x10u
      && v11 >= *(unsigned __int16 *)(v5 + 2)
              + 16 * *(unsigned __int16 *)(v5 + 6)
              + 12 * (unsigned int)*(unsigned __int16 *)(v5 + 4) )
    {
      v12 = *(_WORD *)(v5 + 4);
      v13 = 0;
      v20 = 0;
      if ( v12 )
      {
        v23[0] = __WIL_WNF_WIL_MACHINE_FEATURE_STORE_MODIFIED;
        v23[1] = 1099564858;
        v18 = 0;
        NtQueryWnfStateData((int)v23, 0, 0, (int)&v20, 0, (int)&v18);
        v13 = v20;
      }
      *((_DWORD *)v4 + 5) = v5;
      *((_DWORD *)v4 + 6) = v5 + 16;
      *((_DWORD *)v4 + 7) = v5 + 16 + 12 * *(unsigned __int16 *)(v5 + 4);
      *((_DWORD *)v4 + 8) = v13 != 0;
      if ( *(_BYTE *)v5 == 2 && *(_BYTE *)(v5 + 1) < 2u )
      {
        v14 = *(unsigned __int16 *)(v5 + 2) + 16 * *(unsigned __int16 *)(v5 + 6) + 12 * *(unsigned __int16 *)(v5 + 4);
        *((_DWORD *)v4 + 4) = 1;
LABEL_34:
        *((_DWORD *)v4 + 10) = v14;
        v16 = v21;
        *((_DWORD *)v4 + 9) = v5;
        if ( !v16 )
          v6 = 200;
        *((_DWORD *)v4 + 11) = v6;
        *((_DWORD *)v4 + 12) = v5 == v16;
        return 0;
      }
    }
    else
    {
      v22 = 16;
      *(_DWORD *)v5 = 0;
      *(_DWORD *)(v5 + 4) = 0;
      *(_DWORD *)(v5 + 8) = 0;
      *(_DWORD *)(v5 + 12) = 0;
      v4 = this;
      *(_WORD *)(v5 + 2) = 16;
      *(_WORD *)v5 = 514;
      *((_DWORD *)this + 5) = v5;
      v15 = v5 + *(unsigned __int16 *)(v5 + 2);
      *((_DWORD *)this + 6) = v15;
      *((_DWORD *)this + 7) = v15 + 12 * *(unsigned __int16 *)(v5 + 4);
    }
    v14 = v22;
    goto LABEL_34;
  }
LABEL_5:
  v8 = v21;
  while ( 1 )
  {
    if ( v6 < 0xC8 )
      v6 = 200;
    if ( v6 < v22 )
      v6 = v22;
    if ( v6 < 0x10 )
      v6 = 16;
    if ( v8 )
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v8);
    Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, v6);
    v21 = Heap;
    if ( !Heap )
      return -1073741670;
    v22 = v6;
    WnfStateData = NtQueryWnfStateData((int)v24, 0, 0, (int)(v4 + 8), Heap, (int)&v22);
    v8 = v21;
    v19 = WnfStateData;
    v5 = v21;
    if ( WnfStateData != -1073741789 )
      goto LABEL_19;
  }
}
