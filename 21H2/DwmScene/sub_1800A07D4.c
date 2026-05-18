/*
 * XREFs of sub_1800A07D4 @ 0x1800A07D4
 * Callers:
 *     sub_180069368 @ 0x180069368 (sub_180069368.c)
 *     sub_18009FAA4 @ 0x18009FAA4 (sub_18009FAA4.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_1800A073C @ 0x1800A073C (sub_1800A073C.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800A07D4(__int64 a1, __int64 a2)
{
  int v3; // xmm0_4
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  __int64 **v6; // rax
  __int64 i; // rax
  __int64 *j; // rcx
  unsigned int v9; // eax
  _QWORD v10[4]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v11[4]; // [rsp+50h] [rbp-88h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v13; // [rsp+B0h] [rbp-28h]

  v13 = a2;
  if ( *(float *)&a2 < 0.0 || (v3 = HIDWORD(v13), *((float *)&v13 + 1) < 0.0) )
  {
    sub_18000FE28(v11);
    v9 = (unsigned int)sub_18000FE28(v10);
    sub_1800D1210((unsigned int)pExceptionObject, v9, 931, (unsigned int)v11, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 144) = a2;
  *(_DWORD *)(a1 + 148) = v3;
  v4 = *(_QWORD **)(a1 + 112);
  v5 = (_QWORD *)*v4;
  while ( v5 != v4 )
  {
    sub_1800A073C(v5[5], a2);
    v6 = (__int64 **)v5[2];
    if ( *((_BYTE *)v6 + 25) )
    {
      for ( i = v5[1]; !*(_BYTE *)(i + 25) && v5 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        v5 = (_QWORD *)i;
      v5 = (_QWORD *)i;
    }
    else
    {
      v5 = (_QWORD *)v5[2];
      for ( j = *v6; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v5 = j;
    }
  }
}
