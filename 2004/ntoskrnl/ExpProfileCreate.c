/*
 * XREFs of ExpProfileCreate @ 0x140956F1C
 * Callers:
 *     NtCreateProfile @ 0x1409575D0 (NtCreateProfile.c)
 *     NtCreateProfileEx @ 0x1409576B0 (NtCreateProfileEx.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeCopyAffinityEx @ 0x14021E8E0 (KeCopyAffinityEx.c)
 *     KeVerifyGroupAffinity @ 0x140375D94 (KeVerifyGroupAffinity.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F5C50 (ObReferenceObjectByHandleWithTag.c)
 *     ObInsertObject @ 0x14060D6D0 (ObInsertObject.c)
 *     ObCreateObject @ 0x14060ECE0 (ObCreateObject.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     ExIsRestrictedCaller @ 0x1406F252C (ExIsRestrictedCaller.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall ExpProfileCreate(
        unsigned __int64 a1,
        void *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        volatile void *a6,
        unsigned int Length,
        int a8,
        unsigned __int16 a9,
        unsigned __int64 a10,
        char a11)
{
  __int128 *v15; // rbx
  NTSTATUS result; // eax
  unsigned __int64 v17; // rcx
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // r9d
  int inserted; // ebx
  _QWORD *v23; // rbx
  int v24; // [rsp+54h] [rbp-174h] BYREF
  PVOID Object; // [rsp+58h] [rbp-170h] BYREF
  volatile void *Address; // [rsp+60h] [rbp-168h]
  PVOID v27; // [rsp+68h] [rbp-160h]
  HANDLE Handle; // [rsp+70h] [rbp-158h] BYREF
  _QWORD *v29; // [rsp+78h] [rbp-150h]
  __int128 v30; // [rsp+80h] [rbp-148h] BYREF
  __int128 v31; // [rsp+98h] [rbp-130h] BYREF
  __int64 v32; // [rsp+A8h] [rbp-120h]
  __int128 v33; // [rsp+B0h] [rbp-118h] BYREF
  __int128 v34; // [rsp+C0h] [rbp-108h]
  __int128 v35; // [rsp+D0h] [rbp-F8h]
  _DWORD v36[44]; // [rsp+E0h] [rbp-E8h] BYREF

  v29 = (_QWORD *)a1;
  Address = a6;
  v15 = (__int128 *)a10;
  memset(&v36[2], 0, 0xA0uLL);
  v30 = 0LL;
  Handle = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  Object = 0LL;
  v27 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( !Length )
    return -1073741579;
  if ( (unsigned int)(a5 - 2) > 0x1D )
    return -1073741811;
  v17 = (a4 >> a5) + 1;
  if ( !(a4 % (1LL << a5)) )
    v17 = a4 >> a5;
  if ( v17 > (unsigned __int64)Length >> 2 )
    return -1073741789;
  if ( a3 + a4 < a4 )
    return -2147483643;
  LODWORD(v31) = a8;
  v24 = 0;
  if ( ((int (__fastcall *)(__int64, __int64, __int128 *, int *))off_140C00A68[0])(1LL, 24LL, &v31, &v24) < 0
    || v24 != 24
    || !BYTE4(v31) )
  {
    return -1073741637;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v19 = a1;
    if ( a1 >= 0x7FFFFFFF0000LL )
      v19 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v19 = *(_QWORD *)v19;
    ProbeForWrite(Address, Length, 4u);
    if ( !a11 )
    {
      v20 = 16LL * a9;
      if ( v20 )
      {
        if ( (a10 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v20 + a10 > 0x7FFFFFFF0000LL || v20 + a10 < a10 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  v36[0] = 1310721;
  memset(&v36[1], 0, 0xA4uLL);
  while ( a9 )
  {
    if ( !PreviousMode || a11 )
      v30 = *v15;
    else
      v30 = *v15;
    if ( !KeVerifyGroupAffinity((__int64)&v30, 0) )
      return -1073741811;
    if ( LOWORD(v36[0]) <= WORD4(v30) )
      LOWORD(v36[0]) = WORD4(v30) + 1;
    *(_QWORD *)&v36[2 * WORD4(v30) + 2] |= v30;
    --a9;
    ++v15;
  }
  if ( a2 )
  {
    result = ObReferenceObjectByHandleWithTag(
               a2,
               0x400u,
               (POBJECT_TYPE)PsProcessType,
               PreviousMode,
               0x66507845u,
               &Object,
               0LL);
    if ( result < 0 )
      return result;
  }
  else
  {
    if ( a3 <= 0x7FFFFFFEFFFFLL && PreviousMode && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, PreviousMode) )
      return -1073741727;
    Object = 0LL;
  }
  if ( ExIsRestrictedCaller(PreviousMode) && a4 && (a3 + a4 > 0x7FFFFFFF0000LL || a3 + a4 < a3) )
    MEMORY[0x7FFFFFFF0000] = 0;
  LODWORD(v33) = 48;
  *((_QWORD *)&v33 + 1) = 0LL;
  DWORD2(v34) = 32;
  *(_QWORD *)&v34 = 0LL;
  v35 = 0LL;
  LOBYTE(v21) = PreviousMode;
  inserted = ObCreateObject(0, (int)ExProfileObjectType, (int)&v33, v21);
  if ( inserted < 0 )
  {
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x66507845u);
  }
  else
  {
    v23 = v27;
    *(_QWORD *)v27 = Object;
    v23[1] = a3;
    v23[2] = a4;
    v23[3] = Address;
    *((_DWORD *)v23 + 8) = Length;
    *((_DWORD *)v23 + 9) = a5;
    v23[6] = 0LL;
    *((_DWORD *)v23 + 16) = 0;
    *((_DWORD *)v23 + 17) = a8;
    KeCopyAffinityEx((__int64)(v23 + 9), (unsigned __int16 *)v36);
    inserted = ObInsertObject(v23, 0LL, 1u, 0, 0LL, &Handle);
    LODWORD(Address) = inserted;
    if ( inserted >= 0 )
      *v29 = Handle;
  }
  return inserted;
}
