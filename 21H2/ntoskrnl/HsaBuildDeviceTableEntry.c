/*
 * XREFs of HsaBuildDeviceTableEntry @ 0x1404E2940
 * Callers:
 *     HsaUpdateDeviceTableEntry @ 0x1404E4638 (HsaUpdateDeviceTableEntry.c)
 *     HsaInitializeIommu @ 0x1409AB520 (HsaInitializeIommu.c)
 * Callees:
 *     HsaBuildInterruptRemappingEntry @ 0x1404E2A74 (HsaBuildInterruptRemappingEntry.c)
 */

unsigned __int64 __fastcall HsaBuildDeviceTableEntry(
        __int64 a1,
        unsigned __int64 a2,
        char a3,
        __int16 a4,
        int a5,
        __int64 a6,
        _QWORD *a7,
        __int64 a8,
        __int64 a9)
{
  unsigned __int64 *v9; // r11
  unsigned __int64 v10; // r10
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 result; // rax

  v9 = (unsigned __int64 *)a9;
  v10 = 0LL;
  *(_OWORD *)a9 = 0LL;
  *(_OWORD *)(a9 + 16) = 0LL;
  if ( a3 )
  {
    *(_QWORD *)(a9 + 8) = 0x100000000LL;
    v10 = *(_QWORD *)a9 & 0xE1FFFFFFFFFFFFFFuLL | ((a2 & 7) << 58) | 0x180000000000000LL;
    *(_WORD *)(a9 + 10) = a2 >> 3;
    v11 = (a2 << 24) ^ (*(_QWORD *)(a9 + 8) ^ (a2 << 24)) & 0x7FFFFFFFFFFLL;
    *(_QWORD *)a9 = v10;
    *(_QWORD *)(a9 + 8) = v11;
  }
  if ( a5 )
  {
    *(_WORD *)(a9 + 8) = a4;
    v10 = *(_QWORD *)a9 & 0xFFF00000000009FFuLL | ((a6 & 0xFFFFFFFFFFLL) << 12) | 0x800;
    *(_QWORD *)a9 = v10;
  }
  if ( a7 )
  {
    *(_QWORD *)(a9 + 16) = *a7;
  }
  else
  {
    HsaBuildInterruptRemappingEntry(a1, a8, a9);
    v10 = *v9;
  }
  v12 = v9[1] & 0xFFFFFDFFFFFFFFFFuLL;
  *v9 = v10 | 0x6000000000000003LL;
  v9[1] = v12 | 0x10000000000LL;
  result = 0xC300000000000000uLL;
  v9[2] |= 0xC300000000000000uLL;
  return result;
}
