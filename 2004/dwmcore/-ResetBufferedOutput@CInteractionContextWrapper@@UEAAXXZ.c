/*
 * XREFs of ?ResetBufferedOutput@CInteractionContextWrapper@@UEAAXXZ @ 0x18022FB10
 * Callers:
 *     ??1CInteractionContextWrapper@@UEAA@XZ @ 0x18002BC54 (--1CInteractionContextWrapper@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CInteractionContextWrapper::ResetBufferedOutput(CInteractionContextWrapper *this)
{
  char *v2; // rdi
  void *v3; // rbp
  char *v4; // rcx
  __int64 v5; // rax
  int v6; // esi
  __int64 v7; // rdi
  __int64 v8; // rcx
  unsigned int *v9; // rax

  if ( *((_DWORD *)this + 140) )
  {
    v2 = (char *)this + 544;
    do
    {
      v3 = 0LL;
      EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 24));
      v4 = *(char **)v2;
      if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v5 = *(_QWORD *)v4, *(char **)(*(_QWORD *)v4 + 8LL) != v4) )
        __fastfail(3u);
      *(_QWORD *)v2 = v5;
      *(_QWORD *)(v5 + 8) = v2;
      if ( v4 != v2 )
      {
        v3 = (void *)*((_QWORD *)v4 + 2);
        operator delete(v4);
        --*((_DWORD *)v2 + 4);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 24));
      operator delete(v3);
    }
    while ( *((_DWORD *)this + 140) );
  }
  v6 = 0;
  if ( *((int *)this + 154) > 0 )
  {
    v7 = 0LL;
    do
    {
      v8 = *((_QWORD *)this + 76);
      v9 = *(unsigned int **)(v7 + v8);
      if ( *((_BYTE *)v9 + 4) )
      {
        NtDCompositionUpdatePointerCapture(0LL, *v9);
        v8 = *((_QWORD *)this + 76);
      }
      operator delete(*(void **)(v7 + v8));
      ++v6;
      *(_QWORD *)(v7 + *((_QWORD *)this + 76)) = 0LL;
      v7 += 8LL;
    }
    while ( v6 < *((_DWORD *)this + 154) );
  }
  CArray<CBufferedOutputPointer *,CArrayEqualHelper<CBufferedOutputPointer *>>::RemoveAll((__int64)this + 608);
}
