/*
 * XREFs of ImportTablepInsertFunctionSorted @ 0x1800E0630
 * Callers:
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x1800E033C (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_S.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0?IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x1800E0400 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0-IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPO.c)
 *     RtlComputeImportTableHash @ 0x1800E06B0 (RtlComputeImportTableHash.c)
 * Callees:
 *     _stricmp @ 0x18008DCF0 (_stricmp.c)
 */

int __fastcall ImportTablepInsertFunctionSorted(__int64 a1, __int64 ***a2)
{
  __int64 **v4; // rax
  __int64 **v5; // rsi
  __int64 *i; // rdi

  if ( *a2 && (LODWORD(v4) = stricmp((const char *)(*a2)[1], *(const char **)(a1 + 8)), (int)v4 <= 0) )
  {
    v5 = *a2;
    for ( i = **a2; ; i = (__int64 *)*i )
    {
      if ( !i )
      {
        *(_QWORD *)a1 = 0LL;
        goto LABEL_9;
      }
      LODWORD(v4) = stricmp((const char *)i[1], *(const char **)(a1 + 8));
      if ( (int)v4 >= 0 )
        break;
      v5 = (__int64 **)i;
    }
    *(_QWORD *)a1 = i;
LABEL_9:
    *v5 = (__int64 *)a1;
  }
  else
  {
    v4 = *a2;
    *(_QWORD *)a1 = *a2;
    *a2 = (__int64 **)a1;
  }
  return (int)v4;
}
