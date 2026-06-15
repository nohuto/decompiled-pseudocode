/*
 * XREFs of ??_ECCompositeSystemEffect@@UEAAPEAXI@Z @ 0x1800337A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

CCompositeSystemEffect *__fastcall CCompositeSystemEffect::`vector deleting destructor'(
        CCompositeSystemEffect *this,
        char a2)
{
  __int64 v4; // rcx
  char *v5; // rcx
  int v6; // ebp
  __int64 v7; // rsi
  __int64 v8; // rdx
  char *v9; // rcx
  int v10; // ebp
  __int64 v11; // rsi
  __int64 v12; // rdx
  void *v13; // rcx

  v4 = *((_QWORD *)this + 13);
  if ( v4 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = (char *)*((_QWORD *)this + 11);
  if ( v5 )
  {
    v6 = 0;
    if ( *((int *)this + 24) > 0 )
    {
      v7 = 0LL;
      do
      {
        v5 = (char *)*((_QWORD *)this + 11);
        v8 = *(_QWORD *)&v5[v7];
        if ( v8 )
        {
          *(_QWORD *)&v5[v7] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
          v5 = (char *)*((_QWORD *)this + 11);
        }
        ++v6;
        v7 += 8LL;
      }
      while ( v6 < *((_DWORD *)this + 24) );
    }
    free(v5);
    *((_QWORD *)this + 11) = 0LL;
  }
  *((_QWORD *)this + 12) = 0LL;
  v9 = (char *)*((_QWORD *)this + 9);
  if ( v9 )
  {
    v10 = 0;
    if ( *((int *)this + 20) > 0 )
    {
      v11 = 0LL;
      do
      {
        v9 = (char *)*((_QWORD *)this + 9);
        v12 = *(_QWORD *)&v9[v11];
        if ( v12 )
        {
          *(_QWORD *)&v9[v11] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          v9 = (char *)*((_QWORD *)this + 9);
        }
        ++v10;
        v11 += 8LL;
      }
      while ( v10 < *((_DWORD *)this + 20) );
    }
    free(v9);
    *((_QWORD *)this + 9) = 0LL;
  }
  *((_QWORD *)this + 10) = 0LL;
  v13 = (void *)*((_QWORD *)this + 7);
  if ( v13 )
  {
    free(v13);
    *((_QWORD *)this + 7) = 0LL;
  }
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 9) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}
