/*
 * XREFs of ?VerifierRandomFailure@@YAHK@Z @ 0x1C029E7DC
 * Callers:
 *     VerifierBRUSHOBJ_pvAllocRbrush @ 0x1C029E870 (VerifierBRUSHOBJ_pvAllocRbrush.c)
 *     VerifierCLIPOBJ_ppoGetPath @ 0x1C029E8B0 (VerifierCLIPOBJ_ppoGetPath.c)
 *     VerifierEngAllocMem @ 0x1C029E8E0 (VerifierEngAllocMem.c)
 *     VerifierEngAllocUserMem @ 0x1C029EA60 (VerifierEngAllocUserMem.c)
 *     VerifierEngCreateBitmap @ 0x1C029EAA0 (VerifierEngCreateBitmap.c)
 *     VerifierEngCreateClip @ 0x1C029EB10 (VerifierEngCreateClip.c)
 *     VerifierEngCreateDeviceBitmap @ 0x1C029EB40 (VerifierEngCreateDeviceBitmap.c)
 *     VerifierEngCreateDeviceSurface @ 0x1C029EBA0 (VerifierEngCreateDeviceSurface.c)
 *     VerifierEngCreateDriverObj @ 0x1C029EC00 (VerifierEngCreateDriverObj.c)
 *     VerifierEngCreatePalette @ 0x1C029EC50 (VerifierEngCreatePalette.c)
 *     VerifierEngCreatePath @ 0x1C029ECC0 (VerifierEngCreatePath.c)
 *     VerifierEngCreateRedirectionDeviceBitmap @ 0x1C029ECF0 (VerifierEngCreateRedirectionDeviceBitmap.c)
 *     VerifierEngCreateWnd @ 0x1C029ED50 (VerifierEngCreateWnd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifierRandomFailure()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( (gvs & 4) != 0 )
  {
    if ( dword_1C0330CAC )
      goto LABEL_6;
    if ( MEMORY[0xFFFFF78000000014] > GreBootTime.QuadPart + 0x117D78400LL )
    {
      dword_1C0330CAC = 1;
      Seed = MEMORY[0xFFFFF78000000014];
    }
    if ( dword_1C0330CAC )
    {
LABEL_6:
      if ( (RtlRandom(&Seed) & dword_1C0330CB4) == 0 )
        return 1;
    }
  }
  return v0;
}
