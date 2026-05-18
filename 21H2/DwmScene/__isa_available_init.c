/*
 * XREFs of __isa_available_init @ 0x1801249B0
 * Callers:
 *     __scrt_dllmain_after_initialize_c @ 0x180123AC0 (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_initialize_crt @ 0x180123BF0 (__scrt_initialize_crt.c)
 * Callees:
 *     <none>
 */

int __cdecl _isa_available_init()
{
  char v5; // di
  int v6; // r10d
  int v7; // esi
  int v9; // r9d
  int v14; // r11d
  int v15; // eax
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // r8d
  int v23; // eax

  _RAX = 0LL;
  dword_180214F28 = 2;
  dword_180214F24 = 1;
  __asm { cpuid }
  v5 = 0;
  v6 = _RDX;
  v7 = _RAX;
  _RAX = 1LL;
  v9 = _RCX ^ 0x6C65746E | _RBX ^ 0x756E6547;
  __asm { cpuid }
  v14 = _RCX;
  if ( !(v6 ^ 0x49656E69 | v9)
    && ((qword_180214F30 = -1LL, v15 = _RAX & 0xFFF3FF0, v15 == 67264)
     || v15 == 132704
     || v15 == 132720
     || (v16 = (unsigned int)(v15 - 198224), (unsigned int)v16 <= 0x20) && (v17 = 0x100010001LL, _bittest64(&v17, v16))) )
  {
    v18 = dword_180222090 | 1;
    dword_180222090 |= 1u;
  }
  else
  {
    v18 = dword_180222090;
  }
  _RAX = 7LL;
  if ( v7 >= 7 )
  {
    __asm { cpuid }
    v5 = _RBX;
    if ( (_RBX & 0x200) != 0 )
      dword_180222090 = v18 | 2;
  }
  if ( (v14 & 0x100000) != 0 )
  {
    dword_180214F24 = 2;
    dword_180214F28 = 6;
    if ( (v14 & 0x8000000) != 0 && (v14 & 0x10000000) != 0 )
    {
      __asm { xgetbv }
      if ( (_RAX & 6) == 6 )
      {
        v23 = dword_180214F28 | 8;
        dword_180214F24 = 3;
        dword_180214F28 |= 8u;
        if ( (v5 & 0x20) != 0 )
        {
          dword_180214F24 = 5;
          dword_180214F28 = v23 | 0x20;
        }
      }
    }
  }
  return 0;
}
