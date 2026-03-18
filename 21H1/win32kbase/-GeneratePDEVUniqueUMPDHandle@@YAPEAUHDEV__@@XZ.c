/*
 * XREFs of ?GeneratePDEVUniqueUMPDHandle@@YAPEAUHDEV__@@XZ @ 0x1C0045170
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C1C60 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 * Callees:
 *     <none>
 */

unsigned __int64 GeneratePDEVUniqueUMPDHandle(void)
{
  unsigned __int64 v0; // rdx
  __int64 ***v1; // r9
  unsigned int v2; // r8d
  __int64 **i; // rcx
  _QWORD v5[3]; // [rsp+0h] [rbp-18h] BYREF

  do
  {
    do
LABEL_1:
      v0 = __rdtsc();
    while ( !v0 );
    v1 = (__int64 ***)v5;
    v5[0] = gppdevList;
    v2 = 0;
    v5[1] = gppdevListUMPDInCreate;
    do
    {
      if ( !v0 )
        goto LABEL_1;
      for ( i = *v1; i; i = (__int64 **)*i )
      {
        if ( ((_DWORD)i[5] & 0x8000) != 0 && i[2] == (__int64 *)v0 )
        {
          v0 = 0LL;
          break;
        }
      }
      ++v2;
      ++v1;
    }
    while ( v2 < 2 );
  }
  while ( !v0 );
  return v0;
}
