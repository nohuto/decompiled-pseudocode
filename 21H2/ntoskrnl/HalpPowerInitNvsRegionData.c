/*
 * XREFs of HalpPowerInitNvsRegionData @ 0x140A6A594
 * Callers:
 *     HalpPowerInitDiscard @ 0x140A6A49C (HalpPowerInitDiscard.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x1403BB428 (HalpMmAllocateMemoryInternal.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

void HalpPowerInitNvsRegionData()
{
  __int64 v0; // rbx
  int v1; // ecx
  int v2; // r9d
  unsigned __int64 v3; // rax
  unsigned int v4; // r8d
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 v7; // r10
  unsigned int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax

  v0 = HalpAcpiMultiNode;
  v1 = 0;
  v2 = 0;
  if ( HalpAcpiMultiNode )
  {
    v3 = *(_QWORD *)(HalpAcpiMultiNode + 8);
    if ( v3 )
    {
      v4 = 0;
      v5 = 0LL;
      do
      {
        if ( *(_DWORD *)(HalpAcpiMultiNode + 24 * v5 + 32) == 4 )
        {
          v1 += *(_DWORD *)(HalpAcpiMultiNode + 24 * v5 + 24);
          ++v2;
        }
        v5 = ++v4;
      }
      while ( v4 < v3 );
      if ( v1 )
      {
        HalpNvsPreservedDataSize = v1;
        v6 = 24 * v2;
        HalpNvsRegionCount = v2;
        HalpNvsRegionData = HalpMmAllocateMemoryInternal(24 * v2, 1u);
        if ( !HalpNvsRegionData )
          KeBugCheckEx(0xACu, v6, 1uLL, (ULONG_PTR)"minkernel\\hals\\lib\\power\\pmsleep.c", 0x73AuLL);
        v7 = 0LL;
        v8 = 0;
        if ( *(_QWORD *)(v0 + 8) )
        {
          v9 = 0LL;
          do
          {
            if ( *(_DWORD *)(v0 + 24 * v9 + 32) == 4 )
            {
              v10 = 3 * v7;
              v11 = HalpNvsRegionData;
              *(_QWORD *)(HalpNvsRegionData + 8 * v10) = *(_QWORD *)(v0 + 24 * v9 + 16);
              v12 = *(_DWORD *)(v0 + 24 * v9 + 24);
              *(_QWORD *)(v11 + 8 * v10 + 16) = 0LL;
              v7 = (unsigned int)(v7 + 1);
              *(_DWORD *)(v11 + 8 * v10 + 8) = v12;
            }
            v9 = ++v8;
          }
          while ( (unsigned __int64)v8 < *(_QWORD *)(v0 + 8) );
        }
      }
    }
  }
}
