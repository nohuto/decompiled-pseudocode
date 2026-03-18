/*
 * XREFs of ?StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00ADBC0
 * Callers:
 *     <none>
 * Callees:
 *     bDeleteSurface @ 0x1C001A650 (bDeleteSurface.c)
 *     EngAssociateSurface @ 0x1C00ADC20 (EngAssociateSurface.c)
 *     EngCreateDeviceSurface @ 0x1C00ADCD0 (EngCreateDeviceSurface.c)
 */

__int64 __fastcall StubDispEnableSurface(struct DHPDEV__ *a1)
{
  HSURF DeviceSurface; // rax
  __int64 v3; // rbx
  __int64 v4; // rdx

  DeviceSurface = EngCreateDeviceSurface(0LL, *(SIZEL *)(a1 + 4), 6u);
  v3 = (__int64)DeviceSurface;
  if ( DeviceSurface )
  {
    if ( EngAssociateSurface(DeviceSurface, *(HDEV *)a1, 0x479u) )
    {
      *((_QWORD *)a1 + 1) = v3;
      return v3;
    }
    bDeleteSurface(v3, v4);
  }
  return 0LL;
}
