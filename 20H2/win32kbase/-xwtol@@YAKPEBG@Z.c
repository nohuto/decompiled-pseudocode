/*
 * XREFs of ?xwtol@@YAKPEBG@Z @ 0x1C009AEE8
 * Callers:
 *     ?ParseModeCap@@YAHPEAGPEAUtagModeCap@@H@Z @ 0x1C009AE10 (-ParseModeCap@@YAHPEAGPEAUtagModeCap@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xwtol(const unsigned __int16 *a1)
{
  unsigned int v2; // ecx
  int v3; // edx

  v2 = 0;
  while ( 1 )
  {
    v3 = *a1;
    if ( (unsigned __int16)(v3 - 48) > 9u && v3 != 32 )
      break;
    if ( v3 != 32 )
      v2 = v3 + 2 * (5 * v2 - 24);
    ++a1;
  }
  return v2;
}
