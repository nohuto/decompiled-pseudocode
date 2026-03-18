/*
 * XREFs of ?CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0013C10
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C00140CC (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z @ 0x1C00141D4 (-PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

__int64 __fastcall QueryAdvanceWidthsRequest::CreateUsermodeParameters(
        QueryAdvanceWidthsRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  unsigned int v6; // ecx
  int v7; // eax
  unsigned int v8; // r9d
  unsigned int v9; // eax
  unsigned int v10; // edi
  char v11; // al
  unsigned int v12; // eax
  char *v13; // rax
  _QWORD *v14; // rsi

  v6 = 0;
  v7 = *((_DWORD *)this + 20);
  v8 = 2 * v7;
  v9 = 4 * v7;
  if ( v9 + 7 < v9 )
    return 3221225495LL;
  v10 = (v9 + 7) & 0xFFFFFFF8;
  if ( v8 + 7 < v8 )
  {
    v11 = 0;
  }
  else
  {
    v6 = (v8 + 7) & 0xFFFFFFF8;
    v11 = 1;
  }
  if ( !v11 )
    return 3221225495LL;
  if ( v6 + v10 < v10 )
    return 3221225495LL;
  v12 = v6 + v10 + 64;
  if ( v12 < 0x40 )
    return 3221225495LL;
  if ( v12 >= 0xFFFFFFD0 )
    return 3221225495LL;
  v13 = (char *)UmfdTls::CommitUMBuffer(a2, v6 + v10 + 112, 1);
  v14 = v13;
  if ( !v13 )
    return 3221225495LL;
  *((_QWORD *)this + 11) = v13 + 48;
  *((_QWORD *)this + 12) = v13 + 112;
  *((_QWORD *)this + 13) = &v13[v10 + 112];
  FontDriverDdiRequest::PrepareUsermodeFontObj(a2, *((struct _FONTOBJ **)this + 6), *((struct _FONTOBJ **)this + 11));
  v14[1] = *((_QWORD *)this + 11);
  *v14 = *((_QWORD *)this + 5);
  *((_DWORD *)v14 + 4) = *((_DWORD *)this + 14);
  *((_DWORD *)v14 + 10) = *((_DWORD *)this + 20);
  v14[3] = *((_QWORD *)this + 12);
  memmove(*((void **)this + 12), *((const void **)this + 8), 4LL * *((unsigned int *)this + 20));
  v14[4] = *((_QWORD *)this + 13);
  *a3 = v14;
  return 0LL;
}
