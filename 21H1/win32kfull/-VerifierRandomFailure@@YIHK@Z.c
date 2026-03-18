/*
 * XREFs of ?VerifierRandomFailure@@YIHK@Z @ 0x1FC707
 * Callers:
 *     _VerifierBRUSHOBJ_pvAllocRbrush@8 @ 0x1FC789 (_VerifierBRUSHOBJ_pvAllocRbrush@8.c)
 *     _VerifierCLIPOBJ_ppoGetPath@4 @ 0x1FC7A3 (_VerifierCLIPOBJ_ppoGetPath@4.c)
 *     _VerifierEngAllocMem@12 @ 0x1FC7C1 (_VerifierEngAllocMem@12.c)
 *     _VerifierEngAllocUserMem@8 @ 0x1FC8C2 (_VerifierEngAllocUserMem@8.c)
 *     _VerifierEngCreateBitmap@24 @ 0x1FC8DD (_VerifierEngCreateBitmap@24.c)
 *     _VerifierEngCreateClip@0 @ 0x1FC90B (_VerifierEngCreateClip@0.c)
 *     _VerifierEngCreateDeviceBitmap@16 @ 0x1FC91D (_VerifierEngCreateDeviceBitmap@16.c)
 *     _VerifierEngCreateDeviceSurface@16 @ 0x1FC945 (_VerifierEngCreateDeviceSurface@16.c)
 *     _VerifierEngCreateDriverObj@12 @ 0x1FC96D (_VerifierEngCreateDriverObj@12.c)
 *     _VerifierEngCreatePalette@24 @ 0x1FC987 (_VerifierEngCreatePalette@24.c)
 *     _VerifierEngCreatePath@0 @ 0x1FC9A2 (_VerifierEngCreatePath@0.c)
 *     _VerifierEngCreateRedirectionDeviceBitmap@16 @ 0x1FC9B3 (_VerifierEngCreateRedirectionDeviceBitmap@16.c)
 *     _VerifierEngCreateWnd@20 @ 0x1FC9DB (_VerifierEngCreateWnd@20.c)
 * Callees:
 *     <none>
 */

int VerifierRandomFailure()
{
  int v1; // esi
  union _LARGE_INTEGER CurrentTime; // [esp+4h] [ebp-8h] BYREF

  v1 = 0;
  CurrentTime.QuadPart = 0LL;
  if ( (gvs & 4) != 0 )
  {
    if ( dword_269040 )
      goto LABEL_6;
    KeQuerySystemTime(&CurrentTime);
    if ( CurrentTime.QuadPart > GreBootTime.QuadPart + 0x117D78400LL )
    {
      dword_269040 = 1;
      Seed = CurrentTime.LowPart;
    }
    if ( dword_269040 )
    {
LABEL_6:
      if ( (RtlRandom(&Seed) & dword_269048) == 0 )
        return 1;
    }
  }
  return v1;
}
