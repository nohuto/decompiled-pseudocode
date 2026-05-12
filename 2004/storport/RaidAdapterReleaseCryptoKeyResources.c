/*
 * XREFs of RaidAdapterReleaseCryptoKeyResources @ 0x1C002CE7C
 * Callers:
 *     RaidUnitReleaseIrp @ 0x1C00087C8 (RaidUnitReleaseIrp.c)
 *     RaidUnitCompleteRequest @ 0x1C00089E0 (RaidUnitCompleteRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterReleaseCryptoKeyResources(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  unsigned int v3; // r9d
  unsigned __int64 v4; // r8
  __int64 v5; // rcx

  v2 = *(_DWORD **)(a2 + 784);
  v3 = 0;
  if ( *v2 != 1 || v2[1] != 24 )
    return 0LL;
  v4 = *(_QWORD *)(a1 + 5752) + ((unsigned __int64)(unsigned int)v2[2] << 6);
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 40));
  if ( *(int *)(v4 + 40) < 0 )
    v3 = -1073741823;
  v5 = *(_QWORD *)(a2 + 784);
  *(_OWORD *)v5 = 0LL;
  *(_QWORD *)(v5 + 16) = 0LL;
  return v3;
}
