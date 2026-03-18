/*
 * XREFs of ?GiveObject@@YGHIPAXK@Z @ 0x17EA64
 * Callers:
 *     ?AddPublicObject@@YGHIPAXK@Z @ 0x17E876 (-AddPublicObject@@YGHIPAXK@Z.c)
 *     ?RemovePublicObject@@YGHIPAX@Z @ 0x17EB8B (-RemovePublicObject@@YGHIPAX@Z.c)
 *     ?xxxAdviseData@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17EEED (-xxxAdviseData@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YGKPAKPAJPAUtagDDECONV@@PAPAUtagINTDDEINFO@@@Z @ 0x17F2E7 (-xxxCopyAckIn@@YGKPAKPAJPAUtagDDECONV@@PAPAUtagINTDDEINFO@@@Z.c)
 *     ?xxxPoke@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F882 (-xxxPoke@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FAD5 (-xxxRequestAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 * Callees:
 *     <none>
 */

int __userpurge GiveObject@<eax>(int a1@<edx>, int a2@<ecx>, unsigned int a3, void *a4, unsigned int a5)
{
  int v5; // ecx
  int v6; // ecx

  v5 = a2 - 2;
  if ( !v5 )
  {
LABEL_6:
    GreSetBitmapOwner(a1, a3);
    return 1;
  }
  v6 = v5 - 7;
  if ( v6 )
  {
    if ( v6 != 121 )
      return 0;
    goto LABEL_6;
  }
  GreSetPaletteOwner(a1, a3);
  return 1;
}
