/*
 * XREFs of DrvCloseGraphicsDevices @ 0x1C00570E0
 * Callers:
 *     InitVideo @ 0x1C002B12C (InitVideo.c)
 * Callees:
 *     bSetDeviceSessionUsage @ 0x1C0057150 (bSetDeviceSessionUsage.c)
 */

LONG_PTR __fastcall DrvCloseGraphicsDevices(int a1)
{
  struct tagGRAPHICS_DEVICE *v1; // rbx
  LONG_PTR result; // rax

  v1 = gpRemoteGraphicsDeviceList;
  if ( a1 )
    v1 = gpLocalGraphicsDeviceList;
  while ( v1 )
  {
    if ( *((_QWORD *)v1 + 29) )
    {
      bSetDeviceSessionUsage(v1, 0LL);
      result = ObfDereferenceObject(*((PVOID *)v1 + 29));
      *((_QWORD *)v1 + 17) = 0LL;
      *((_QWORD *)v1 + 29) = 0LL;
    }
    v1 = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)v1 + 16);
  }
  return result;
}
