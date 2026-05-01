/*
 * XREFs of ?RmpPolicyDigestCompute@@YA?AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x1800167B0
 * Callers:
 *     ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800127F0 (-RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180016B60 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RmpPolicyDigestCompute(__int64 a1)
{
  char v1; // r9
  __int64 v2; // r10
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  __int16 v5; // ax
  __int16 v6; // r8
  __int16 v7; // dx
  unsigned __int64 v8; // rdx

  v1 = *(_BYTE *)(a1 + 1378);
  v2 = 0x11000002000LL;
  if ( (v1 & 8) != 0
    || (v3 = *(int *)(a1 + 1336), (unsigned int)v3 <= 0x27) && (v4 = 0x8800001000LL, _bittest64(&v4, v3)) )
  {
    v7 = *(_WORD *)(a1 + 1376);
    v6 = 2;
    LOBYTE(v5) = v7;
  }
  else
  {
    v5 = *(_WORD *)(a1 + 1376);
    if ( (v5 & 0x10) != 0 || (unsigned int)v3 <= 0x28 && _bittest64(&v2, v3) )
    {
      v6 = 4;
      LOBYTE(v7) = *(_WORD *)(a1 + 1376);
    }
    else
    {
      v6 = 1;
      LOBYTE(v7) = *(_WORD *)(a1 + 1376);
    }
  }
  if ( (v7 & 0x10) == 0 && ((v8 = *(int *)(a1 + 1336), (unsigned int)v8 > 0x28) || !_bittest64(&v2, v8))
    || (v1 & 0x40) != 0 )
  {
    v6 |= 8u;
  }
  return v6 | (8 * ((2 * (v5 & 3 | (8 * ((*(_DWORD *)(a1 + 1332) >> 3) & 1 | 2)))) | v5 & 8));
}
