/*
 * XREFs of KiGetXSaveSupportedFeatures @ 0x1403ADB10
 * Callers:
 *     KiInitializeXSave @ 0x14099CC40 (KiInitializeXSave.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall KiGetXSaveSupportedFeatures(__int64 a1)
{
  __int64 result; // rax
  unsigned int v11; // r10d
  int v17; // r8d
  int v18; // r8d
  unsigned __int64 v19; // rcx
  unsigned int *v20; // rdi
  _DWORD *v21; // rsi
  int v22; // edx
  unsigned int i; // r8d
  unsigned int v24; // ebp
  __int64 v30; // r8

  _RAX = 1LL;
  __asm { cpuid }
  if ( (_RCX & 0x4000000) == 0 )
    goto LABEL_24;
  _RAX = 13LL;
  __asm { cpuid }
  result = (unsigned int)result;
  *(_QWORD *)a1 = (unsigned int)result | ((unsigned __int64)(unsigned int)_RDX << 32);
  if ( (result & 3) == 3 )
  {
    v11 = 0;
    _RAX = 13LL;
    __asm { cpuid }
    v17 = 0;
    if ( (_RAX & 0xA) == 0xA )
      v17 = 2;
    v18 = *(_DWORD *)(a1 + 20) & 0xFFFFFFFC | _RAX & 1 | v17;
    *(_DWORD *)(a1 + 20) = v18;
    if ( (v18 & 2) != 0 )
      v19 = (unsigned int)_RCX | ((unsigned __int64)(unsigned int)_RDX << 32);
    else
      v19 = 0LL;
    *(_QWORD *)(a1 + 536) = v19;
    v20 = (unsigned int *)(a1 + 28);
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 28) = 160;
    v21 = (_DWORD *)(a1 + 44);
    *(_DWORD *)(a1 + 32) = 160;
    v22 = 576;
    *(_DWORD *)(a1 + 36) = 256;
    for ( i = 2; i < 0x40; ++i )
    {
      v24 = v22;
      if ( ((1LL << i) & *(_QWORD *)a1) != 0 )
      {
        _RAX = 13LL;
        __asm { cpuid }
        *(v21 - 1) = _RBX;
        *v21 = _RAX;
        v22 = _RBX + _RAX;
        if ( v24 >= (int)_RBX + (int)_RAX )
          v22 = v24;
        if ( (_RCX & 2) != 0 )
          *(_QWORD *)(a1 + 544) |= 1LL << i;
      }
      v21 += 2;
    }
    result = *(unsigned int *)(a1 + 20);
    *(_DWORD *)(a1 + 16) = v22;
    if ( (result & 2) != 0 )
    {
      v30 = 556LL;
      do
      {
        if ( ((1LL << v11) & *(_QWORD *)(a1 + 536)) != 0 )
        {
          _RAX = 13LL;
          __asm { cpuid }
          *(_DWORD *)(v30 + a1) = result;
          if ( (_RCX & 2) != 0 )
            *(_QWORD *)(a1 + 544) |= 1LL << v11;
        }
        else
        {
          result = *v20;
          *(_DWORD *)(v30 + a1) = result;
        }
        ++v11;
        v30 += 4LL;
        v20 += 2;
      }
      while ( v11 < 0x40 );
    }
  }
  else
  {
LABEL_24:
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 16) = 0;
  }
  return result;
}
