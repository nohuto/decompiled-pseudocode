/*
 * XREFs of sub_18012D2B8 @ 0x18012D2B8
 * Callers:
 *     sub_18012C454 @ 0x18012C454 (sub_18012C454.c)
 * Callees:
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 *     sub_18012C550 @ 0x18012C550 (sub_18012C550.c)
 *     sub_18012CF58 @ 0x18012CF58 (sub_18012CF58.c)
 */

__int64 __fastcall sub_18012D2B8(unsigned __int8 *a1, int a2, __int64 a3, __int64 a4, void *a5, void *Src, size_t Size)
{
  void *v7; // r12
  int v8; // ebx
  __int64 v9; // r15
  unsigned __int8 *v10; // rdi
  bool v11; // of
  SIZE_T v12; // rax
  void *v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // eax
  int v17; // eax
  __int64 v18; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 *v19; // [rsp+48h] [rbp-8h] BYREF
  __int64 v20; // [rsp+88h] [rbp+38h] BYREF

  LOWORD(v20) = a4;
  v7 = a5;
  v8 = 0;
  v9 = a3;
  v10 = a1;
  if ( !Src )
  {
    v17 = sub_18012CF58((__int64)a1, a2, a3, a4, (__int64)a5);
    v8 = v17;
    if ( v17 < 0 )
    {
      if ( (unsigned int)dword_18019C480 > 2 )
      {
        LODWORD(v20) = v17;
        LODWORD(Src) = 147;
        v18 = (__int64)"SpatialAudioMetadataDictionary::RuntimeClassInitialize";
        sub_180109778(
          (__int64)&dword_18019C480,
          byte_18016C0FA,
          a3,
          a4,
          (const CHAR **)&v18,
          (__int64)&Src,
          (__int64)&v20);
      }
LABEL_16:
      if ( v8 >= 0 )
        return (unsigned int)v8;
      goto LABEL_17;
    }
LABEL_11:
    *((_DWORD *)v10 + 24) = 0;
    *((_DWORD *)v10 + 25) = 0;
    if ( *((_DWORD *)v10 + 31) )
    {
      v14 = 0;
      a4 = *((unsigned int *)v10 + 31);
      LODWORD(a3) = 0;
      a1 = (unsigned __int8 *)(*((_QWORD *)v10 + 16) + 1LL);
      do
      {
        v15 = *a1;
        a3 = v15 + (_DWORD)a3 + 1;
        a1 += 2;
        *((_DWORD *)v10 + 24) = a3;
        if ( v14 <= v15 )
          v14 = v15;
        *((_DWORD *)v10 + 25) = v14;
        --a4;
      }
      while ( a4 );
    }
    goto LABEL_16;
  }
  if ( (Size & 1) != 0 )
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v20) = -2147024809;
      v18 = (__int64)"SpatialAudioMetadataDictionary::RuntimeClassInitialize";
      LODWORD(Src) = 137;
      sub_180109778(
        (__int64)&dword_18019C480,
        byte_18016C12C,
        a3,
        a4,
        (const CHAR **)&v18,
        (__int64)&Src,
        (__int64)&v20);
    }
    v8 = -2147024809;
    goto LABEL_17;
  }
  v12 = 2LL * ((unsigned int)Size >> 1);
  v11 = (((unsigned int)Size >> 1) * (unsigned __int128)2uLL) >> 64 != 0;
  *((_DWORD *)a1 + 31) = (unsigned int)Size >> 1;
  if ( v11 )
    v12 = -1LL;
  v13 = sub_18006A1B0(v12);
  *((_QWORD *)v10 + 16) = v13;
  if ( v13 )
  {
    memcpy(v13, Src, (unsigned int)Size);
    goto LABEL_11;
  }
  v8 = -2147024882;
LABEL_17:
  if ( (unsigned int)dword_18019C480 > 2 )
  {
    Src = v7;
    v18 = v9;
    LODWORD(v20) = v8;
    v19 = v10;
    sub_18012C550((__int64)a1, byte_18016C1B0, a3, a4, (__int64)&v19, (__int64)&v20, &v18, &Src);
  }
  return (unsigned int)v8;
}
