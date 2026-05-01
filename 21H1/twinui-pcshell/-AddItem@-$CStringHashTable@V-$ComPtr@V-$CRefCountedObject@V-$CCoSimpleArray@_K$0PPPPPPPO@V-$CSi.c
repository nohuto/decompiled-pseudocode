/*
 * XREFs of ?AddItem@?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJAEBQEBGAEBV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@@Z @ 0x1800470DC
 * Callers:
 *     ?_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x180046EEC (-_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV-$ComPtr@V-$CRefCountedObject@UPER_A.c)
 * Callees:
 *     ?Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180048D00 (-Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x1800629A0 (-s_LookupEntry@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPP.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_RehashTable@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x180134914 (-_RehashTable@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPP.c)
 */

__int64 __fastcall CStringHashTable<Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare>::AddItem(
        __int64 a1,
        LPCWSTR *a2,
        __int64 *a3)
{
  HRESULT v5; // ebx
  LPVOID v6; // rbp
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rax
  _DWORD *v10; // rbx
  __int64 v11; // rcx
  unsigned __int64 v13; // rcx
  LPVOID v14[5]; // [rsp+20h] [rbp-28h] BYREF
  LPVOID pv; // [rsp+68h] [rbp+20h] BYREF

  pv = 0LL;
  v5 = SHStrDupW(*a2, (LPWSTR *)&pv);
  if ( v5 < 0 )
    return (unsigned int)v5;
  v6 = pv;
  v7 = (_QWORD *)(a1 + 16);
  v5 = 0;
  v14[0] = pv;
  if ( !*(_QWORD *)(a1 + 16) )
  {
    v13 = *(unsigned int *)(a1 + 4);
    *v7 = 0LL;
    if ( is_mul_ok(v13, 0x18uLL) )
      v5 = CTLocalAllocPolicy::Alloc(
             (void *)v13,
             (v13 * (unsigned __int128)0x18uLL) >> 64,
             24 * v13,
             (void **)(a1 + 16));
    else
      v5 = -2147024362;
  }
  if ( v5 < 0 )
  {
LABEL_20:
    CoTaskMemFree(pv);
    return (unsigned int)v5;
  }
  v8 = *(unsigned int *)(a1 + 4);
  if ( *(_DWORD *)a1 > *(_DWORD *)(a1 + 4) >> 1 )
  {
    v8 = (unsigned int)(2 * v8 - 1);
  }
  else if ( *(_DWORD *)(a1 + 8) <= (unsigned int)v8 >> 2 )
  {
    goto LABEL_6;
  }
  v5 = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::_RehashTable(
         a1,
         v8);
LABEL_6:
  if ( v5 < 0 )
    goto LABEL_20;
  v9 = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
         *v7,
         *(unsigned int *)(a1 + 4),
         v14);
  v10 = (_DWORD *)v9;
  if ( *(_DWORD *)v9 == 1 )
  {
    v5 = -2147024809;
    goto LABEL_20;
  }
  if ( *(_DWORD *)v9 == 2 )
    --*(_DWORD *)(a1 + 8);
  *(_QWORD *)(v9 + 8) = v6;
  v11 = *a3;
  *(_QWORD *)(v9 + 16) = *a3;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  *v10 = 1;
  v5 = 0;
  ++*(_DWORD *)a1;
  return (unsigned int)v5;
}
