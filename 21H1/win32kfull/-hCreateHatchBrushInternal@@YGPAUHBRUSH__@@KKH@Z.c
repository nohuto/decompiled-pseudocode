/*
 * XREFs of ?hCreateHatchBrushInternal@@YGPAUHBRUSH__@@KKH@Z @ 0x21DDF2
 * Callers:
 *     _GreExtCreatePen@44 @ 0xA90C4 (_GreExtCreatePen@44.c)
 *     _NtGdiCreateHatchBrushInternal@12 @ 0x21E1B2 (_NtGdiCreateHatchBrushInternal@12.c)
 * Callees:
 *     ??1BRUSHMEMOBJ@@QAE@XZ @ 0x21DDC9 (--1BRUSHMEMOBJ@@QAE@XZ.c)
 */

int __userpurge hCreateHatchBrushInternal@<eax>(
        unsigned int a1@<edx>,
        unsigned int a2@<ecx>,
        unsigned int a3,
        unsigned int a4,
        int a5)
{
  int v5; // esi
  _DWORD v7[3]; // [esp+4h] [ebp-Ch] BYREF

  v5 = 0;
  if ( a2 <= 0xB )
  {
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v7, a1, a2, a3, 0);
    if ( v7[0] )
    {
      v7[2] = 1;
      v5 = *(_DWORD *)v7[0];
    }
    BRUSHMEMOBJ::~BRUSHMEMOBJ((BRUSHMEMOBJ *)v7);
  }
  return v5;
}
