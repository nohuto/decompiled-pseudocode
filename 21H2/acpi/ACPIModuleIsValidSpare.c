/*
 * XREFs of ACPIModuleIsValidSpare @ 0x1C00AFAA0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     AMLIFreeDataBuffs @ 0x1C001C758 (AMLIFreeDataBuffs.c)
 *     ACPIEvaluateSpareDsm @ 0x1C00AF7C8 (ACPIEvaluateSpareDsm.c)
 */

char __fastcall ACPIModuleIsValidSpare(__int64 a1, unsigned __int64 a2)
{
  __int64 *v2; // rcx
  char v4; // di
  __int64 *v5; // rsi
  int v6; // ebx
  __int128 v8; // [rsp+20h] [rbp-50h] BYREF
  __int128 v9; // [rsp+30h] [rbp-40h]
  _BYTE *v10; // [rsp+40h] [rbp-30h]
  __int128 v11[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v12; // [rsp+68h] [rbp-8h]

  v2 = *(__int64 **)(a1 + 760);
  v10 = 0LL;
  v8 = 0LL;
  v4 = 0;
  v9 = 0LL;
  v5 = AMLIGetNamedChild(v2, 1297302623);
  if ( v5 )
  {
    v11[0] = 0LL;
    WORD1(v11[0]) = 1;
    v11[1] = a2;
    v12 = 0LL;
    v6 = ACPIEvaluateSpareDsm(v5, 1u, v11, (__int64)&v8);
    AMLIDereferenceHandleEx((volatile signed __int32 *)v5);
    if ( v6 >= 0 && (WORD1(v8) == 1 && !(_QWORD)v9 || WORD1(v8) == 2 && *v10 == 48) )
      v4 = 1;
  }
  AMLIFreeDataBuffs((__int64)&v8);
  return v4;
}
