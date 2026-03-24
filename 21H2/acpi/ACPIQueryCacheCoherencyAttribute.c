/*
 * XREFs of ACPIQueryCacheCoherencyAttribute @ 0x1C009A070
 * Callers:
 *     ACPIBusIrpDeviceEnumerated @ 0x1C0099770 (ACPIBusIrpDeviceEnumerated.c)
 * Callees:
 *     ACPIInternalSetFlags @ 0x1C0002350 (ACPIInternalSetFlags.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000BCA0 (AMLIEvalNameSpaceObject.c)
 *     AMLIFreeDataBuffs @ 0x1C001D940 (AMLIFreeDataBuffs.c)
 *     AMLIGetNamedChild @ 0x1C0020D50 (AMLIGetNamedChild.c)
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
  if ( (*(_QWORD *)(BugCheckParameter2 + 8) & 0x8000000000000LL) != 0 )
    return 0;
  v2 = ACPIInternalSetFlags((void *)(BugCheckParameter2 + 960), 0x1000000uLL);
  if ( (v2 & v3) != 0 )
    return 0;
  v4 = AMLIGetNamedChild(*(__int64 **)(BugCheckParameter2 + 720), 1094927199);
  if ( !v4 )
  {
    *(_DWORD *)(BugCheckParameter2 + 900) = 1;
    return 0;
  }
  v5 = AMLIEvalNameSpaceObject((unsigned __int64 *)v4, (__int64)&v7, 0, 0LL);
  if ( v5 >= 0 )
  {
    if ( WORD1(v7) != 1 )
      KeBugCheckEx(0xA5u, 8uLL, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 720), WORD1(v7));
    if ( (v8 & 1) != 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 900) = 2;
    }
    else
    {
      *(_DWORD *)(BugCheckParameter2 + 900) = 3;
      KeReportCacheIncoherentDevice();
    }
    AMLIFreeDataBuffs((__int64)&v7);
  }
  return (unsigned int)v5;
}
