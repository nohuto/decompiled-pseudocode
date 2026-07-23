/*
 * XREFs of KiSetStandardizedCacheInformation @ 0x14099F7BC
 * Callers:
 *     KiSetCacheInformationIntel @ 0x14099F75C (KiSetCacheInformationIntel.c)
 *     KiSetCacheInformationAmd @ 0x1409B086C (KiSetCacheInformationAmd.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall KiSetStandardizedCacheInformation(__int64 a1, unsigned int a2)
{
  __int64 v2; // r10
  __int64 v3; // r9
  __int64 result; // rax
  int v11; // r11d
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  char v16; // cl
  __int64 v17; // r11
  unsigned int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // rdx
  int v21; // ebx
  int i; // edi
  __int64 v23; // rcx

  v2 = 0LL;
  v3 = a1 + 33496;
  do
  {
    _RAX = a2;
    __asm { cpuid }
    v11 = _RCX;
    v12 = (int)((_DWORD)result << 27) >> 27;
    if ( !v12 )
      break;
    v13 = v12 - 1;
    if ( !v13 )
    {
      *(_DWORD *)(v3 + 8) = 2;
      goto LABEL_7;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      *(_DWORD *)(v3 + 8) = 1;
      goto LABEL_7;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      *(_DWORD *)(v3 + 8) = 0;
LABEL_7:
      if ( (result & 0x200) != 0 )
        v16 = -1;
      else
        v16 = ((unsigned int)_RBX >> 22) + 1;
      *(_BYTE *)(v3 + 1) = v16;
      *(_BYTE *)v3 = ((unsigned int)result >> 5) & 7;
      *(_WORD *)(v3 + 2) = (_RBX & 0xFFF) + 1;
      *(_DWORD *)(v3 + 4) = (v11 + 1)
                          * (((unsigned int)_RBX >> 22) + 1)
                          * ((_RBX & 0xFFF) + 1)
                          * ((((unsigned int)_RBX >> 12) & 0x3FF) + 1);
      v17 = *(_QWORD *)(a1 + 200);
      v18 = ((unsigned int)result >> 14) & 0xFFF;
      if ( v18 )
      {
        _BitScanReverse(&v19, 2 * v18 + 1);
        v20 = 0LL;
        v21 = ~((unsigned __int8)(1 << v19) - 1);
        for ( i = v21 & *(_DWORD *)(a1 + 212);
              (unsigned int)v20 < (unsigned int)KeNumberProcessors_0;
              v20 = (unsigned int)(v20 + 1) )
        {
          v23 = KiProcessorBlock[v20];
          if ( *(_QWORD *)(v23 + 192) == *(_QWORD *)(a1 + 192) && (v21 & *(_DWORD *)(v23 + 212)) == i )
          {
            v17 |= *(_QWORD *)(v23 + 200);
            *(_QWORD *)(v23 + 8 * v2 + 33904) |= v17;
          }
        }
      }
      v3 += 12LL;
      *(_QWORD *)(a1 + 8 * v2 + 33904) = v17;
      ++*(_DWORD *)(a1 + 33556);
      goto LABEL_16;
    }
    if ( v15 == 2 )
    {
      *(_DWORD *)(v3 + 8) = 3;
      goto LABEL_7;
    }
LABEL_16:
    result = *(unsigned int *)(a1 + 33556);
    v2 = (unsigned int)(v2 + 1);
  }
  while ( (unsigned int)result < 5 );
  return result;
}
