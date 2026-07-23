/*
 * XREFs of MiCreateSparsePfnDatabase @ 0x140A45718
 * Callers:
 *     MiCreatePfnDatabase @ 0x140A446BC (MiCreatePfnDatabase.c)
 * Callees:
 *     MxMapPfnRange @ 0x140A458EC (MxMapPfnRange.c)
 */

__int64 __fastcall MiCreateSparsePfnDatabase(__int64 a1)
{
  __int64 *v1; // r14
  __int64 *v2; // rbx
  int v3; // edi
  __int64 v4; // rsi
  ULONG_PTR v5; // r9
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx

  v1 = (__int64 *)(a1 + 32);
  v2 = *(__int64 **)(a1 + 32);
  v3 = 3;
  v4 = 0LL;
  v5 = -1LL;
  if ( v2 == (__int64 *)(a1 + 32) )
    goto LABEL_19;
  v6 = 0x1C5C0C00048LL;
  do
  {
    v7 = *((int *)v2 + 4);
    if ( (unsigned int)v7 <= 0x28 && _bittest64(&v6, v7) )
    {
      if ( v5 == -1LL )
        goto LABEL_16;
    }
    else
    {
      if ( v5 == -1LL )
      {
        v5 = v2[3];
        v6 = 0x1C5C0C00048LL;
        goto LABEL_15;
      }
      if ( v5 + v4 == v2[3]
        && ((v3 == 2 || v3 == 24) && ((_DWORD)v7 == 2 || (_DWORD)v7 == 24)
         || v3 != 2 && (_DWORD)v7 != 2 && v3 != 24 && (_DWORD)v7 != 24) )
      {
        v4 += v2[4];
        v6 = 0x1C5C0C00048LL;
        goto LABEL_16;
      }
    }
    if ( !(unsigned int)MxMapPfnRange(v5) )
      return 0LL;
    v7 = *((int *)v2 + 4);
    v6 = 0x1C5C0C00048LL;
    if ( (unsigned int)v7 > 0x28 || !_bittest64(&v6, v7) )
    {
      v5 = v2[3];
LABEL_15:
      v4 = v2[4];
      v3 = v7;
      goto LABEL_16;
    }
    v5 = -1LL;
LABEL_16:
    v2 = (__int64 *)*v2;
  }
  while ( v2 != v1 );
  if ( v5 == -1LL || (unsigned int)MxMapPfnRange(v5) )
  {
LABEL_19:
    if ( (qword_140C4E9E0 == 0x1000000000LL || (unsigned int)MxMapPfnRange(qword_140C4E9E0))
      && (unsigned int)MxMapPfnRange(0x1000000000uLL) )
    {
      return 1LL;
    }
  }
  return 0LL;
}
