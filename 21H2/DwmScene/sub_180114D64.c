/*
 * XREFs of sub_180114D64 @ 0x180114D64
 * Callers:
 *     sub_180115D7C @ 0x180115D7C (sub_180115D7C.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_180115420 @ 0x180115420 (sub_180115420.c)
 *     sub_180116C4C @ 0x180116C4C (sub_180116C4C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180114D64(
        int a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        _QWORD *a7,
        __int64 a8,
        __int64 a9)
{
  int v11; // r10d
  int v12; // r11d
  _QWORD *v13; // r8
  int v14; // eax
  __int64 result; // rax
  __int64 v16; // rbx
  unsigned int v17; // esi
  unsigned int v18; // r15d
  unsigned int v19; // ebp
  unsigned int v20; // r14d
  char v21; // al
  int v22; // [rsp+40h] [rbp-B8h]
  unsigned int v23; // [rsp+44h] [rbp-B4h]
  _QWORD v25[4]; // [rsp+70h] [rbp-88h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+90h] [rbp-68h] BYREF

  v11 = a1;
  v12 = a5;
  v13 = a7;
  v14 = 3;
  if ( a6 == 1 )
    v14 = 1;
  v22 = v14;
  result = 0LL;
  if ( a6 == 1 )
    result = 2LL;
  v16 = 0LL;
  v17 = 0;
  v23 = a4 - result;
  if ( a4 != (_DWORD)result )
  {
    do
    {
      v18 = *(_DWORD *)(a3 + 4 * v16);
      v19 = *(_DWORD *)(a3 + 4LL * (unsigned int)(v16 + 1));
      v20 = *(_DWORD *)(a3 + 4LL * (unsigned int)(v16 + 2));
      if ( v18 >= a2 || v19 >= a2 || v20 >= a2 )
      {
        sub_18000FE28(v25);
        sub_180115420(pExceptionObject, v25);
        throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
      }
      if ( *v13 && v17 == 100 * (v17 / 0x64) )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v13 + 40LL))(*v13);
        v11 = a1;
        v12 = a5;
      }
      v21 = a6 == 1 && (v16 & 1) != 0;
      result = sub_180116C4C(v11, v12, v18, v19, v20, v21, a8, a9);
      v16 = (unsigned int)(v22 + v16);
      ++v17;
      v13 = a7;
      v11 = a1;
      v12 = a5;
    }
    while ( (unsigned int)v16 < v23 );
  }
  return result;
}
