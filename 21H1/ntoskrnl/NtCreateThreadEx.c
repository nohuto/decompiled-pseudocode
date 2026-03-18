/*
 * XREFs of NtCreateThreadEx @ 0x1407075D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     RtlGetExtendedContextLength2 @ 0x14032EEA0 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x14032F8A0 (RtlInitializeExtendedContext2.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1403FE8D0 (_alloca_probe.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14062B240 (ObpReferenceObjectByHandleWithTag.c)
 *     PspCreateThread @ 0x140707180 (PspCreateThread.c)
 *     PspDeleteCreateProcessContext @ 0x140707894 (PspDeleteCreateProcessContext.c)
 *     PspCreateUserContext @ 0x140707A4C (PspCreateUserContext.c)
 *     PspBuildCreateProcessContext @ 0x140707AB4 (PspBuildCreateProcessContext.c)
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
  ULONG v14; // r9d
  __int64 result; // rax
  unsigned __int64 v16; // rdi
  unsigned int v17; // r14d
  unsigned __int64 v18; // rax
  void *v19; // rsp
  __int64 v20; // r10
  unsigned int Thread; // ebx
  __int64 v22; // rcx
  _QWORD *Tag; // [rsp+20h] [rbp-50h]
  unsigned int v24; // [rsp+70h] [rbp+0h] BYREF
  int v25; // [rsp+74h] [rbp+4h]
  PVOID Object; // [rsp+78h] [rbp+8h] BYREF
  __int64 v27; // [rsp+80h] [rbp+10h] BYREF
  __int64 v28; // [rsp+88h] [rbp+18h]
  ULONG_PTR v29; // [rsp+90h] [rbp+20h]
  _QWORD v30[10]; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v31[64]; // [rsp+F0h] [rbp+80h] BYREF
  char v32; // [rsp+2F0h] [rbp+280h] BYREF
  int v33; // [rsp+2F1h] [rbp+281h]
  __int16 v34; // [rsp+2F5h] [rbp+285h]
  char v35; // [rsp+2F7h] [rbp+287h]
  __int64 v36; // [rsp+2F8h] [rbp+288h]
  __int64 v37; // [rsp+300h] [rbp+290h]
  __int64 v38; // [rsp+308h] [rbp+298h]

  v29 = a3;
  v25 = a2;
  v28 = a6;
  memset(v30, 0, 0x48uLL);
  Object = 0LL;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v27 = 0LL;
  v24 = 0;
  if ( (a7 & 0xFFFFFF80) != 0 )
    return 3221225717LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v22 = a1;
    if ( a1 >= 0x7FFFFFFF0000LL )
      v22 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v22 = *(_QWORD *)v22;
  }
  v32 = 0;
  v37 = a9;
  v38 = a10;
  v36 = a8;
  memset(v31, 0, sizeof(v31));
  if ( !a11
    || (LOBYTE(v13) = KeGetCurrentThread()->PreviousMode,
        result = PspBuildCreateProcessContext(a11, v13, 1LL, v31),
        (int)result >= 0) )
  {
    LOBYTE(v14) = KeGetCurrentThread()->PreviousMode;
    LODWORD(Tag) = 1917023056;
    result = ObpReferenceObjectByHandleWithTag(a4, 2LL, PsProcessType, v14, Tag, &Object, 0LL, 0LL);
    if ( (int)result >= 0 )
    {
      v16 = (*((_DWORD *)Object + 629) & 0x4000) != 0 ? 0x800 : 0;
      v17 = (*((_DWORD *)Object + 629) & 0x4000) != 0 ? 1048651 : 1048587;
      ObfDereferenceObjectWithTag(Object, 0x72437350u);
      RtlGetExtendedContextLength2(v17, &v24, (unsigned int)v16);
      v18 = v24 + 15LL;
      if ( v18 <= v24 )
        v18 = 0xFFFFFFFFFFFFFF0LL;
      v19 = alloca(v18 & 0xFFFFFFFFFFFFFFF0uLL);
      memset(&v24, 0, v24);
      RtlInitializeExtendedContext2((__int64)&v24, v17, &v27, v16);
      PspCreateUserContext((unsigned int)&v24, 1, PspUserThreadStart, a5, v28);
      Thread = PspCreateThread(
                 a1,
                 v25,
                 v29,
                 a4,
                 0LL,
                 (__int64)v31,
                 v31[2],
                 (__int64)&v24,
                 v30,
                 a7,
                 a5,
                 v20,
                 (__int64)&v32);
      PspDeleteCreateProcessContext(v31);
      return Thread;
    }
  }
  return result;
}
