/*
 * XREFs of DpiPdoHandleQueryBusInformation @ 0x1C019FDC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiPdoHandleQueryBusInformation(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  GUID *PoolWithTag; // rax

  v2 = 0;
  PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74727044u);
  if ( PoolWithTag )
  {
    *(_QWORD *)&PoolWithTag[1].Data1 = 15LL;
    *PoolWithTag = GUID_BUS_TYPE_DISPLAY;
    *(_QWORD *)(a2 + 56) = PoolWithTag;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
