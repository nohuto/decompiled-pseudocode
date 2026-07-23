/*
 * XREFs of _RtlQueryWnfStateDataWithExplicitScope@28 @ 0x4B33BEA0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _NtQueryWnfStateData@24 @ 0x4B2F3FB0 (_NtQueryWnfStateData@24.c)
 *     __alloca_probe_16 @ 0x4B2F6500 (__alloca_probe_16.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _RtlResetStackOverflow@0 @ 0x4B33BCA7 (_RtlResetStackOverflow@0.c)
 */

NTSTATUS __stdcall RtlQueryWnfStateDataWithExplicitScope(
        _DWORD *a1,
        int a2,
        int a3,
        const void *a4,
        int (__thiscall *a5)(_DWORD, unsigned int, unsigned int, ULONG, PCWNF_TYPE_ID, int, _DWORD *, ULONG),
        int a6,
        PCWNF_TYPE_ID TypeId)
{
  void *v7; // esp
  NTSTATUS result; // eax
  ULONG v9; // eax
  _DWORD v10[1029]; // [esp-1000h] [ebp-104Ch] BYREF
  int v11; // [esp+14h] [ebp-38h]
  _DWORD *v12; // [esp+18h] [ebp-34h]
  ULONG ChangeStamp[2]; // [esp+1Ch] [ebp-30h] BYREF
  ULONG BufferSize; // [esp+24h] [ebp-28h] BYREF
  WNF_STATE_NAME StateName; // [esp+28h] [ebp-24h] BYREF
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  v12 = a1;
  StateName.Data[0] = a2;
  StateName.Data[1] = a3;
  ChangeStamp[1] = (ULONG)a4;
  v11 = a6;
  v7 = alloca(4096);
  ms_exc.old_esp = (DWORD)v10;
  v10[1028] = v10;
  ms_exc.registration.TryLevel = -2;
  BufferSize = 4096;
  result = NtQueryWnfStateData(&StateName, TypeId, a4, ChangeStamp, v10, &BufferSize);
  if ( result >= 0 )
  {
    v9 = ChangeStamp[0];
    *v12 = ChangeStamp[0];
    return a5(a5, StateName.Data[0], StateName.Data[1], v9, TypeId, v11, v10, BufferSize);
  }
  return result;
}
