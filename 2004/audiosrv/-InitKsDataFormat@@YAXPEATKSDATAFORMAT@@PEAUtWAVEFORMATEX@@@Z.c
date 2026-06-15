/*
 * XREFs of ?InitKsDataFormat@@YAXPEATKSDATAFORMAT@@PEAUtWAVEFORMATEX@@@Z @ 0x1800617B8
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180060F5C (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     memset_0 @ 0x18006B69C (memset_0.c)
 */

void __fastcall InitKsDataFormat(union KSDATAFORMAT *a1, struct tWAVEFORMATEX *a2)
{
  memset_0(a1, 0, sizeof(union KSDATAFORMAT));
  a1->FormatSize = 64;
  a1->MajorFormat = GUID_73647561_0000_0010_8000_00aa00389b71;
  a1->Specifier = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
  if ( a2->wFormatTag == 0xFFFE )
  {
    *((_OWORD *)&a1->Alignment + 2) = *(_OWORD *)((char *)&a2[1].nSamplesPerSec + 2);
  }
  else
  {
    a1->SubFormat = GUID_00000000_0000_0010_8000_00aa00389b71;
    a1->SubFormat.Data1 = a2->wFormatTag;
  }
}
