/*
 * XREFs of _RtlSelfRelativeToAbsoluteSD@44 @ 0x4B345BB0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpQuerySecurityDescriptor@36 @ 0x4B2E6B3E (_RtlpQuerySecurityDescriptor@36.c)
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 */

int __stdcall RtlSelfRelativeToAbsoluteSD(
        __int16 *Src,
        void *a2,
        _DWORD *a3,
        void *a4,
        _DWORD *a5,
        void *a6,
        _DWORD *a7,
        void *a8,
        _DWORD *a9,
        void *a10,
        _DWORD *a11)
{
  _DWORD *v12; // eax
  unsigned __int8 *v13; // ecx
  void *v14; // [esp+0h] [ebp-20h] BYREF
  void *v15; // [esp+4h] [ebp-1Ch] BYREF
  void *v16; // [esp+8h] [ebp-18h] BYREF
  void *v17; // [esp+Ch] [ebp-14h] BYREF
  unsigned int v18; // [esp+10h] [ebp-10h] BYREF
  unsigned int v19; // [esp+14h] [ebp-Ch] BYREF
  unsigned int v20; // [esp+18h] [ebp-8h] BYREF
  unsigned int v21; // [esp+1Ch] [ebp-4h] BYREF

  if ( Src[1] >= 0 )
    return -1073741593;
  RtlpQuerySecurityDescriptor((int)Src, (int *)&v17, &v20, (int *)&v16, &v21, (int *)&v14, &v18, (int *)&v15, &v19);
  v12 = a11;
  if ( a2 && *a3 >= 0x14u && v20 <= *a9 && (v12 = a11, v18 <= *a5) && v19 <= *a7 && v21 <= *a11 )
  {
    memmove(a2, Src, 0x14u);
    v13 = (unsigned __int8 *)v17;
    *((_DWORD *)a2 + 1) = 0;
    *((_DWORD *)a2 + 2) = 0;
    *((_DWORD *)a2 + 3) = 0;
    *((_DWORD *)a2 + 4) = 0;
    *((_WORD *)a2 + 1) &= ~0x8000u;
    if ( v13 )
    {
      memmove(a8, v13, 4 * v13[1] + 8);
      *((_DWORD *)a2 + 1) = a8;
    }
    if ( v16 )
    {
      memmove(a10, v16, 4 * *((unsigned __int8 *)v16 + 1) + 8);
      *((_DWORD *)a2 + 2) = a10;
    }
    if ( v15 )
    {
      memmove(a6, v15, *((unsigned __int16 *)v15 + 1));
      *((_DWORD *)a2 + 3) = a6;
    }
    if ( v14 )
    {
      memmove(a4, v14, *((unsigned __int16 *)v14 + 1));
      *((_DWORD *)a2 + 4) = a4;
    }
    return 0;
  }
  else
  {
    *a3 = 20;
    *v12 = v21;
    *a9 = v20;
    *a7 = v19;
    *a5 = v18;
    return -1073741789;
  }
}
