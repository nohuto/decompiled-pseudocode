/*
 * XREFs of ?PinResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@PEAVDXGPAGINGQUEUE@@PEA_K@Z @ 0x1C0254C44
 * Callers:
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x1C016CCF0 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGDEVICE::PinResources(
        DXGDEVICE *this,
        __int64 a2,
        const struct DXGRESOURCEREFERENCE *a3,
        struct DXGPAGINGQUEUE *a4,
        unsigned __int64 *a5)
{
  int v5; // edi
  unsigned int v6; // r11d
  struct DXGPAGINGQUEUE *v7; // rax
  unsigned int v9; // ebp
  const struct DXGRESOURCEREFERENCE *v10; // r10
  __int64 v11; // rsi
  __int64 i; // rbx
  __int64 v13; // rsi
  const struct DXGRESOURCEREFERENCE *v14; // r14
  __int64 v15; // r15
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v19; // r8
  int v20; // eax
  int v21; // r13d
  bool v22; // zf
  __int64 v23; // rdi
  DXGDEVICE *v24; // rbp
  char *v25; // r14
  __int64 j; // rbx
  DXGDEVICE *v27; // [rsp+80h] [rbp+8h]

  v27 = this;
  v5 = 0;
  v6 = 0;
  v7 = a4;
  v9 = a2;
  if ( (_DWORD)a2 )
  {
    v10 = a3;
    while ( 2 )
    {
      v11 = *(_QWORD *)v10;
      for ( i = *(_QWORD *)(*(_QWORD *)v10 + 24LL); i; i = *(_QWORD *)(i + 64) )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(i + 48) + 4LL) & 0x2000) != 0 || (*(_DWORD *)(i + 72) & 0x800) != 0 )
        {
          v17 = WdLogNewEntry5_WdWarning(this, a2, a3);
          *(_QWORD *)(v17 + 24) = v11;
          *(_QWORD *)(v17 + 32) = i;
          WdLogEvent5_WdWarning(v17);
          return 3221225485LL;
        }
      }
      ++v6;
      v10 = (const struct DXGRESOURCEREFERENCE *)((char *)v10 + 8);
      if ( v6 < (unsigned int)a2 )
        continue;
      break;
    }
    v7 = a4;
  }
  v13 = 0LL;
  if ( (_DWORD)a2 )
  {
    v14 = a3;
    while ( 2 )
    {
      v15 = *(_QWORD *)v14;
      v16 = *(_QWORD *)(*(_QWORD *)v14 + 24LL);
      while ( v16 )
      {
        if ( v7 )
          v19 = *((_QWORD *)v7 + 4);
        else
          v19 = 0LL;
        v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, _QWORD, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 232LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
                *(_QWORD *)(v16 + 24),
                v19,
                0LL,
                0LL,
                a5);
        v21 = v20;
        if ( v20 < 0 )
        {
          v23 = *(_QWORD *)(v15 + 24);
          v24 = v27;
          while ( v23 != v16 )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v27 + 2) + 640LL) + 8LL) + 240LL))(
              *(_QWORD *)(*((_QWORD *)v27 + 2) + 648LL),
              *(_QWORD *)(v23 + 24));
            v23 = *(_QWORD *)(v23 + 64);
          }
          v5 = v21;
          goto LABEL_28;
        }
        *(_DWORD *)(v16 + 72) |= 0x800u;
        v16 = *(_QWORD *)(v16 + 64);
        v22 = v20 == 259;
        v7 = a4;
        this = v27;
        if ( v22 )
          v5 = 259;
      }
      v13 = (unsigned int)(v13 + 1);
      v14 = (const struct DXGRESOURCEREFERENCE *)((char *)v14 + 8);
      if ( (unsigned int)v13 < v9 )
      {
        v7 = a4;
        this = v27;
        continue;
      }
      break;
    }
    v24 = v27;
LABEL_28:
    if ( v5 < 0 && (_DWORD)v13 )
    {
      v25 = (char *)a3 + 8 * v13;
      do
      {
        for ( j = *(_QWORD *)(*(_QWORD *)v25 + 24LL); j; j = *(_QWORD *)(j + 64) )
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v24 + 2) + 640LL) + 8LL) + 240LL))(
            *(_QWORD *)(*((_QWORD *)v24 + 2) + 648LL),
            *(_QWORD *)(j + 24));
        --v13;
      }
      while ( v13 );
    }
  }
  return (unsigned int)v5;
}
