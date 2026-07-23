/*
 * XREFs of KiGetIptInfo @ 0x1403ADA94
 * Callers:
 *     KiInitializeXSave @ 0x14099CC40 (KiInitializeXSave.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HviGetIptFeatures @ 0x1405BF308 (HviGetIptFeatures.c)
 *     KiGetCpuVendor @ 0x14099CF68 (KiGetCpuVendor.c)
 */

__int64 __fastcall KiGetIptInfo(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax
  char v24; // r8
  int v25; // r8d
  __int128 v26; // [rsp+20h] [rbp-30h] BYREF
  __int128 v27; // [rsp+30h] [rbp-20h] BYREF

  *a1 = 0;
  *a2 = 0;
  v26 = 0LL;
  v27 = 0LL;
  result = KiGetCpuVendor(a1, a2);
  if ( (_DWORD)result == 2 )
  {
    _RAX = 0LL;
    __asm { cpuid }
    *(_QWORD *)((char *)&v26 + 4) = __PAIR64__(_RCX, _RBX);
    HIDWORD(v26) = _RDX;
    if ( (unsigned int)result >= 0x14 )
    {
      _RAX = 7LL;
      __asm { cpuid }
      *(_QWORD *)((char *)&v26 + 4) = __PAIR64__(_RCX, _RBX);
      HIDWORD(v26) = _RDX;
      if ( _bittest((const signed __int32 *)&v26 + 1, 0x19u)
        || (result = HviGetIptFeatures(&v27), (v27 & 0xFFFFF000) != 0) )
      {
        *a1 = 16;
        *a2 |= 9u;
        _RAX = 20LL;
        __asm { cpuid }
        if ( (_RCX & 1) != 0 || (_RCX & 4) != 0 )
        {
          *a1 += 16;
          *a2 |= 6u;
        }
        if ( (_RBX & 1) != 0 )
        {
          *a1 += 8;
          *a2 |= 0x10u;
        }
        if ( (_RBX & 4) != 0 && (_DWORD)_RAX )
        {
          _RAX = 20LL;
          __asm { cpuid }
          v24 = _RAX;
          if ( ((unsigned __int8)_RAX & 7u) > 4 )
            v24 = -4;
          v25 = v24 & 7;
          *a1 += 16 * v25;
          *a2 |= (32 << v25) - 32;
        }
        result = (*a1 + 63) & 0xFFFFFFC0;
        *a1 = result;
      }
    }
  }
  return result;
}
