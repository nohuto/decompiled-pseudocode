/*
 * XREFs of _RtlpCopyRemoteDebugInformation@4 @ 0x4B33790E
 * Callers:
 *     _RtlQueryProcessDebugInformation@12 @ 0x4B336B50 (_RtlQueryProcessDebugInformation@12.c)
 * Callees:
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlpCommitQueryDebugInfo@8 @ 0x4B3378A8 (_RtlpCommitQueryDebugInfo@8.c)
 */

int __thiscall RtlpCopyRemoteDebugInformation(_DWORD *this)
{
  int result; // eax
  size_t v3; // esi
  int v4; // ecx
  _DWORD v5[26]; // [esp+10h] [ebp-70h] BYREF
  char *v6; // [esp+78h] [ebp-8h] BYREF
  int v7; // [esp+7Ch] [ebp-4h] BYREF

  v6 = (char *)this + this[11];
  qmemcpy(v5, v6, sizeof(v5));
  v7 = v5[9];
  if ( v5[9] > this[11] || v5[9] < 0x68u )
    return -1073741823;
  result = NtAllocateVirtualMemory(-1, (int)&v6, 0, (int)&v7, 4096, 4);
  if ( result >= 0 )
  {
    this[9] = 104;
    v3 = v7 - 104;
    if ( RtlpCommitQueryDebugInfo(this, v7 - 104) )
    {
      memcpy(this + 26, v6 + 104, v3);
      v4 = this[8];
      if ( (v4 & 0x21C) != 0 )
      {
        this[14] = v5[14];
        this[19] = v5[19];
      }
      if ( (v4 & 0x41) != 0 )
        this[12] = v5[12];
      if ( (v4 & 0x20) != 0 )
        this[15] = v5[15];
      if ( (v4 & 2) != 0 )
        this[13] = v5[13];
      if ( (v4 & 0x80u) != 0 )
        this[18] = v5[18];
      if ( (v4 & 0xC00) != 0 )
        this[21] = v5[21];
      return 0;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
