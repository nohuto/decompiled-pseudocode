/*
 * XREFs of KeGetTbSize @ 0x140A5664C
 * Callers:
 *     MiInitializeTbFlushing @ 0x140A56330 (MiInitializeTbFlushing.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiGetTbLeafInfo @ 0x140A93018 (KiGetTbLeafInfo.c)
 */

__int64 KeGetTbSize()
{
  unsigned __int8 CpuVendor; // cl
  unsigned int v6; // r8d
  unsigned int v12; // ebx
  __int64 *v13; // rdx
  unsigned int v14; // ecx
  unsigned int v15; // r9d
  int *v16; // r8
  unsigned int i; // ecx
  unsigned int v29; // ebx
  int *v30; // rdx
  __int128 v31; // [rsp+20h] [rbp-29h]
  __int128 v32; // [rsp+30h] [rbp-19h] BYREF
  char v33; // [rsp+40h] [rbp-9h]
  __int64 v34; // [rsp+48h] [rbp-1h] BYREF
  char v35; // [rsp+50h] [rbp+7h]
  __int64 v36; // [rsp+58h] [rbp+Fh]
  char v37; // [rsp+60h] [rbp+17h]
  __int64 v38; // [rsp+68h] [rbp+1Fh]
  char v39; // [rsp+70h] [rbp+27h]
  __int64 v40; // [rsp+78h] [rbp+2Fh]
  char v41; // [rsp+80h] [rbp+37h]
  __int64 v42; // [rsp+88h] [rbp+3Fh]

  v33 = -76;
  v36 = 512LL;
  v42 = 512LL;
  v34 = 256LL;
  v35 = 100;
  CpuVendor = KeGetCurrentPrcb()->CpuVendor;
  v37 = -63;
  v38 = 1024LL;
  v39 = -61;
  v40 = 1536LL;
  v41 = -54;
  if ( CpuVendor != 1 )
  {
    if ( CpuVendor == 2 )
    {
      _RAX = 0LL;
      __asm { cpuid }
      v6 = _RAX;
      if ( (unsigned int)_RAX >= 2 )
      {
        _RAX = 2LL;
        __asm { cpuid }
        *(_QWORD *)&v31 = __PAIR64__(_RBX, _RAX);
        *((_QWORD *)&v31 + 1) = __PAIR64__(_RDX, _RCX);
        v32 = v31;
        if ( v6 >= 0x18 )
        {
          for ( i = 0; i < 0x20; i += 8 )
          {
            v29 = 0;
            v30 = (int *)&v32;
            do
            {
              if ( *v30 >= 0 && (unsigned __int8)((unsigned int)*v30 >> i) == 0xFE )
                return KiGetTbLeafInfo();
              ++v29;
              ++v30;
            }
            while ( v29 < 4 );
          }
        }
        v12 = 0;
        v13 = &v34;
        do
        {
          v14 = 0;
          while ( 2 )
          {
            v15 = 0;
            v16 = (int *)&v32;
            do
            {
              if ( *v16 >= 0 && (unsigned __int8)((unsigned int)*v16 >> v14) == *((unsigned __int8 *)v13 - 8) )
                return *v13;
              ++v15;
              ++v16;
            }
            while ( v15 < 4 );
            v14 += 8;
            if ( v14 < 0x20 )
              continue;
            break;
          }
          ++v12;
          v13 += 2;
        }
        while ( v12 < 5 );
      }
    }
    return 0LL;
  }
  _RAX = 0x80000000LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 0x80000006 )
    return 0LL;
  _RAX = 2147483654LL;
  __asm { cpuid }
  return WORD1(_RBX) & 0xFFF;
}
