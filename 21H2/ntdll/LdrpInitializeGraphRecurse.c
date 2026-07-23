/*
 * XREFs of LdrpInitializeGraphRecurse @ 0x18006D078
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpPrepareModuleForExecution @ 0x18003D888 (LdrpPrepareModuleForExecution.c)
 *     LdrpInitializeShimDllDependencies @ 0x18006CBC4 (LdrpInitializeShimDllDependencies.c)
 *     LdrpInitializeGraphRecurse @ 0x18006D078 (LdrpInitializeGraphRecurse.c)
 *     LdrpInitializeImportRedirection @ 0x180082514 (LdrpInitializeImportRedirection.c)
 *     LdrpInitializeProcess @ 0x1800D1E80 (LdrpInitializeProcess.c)
 *     AVrfInitializeVerifier @ 0x1800D9908 (AVrfInitializeVerifier.c)
 * Callees:
 *     LdrpInitializeGraphRecurse @ 0x18006D078 (LdrpInitializeGraphRecurse.c)
 *     LdrpInitializeNode @ 0x18006D154 (LdrpInitializeNode.c)
 */

__int64 __fastcall LdrpInitializeGraphRecurse(__int64 *a1, __int64 a2, _BYTE *a3)
{
  __int64 **v6; // rsi
  char v7; // al
  __int64 result; // rax
  __int64 **v9; // rdi
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)a1 + 14) == -4 )
    return 3221225794LL;
  v6 = (__int64 **)a1[5];
  v7 = 0;
  v13 = 0;
  if ( v6 )
  {
    v9 = v6;
    do
    {
      v9 = (__int64 **)*v9;
      if ( ((_BYTE)v9[3] & 1) == 0 )
      {
        v10 = v9[1];
        if ( *((_DWORD *)v10 + 14) == 7 )
        {
          result = LdrpInitializeGraphRecurse(v10, a2, &v13);
          if ( (int)result < 0 )
            goto LABEL_21;
          v7 = v13;
        }
        else
        {
          if ( *((_DWORD *)v10 + 14) == -4 )
          {
            result = 3221225794LL;
            goto LABEL_21;
          }
          if ( *((_DWORD *)v10 + 14) == 8 )
            v7 = 1;
          v13 = v7;
        }
      }
    }
    while ( v9 != v6 );
    if ( v7 )
    {
      v11 = *a1;
      *a3 = 1;
      v12 = *(_QWORD *)(v11 + 16);
      if ( v12 )
      {
        if ( a2 != *(_QWORD *)(v12 + 40) )
          return 0LL;
      }
    }
  }
  result = LdrpInitializeNode(a1);
  if ( (int)result < 0 )
LABEL_21:
    *((_DWORD *)a1 + 14) = -4;
  return result;
}
