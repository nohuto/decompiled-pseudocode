/*
 * XREFs of IopGetEnvironmentVariableTrEE @ 0x14089A8D0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     IopIssueTrEERequest @ 0x14050AE80 (IopIssueTrEERequest.c)
 *     IopVerifierExAllocatePool_5 @ 0x14050AF78 (IopVerifierExAllocatePool_5.c)
 *     IopEfiStatusToNTSTATUS @ 0x14089A02C (IopEfiStatusToNTSTATUS.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetEnvironmentVariableTrEE(
        __int64 a1,
        __int64 a2,
        _WORD *a3,
        _OWORD *a4,
        void *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  __int64 v9; // rax
  unsigned int v12; // esi
  unsigned int v13; // edi
  _OWORD *Pool_5; // rax
  _OWORD *v15; // rbp
  int v16; // edi
  unsigned int v17; // r14d
  __int64 v18; // rcx
  char *v19; // rbx
  size_t v20; // r8
  int v22[4]; // [rsp+50h] [rbp-38h] BYREF

  v22[0] = 0;
  v9 = -1LL;
  do
    ++v9;
  while ( a3[v9] );
  v12 = 2 * v9 + 2;
  v13 = 2 * v9 + 18;
  Pool_5 = IopVerifierExAllocatePool_5(a1, v13);
  v15 = Pool_5;
  if ( Pool_5 )
  {
    memmove(Pool_5 + 1, a3, v12);
    *v15 = *a4;
    v17 = *a6 + 24;
    v19 = (char *)IopVerifierExAllocatePool_5(v18, v17);
    if ( v19 )
    {
      v16 = IopIssueTrEERequest(0, a1, a2, (__int64)v15, v13, (__int64)v19, v17, 0x18u, v22);
      if ( v16 >= 0 )
      {
        if ( *(_QWORD *)v19 )
        {
          if ( *(_QWORD *)v19 == 0x8000000000000005uLL )
          {
            v16 = -1073741789;
            *a6 = *((_DWORD *)v19 + 4);
          }
          else
          {
            *a6 = 0;
            v16 = IopEfiStatusToNTSTATUS(*(_QWORD *)v19);
          }
        }
        else
        {
          if ( a7 )
            *a7 = *((_DWORD *)v19 + 2);
          v20 = (unsigned int)*a6;
          if ( v20 >= *((_QWORD *)v19 + 2) )
            v20 = *((_QWORD *)v19 + 2);
          memmove(a5, v19 + 24, v20);
          *a6 = *((_DWORD *)v19 + 4);
        }
      }
      else
      {
        *a6 = 0;
      }
    }
    else
    {
      v16 = -1073741670;
    }
    ExFreePoolWithTag(v15, 0);
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v16;
}
