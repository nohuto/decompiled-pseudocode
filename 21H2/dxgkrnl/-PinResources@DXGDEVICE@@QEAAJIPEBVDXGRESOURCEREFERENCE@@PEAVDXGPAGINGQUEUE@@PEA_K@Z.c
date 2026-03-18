/*
 * XREFs of ?PinResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@PEAVDXGPAGINGQUEUE@@PEA_K@Z @ 0x1C02E63E8
 * Callers:
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x1C01D91E0 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGDEVICE::PinResources(
        DXGDEVICE *this,
        unsigned int a2,
        const struct DXGRESOURCEREFERENCE *a3,
        struct DXGPAGINGQUEUE *a4,
        unsigned __int64 *a5)
{
  unsigned int v5; // esi
  unsigned int v6; // r11d
  DXGDEVICE *v9; // r12
  const struct DXGRESOURCEREFERENCE *v10; // r10
  __int64 i; // r8
  const struct DXGRESOURCEREFERENCE *v12; // r14
  __int64 v13; // rbx
  __int64 v14; // r13
  __int64 v15; // rdi
  __int64 v17; // r8
  int v18; // r12d
  bool v19; // zf
  __int64 v20; // rdi
  char *v21; // r14
  __int64 k; // rbx
  __int64 j; // rsi
  struct DXGPAGINGQUEUE *v25; // [rsp+98h] [rbp+20h]

  v25 = a4;
  v5 = 0;
  v6 = 0;
  v9 = this;
  if ( a2 )
  {
    v10 = a3;
    while ( 2 )
    {
      for ( i = *(_QWORD *)(*(_QWORD *)v10 + 24LL); i; i = *(_QWORD *)(i + 64) )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(i + 48) + 4LL) & 0x2000) != 0 || (*(_DWORD *)(i + 72) & 0x800) != 0 )
        {
          WdLogSingleEntry2(3LL, *(_QWORD *)v10, i);
          return 3221225485LL;
        }
      }
      ++v6;
      v10 = (const struct DXGRESOURCEREFERENCE *)((char *)v10 + 8);
      if ( v6 < a2 )
        continue;
      break;
    }
    v12 = a3;
    v13 = 0LL;
    while ( 2 )
    {
      v14 = *(_QWORD *)v12;
      v15 = *(_QWORD *)(*(_QWORD *)v12 + 24LL);
      while ( v15 )
      {
        if ( a4 )
          v17 = *((_QWORD *)a4 + 4);
        else
          v17 = 0LL;
        v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, _QWORD, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 2) + 648LL) + 8LL) + 232LL))(
                *(_QWORD *)(*((_QWORD *)v9 + 2) + 656LL),
                *(_QWORD *)(v15 + 24),
                v17,
                0LL,
                0LL,
                a5);
        if ( v18 < 0 )
        {
          for ( j = *(_QWORD *)(v14 + 24); j != v15; j = *(_QWORD *)(j + 64) )
            (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL) + 8LL)
                                                   + 240LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
              *(_QWORD *)(j + 24));
          v5 = v18;
          if ( (_DWORD)v13 )
          {
            v20 = (unsigned int)v13;
            v21 = (char *)a3 + 8 * v13;
            do
            {
              for ( k = *(_QWORD *)(*(_QWORD *)v21 + 24LL); k; k = *(_QWORD *)(k + 64) )
                (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL) + 8LL)
                                                       + 240LL))(
                  *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
                  *(_QWORD *)(k + 24));
              --v20;
            }
            while ( v20 );
          }
          return v5;
        }
        *(_DWORD *)(v15 + 72) |= 0x800u;
        v15 = *(_QWORD *)(v15 + 64);
        v19 = v18 == 259;
        a4 = v25;
        v9 = this;
        if ( v19 )
          v5 = 259;
      }
      v13 = (unsigned int)(v13 + 1);
      v12 = (const struct DXGRESOURCEREFERENCE *)((char *)v12 + 8);
      if ( (unsigned int)v13 < a2 )
        continue;
      break;
    }
  }
  return v5;
}
