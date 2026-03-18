/*
 * XREFs of ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C007A5CC
 * Callers:
 *     SfnINLBOXSTRING @ 0x1C007A570 (SfnINLBOXSTRING.c)
 *     SfnINCBOXSTRING @ 0x1C0155700 (SfnINCBOXSTRING.c)
 * Callees:
 *     SfnDWORD @ 0x1C004CB10 (SfnDWORD.c)
 *     SfnINSTRINGNULL @ 0x1C0076660 (SfnINSTRINGNULL.c)
 *     SfnINSTRING @ 0x1C007B6F0 (SfnINSTRING.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall _SfnINBOXSTRING(
        int a1,
        struct tagWND *a2,
        int a3,
        __int64 a4,
        int *a5,
        unsigned __int64 a6,
        __int64 (*a7)(void),
        unsigned int a8)
{
  __int64 *v10; // rbx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax

  v10 = (__int64 *)a2;
  if ( a2 )
    v12 = *(_QWORD *)a2;
  else
    v12 = 0LL;
  LOBYTE(a2) = 1;
  if ( !HMValidateHandleNoSecure(v12, a2) )
    return 0LL;
  v13 = *(_DWORD *)(gptiCurrent + 1412LL);
  if ( v13 == 1 )
    return SfnDWORD(v10, a3, a4, (__int64)a5, a6, (__int64)a7);
  if ( v13 != 2 )
    return 0LL;
  v14 = 399;
  if ( a1 != 678 )
    v14 = 332;
  if ( a3 == v14 )
    return SfnINSTRINGNULL(v10, a3, a4, a5, a6, (__int64)a7, a8);
  else
    return SfnINSTRING((_DWORD)v10, a3, a4, (_DWORD)a5, a6, (__int64)a7, a8);
}
