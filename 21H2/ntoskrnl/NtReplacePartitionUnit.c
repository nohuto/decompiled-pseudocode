/*
 * XREFs of NtReplacePartitionUnit @ 0x1405CA220
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     PiControlMakeUserModeCallersCopy @ 0x14062A4E0 (PiControlMakeUserModeCallersCopy.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14062D4E0 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     IoReplacePartitionUnit @ 0x14089E5A0 (IoReplacePartitionUnit.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtReplacePartitionUnit(
        PUNICODE_STRING TargetInstancePath,
        PUNICODE_STRING SpareInstancePath,
        ULONG Flags)
{
  struct _DEVICE_OBJECT *v6; // rsi
  struct _DEVICE_OBJECT *v7; // rdi
  int UserModeCallersCopy; // ebx
  ULONG v9; // r8d
  struct _DEVICE_OBJECT *v10; // rdx
  struct _DEVICE_OBJECT *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  int v17; // [rsp+20h] [rbp-68h]
  PVOID v18[3]; // [rsp+30h] [rbp-58h] BYREF
  UNICODE_STRING v19; // [rsp+48h] [rbp-40h] BYREF
  UNICODE_STRING v20; // [rsp+58h] [rbp-30h] BYREF
  PVOID P; // [rsp+A8h] [rbp+20h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  P = 0LL;
  v6 = 0LL;
  v18[1] = 0LL;
  v18[0] = 0LL;
  v7 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode != 1 )
  {
    UserModeCallersCopy = -1073741790;
    goto LABEL_35;
  }
  if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, 1) )
  {
    UserModeCallersCopy = -1073741727;
    goto LABEL_35;
  }
  v9 = 0x80000000;
  if ( Flags == 0x80000000 )
  {
    v10 = 0LL;
    v11 = 0LL;
LABEL_7:
    UserModeCallersCopy = IoReplacePartitionUnit(v11, v10, v9);
    goto LABEL_35;
  }
  if ( Flags )
  {
    UserModeCallersCopy = -1073741583;
    goto LABEL_35;
  }
  if ( ((unsigned __int8)SpareInstancePath & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)&SpareInstancePath[1] > 0x7FFFFFFF0000LL || &SpareInstancePath[1] < SpareInstancePath )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( ((unsigned __int8)TargetInstancePath & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)&TargetInstancePath[1] > 0x7FFFFFFF0000LL || &TargetInstancePath[1] < TargetInstancePath )
    MEMORY[0x7FFFFFFF0000] = 0;
  v19 = *SpareInstancePath;
  v20 = *TargetInstancePath;
  if ( (unsigned __int16)(v20.Length - 1) > 0xC8u || (v20.MaximumLength & 1) != 0 )
    goto LABEL_34;
  if ( (unsigned __int16)(v19.Length - 1) > 0xC8u || (v19.MaximumLength & 1) != 0 )
  {
LABEL_33:
    UserModeCallersCopy = -1073741584;
    goto LABEL_35;
  }
  UserModeCallersCopy = PiControlMakeUserModeCallersCopy(&P, v19.Buffer, v19.Length, 2LL, 1, 1);
  if ( UserModeCallersCopy >= 0 )
  {
    LOBYTE(v17) = 1;
    UserModeCallersCopy = PiControlMakeUserModeCallersCopy(v18, v20.Buffer, v20.Length, 2LL, v17, 1);
    if ( UserModeCallersCopy >= 0 )
    {
      v19.Buffer = (wchar_t *)P;
      v19.MaximumLength = v19.Length;
      v20.Buffer = (wchar_t *)v18[0];
      v20.MaximumLength = v20.Length;
      v12 = PnpDeviceObjectFromDeviceInstanceWithTag(&v19, 1953261124LL);
      v6 = (struct _DEVICE_OBJECT *)v12;
      if ( v12 )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(v12 + 312) + 40LL);
        if ( v13 )
        {
          if ( (*(_DWORD *)(v13 + 396) & 0x20000) == 0 )
          {
            v14 = PnpDeviceObjectFromDeviceInstanceWithTag(&v20, 1953261124LL);
            v7 = (struct _DEVICE_OBJECT *)v14;
            if ( v14 )
            {
              v15 = *(_QWORD *)(*(_QWORD *)(v14 + 312) + 40LL);
              if ( v15 )
              {
                if ( (*(_DWORD *)(v15 + 396) & 0x20000) == 0 )
                {
                  v9 = 0;
                  v10 = v6;
                  v11 = v7;
                  goto LABEL_7;
                }
              }
            }
LABEL_34:
            UserModeCallersCopy = -1073741585;
            goto LABEL_35;
          }
        }
      }
      goto LABEL_33;
    }
  }
LABEL_35:
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x746C6644u);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v18[0] )
    ExFreePoolWithTag(v18[0], 0);
  return UserModeCallersCopy;
}
