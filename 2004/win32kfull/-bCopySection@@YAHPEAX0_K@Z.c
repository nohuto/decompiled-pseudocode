/*
 * XREFs of ?bCopySection@@YAHPEAX0_K@Z @ 0x1C028A4AC
 * Callers:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C0016CE4 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C028A18C (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 * Callees:
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

__int64 __fastcall bCopySection(void *a1, void *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdi
  unsigned int v5; // ebx
  int v6; // r14d
  int v7; // r15d
  bool v8; // zf
  __int64 v9; // r13
  unsigned __int64 v10; // rsi
  __int64 CurrentProcess; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  size_t v16; // rax
  size_t v17; // rcx
  size_t v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  void *v22; // [rsp+58h] [rbp-70h] BYREF
  void *Src; // [rsp+60h] [rbp-68h] BYREF
  size_t v24; // [rsp+68h] [rbp-60h] BYREF
  size_t v25; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v26; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+80h] [rbp-48h] BYREF
  unsigned __int64 v28; // [rsp+88h] [rbp-40h]

  v3 = a3;
  v4 = a3;
  v28 = a3;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = v4 == 0;
    if ( !v4 )
      break;
    v9 = v4;
    if ( v4 > 0x10000 )
      v9 = 0x10000LL;
    v10 = v3 - v4;
    v26 = v3 - v4;
    v27 = v3 - v4;
    v22 = 0LL;
    Src = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    CurrentProcess = PsGetCurrentProcess(0x10000LL, a2, a3);
    if ( (int)MmMapViewOfSection(a1, CurrentProcess, &v22, 0LL, v9, &v26, &v24, 2, 0x400000, 4) < 0 )
    {
      v22 = 0LL;
      v24 = 0LL;
    }
    if ( v24 )
    {
      v13 = PsGetCurrentProcess(v12, a2, a3);
      if ( (int)MmMapViewOfSection(a2, v13, &Src, 0LL, v9, &v27, &v25, 2, 0x400000, 2) < 0 )
      {
        Src = 0LL;
        v25 = 0LL;
      }
    }
    if ( v24 && v25 )
    {
      v14 = v10 - v26;
      v15 = v10 - v27;
      v22 = (char *)v22 + v14;
      Src = (char *)Src + v15;
      if ( v24 <= v14 )
        v16 = 0LL;
      else
        v16 = v24 - v14;
      v24 = v16;
      if ( v25 <= v15 )
        v17 = 0LL;
      else
        v17 = v25 - v15;
      v25 = v17;
      if ( v16 >= v17 )
        v16 = v17;
      v18 = v4;
      if ( v16 < v4 )
        v18 = v16;
      memmove(v22, Src, v18);
    }
    else
    {
      v18 = 0LL;
    }
    if ( v22 )
    {
      v19 = PsGetCurrentProcess(v12, a2, a3);
      if ( (int)MmUnmapViewOfSection(v19, v22) < 0 )
        v6 = 1;
    }
    if ( Src )
    {
      v20 = PsGetCurrentProcess(v12, a2, a3);
      if ( (int)MmUnmapViewOfSection(v20, Src) < 0 )
        v7 = 1;
    }
    if ( !v18 || v6 == 1 || v7 == 1 )
    {
      v8 = v4 == 0;
      break;
    }
    v4 -= v18;
    v28 = v4;
    v3 = a3;
  }
  LOBYTE(v5) = v8;
  return v5;
}
