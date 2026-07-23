/*
 * XREFs of ExpProfileCreate @ 0x14095A72C
 * Callers:
 *     NtCreateProfile @ 0x14095ADE0 (NtCreateProfile.c)
 *     NtCreateProfileEx @ 0x14095AEC0 (NtCreateProfileEx.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x1403461A0 (KeCopyAffinityEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KeVerifyGroupAffinity @ 0x140377D04 (KeVerifyGroupAffinity.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExIsRestrictedCaller @ 0x1406017E4 (ExIsRestrictedCaller.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     ObInsertObject @ 0x1406AB4A0 (ObInsertObject.c)
 *     ObCreateObject @ 0x1406ABDC0 (ObCreateObject.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
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
  int inserted; // ebx
  _QWORD *v22; // rbx
  int v23; // [rsp+54h] [rbp-174h] BYREF
  PVOID Object; // [rsp+58h] [rbp-170h] BYREF
  volatile void *Address; // [rsp+60h] [rbp-168h]
  PVOID v26; // [rsp+68h] [rbp-160h]
  HANDLE Handle; // [rsp+70h] [rbp-158h] BYREF
  _QWORD *v28; // [rsp+78h] [rbp-150h]
  __int128 v29; // [rsp+80h] [rbp-148h] BYREF
  __int128 v30; // [rsp+98h] [rbp-130h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-120h]
  __int128 v32; // [rsp+B0h] [rbp-118h] BYREF
  __int128 v33; // [rsp+C0h] [rbp-108h]
  __int128 v34; // [rsp+D0h] [rbp-F8h]
  _DWORD v35[44]; // [rsp+E0h] [rbp-E8h] BYREF

  v28 = (_QWORD *)a1;
  Address = a6;
  v15 = (__int128 *)a10;
  memset(&v35[2], 0, 0xA0uLL);
  v29 = 0LL;
  Handle = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  Object = 0LL;
  v26 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
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
  LODWORD(v30) = a8;
  v23 = 0;
  if ( ((int (__fastcall *)(__int64, __int64, __int128 *, int *))off_140C00A68[0])(1LL, 24LL, &v30, &v23) < 0
    || v23 != 24
    || !BYTE4(v30) )
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
  v35[0] = 1310721;
  memset(&v35[1], 0, 0xA4uLL);
  while ( a9 )
  {
    if ( !PreviousMode || a11 )
      v29 = *v15;
    else
      v29 = *v15;
    if ( !KeVerifyGroupAffinity((__int64)&v29, 0) )
      return -1073741811;
    if ( LOWORD(v35[0]) <= WORD4(v29) )
      LOWORD(v35[0]) = WORD4(v29) + 1;
    *(_QWORD *)&v35[2 * WORD4(v29) + 2] |= v29;
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
  LODWORD(v32) = 48;
  *((_QWORD *)&v32 + 1) = 0LL;
  DWORD2(v33) = 32;
  *(_QWORD *)&v33 = 0LL;
  v34 = 0LL;
  inserted = ObCreateObject(0, (int)ExProfileObjectType, (int)&v32, PreviousMode);
  if ( inserted < 0 )
  {
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x66507845u);
  }
  else
  {
    v22 = v26;
    *(_QWORD *)v26 = Object;
    v22[1] = a3;
    v22[2] = a4;
    v22[3] = Address;
    *((_DWORD *)v22 + 8) = Length;
    *((_DWORD *)v22 + 9) = a5;
    v22[6] = 0LL;
    *((_DWORD *)v22 + 16) = 0;
    *((_DWORD *)v22 + 17) = a8;
    KeCopyAffinityEx((__int64)(v22 + 9), (unsigned __int16 *)v35);
    inserted = ObInsertObject(v22, 0LL, 1u, 0, 0LL, &Handle);
    LODWORD(Address) = inserted;
    if ( inserted >= 0 )
      *v28 = Handle;
  }
  return inserted;
}
