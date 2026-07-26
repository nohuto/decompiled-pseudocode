/*
 * XREFs of PktMonClientAddEdgeEx @ 0x1C00C6394
 * Callers:
 *     PktMonClientAddEdge @ 0x1C00C635C (PktMonClientAddEdge.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PktMonClientAddEdgeEx(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, _QWORD *a6)
{
  unsigned int v7; // ebx
  _QWORD *v8; // rdx
  __int16 v10; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+32h] [rbp-26h]
  __int16 v12; // [rsp+36h] [rbp-22h]
  __int64 v13; // [rsp+38h] [rbp-20h]
  int v14; // [rsp+40h] [rbp-18h]
  int v15; // [rsp+44h] [rbp-14h]
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  v11 = 0;
  v12 = 0;
  v16 = 0LL;
  v10 = 24;
  v13 = a2;
  v14 = 3;
  v15 = 4;
  if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
  {
    v7 = (*((__int64 (__fastcall **)(PVOID, _QWORD, __int16 *, __int64 *))*(&ProviderBindingContext + 1) + 4))(
           ProviderBindingContext,
           *a1,
           &v10,
           &v16);
    if ( !v7 )
    {
      v8 = a6;
      *a6 = v16;
      *((_DWORD *)v8 + 4) = a5;
      v8[1] = a1;
    }
    ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
  }
  else
  {
    return (unsigned int)-1073741661;
  }
  return v7;
}
