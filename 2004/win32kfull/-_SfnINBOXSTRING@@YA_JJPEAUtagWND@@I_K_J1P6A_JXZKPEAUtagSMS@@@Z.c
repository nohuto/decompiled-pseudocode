/*
 * XREFs of ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C00425BC
 * Callers:
 *     SfnINLBOXSTRING @ 0x1C0042560 (SfnINLBOXSTRING.c)
 *     SfnINCBOXSTRING @ 0x1C0152DD0 (SfnINCBOXSTRING.c)
 * Callees:
 *     SfnINSTRINGNULL @ 0x1C0044240 (SfnINSTRINGNULL.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     SfnDWORD @ 0x1C00A3480 (SfnDWORD.c)
 *     SfnINSTRING @ 0x1C0118960 (SfnINSTRING.c)
 */

__int64 __fastcall _SfnINBOXSTRING(
        int a1,
        struct tagWND *a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 (*a7)(void),
        unsigned int a8)
{
  int v10; // ebx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax

  v10 = (int)a2;
  if ( a2 )
    v12 = *(_QWORD *)a2;
  else
    v12 = 0LL;
  LOBYTE(a2) = 1;
  if ( !HMValidateHandleNoSecure(v12, a2) )
    return 0LL;
  v13 = *(_DWORD *)(gptiCurrent + 1404LL);
  if ( v13 == 1 )
    return SfnDWORD(v10, a3, a4, a5, a6, (__int64)a7);
  if ( v13 != 2 )
    return 0LL;
  v14 = 399;
  if ( a1 != 678 )
    v14 = 332;
  if ( a3 == v14 )
    return SfnINSTRINGNULL(v10, a3, a4, a5, a6, (__int64)a7, a8);
  else
    return SfnINSTRING(v10, a3, a4, a5, a6, (__int64)a7, a8);
}
