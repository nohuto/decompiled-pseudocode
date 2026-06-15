/*
 * XREFs of ??1?$CSimpleArray@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@V?$CSimpleArrayEqualHelper@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@@2@@ATL@@QEAA@XZ @ 0x180119634
 * Callers:
 *     _CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_f36e01949351335f5e9acafaa1161a48____::_1_::dtor$0 @ 0x180117958 (_CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_f36e01949351335f5e9acafaa1161a4.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CSimpleArray<ATL::CComHeapPtr<tWAVEFORMATEX>,ATL::CSimpleArrayEqualHelper<ATL::CComHeapPtr<tWAVEFORMATEX>>>::~CSimpleArray<ATL::CComHeapPtr<tWAVEFORMATEX>,ATL::CSimpleArrayEqualHelper<ATL::CComHeapPtr<tWAVEFORMATEX>>>(
        char **a1)
{
  char *v2; // rcx
  int v3; // ebp
  __int64 v4; // rsi
  char *v5; // rbx

  v2 = *a1;
  if ( v2 )
  {
    v3 = 0;
    if ( *((int *)a1 + 2) > 0 )
    {
      v4 = 0LL;
      do
      {
        v5 = *a1;
        CoTaskMemFree(*(LPVOID *)&(*a1)[v4]);
        *(_QWORD *)&v5[v4] = 0LL;
        ++v3;
        v4 += 8LL;
      }
      while ( v3 < *((_DWORD *)a1 + 2) );
      v2 = *a1;
    }
    free(v2);
    *a1 = 0LL;
  }
  *((_DWORD *)a1 + 2) = 0;
  *((_DWORD *)a1 + 3) = 0;
}
