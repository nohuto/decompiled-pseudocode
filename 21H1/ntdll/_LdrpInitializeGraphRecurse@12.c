/*
 * XREFs of _LdrpInitializeGraphRecurse@12 @ 0x4B2D1904
 * Callers:
 *     _LdrpInitializeShimDllDependencies@0 @ 0x4B2A672F (_LdrpInitializeShimDllDependencies@0.c)
 *     _LdrGetProcedureAddressForCaller@24 @ 0x4B2CCED0 (_LdrGetProcedureAddressForCaller@24.c)
 *     _LdrpInitializeGraphRecurse@12 @ 0x4B2D1904 (_LdrpInitializeGraphRecurse@12.c)
 *     _LdrpPrepareModuleForExecution@8 @ 0x4B2D2176 (_LdrpPrepareModuleForExecution@8.c)
 *     _LdrpInitializeImportRedirection@0 @ 0x4B2EC596 (_LdrpInitializeImportRedirection@0.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _AVrfInitializeVerifier@24 @ 0x4B338523 (_AVrfInitializeVerifier@24.c)
 * Callees:
 *     _LdrpInitializeNode@4 @ 0x4B2D16BE (_LdrpInitializeNode@4.c)
 *     _LdrpInitializeGraphRecurse@12 @ 0x4B2D1904 (_LdrpInitializeGraphRecurse@12.c)
 */

int __fastcall LdrpInitializeGraphRecurse(_DWORD *a1, int a2, _BYTE *a3)
{
  int **v4; // ebx
  char v5; // al
  int **v6; // edi
  int *v7; // ecx
  int result; // eax
  int v9; // eax
  char v10; // [esp+13h] [ebp-5h] BYREF
  int v11; // [esp+14h] [ebp-4h]

  v11 = a2;
  if ( a1[8] == -4 )
    return -1073741502;
  v4 = (int **)a1[6];
  v5 = 0;
  v10 = 0;
  if ( v4 )
  {
    v6 = v4;
    do
    {
      v6 = (int **)*v6;
      if ( ((_BYTE)v6[3] & 1) == 0 )
      {
        v7 = v6[1];
        switch ( v7[8] )
        {
          case 7:
            result = LdrpInitializeGraphRecurse(&v10);
            if ( result < 0 )
              goto LABEL_18;
            v5 = v10;
            a2 = v11;
            break;
          case -4:
            result = -1073741502;
            goto LABEL_18;
          case 8:
            v5 = 1;
            v10 = 1;
            break;
        }
      }
    }
    while ( v6 != v4 );
    if ( v5 )
    {
      *a3 = 1;
      v9 = *(_DWORD *)(*a1 + 8);
      if ( v9 )
      {
        if ( a2 != *(_DWORD *)(v9 + 24) )
          return 0;
      }
    }
  }
  result = LdrpInitializeNode(a1);
  if ( result < 0 )
LABEL_18:
    a1[8] = -4;
  return result;
}
