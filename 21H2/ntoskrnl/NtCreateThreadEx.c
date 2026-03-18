/*
 * XREFs of NtCreateThreadEx @ 0x140701F10
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x1402956D0 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x140297D10 (RtlInitializeExtendedContext2.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _alloca_probe @ 0x14042A4D0 (_alloca_probe.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PspBuildCreateProcessContext @ 0x140670488 (PspBuildCreateProcessContext.c)
 *     PspCreateThread @ 0x140701B64 (PspCreateThread.c)
 *     PspDeleteCreateProcessContext @ 0x1407021EC (PspDeleteCreateProcessContext.c)
 *     PspCreateUserContext @ 0x140702C3C (PspCreateUserContext.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtCreateThreadEx(
        unsigned __int64 a1,
        int a2,
        __int64 a3,
        ULONG_PTR a4,
        __int64 a5,
        void *a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        unsigned __int64 *a11)
{
  __int64 result; // rax
  __int64 v14; // rdi
  unsigned int v15; // r14d
  int v16; // r12d
  unsigned __int64 v17; // rax
  void *v18; // rsp
  __int64 v19; // r9
  __int64 v20; // r10
  unsigned int Thread; // ebx
  __int64 v22; // rcx
  unsigned int v23; // [rsp+70h] [rbp+0h] BYREF
  int v24; // [rsp+74h] [rbp+4h]
  PVOID Object; // [rsp+78h] [rbp+8h] BYREF
  __int64 v26; // [rsp+80h] [rbp+10h] BYREF
  PVOID v27; // [rsp+88h] [rbp+18h]
  __int64 v28; // [rsp+90h] [rbp+20h]
  int v29[2]; // [rsp+98h] [rbp+28h]
  __int64 v30[10]; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v31[64]; // [rsp+F0h] [rbp+80h] BYREF
  char v32; // [rsp+2F0h] [rbp+280h] BYREF
  int v33; // [rsp+2F1h] [rbp+281h]
  __int16 v34; // [rsp+2F5h] [rbp+285h]
  char v35; // [rsp+2F7h] [rbp+287h]
  __int64 v36; // [rsp+2F8h] [rbp+288h]
  __int64 v37; // [rsp+300h] [rbp+290h]
  __int64 v38; // [rsp+308h] [rbp+298h]

  *(_QWORD *)v29 = a3;
  v24 = a2;
  v28 = a5;
  v27 = a6;
  *(_WORD *)((char *)v31 + 1) = 0;
  BYTE3(v31[0]) = 0;
  memset(v30, 0, 0x48uLL);
  Object = 0LL;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v26 = 0LL;
  v23 = 0;
  if ( (a7 & 0xFFFFFF80) != 0 )
    return 3221225717LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v22 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v22 = a1;
    *(_QWORD *)v22 = *(_QWORD *)v22;
  }
  v32 = 0;
  v37 = a9;
  v38 = a10;
  v36 = a8;
  memset(v31, 0, 0x1F8uLL);
  if ( !a11
    || (result = PspBuildCreateProcessContext(a11, KeGetCurrentThread()->PreviousMode, 1, (__int64)v31), (int)result >= 0) )
  {
    result = ObpReferenceObjectByHandleWithTag(a4, 0x72437350u, (__int64)&Object, 0LL, 0LL);
    if ( (int)result >= 0 )
    {
      v14 = (*((_DWORD *)Object + 629) & 0x4000) != 0 ? 0x800 : 0;
      v15 = (*((_DWORD *)Object + 629) & 0x4000) != 0 ? 1048651 : 1048587;
      v16 = qword_140D07170;
      ObfDereferenceObjectWithTag(Object, 0x72437350u);
      RtlGetExtendedContextLength2(v15, &v23, (unsigned int)v14);
      v17 = v23 + 15LL;
      if ( v17 <= v23 )
        v17 = 0xFFFFFFFFFFFFFF0LL;
      v18 = alloca(v17 & 0xFFFFFFFFFFFFFFF0uLL);
      memset(&v23, 0, v23);
      RtlInitializeExtendedContext2((__int64)&v23, v15, &v26, v14);
      PspCreateUserContext((unsigned int)&v23, 1, v16, v28, (__int64)v27);
      Thread = PspCreateThread(
                 a1,
                 v24,
                 *(__int64 *)v29,
                 a4,
                 0LL,
                 (__int64)v31,
                 v31[2],
                 (__int64)&v23,
                 v30,
                 a7,
                 v19,
                 v20,
                 (__int64)&v32);
      PspDeleteCreateProcessContext(v31);
      return Thread;
    }
  }
  return result;
}
