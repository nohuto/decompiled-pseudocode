/*
 * XREFs of ?InitializeForHardware@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJIPEAVDXGADAPTER@@@Z @ 0x1C0284190
 * Callers:
 *     ?Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C015AB2C (-Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGPROCESS_ADAPTER_INFO_PASID_DATA::InitializeForHardware(
        DXGPROCESS_ADAPTER_INFO_PASID_DATA *this,
        unsigned int a2,
        struct DXGADAPTER *a3)
{
  __int64 v3; // rbx
  __int64 i; // rdi
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v14; // rax

  v3 = 0LL;
  if ( !a2 )
    return 0LL;
  for ( i = 0LL; ; i += 360LL )
  {
    v8 = *((_QWORD *)a3 + 323);
    if ( (*(_DWORD *)(i + v8 + 16) & 1) != 0 )
    {
      v9 = ExShareAddressSpaceWithDevice(
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(i + v8 + 8) + 64LL) + 152LL),
             *((_QWORD *)this + 1) + 4 * v3);
      v12 = v9;
      if ( v9 < 0 )
        break;
    }
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= a2 )
      return 0LL;
  }
  v14 = WdLogNewEntry5_WdError(v11, v10);
  *(_QWORD *)(v14 + 24) = a3;
  *(_QWORD *)(v14 + 32) = v12;
  WdLogEvent5_WdError(v14);
  return (unsigned int)v12;
}
