/*
 * XREFs of KsepEngineGetShimsFromRegistry @ 0x14075B90C
 * Callers:
 *     KsepGetShimsForDriver @ 0x140758D38 (KsepGetShimsForDriver.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140371274 (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x14037129C (KsepPoolAllocatePaged.c)
 *     KsepLogError @ 0x140371AC4 (KsepLogError.c)
 *     KsepDebugPrint @ 0x140527128 (KsepDebugPrint.c)
 *     KsepRegistryQueryDriverShims @ 0x14075B3B4 (KsepRegistryQueryDriverShims.c)
 *     KsepStringDuplicate @ 0x14075B434 (KsepStringDuplicate.c)
 *     KsepStringFree @ 0x14075B9C0 (KsepStringFree.c)
 *     KsepDbGetShimInfo @ 0x1408BF97C (KsepDbGetShimInfo.c)
 *     KsepStringSplitMultiString @ 0x1408C0F84 (KsepStringSplitMultiString.c)
 */

__int64 __fastcall KsepEngineGetShimsFromRegistry(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // r14
  _QWORD *v6; // rdi
  PVOID Paged; // rax
  __int64 v9; // r8
  void *v10; // r12
  int DriverShims; // ebx
  int v13; // eax
  __int64 v14; // rdi
  _DWORD *v15; // rax
  char *v16; // rsi
  __int64 i; // rbx
  __int64 v18; // rax
  char *v19; // r15
  _QWORD *v20; // rax
  char *v21; // [rsp+20h] [rbp-10h] BYREF
  __int64 v22; // [rsp+28h] [rbp-8h] BYREF
  unsigned int v23; // [rsp+70h] [rbp+40h] BYREF
  _QWORD *v24; // [rsp+80h] [rbp+50h]

  v24 = a3;
  v22 = 0LL;
  v4 = 0LL;
  v21 = 0LL;
  v23 = 0;
  v6 = a3;
  if ( (*(_DWORD *)(a1 + 8) & 1) != 0 )
  {
    DriverShims = -1073741275;
    goto LABEL_5;
  }
  Paged = KsepPoolAllocatePaged(0x800uLL);
  v10 = Paged;
  if ( !Paged )
  {
    DriverShims = -1073741801;
    goto LABEL_5;
  }
  DriverShims = KsepRegistryQueryDriverShims(*(_QWORD *)(a2 + 8), (__int64)Paged, v9, (__int64)&v22);
  if ( DriverShims >= 0 )
  {
    v13 = KsepStringSplitMultiString(v10, v22, &v21, &v23);
    v14 = v23;
    DriverShims = v13;
    if ( v13 >= 0 )
    {
      v15 = KsepPoolAllocatePaged(80LL * v23);
      v16 = v21;
      v4 = v15;
      if ( !v15 )
      {
        DriverShims = -1073741801;
LABEL_20:
        if ( v16 )
        {
          if ( (_DWORD)v14 )
          {
            v19 = v16;
            do
            {
              KsepStringFree(v19);
              v19 += 16;
              --v14;
            }
            while ( v14 );
          }
          KsepPoolFreePaged(v16);
        }
        v6 = v24;
        goto LABEL_4;
      }
      for ( i = 0LL; (unsigned int)i < (unsigned int)v14; i = (unsigned int)(i + 1) )
      {
        if ( (int)KsepStringDuplicate((__int64)&v4[20 * i + 4], *(_WORD **)&v16[16 * (unsigned int)i + 8]) < 0 )
          break;
        v4[20 * i + 17] = 0;
      }
      DriverShims = KsepDbGetShimInfo(v4, (unsigned int)v14);
      if ( DriverShims >= 0 )
      {
        v20 = v24;
        DriverShims = 0;
        *a4 = v14;
        *v20 = v4;
        goto LABEL_20;
      }
      v18 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      KsepHistoryErrors[2 * v18 + 1] = DriverShims;
      KsepHistoryErrors[2 * v18] = 132101;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(0LL, "KSE: Cannot resolve registry shims to Sdb: 0x%x\n", DriverShims);
      KsepLogError(0, "KSE: Cannot resolve registry shims to Sdb: 0x%x\n", DriverShims);
      v14 = v23;
    }
    v16 = v21;
    goto LABEL_20;
  }
LABEL_4:
  KsepPoolFreePaged(v10);
  if ( DriverShims < 0 )
  {
LABEL_5:
    KsepPoolFreePaged(v4);
    *v6 = 0LL;
    *a4 = 0;
  }
  return (unsigned int)DriverShims;
}
