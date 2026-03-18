/*
 * XREFs of _lambda_da407dd1077aed8e58ccf102ea4f1592_::operator() @ 0xE03FE
 * Callers:
 *     ?ValidateIFIMETRICS@@YG_NPAU_IFIMETRICS@@@Z @ 0xE01BE (-ValidateIFIMETRICS@@YG_NPAU_IFIMETRICS@@@Z.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 */

bool __userpurge lambda_da407dd1077aed8e58ccf102ea4f1592_::operator()@<al>(
        unsigned int ***a1@<ecx>,
        unsigned int a2@<esi>,
        unsigned int a3,
        int a4)
{
  char v4; // bl
  unsigned int *v5; // esi
  unsigned int v8; // [esp-4h] [ebp-Ch]
  unsigned int *v9; // [esp+0h] [ebp-8h]
  unsigned int *v10; // [esp+0h] [ebp-8h]
  unsigned int v11; // [esp+4h] [ebp-4h] BYREF

  v4 = 0;
  v11 = 0;
  if ( a3 >= 0xC )
  {
    v5 = **a1;
    if ( (ULongAdd(a3, v5[6], (int *)&v11, a2, v9) & 0x80000000) == 0
      && (ULongAdd(20, v11, (int *)&v11, v8, v10) & 0x80000000) == 0 )
    {
      return v11 <= *v5;
    }
  }
  return v4;
}
