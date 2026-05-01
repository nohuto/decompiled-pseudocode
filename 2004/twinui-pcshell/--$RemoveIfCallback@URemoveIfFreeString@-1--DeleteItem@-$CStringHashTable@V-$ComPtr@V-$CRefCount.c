/*
 * XREFs of ??$RemoveIfCallback@URemoveIfFreeString@?1??DeleteItem@?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJAEBQEBG@Z@@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEAAXAEAURemoveIfFreeString@?1??DeleteItem@?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJAEBQEBG@Z@@Z @ 0x180144928
 * Callers:
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x18015512C (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z.c)
 * Callees:
 *     ?CompareKey@CStringCompare@@SAHQEBG0@Z @ 0x18014944C (-CompareKey@CStringCompare@@SAHQEBG0@Z.c)
 *     ?_FreeBucket@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAHPEAVHashBucket@1@@Z @ 0x180155988 (-_FreeBucket@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPPP.c)
 */

int __fastcall ___RemoveIfCallback_URemoveIfFreeString__1__DeleteItem___CStringHashTable_V__ComPtr_V__CRefCountedObject_V__CCoSimpleArray__K_0PPPPPPPO_V__CSimpleArrayStandardCompareHelper__K_______WRL_Microsoft__VCStringHashPolicy__VCStringCompare____QEAAJAEBQEBG_Z____CSimpleHashTable_PEBGV__ComPtr_V__CRefCountedObject_V__CCoSimpleArray__K_0PPPPPPPO_V__CSimpleArrayStandardCompareHelper__K_______WRL_Microsoft__VCStringHashPolicy__VCStringCompare__VCDefaultResizePolicy__VCDefaultRehashPolicy____QEAAXAEAURemoveIfFreeString__1__DeleteItem___CStringHashTable_V__ComPtr_V__CRefCountedObject_V__CCoSimpleArray__K_0PPPPPPPO_V__CSimpleArrayStandardCompareHelper__K_______WRL_Microsoft__VCStringHashPolicy__VCStringCompare____QEAAJAEBQEBG_Z__Z(
        __int64 a1,
        __int64 a2)
{
  _UNKNOWN **v2; // rax
  __int64 i; // rdi
  __int64 v6; // rbp
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v2 = &retaddr;
  if ( *(_QWORD *)(a1 + 16) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 4); i = (unsigned int)(i + 1) )
    {
      v6 = *(_QWORD *)(a1 + 16);
      if ( *(_DWORD *)(v6 + 24 * i) == 1 )
      {
        LODWORD(v2) = CStringCompare::CompareKey(
                        *(const unsigned __int16 *const *)(v6 + 24 * i + 8),
                        *(const unsigned __int16 *const *)(a2 + 8));
        if ( (_DWORD)v2 )
        {
          CoTaskMemFree(*(LPVOID *)(v6 + 24 * i + 8));
          *(_BYTE *)a2 = 1;
          LODWORD(v2) = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::_FreeBucket(
                          a1,
                          *(_QWORD *)(a1 + 16) + 24 * i);
        }
      }
    }
  }
  return (int)v2;
}
