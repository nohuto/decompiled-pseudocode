/*
 * XREFs of InbvDriverInitialize @ 0x140A6C590
 * Callers:
 *     KiInitializeBootStructures @ 0x14099D160 (KiInitializeBootStructures.c)
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     InbvSetFunction @ 0x1403C8A68 (InbvSetFunction.c)
 *     InbvDetermineFunction @ 0x1403C8AD8 (InbvDetermineFunction.c)
 *     _strupr @ 0x1403D1190 (_strupr.c)
 *     strstr @ 0x1403D19F0 (strstr.c)
 *     BvgaDriverInitialize @ 0x140A6C640 (BvgaDriverInitialize.c)
 *     BgkInitialize @ 0x140A97F04 (BgkInitialize.c)
 */

char __fastcall InbvDriverInitialize(unsigned int a1, __int64 a2, unsigned int a3)
{
  char v6; // bl
  int v7; // ecx
  char *v8; // rcx
  char *v9; // rax

  v6 = 1;
  if ( (unsigned int)InbvDetermineFunction(a2) != 2 )
  {
    if ( (int)BgkInitialize(a2, a1) < 0 )
    {
      v6 = 0;
      v7 = 3;
      BvgaDisplayState = 0;
    }
    else
    {
      BvgaDisplayState = 2;
      v7 = 4;
    }
    InbvSetFunction(v7);
  }
  v8 = *(char **)(a2 + 216);
  if ( !v8 )
    return BvgaDriverInitialize(a1, a2, a3);
  v9 = strupr(v8);
  if ( !strstr(v9, "NOVGA") )
    return BvgaDriverInitialize(a1, a2, a3);
  return v6;
}
