/*
 * XREFs of _ImportTablepInsertModuleSorted@8 @ 0x4B33E4EE
 * Callers:
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YGJPAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PAXPAU_IMAGE_NT_HEADERS@@PAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x4B33E2CD (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YGJPAU_IMPORTTABLEP_IMPORTTABLEP_SO.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0?IAAAAAAAAAAAAAAA@@@YGJPAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PAXPAU_IMAGE_NT_HEADERS@@PAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x4B33E351 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0-IAAAAAAAAAAAAAAA@@@YGJPAU_IMPORTTABLEP_IMPOR.c)
 *     _RtlComputeImportTableHash@12 @ 0x4B33E550 (_RtlComputeImportTableHash@12.c)
 * Callees:
 *     __stricmp @ 0x4B2F7400 (__stricmp.c)
 */

int **__fastcall ImportTablepInsertModuleSorted(int a1, int ***a2)
{
  int **result; // eax
  int **v5; // ebx
  int *i; // edi

  if ( *a2 && (result = (int **)_stricmp((const char *)(*a2)[1], *(const char **)(a1 + 4)), (int)result <= 0) )
  {
    v5 = *a2;
    for ( i = **a2; ; i = (int *)*i )
    {
      if ( !i )
      {
        *(_DWORD *)a1 = 0;
        goto LABEL_9;
      }
      result = (int **)_stricmp((const char *)i[1], *(const char **)(a1 + 4));
      if ( (int)result >= 0 )
        break;
      v5 = (int **)i;
    }
    *(_DWORD *)a1 = i;
LABEL_9:
    *v5 = (int *)a1;
  }
  else
  {
    result = *a2;
    *(_DWORD *)a1 = *a2;
    *a2 = (int **)a1;
  }
  return result;
}
