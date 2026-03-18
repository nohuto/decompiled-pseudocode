/*
 * XREFs of ?VerifierRandomFailure@@YAHK@Z @ 0x1C029D38C
 * Callers:
 *     VerifierBRUSHOBJ_pvAllocRbrush @ 0x1C029D420 (VerifierBRUSHOBJ_pvAllocRbrush.c)
 *     VerifierCLIPOBJ_ppoGetPath @ 0x1C029D460 (VerifierCLIPOBJ_ppoGetPath.c)
 *     VerifierEngAllocMem @ 0x1C029D490 (VerifierEngAllocMem.c)
 *     VerifierEngAllocUserMem @ 0x1C029D610 (VerifierEngAllocUserMem.c)
 *     VerifierEngCreateBitmap @ 0x1C029D650 (VerifierEngCreateBitmap.c)
 *     VerifierEngCreateClip @ 0x1C029D6C0 (VerifierEngCreateClip.c)
 *     VerifierEngCreateDeviceBitmap @ 0x1C029D6F0 (VerifierEngCreateDeviceBitmap.c)
 *     VerifierEngCreateDeviceSurface @ 0x1C029D750 (VerifierEngCreateDeviceSurface.c)
 *     VerifierEngCreateDriverObj @ 0x1C029D7B0 (VerifierEngCreateDriverObj.c)
 *     VerifierEngCreatePalette @ 0x1C029D800 (VerifierEngCreatePalette.c)
 *     VerifierEngCreatePath @ 0x1C029D870 (VerifierEngCreatePath.c)
 *     VerifierEngCreateRedirectionDeviceBitmap @ 0x1C029D8A0 (VerifierEngCreateRedirectionDeviceBitmap.c)
 *     VerifierEngCreateWnd @ 0x1C029D900 (VerifierEngCreateWnd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifierRandomFailure()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( (gvs & 4) != 0 )
  {
    if ( dword_1C032FCAC )
      goto LABEL_6;
    if ( MEMORY[0xFFFFF78000000014] > GreBootTime.QuadPart + 0x117D78400LL )
    {
      dword_1C032FCAC = 1;
      Seed = MEMORY[0xFFFFF78000000014];
    }
    if ( dword_1C032FCAC )
    {
LABEL_6:
      if ( (RtlRandom(&Seed) & dword_1C032FCB4) == 0 )
        return 1;
    }
  }
  return v0;
}
