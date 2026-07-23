/*
 * XREFs of _RtlpCopyRemoteDebugInformation@4 @ 0x4B33790E
 * Callers:
 *     _RtlQueryProcessDebugInformation@12 @ 0x4B336B50 (_RtlQueryProcessDebugInformation@12.c)
 * Callees:
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlpCommitQueryDebugInfo@8 @ 0x4B3378A8 (_RtlpCommitQueryDebugInfo@8.c)
 */

NTSTATUS __thiscall RtlpCopyRemoteDebugInformation(_DWORD *this)
{
  NTSTATUS result; // eax
  int v3; // esi
  int v4; // ecx
  ULONG_PTR v5; // [esp-10h] [ebp-90h]
  size_t v6; // [esp-4h] [ebp-84h]
  ULONG v7; // [esp+0h] [ebp-80h]
  _DWORD v8[26]; // [esp+10h] [ebp-70h] BYREF
  PVOID BaseAddress; // [esp+78h] [ebp-8h] BYREF
  int v10; // [esp+7Ch] [ebp-4h] BYREF

  BaseAddress = (char *)this + this[11];
  qmemcpy(v8, BaseAddress, sizeof(v8));
  v10 = v8[9];
  if ( v8[9] > this[11] || v8[9] < 0x68u )
    return -1073741823;
  HIDWORD(v5) = &v10;
  LODWORD(v5) = 0;
  result = NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, v5, (PSIZE_T)0x1000, 4u, v7);
  if ( result >= 0 )
  {
    this[9] = 104;
    v3 = v10 - 104;
    if ( RtlpCommitQueryDebugInfo(this, v10 - 104) )
    {
      LODWORD(v6) = v3;
      memcpy(this + 26, (char *)BaseAddress + 104, v6);
      v4 = this[8];
      if ( (v4 & 0x21C) != 0 )
      {
        this[14] = v8[14];
        this[19] = v8[19];
      }
      if ( (v4 & 0x41) != 0 )
        this[12] = v8[12];
      if ( (v4 & 0x20) != 0 )
        this[15] = v8[15];
      if ( (v4 & 2) != 0 )
        this[13] = v8[13];
      if ( (v4 & 0x80u) != 0 )
        this[18] = v8[18];
      if ( (v4 & 0xC00) != 0 )
        this[21] = v8[21];
      return 0;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
