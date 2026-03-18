/*
 * XREFs of ?NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C0016990
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z @ 0x1C0016BC0 (-UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z @ 0x1C0078610 (-AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z.c)
 */

__int64 __fastcall CFlipExBuffer::NotifyTokenInFrame(CFlipExBuffer *this, const struct CToken *a2, bool *a3)
{
  unsigned int v6; // ebp
  int v7; // eax
  char *v8; // rcx
  CFlipExBuffer *v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // esi
  int v12; // eax
  __int64 v13; // r14
  const struct ScrollOptimization *v14; // rbp
  _DWORD *v15; // rdi
  int v17; // esi
  char v18; // al

  *a3 = 0;
  if ( (*(unsigned int (__fastcall **)(const struct CToken *))(*(_QWORD *)a2 + 64LL))(a2) != 1 )
    return (unsigned int)-1073741811;
  v6 = *((_DWORD *)a2 + 26);
  if ( v6 >= *((_DWORD *)this + 68) )
    return (unsigned int)-1073741811;
  *((_DWORD *)this + 69) = (*(__int64 (__fastcall **)(const struct CToken *))(*(_QWORD *)a2 + 112LL))(a2);
  if ( *((_DWORD *)this + 95) != v6 )
  {
    *((_DWORD *)this + 95) = v6;
    *a3 = 1;
    if ( (*(unsigned __int8 (__fastcall **)(const struct CToken *))(*(_QWORD *)a2 + 144LL))(a2) )
      *((_BYTE *)this + 626) = 0;
  }
  if ( CFlipExBuffer::UpdateAttributes(this, a2) )
    *a3 = 1;
  v7 = *((_DWORD *)this + 96);
  if ( v7 == 1 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(const struct CToken *))(*(_QWORD *)a2 + 176LL))(a2) )
    {
      *((_DWORD *)this + 96) = -1;
    }
    else
    {
      if ( !*((_BYTE *)a2 + 561) || *((_QWORD *)a2 + 72) != *((_QWORD *)this + 67) )
        goto LABEL_11;
      *((_DWORD *)this + 96) = 2;
    }
LABEL_35:
    *a3 = 1;
    goto LABEL_11;
  }
  if ( v7 == -1 )
    goto LABEL_35;
  if ( v7 > 2 )
  {
    v17 = 4;
    if ( v7 <= 4 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(const struct CToken *))(*(_QWORD *)a2 + 144LL))(a2) )
      {
        v18 = *((_BYTE *)this + 625);
      }
      else
      {
        v18 = 1;
        v17 = -1;
      }
      *((_DWORD *)this + 96) = v17;
      if ( v18 )
        goto LABEL_35;
    }
  }
LABEL_11:
  v8 = 0LL;
  v9 = (CFlipExBuffer *)*((_QWORD *)this + 32);
  v10 = 0LL;
  v11 = 0;
  while ( v9 != (CFlipExBuffer *)((char *)this + 256) )
  {
    if ( (_DWORD)v10 == v6 )
    {
      v8 = (char *)v9 - 8;
      break;
    }
    v9 = *(CFlipExBuffer **)v9;
    v10 = (unsigned int)(v10 + 1);
  }
  v12 = *((_DWORD *)a2 + 139);
  if ( v12 != *((_DWORD *)v8 + 20) )
  {
    *((_DWORD *)v8 + 20) = v12;
    *a3 = 1;
  }
  v13 = *((_QWORD *)a2 + 10);
  v14 = (const struct CToken *)((char *)a2 + 52);
  v15 = (_DWORD *)((char *)this + 288);
  if ( *((_DWORD *)this + 72) )
  {
    CCompositionBuffer::AddScrollAsDirty(this, (CFlipExBuffer *)((char *)this + 288));
    *v15 = 0;
    *((_BYTE *)this + 42) = 1;
  }
  if ( v14 && *(_DWORD *)v14 )
  {
    if ( *((_BYTE *)this + 42) )
    {
      CCompositionBuffer::AddScrollAsDirty(this, v14);
    }
    else
    {
      *(_OWORD *)v15 = *(_OWORD *)v14;
      *((_QWORD *)this + 38) = *((_QWORD *)v14 + 2);
      *((_DWORD *)this + 78) = *((_DWORD *)v14 + 6);
    }
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 8LL))(v13, v10) )
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 35) + 48LL))(
      *((_QWORD *)this + 35),
      v13,
      2LL);
    *((_BYTE *)this + 42) = 1;
  }
  return v11;
}
