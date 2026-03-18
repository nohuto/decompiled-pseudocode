/*
 * XREFs of ?InitializeCloned@CFlipToken@@IEAAJ_KPEBUtagCloneableFlipTokenData@@@Z @ 0x1C0062FD8
 * Callers:
 *     ?CreateCloned@CFlipToken@@SAJ_K0PEAVCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData@@PEAPEAV1@@Z @ 0x1C0062E48 (-CreateCloned@CFlipToken@@SAJ_K0PEAVCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData@@PEA.c)
 * Callees:
 *     ?ValidateDXGIAlphaMode@@YAJW4DXGI_ALPHA_MODE@@@Z @ 0x1C000532C (-ValidateDXGIAlphaMode@@YAJW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?Initialize@CToken@@MEAAJW4TokenState@CTokenBase@@@Z @ 0x1C001DC40 (-Initialize@CToken@@MEAAJW4TokenState@CTokenBase@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipToken::InitializeCloned(
        CFlipToken *this,
        __int64 a2,
        const struct tagCloneableFlipTokenData *a3)
{
  unsigned int v6; // ebp
  int v7; // edi
  __int64 v8; // rax
  _OWORD *v9; // rcx
  __int128 v10; // xmm1
  unsigned int v11; // eax

  v6 = 0;
  v7 = CToken::Initialize((__int64)this, 2LL);
  if ( v7 >= 0 )
  {
    v7 = ValidateDXGIAlphaMode(*((_DWORD *)a3 + 9));
    if ( v7 >= 0 )
    {
      v8 = 3LL;
      *((_QWORD *)this + 12) = a2;
      v9 = (_OWORD *)((char *)this + 104);
      do
      {
        *v9 = *(_OWORD *)a3;
        v9[1] = *((_OWORD *)a3 + 1);
        v9[2] = *((_OWORD *)a3 + 2);
        v9[3] = *((_OWORD *)a3 + 3);
        v9[4] = *((_OWORD *)a3 + 4);
        v9[5] = *((_OWORD *)a3 + 5);
        v9[6] = *((_OWORD *)a3 + 6);
        v9 += 8;
        v10 = *((_OWORD *)a3 + 7);
        a3 = (const struct tagCloneableFlipTokenData *)((char *)a3 + 128);
        *(v9 - 1) = v10;
        --v8;
      }
      while ( v8 );
      *v9 = *(_OWORD *)a3;
      v9[1] = *((_OWORD *)a3 + 1);
      v9[2] = *((_OWORD *)a3 + 2);
      v9[3] = *((_OWORD *)a3 + 3);
      *((_DWORD *)v9 + 16) = *((_DWORD *)a3 + 16);
      v11 = *((_DWORD *)this + 74);
      *((_BYTE *)this + 89) = 1;
      if ( v11 )
      {
        if ( v11 > 0x10 )
        {
          return (unsigned int)-1073741811;
        }
        else
        {
          do
            (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 10) + 40LL))(
              *((_QWORD *)this + 10),
              (char *)this + 16 * v6++ + 300);
          while ( v6 < *((_DWORD *)this + 74) );
        }
      }
    }
  }
  return (unsigned int)v7;
}
