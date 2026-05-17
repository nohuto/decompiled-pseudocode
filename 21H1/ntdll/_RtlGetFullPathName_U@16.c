/*
 * XREFs of _RtlGetFullPathName_U@16 @ 0x4B2ECAC0
 * Callers:
 *     _RtlDosSearchPath_U@24 @ 0x4B32D140 (_RtlDosSearchPath_U@24.c)
 *     _RtlGetFileMUIPath@28 @ 0x4B3519E0 (_RtlGetFileMUIPath@28.c)
 * Callees:
 *     _RtlGetFullPathName_UEx@20 @ 0x4B2D22F0 (_RtlGetFullPathName_UEx@20.c)
 */

int __thiscall RtlGetFullPathName_U(void *this, _WORD *a2, size_t a3, _WORD *a4, _DWORD *a5)
{
  int v6; // [esp+0h] [ebp-4h] BYREF

  v6 = (int)this;
  if ( RtlGetFullPathName_UEx(a2, a3, a4, a5, (unsigned int *)&v6) < 0 )
    return 0;
  else
    return v6;
}
