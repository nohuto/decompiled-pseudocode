/*
 * XREFs of ACPIEvaluateDsmEmcaMethodOnRootBus @ 0x1C00102D4
 * Callers:
 *     ACPIRootInitialize @ 0x1C0097C9C (ACPIRootInitialize.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0002F90 (FreeDataBuffs.c)
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0099BE8 (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall ACPIEvaluateDsmEmcaMethodOnRootBus(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rsi
  __int64 v4; // rcx
  int v5; // edi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD v10[2]; // [rsp+38h] [rbp-19h] BYREF
  __int128 v11; // [rsp+48h] [rbp-9h] BYREF
  __int128 v12; // [rsp+58h] [rbp+7h] BYREF
  __int128 v13; // [rsp+68h] [rbp+17h]
  __int128 v14; // [rsp+78h] [rbp+27h]

  v2 = RootDeviceExtension;
  v10[0] = 0LL;
  *(_OWORD *)a2 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v4 = *(_QWORD *)(v2 + 720);
  v11 = EMCA_DSM_UUID;
  v5 = ACPIAmliEvaluateDsm(v4, (unsigned int)&v11, 0, 0, (__int64)&v12, (__int64)v10);
  if ( v5 >= 0 )
  {
    v7 = v10[0];
    if ( *(_WORD *)(v10[0] + 2LL) == 3 )
      *(_BYTE *)a2 = **(_BYTE **)(v10[0] + 32LL);
    dword_1C0082908 = 0;
    pszDest = 0;
    FreeDataBuffs(v7, 1u);
    if ( *(_BYTE *)a2 == 3 )
    {
      v10[0] = 0LL;
      v12 = 0LL;
      v13 = 0LL;
      v14 = 0LL;
      v8 = *(_QWORD *)(v2 + 720);
      v11 = EMCA_DSM_UUID;
      v5 = ACPIAmliEvaluateDsm(v8, (unsigned int)&v11, 0, 1, (__int64)&v12, (__int64)v10);
      if ( v5 >= 0 )
      {
        v9 = v10[0];
        if ( *(_WORD *)(v10[0] + 2LL) == 1 )
          *(_QWORD *)(a2 + 8) = *(_QWORD *)(v10[0] + 16LL);
        dword_1C0082908 = 0;
        pszDest = 0;
        FreeDataBuffs(v9, 1u);
      }
    }
  }
  return (unsigned int)v5;
}
