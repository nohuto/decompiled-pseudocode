/*
 * XREFs of ?AddSectionListEntry@SipcPort@@IEAAXPEAUSectionListEntry@1@@Z @ 0x1800BF72C
 * Callers:
 *     ?CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z @ 0x1800BFAA0 (-CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z.c)
 *     ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800C0740 (-GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SipcPort::AddSectionListEntry(SipcPort *this, struct SipcPort::SectionListEntry *a2)
{
  _QWORD *v2; // rsi
  _QWORD *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  _QWORD *i; // rbx
  __int64 v9; // rax
  __int64 v10; // rax

  v2 = (_QWORD *)((char *)this + 16);
  v4 = (_QWORD *)(((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL));
  v5 = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2 )
    __fastfail(3u);
  *v4 = v5;
  *(_QWORD *)((((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL)) + 8) = v2;
  *(_QWORD *)(v5 + 8) = v4;
  ++v2[2];
  *v2 = v4;
  v6 = *((_DWORD *)this + 10);
  if ( v6 )
  {
    v7 = v6 - 1;
    *((_DWORD *)this + 10) = v7;
    if ( !v7 )
    {
      for ( i = (_QWORD *)*v2; i != v2; i = (_QWORD *)*i )
      {
        v9 = (__int64)i + 51;
        if ( !i )
          v9 = 59LL;
        if ( *(_BYTE *)v9 )
        {
          v10 = (__int64)(i + 6);
          if ( !i )
            v10 = 56LL;
          if ( !*(_BYTE *)v10 )
          {
            *(_BYTE *)v10 = 1;
            if ( ++*((_DWORD *)this + 11) == 1 )
              SetEvent(*((HANDLE *)this + 1));
          }
        }
      }
    }
  }
}
