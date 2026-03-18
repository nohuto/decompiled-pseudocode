/*
 * XREFs of ?bIdenticalFormat@@YGHVXEPALOBJ@@H@Z @ 0x49644
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YGHKAAVDCOBJ@@AAVPDEVOBJ@@AAVSURFREF@@AAVXEPALOBJ@@PAUHDC__@@PAUHBITMAP__@@IIPAEPAUtagBITMAPINFO@@III@Z @ 0x4B706 (-GreGetDIBitsInternalWorker@@YGHKAAVDCOBJ@@AAVPDEVOBJ@@AAVSURFREF@@AAVXEPALOBJ@@PAUHDC__@@PAUHBI.c)
 * Callees:
 *     <none>
 */

int __thiscall bIdenticalFormat(void *this, int a2)
{
  int v3; // edx
  int v4; // ecx
  int v5; // ebx
  int v6; // esi
  int v7; // ecx
  int *v9; // eax

  v3 = 1;
  v4 = *(_DWORD *)(a2 + 16);
  if ( (v4 & 2) != 0 )
  {
    v9 = *(int **)(a2 + 76);
    v6 = *v9;
    v5 = v9[1];
    v7 = v9[2];
  }
  else
  {
    v5 = 65280;
    if ( (v4 & 4) != 0 )
    {
      v6 = 255;
      v7 = 16711680;
    }
    else
    {
      v6 = 16711680;
      v7 = 255;
    }
  }
  if ( v6 != (this == (void *)4 ? 31744 : 16711680)
    || v5 != (this == (void *)4 ? 992 : 65280)
    || v7 != (this == (void *)4 ? 31 : 255) )
  {
    return 0;
  }
  return v3;
}
