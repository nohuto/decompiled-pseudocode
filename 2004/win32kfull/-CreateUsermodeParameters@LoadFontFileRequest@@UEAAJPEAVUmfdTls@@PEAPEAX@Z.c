/*
 * XREFs of ?CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0013720
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C00140CC (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     EngFntCacheLookUp @ 0x1C0014460 (EngFntCacheLookUp.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall LoadFontFileRequest::CreateUsermodeParameters(
        LoadFontFileRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  _DWORD *v6; // r15
  ULONG v7; // esi
  unsigned int v8; // ecx
  ULONG v9; // edi
  unsigned int v10; // eax
  _DWORD *v11; // rbx
  unsigned int i; // r8d
  ULONG v13; // eax
  ULONG v14; // eax
  __int64 v15; // rax
  ULONG v17[10]; // [rsp+30h] [rbp-28h] BYREF

  if ( (unsigned int)(*((_DWORD *)this + 10) - 1) > 2 )
    return 3221225495LL;
  v6 = EngFntCacheLookUp(*((_DWORD *)this + 34), v17);
  v7 = v6 != 0LL ? v17[0] : 0;
  if ( v7 <= 0x10 )
  {
    v9 = 0;
    v8 = 0;
  }
  else
  {
    v8 = v7 - 16;
    v9 = 0;
  }
  if ( v8 + 7 < v8 )
    return 3221225495LL;
  v10 = (v8 + 7) & 0xFFFFFFF8;
  v11 = v10 >= 0xFFFFFF30 ? 0LL : UmfdTls::CommitUMBuffer(a2, v10 + 208, 0);
  if ( !v11 )
    return 3221225495LL;
  *((_QWORD *)v11 + 25) = v11 + 52;
  memset(v11, 0, 0xD0uLL);
  *((_QWORD *)v11 + 1) = v11 + 4;
  *((_QWORD *)v11 + 5) = v11 + 12;
  *((_QWORD *)v11 + 9) = v11 + 20;
  *v11 = *((_DWORD *)this + 10);
  for ( i = 0; i < *((_DWORD *)this + 10); ++i )
  {
    *(_QWORD *)(*((_QWORD *)v11 + 1) + 8LL * i) = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL * i) + 64LL);
    *(_QWORD *)(*((_QWORD *)v11 + 5) + 8LL * i) = *(_QWORD *)(*((_QWORD *)this + 10) + 8LL * i);
    *(_DWORD *)(*((_QWORD *)v11 + 9) + 4LL * i) = *(_DWORD *)(*((_QWORD *)this + 14) + 4LL * i);
  }
  if ( *((_QWORD *)this + 19) )
  {
    *((_QWORD *)v11 + 14) = v11 + 30;
    v15 = *((_QWORD *)this + 19);
    *(_OWORD *)(v11 + 30) = *(_OWORD *)v15;
    *(_OWORD *)(v11 + 34) = *(_OWORD *)(v15 + 16);
    *(_OWORD *)(v11 + 38) = *(_OWORD *)(v15 + 32);
    *(_OWORD *)(v11 + 42) = *(_OWORD *)(v15 + 48);
    *((_QWORD *)v11 + 23) = *(_QWORD *)(v15 + 64);
  }
  v11[23] = *((_DWORD *)this + 33);
  v11[24] = *((_DWORD *)this + 34);
  if ( v7 <= 0x10 )
    v13 = 0;
  else
    v13 = v7 - 16;
  if ( v13 )
  {
    v11[25] = *v6;
    if ( v7 <= 0x10 )
      v14 = 0;
    else
      v14 = v7 - 16;
    v11[48] = v14;
    if ( v7 > 0x10 )
      v9 = v7 - 16;
    memmove(v11 + 50, v6 + 4, v9);
  }
  else
  {
    v11[25] = -1;
  }
  *a3 = v11;
  return 0LL;
}
