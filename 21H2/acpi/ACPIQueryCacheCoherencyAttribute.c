/*
 * XREFs of ACPIQueryCacheCoherencyAttribute @ 0x1C00A0518
 * Callers:
 *     ACPIBusIrpDeviceEnumerated @ 0x1C00937D0 (ACPIBusIrpDeviceEnumerated.c)
 * Callees:
 *     ACPIInternalSetFlags @ 0x1C0001778 (ACPIInternalSetFlags.c)
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B894 (AMLIEvalNameSpaceObject.c)
 *     AMLIFreeDataBuffs @ 0x1C001C758 (AMLIFreeDataBuffs.c)
 */

__int64 __fastcall ACPIQueryCacheCoherencyAttribute(ULONG_PTR BugCheckParameter2)
{
  signed __int64 v2; // rax
  __int64 v3; // rdx
  __int64 *v4; // rax
  int v5; // edi
  __int128 v7; // [rsp+30h] [rbp-38h] BYREF
  __int128 v8; // [rsp+40h] [rbp-28h]
  __int64 v9; // [rsp+50h] [rbp-18h]

  v9 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( _bittest64((const signed __int64 *)(BugCheckParameter2 + 8), 0x33u) )
    return 0;
  v2 = ACPIInternalSetFlags((void *)(BugCheckParameter2 + 1000), 0x1000000uLL);
  if ( (v2 & v3) != 0 )
    return 0;
  v4 = AMLIGetNamedChild(*(__int64 **)(BugCheckParameter2 + 760), 1094927199);
  if ( !v4 )
  {
    *(_DWORD *)(BugCheckParameter2 + 940) = 1;
    return 0;
  }
  v5 = AMLIEvalNameSpaceObject(v4, (__int64)&v7, 0, 0LL);
  if ( v5 >= 0 )
  {
    if ( WORD1(v7) != 1 )
      KeBugCheckEx(0xA5u, 8uLL, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 760), WORD1(v7));
    if ( (v8 & 1) != 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 940) = 2;
    }
    else
    {
      *(_DWORD *)(BugCheckParameter2 + 940) = 3;
      KeReportCacheIncoherentDevice();
    }
    AMLIFreeDataBuffs((__int64)&v7);
  }
  return (unsigned int)v5;
}
