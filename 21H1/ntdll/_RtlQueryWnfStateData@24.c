/*
 * XREFs of _RtlQueryWnfStateData@24 @ 0x4B2AE840
 * Callers:
 *     _RtlpFcStartSubscriptionManager@4 @ 0x4B2AE8E5 (_RtlpFcStartSubscriptionManager@4.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _NtQueryWnfStateData@24 @ 0x4B2F3FB0 (_NtQueryWnfStateData@24.c)
 *     __alloca_probe_16 @ 0x4B2F6500 (__alloca_probe_16.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _RtlResetStackOverflow@0 @ 0x4B33BCA7 (_RtlResetStackOverflow@0.c)
 */

NTSTATUS __cdecl RtlQueryWnfStateData(
        PWNF_CHANGE_STAMP ChangeStamp,
        WNF_STATE_NAME StateName,
        PWNF_USER_CALLBACK Callback,
        PVOID CallbackContext,
        PWNF_TYPE_ID TypeId)
{
  void *v5; // esp
  NTSTATUS result; // eax
  ULONG v7; // eax
  _DWORD v8[1029]; // [esp-1000h] [ebp-1048h] BYREF
  PVOID v9; // [esp+14h] [ebp-34h]
  PWNF_CHANGE_STAMP v10; // [esp+18h] [ebp-30h]
  ULONG v11; // [esp+1Ch] [ebp-2Ch] BYREF
  ULONG BufferSize; // [esp+20h] [ebp-28h] BYREF
  WNF_STATE_NAME v13; // [esp+24h] [ebp-24h] BYREF
  CPPEH_RECORD ms_exc; // [esp+30h] [ebp-18h]

  v10 = ChangeStamp;
  v13 = StateName;
  v9 = CallbackContext;
  v5 = alloca(4096);
  ms_exc.old_esp = (DWORD)v8;
  v8[1028] = v8;
  ms_exc.registration.TryLevel = -2;
  BufferSize = 4096;
  result = NtQueryWnfStateData(&v13, TypeId, 0, &v11, v8, &BufferSize);
  if ( result >= 0 )
  {
    v7 = v11;
    *v10 = v11;
    return ((int (__thiscall *)(PWNF_USER_CALLBACK, unsigned int, unsigned int, ULONG, PWNF_TYPE_ID, PVOID, _DWORD *, ULONG))Callback)(
             Callback,
             v13.Data[0],
             v13.Data[1],
             v7,
             TypeId,
             v9,
             v8,
             BufferSize);
  }
  return result;
}
