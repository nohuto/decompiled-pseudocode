/*
 * XREFs of _lambda_a395fd6b1cf218aca28c9236d01e099f_::operator() @ 0xE037A
 * Callers:
 *     ?ValidateIFIMETRICS@@YG_NPAU_IFIMETRICS@@@Z @ 0xE01BE (-ValidateIFIMETRICS@@YG_NPAU_IFIMETRICS@@@Z.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 */

bool __thiscall lambda_a395fd6b1cf218aca28c9236d01e099f_::operator()(unsigned int ***this, unsigned int a2, int a3)
{
  char v4; // bl
  unsigned int v6; // [esp+0h] [ebp-Ch]
  unsigned int *v7; // [esp+4h] [ebp-8h]
  unsigned int v8; // [esp+8h] [ebp-4h] BYREF

  v4 = 0;
  v8 = 0;
  if ( a2 >= 0xB8 && (ULongAdd(a3, a2, (int *)&v8, v6, v7) & 0x80000000) == 0 )
    return v8 <= ***this;
  return v4;
}
