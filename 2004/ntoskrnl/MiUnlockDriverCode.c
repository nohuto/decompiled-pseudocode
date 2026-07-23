/*
 * XREFs of MiUnlockDriverCode @ 0x14075ED34
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MiGetPteAddress @ 0x140221EF0 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x140224A90 (RtlImageNtHeader.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140224D10 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiUnlockCodePage @ 0x14039E2C0 (MiUnlockCodePage.c)
 */

__int64 __fastcall MiUnlockDriverCode(__int64 a1)
{
  void *v1; // rdi
  __int64 result; // rax
  __int64 v4; // rsi
  unsigned int v5; // ebx
  unsigned int *v6; // r14
  unsigned int v7; // edx
  unsigned __int64 v8; // r8
  unsigned __int64 PteAddress; // rax
  unsigned __int64 v10; // rdx

  v1 = *(void **)(a1 + 48);
  result = MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v1);
  if ( !(_DWORD)result )
  {
    result = MiGetSystemRegionType((unsigned __int64)v1);
    if ( (_DWORD)result != 1 )
    {
      result = (__int64)RtlImageNtHeader(v1);
      v4 = result;
      v5 = 0;
      if ( *(_WORD *)(result + 6) )
      {
        v6 = (unsigned int *)(result + *(unsigned __int16 *)(result + 20) + 32LL);
        do
        {
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 224) + 4LL * v5) )
          {
            v7 = v6[2];
            if ( v7 < *v6 )
              v7 = *v6;
            MiGetPteAddress(((unsigned __int64)v1 + v6[1] + v7 + 4095) & 0xFFFFFFFFFFFFF000uLL);
            PteAddress = MiGetPteAddress(v8);
            MiUnlockCodePage(PteAddress, v10, 0);
          }
          result = *(unsigned __int16 *)(v4 + 6);
          ++v5;
          v6 += 10;
        }
        while ( v5 < (unsigned int)result );
      }
    }
  }
  return result;
}
