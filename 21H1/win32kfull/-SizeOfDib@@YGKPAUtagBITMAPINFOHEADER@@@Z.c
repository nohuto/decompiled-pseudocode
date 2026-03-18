/*
 * XREFs of ?SizeOfDib@@YGKPAUtagBITMAPINFOHEADER@@@Z @ 0x181F69
 * Callers:
 *     ?xxxGetDummyDib@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x182778 (-xxxGetDummyDib@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x182889 (-xxxGetDummyDibV5@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     ?SizeOfDibColorTable@@YGKPAUtagBITMAPINFOHEADER@@@Z @ 0x181F99 (-SizeOfDibColorTable@@YGKPAUtagBITMAPINFOHEADER@@@Z.c)
 */

unsigned int __thiscall SizeOfDib(_DWORD *this)
{
  struct tagBITMAPINFOHEADER *v2; // [esp+0h] [ebp-8h]

  return *this
       + SizeOfDibColorTable(v2)
       + (((this[1] * *((unsigned __int16 *)this + 7) + 31) >> 3) & 0xFFFFFFFC) * abs32(this[2]);
}
