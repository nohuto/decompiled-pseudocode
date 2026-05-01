/*
 * XREFs of ?HigherPriorityPending@BaseResourceSet@ExecutionModel@@AEAA_NKPEBU_ResourceInfo@2@W4Enum@Priority@2@@Z @ 0x1800025D8
 * Callers:
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180002508 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Pri.c)
 * Callees:
 *     <none>
 */

char __fastcall ExecutionModel::BaseResourceSet::HigherPriorityPending(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        int a4)
{
  _QWORD *v4; // rbx
  _QWORD *i; // rax
  __int64 v10; // r9
  unsigned int v11; // r10d
  unsigned int *v12; // r8
  __int64 v13; // rcx

  v4 = (_QWORD *)(a1 + 40);
  for ( i = *(_QWORD **)(a1 + 40); ; i = (_QWORD *)*i )
  {
    if ( i == v4 )
      return 0;
    v10 = i[2];
    if ( *(_DWORD *)(v10 + 1280) == 1 && *(_DWORD *)(v10 + 1288) < a4 )
    {
      v11 = 0;
      if ( a2 )
        break;
    }
LABEL_13:
    ;
  }
  v12 = a3;
  while ( 1 )
  {
    if ( *((_QWORD *)v12 + 1) )
    {
      if ( *(_QWORD *)(v10 + 24LL * (int)*v12 + 80) )
      {
        v13 = *(_QWORD *)(a1 + 1272);
        if ( !_bittest64(&v13, *v12) )
          return 1;
      }
    }
    ++v11;
    v12 += 6;
    if ( v11 >= a2 )
      goto LABEL_13;
  }
}
