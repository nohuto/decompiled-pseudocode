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

NTSTATUS __thiscall wil_details_StagingConfig_Load(ULONG *this, int a2, void *a3, int a4)
{
  ULONG *v4; // edi
  _WORD *v5; // esi
  unsigned int v6; // ebx
  NTSTATUS v7; // ecx
  PVOID v8; // eax
  PVOID Heap; // eax
  ULONG v11; // edx
  __int16 v12; // ax
  PVOID v13; // edx
  ULONG v14; // ecx
  char *v15; // ecx
  _WORD *v16; // ecx
  size_t v17; // [esp-4h] [ebp-40h]
  SIZE_T v18; // [esp-4h] [ebp-40h]
  ULONG v20; // [esp+10h] [ebp-2Ch] BYREF
  NTSTATUS v21; // [esp+14h] [ebp-28h]
  PVOID Buffer; // [esp+18h] [ebp-24h] BYREF
  PVOID BaseAddress; // [esp+1Ch] [ebp-20h]
  ULONG BufferSize; // [esp+20h] [ebp-1Ch] BYREF
  WNF_STATE_NAME v25; // [esp+24h] [ebp-18h] BYREF
  WNF_STATE_NAME StateName; // [esp+2Ch] [ebp-10h] BYREF

  LODWORD(v17) = 52;
  v4 = this;
  Buffer = a3;
  v5 = 0;
  memset(this, 0, v17);
  StateName.Data[0] = __WIL_WNF_WIL_MACHINE_FEATURE_STORE;
  StateName.Data[1] = 1099564858;
  BaseAddress = 0;
  v6 = a3 != 0 ? 0xC8 : 0;
  BufferSize = v6;
  v7 = NtQueryWnfStateData(&StateName, 0, 0, v4 + 2, a3, &BufferSize);
  v21 = v7;
  if ( !v7 )
  {
    if ( !Buffer )
      goto LABEL_5;
    v5 = Buffer;
  }
  if ( v7 != -1073741789 )
  {
    v8 = BaseAddress;
LABEL_19:
    if ( v7 || !v5 )
    {
      if ( v8 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
        return v21;
      }
      return v7;
    }
    v11 = BufferSize;
    if ( BufferSize > 4 )
      *((_BYTE *)v4 + 12) = *(_BYTE *)v5;
    if ( v11 >= 0x10
      && *((_BYTE *)v4 + 12) == 2
      && v5[1] >= 0x10u
      && v11 >= (unsigned __int16)v5[1] + 16 * (unsigned __int16)v5[3] + 12 * (unsigned int)(unsigned __int16)v5[2] )
    {
      v12 = v5[2];
      v13 = 0;
      Buffer = 0;
      if ( v12 )
      {
        v25.Data[0] = __WIL_WNF_WIL_MACHINE_FEATURE_STORE_MODIFIED;
        v25.Data[1] = 1099564858;
        v20 = 0;
        NtQueryWnfStateData(&v25, 0, 0, (PWNF_CHANGE_STAMP)&Buffer, 0, &v20);
        v13 = Buffer;
      }
      v4[5] = (ULONG)v5;
      v4[6] = (ULONG)(v5 + 8);
      v4[7] = (ULONG)&v5[6 * (unsigned __int16)v5[2] + 8];
      v4[8] = v13 != 0;
      if ( *(_BYTE *)v5 == 2 && *((_BYTE *)v5 + 1) < 2u )
      {
        v14 = (unsigned __int16)v5[1] + 16 * (unsigned __int16)v5[3] + 12 * (unsigned __int16)v5[2];
        v4[4] = 1;
LABEL_34:
        v4[10] = v14;
        v16 = BaseAddress;
        v4[9] = (ULONG)v5;
        if ( !v16 )
          v6 = 200;
        v4[11] = v6;
        v4[12] = v5 == v16;
        return 0;
      }
    }
    else
    {
      BufferSize = 16;
      *(_DWORD *)v5 = 0;
      *((_DWORD *)v5 + 1) = 0;
      *((_DWORD *)v5 + 2) = 0;
      *((_DWORD *)v5 + 3) = 0;
      v4 = this;
      v5[1] = 16;
      *v5 = 514;
      this[5] = (ULONG)v5;
      v15 = (char *)v5 + (unsigned __int16)v5[1];
      this[6] = (ULONG)v15;
      this[7] = (ULONG)&v15[12 * (unsigned __int16)v5[2]];
    }
    v14 = BufferSize;
    goto LABEL_34;
  }
LABEL_5:
  v8 = BaseAddress;
  while ( 1 )
  {
    if ( v6 < 0xC8 )
      v6 = 200;
    if ( v6 < BufferSize )
      v6 = BufferSize;
    if ( v6 < 0x10 )
      v6 = 16;
    if ( v8 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    LODWORD(v18) = v6;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
    BaseAddress = Heap;
    if ( !Heap )
      return -1073741670;
    BufferSize = v6;
    v7 = NtQueryWnfStateData(&StateName, 0, 0, v4 + 2, Heap, &BufferSize);
    v8 = BaseAddress;
    v21 = v7;
    v5 = BaseAddress;
    if ( v7 != -1073741789 )
      goto LABEL_19;
  }
}
