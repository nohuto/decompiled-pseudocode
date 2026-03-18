/*
 * XREFs of NtCreateThreadEx @ 0x140692890
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     RtlGetExtendedContextLength2 @ 0x1402E6680 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x1402E7080 (RtlInitializeExtendedContext2.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140405E30 (_alloca_probe.c)
 *     memset @ 0x140411300 (memset.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140611900 (ObpReferenceObjectByHandleWithTag.c)
 *     PspCreateThread @ 0x140686404 (PspCreateThread.c)
 *     PspDeleteCreateProcessContext @ 0x140692B54 (PspDeleteCreateProcessContext.c)
 *     PspCreateUserContext @ 0x140694230 (PspCreateUserContext.c)
 *     PspBuildCreateProcessContext @ 0x140694298 (PspBuildCreateProcessContext.c)
 */

__int64 __fastcall NtCreateThreadEx(
        unsigned __int64 a1,
        int a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v13; // rdx
  __int64 result; // rax
  unsigned __int64 v15; // rdi
  unsigned int v16; // r14d
  unsigned __int64 v17; // rax
  void *v18; // rsp
  __int64 v19; // r10
  unsigned int Thread; // ebx
  __int64 v21; // rcx
  unsigned int v22; // [rsp+70h] [rbp+0h] BYREF
  int v23; // [rsp+74h] [rbp+4h]
  PVOID Object; // [rsp+78h] [rbp+8h] BYREF
  __int64 v25; // [rsp+80h] [rbp+10h] BYREF
  __int64 v26; // [rsp+88h] [rbp+18h]
  ULONG_PTR v27; // [rsp+90h] [rbp+20h]
  _BYTE v28[80]; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v29[66]; // [rsp+F0h] [rbp+80h] BYREF
  char v30; // [rsp+300h] [rbp+290h] BYREF
  int v31; // [rsp+301h] [rbp+291h]
  __int16 v32; // [rsp+305h] [rbp+295h]
  char v33; // [rsp+307h] [rbp+297h]
  __int64 v34; // [rsp+308h] [rbp+298h]
  __int64 v35; // [rsp+310h] [rbp+2A0h]
  __int64 v36; // [rsp+318h] [rbp+2A8h]

  v27 = a3;
  v23 = a2;
  v26 = a6;
  memset(v28, 0, 0x48uLL);
  Object = 0LL;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v25 = 0LL;
  v22 = 0;
  if ( (a7 & 0xFFFFFF80) != 0 )
    return 3221225717LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v21 = a1;
    if ( a1 >= 0x7FFFFFFF0000LL )
      v21 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v21 = *(_QWORD *)v21;
  }
  v30 = 0;
  v35 = a9;
  v36 = a10;
  v34 = a8;
  memset(v29, 0, 0x208uLL);
  if ( !a11
    || (LOBYTE(v13) = KeGetCurrentThread()->PreviousMode,
        result = PspBuildCreateProcessContext(a11, v13, 1LL, v29),
        (int)result >= 0) )
  {
    result = ObpReferenceObjectByHandleWithTag(
               a4,
               2,
               (__int64)PsProcessType,
               KeGetCurrentThread()->PreviousMode,
               0x72437350u,
               &Object,
               0LL,
               0LL);
    if ( (int)result >= 0 )
    {
      v15 = (*((_DWORD *)Object + 629) & 0x4000) != 0 ? 0x800 : 0;
      v16 = (*((_DWORD *)Object + 629) & 0x4000) != 0 ? 1048651 : 1048587;
      ObfDereferenceObjectWithTag(Object, 0x72437350u);
      RtlGetExtendedContextLength2(v16, &v22, (unsigned int)v15);
      v17 = v22 + 15LL;
      if ( v17 <= v22 )
        v17 = 0xFFFFFFFFFFFFFF0LL;
      v18 = alloca(v17 & 0xFFFFFFFFFFFFFFF0uLL);
      memset(&v22, 0, v22);
      RtlInitializeExtendedContext2((__int64)&v22, v16, &v25, v15);
      PspCreateUserContext((unsigned int)&v22, 1, PspUserThreadStart, a5, v26);
      Thread = PspCreateThread(
                 a1,
                 v23,
                 v27,
                 a4,
                 0LL,
                 (__int64)v29,
                 v29[2],
                 (__int64)&v22,
                 (__int64)v28,
                 a7,
                 a5,
                 v19,
                 (__int64)&v30);
      PspDeleteCreateProcessContext(v29);
      return Thread;
    }
  }
  return result;
}
