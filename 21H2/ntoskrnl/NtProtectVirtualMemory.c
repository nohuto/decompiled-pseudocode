/*
 * XREFs of NtProtectVirtualMemory @ 0x1407BEBF0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     PsIsProcessLoggingEnabled @ 0x1402EDD98 (PsIsProcessLoggingEnabled.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     MiMakeProtectionMask @ 0x14032BCC0 (MiMakeProtectionMask.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 *     MmProtectVirtualMemory @ 0x1407B9FA0 (MmProtectVirtualMemory.c)
 *     EtwTiLogProtectExecVm @ 0x1408833DA (EtwTiLogProtectExecVm.c)
 *     VslDebugProtectSecureProcessMemory @ 0x140931B88 (VslDebugProtectSecureProcessMemory.c)
 */

__int64 __fastcall NtProtectVirtualMemory(
        ULONG_PTR a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned int a4,
        _DWORD *a5)
{
  ULONG_PTR v8; // r10
  unsigned __int64 v9; // r8
  int v10; // esi
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rdi
  char PreviousMode; // dl
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r15
  __int64 result; // rax
  _DWORD *v20; // r9
  _BYTE *v21; // rbx
  int v22; // eax
  int v23; // edi
  char v24; // r11
  unsigned __int8 v25; // [rsp+40h] [rbp-A8h]
  unsigned int v26; // [rsp+44h] [rbp-A4h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-A0h] BYREF
  int ProtectionMask; // [rsp+50h] [rbp-98h]
  PVOID Object; // [rsp+58h] [rbp-90h] BYREF
  unsigned __int64 v30; // [rsp+60h] [rbp-88h] BYREF
  _KPROCESS *v31; // [rsp+68h] [rbp-80h]
  _DWORD *v32; // [rsp+70h] [rbp-78h]
  _OWORD v33[3]; // [rsp+78h] [rbp-70h] BYREF

  v8 = a1;
  v9 = (unsigned __int64)a5;
  v32 = a5;
  memset(v33, 0, sizeof(v33));
  v10 = 0;
  Object = 0LL;
  v27 = 0LL;
  v30 = 0LL;
  v26 = 0;
  if ( a4 == 0x80000000 || a4 == 0x10000000 )
  {
    ProtectionMask = 24;
  }
  else
  {
    ProtectionMask = MiMakeProtectionMask(a4 & 0xFF807FF);
    if ( ProtectionMask == -1 )
      return 3221225541LL;
  }
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v31 = Process;
  PreviousMode = CurrentThread->PreviousMode;
  v25 = PreviousMode;
  if ( PreviousMode )
  {
    v14 = (__int64)a2;
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v14 = *(_QWORD *)v14;
    v15 = (__int64)a3;
    if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    v16 = v9;
    if ( v9 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v16 = *(_DWORD *)v16;
    v17 = *a2;
    v27 = *a2;
    v18 = *a3;
    v30 = *a3;
    PreviousMode = v25;
  }
  else
  {
    v18 = *a3;
    v30 = *a3;
    v17 = *a2;
    v27 = *a2;
  }
  if ( v17 > 0x7FFFFFFEFFFFLL )
    return 3221225712LL;
  if ( 0x7FFFFFFF0000LL - v17 < v18 || !v18 )
    return 3221225713LL;
  result = ObpReferenceObjectByHandleWithTag(
             v8,
             8,
             (__int64)PsProcessType,
             PreviousMode,
             0x76506D4Du,
             &Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v21 = Object;
    if ( Process != Object )
    {
      KiStackAttachProcess((_KPROCESS *)Object, 0LL, (__int64)v33, v20);
      v10 = 1;
    }
    if ( (v21[992] & 1) != 0 )
      v22 = VslDebugProtectSecureProcessMemory(
              (_DWORD)v21,
              (_DWORD)Process,
              (unsigned int)&v27,
              (unsigned int)&v30,
              a4,
              (__int64)&v26);
    else
      v22 = MmProtectVirtualMemory((__int64)Process, (__int64)v21, &v27, (__int64 *)&v30, a4, &v26);
    v23 = v22;
    LODWORD(Object) = v22;
    if ( v10 )
      KiUnstackDetachProcess((__int64)v33, 0LL);
    if ( v23 >= 0 && (((unsigned __int8)MiMakeProtectionMask(v26) | (unsigned __int8)ProtectionMask) & 2) != 0 )
    {
      if ( (unsigned int)PsIsProcessLoggingEnabled((__int64)v31, (__int64)v21, 8) )
        EtwTiLogProtectExecVm((_DWORD)v21, v25, v27, v18, a4, v24);
    }
    ObfDereferenceObjectWithTag(v21, 0x76506D4Du);
    *a3 = v30;
    *a2 = v27;
    *v32 = v26;
    return (unsigned int)v23;
  }
  return result;
}
