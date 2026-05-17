/*
 * XREFs of _RtlCreateUserStack@24 @ 0x4B2F2050
 * Callers:
 *     <none>
 * Callees:
 *     _RtlImageNtHeader@4 @ 0x4B2BB8E0 (_RtlImageNtHeader@4.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _ZwSetInformationProcess@16 @ 0x4B2F2B40 (_ZwSetInformationProcess@16.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _LdrDeleteEnclave@4 @ 0x4B32DD00 (_LdrDeleteEnclave@4.c)
 */

int __stdcall RtlCreateUserStack(
        unsigned int a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v6; // esi
  unsigned int v7; // edx
  struct _PEB *v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // edi
  unsigned int MinimumStackCommit; // eax
  int result; // eax
  int v15; // ecx
  unsigned int v16; // edi
  unsigned int v17; // eax
  _DWORD v18[6]; // [esp+10h] [ebp-60h] BYREF
  int v19; // [esp+28h] [ebp-48h]
  unsigned int v20; // [esp+2Ch] [ebp-44h]
  unsigned int v21; // [esp+38h] [ebp-38h] BYREF
  unsigned int v22; // [esp+3Ch] [ebp-34h]
  int v23; // [esp+40h] [ebp-30h] BYREF
  unsigned int v24; // [esp+44h] [ebp-2Ch]
  struct _PEB *v25; // [esp+48h] [ebp-28h]
  int v26; // [esp+4Ch] [ebp-24h]
  int v27; // [esp+50h] [ebp-20h]
  unsigned int v28; // [esp+54h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+58h] [ebp-18h]

  v24 = HIBYTE(a4);
  v6 = a4 & 0xFFFFFF;
  if ( HIBYTE(a4) > 0x40u )
    return -1073741811;
  if ( !v6 )
    return -1073741811;
  v7 = a5;
  if ( !a5 || a5 < v6 )
    return -1073741811;
  v22 = 2 * v6;
  v8 = NtCurrentPeb();
  v25 = v8;
  v9 = a1;
  if ( !a1 || !a2 )
  {
    ms_exc.registration.TryLevel = 0;
    v10 = RtlImageNtHeader((int)v8->ImageBaseAddress);
    if ( !v10 )
    {
      ms_exc.registration.TryLevel = -2;
      return -1073741701;
    }
    if ( !a1 )
      v9 = *(_DWORD *)(v10 + 100);
    if ( !a2 )
      a2 = *(_DWORD *)(v10 + 96);
    ms_exc.registration.TryLevel = -2;
    v7 = a5;
  }
  if ( !v9 )
    v9 = 0x4000;
  if ( v9 >= a2 )
    a2 = (v9 + 0xFFFFF) & 0xFFF00000;
  v11 = -v6 & (v9 + v6 - 1);
  v26 = v11;
  v27 = -v7;
  v12 = -v7 & (v7 + a2 - 1);
  ms_exc.registration.TryLevel = 1;
  MinimumStackCommit = v25->MinimumStackCommit;
  v20 = MinimumStackCommit;
  ms_exc.registration.TryLevel = -2;
  if ( MinimumStackCommit && v11 < MinimumStackCommit )
  {
    v26 = -v6 & (v6 + MinimumStackCommit - 1);
    v12 = v27 & (v7 + ((v26 + 0xFFFFF) & 0xFFF00000) - 1);
  }
  v18[0] = (unsigned __int8)v24;
  memset(&v18[1], 0, 12);
  v18[4] = v12;
  v18[5] = a3;
  result = ZwSetInformationProcess(-1, 41, v18, 28);
  if ( result >= 0 )
  {
    *a6 = 0;
    a6[1] = 0;
    v15 = v19;
    a6[4] = v19;
    a6[2] = v15 + v12;
    v28 = v12 + v15 - v26;
    v16 = v12 - v26;
    v23 = v26;
    v26 = NtAllocateVirtualMemory(-1, &v28, 0, &v23, 4096, 4);
    if ( v26 < 0
      || (v17 = v28, a6[3] = v28, v16 >= v22)
      && (v28 = v17 - v22, v21 = v22, v26 = NtAllocateVirtualMemory(-1, &v28, 0, &v21, 4096, 260), v26 < 0) )
    {
      LdrDeleteEnclave(a6[4]);
      return v26;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
