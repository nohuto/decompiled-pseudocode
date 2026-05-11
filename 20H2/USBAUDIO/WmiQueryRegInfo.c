/*
 * XREFs of WmiQueryRegInfo @ 0x1C002B6A0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0013540 (memmove.c)
 */

__int64 __fastcall WmiQueryRegInfo(
        __int64 a1,
        _DWORD *a2,
        unsigned __int16 *a3,
        _QWORD *a4,
        PUNICODE_STRING DestinationString)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned __int16 v9; // ax
  PVOID PoolWithTag; // rax

  v5 = 0;
  *a2 = 8;
  v6 = -1LL;
  do
    ++v6;
  while ( ExBusBaseInstanceName[v6] );
  v9 = 2 * v6;
  *a3 = v9;
  v9 += 2;
  a3[1] = v9;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x41627845u);
  *((_QWORD *)a3 + 1) = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, ExBusBaseInstanceName, *a3);
    *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * ((unsigned __int64)*a3 >> 1)) = 0;
    *a4 = g_RegistryPath;
    RtlInitUnicodeString(DestinationString, L"ExBusMof");
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
