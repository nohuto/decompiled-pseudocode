/*
 * XREFs of _LdrCreateEnclave@36 @ 0x4B32DC50
 * Callers:
 *     <none>
 * Callees:
 *     _ZwCreateEnclave@36 @ 0x4B2F3400 (_ZwCreateEnclave@36.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry@12 @ 0x4B330BDE (_LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry@12.c)
 */

NTSTATUS __cdecl LdrCreateEnclave(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG Reserved,
        SIZE_T Size,
        SIZE_T InitialCommitment,
        ULONG EnclaveType,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  _BYTE v10[24]; // [esp-1Ch] [ebp-4Ch]
  void *v11; // [esp+0h] [ebp-30h]
  ULONG v12; // [esp+4h] [ebp-2Ch]
  ULONG *v13; // [esp+8h] [ebp-28h]
  int v14; // [esp+10h] [ebp-20h]
  PVOID v15; // [esp+14h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+18h] [ebp-18h]

  ms_exc.registration.TryLevel = 0;
  v15 = *BaseAddress;
  ms_exc.registration.TryLevel = -2;
  *(_DWORD *)&v10[20] = EnclaveType;
  *(_QWORD *)&v10[12] = InitialCommitment;
  *(_QWORD *)&v10[4] = Size;
  *(_DWORD *)v10 = Reserved;
  v14 = ZwCreateEnclave(
          ProcessHandle,
          &v15,
          *(ULONG_PTR *)v10,
          *(SIZE_T *)&v10[8],
          *(SIZE_T *)&v10[16],
          (ULONG)EnclaveInformation,
          v11,
          v12,
          v13);
  if ( v14 >= 0 )
  {
    *BaseAddress = v15;
    ms_exc.registration.TryLevel = -2;
  }
  if ( (_DWORD)InitialCommitment == 16 )
    LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry(16, 0);
  return v14;
}
