/*
 * XREFs of ?AddObject@CEnumerableObjectCollection@@UEAAJPEAUIUnknown@@@Z @ 0x1800650A0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1801552D4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

__int64 __fastcall CEnumerableObjectCollection::AddObject(CEnumerableObjectCollection *this, struct IUnknown *a2)
{
  unsigned __int64 v2; // r8
  char *v3; // rdi
  unsigned __int64 v4; // rsi
  int v6; // ebx
  unsigned __int64 v7; // rcx
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  bool v11; // cc
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  char *v14; // rbp
  unsigned __int64 v15; // r14
  __int64 v16; // rdx
  _QWORD *v17; // rdx
  LPMALLOC ppMalloc; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((int *)this + 7);
  v3 = (char *)this + 40;
  v4 = 4294967294LL;
  v6 = -2147024774;
  if ( v2 > 0xFFFFFFFE || (v7 = *((_QWORD *)this + 8), v6 = 0, v2 <= v7) )
  {
LABEL_19:
    if ( v6 >= 0 )
    {
      v16 = *((_QWORD *)v3 + 1);
      v6 = 0;
      if ( v16 != *((_QWORD *)v3 + 3)
        || (v6 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                   v3,
                   v16 + 1),
            v6 >= 0) )
      {
        v17 = (_QWORD *)(*(_QWORD *)v3 + 8 * (*((_QWORD *)v3 + 1))++);
        if ( v17 )
          *v17 = a2;
      }
      if ( v6 >= 0 )
        ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
    }
    return (unsigned int)v6;
  }
  v8 = 2 * v7;
  if ( !is_mul_ok(v7, 2uLL) )
  {
    v8 = -1LL;
    v6 = -2147024362;
  }
  if ( v6 >= 0 )
  {
    v9 = v8 - v7;
    v10 = v7 + 4096;
    v11 = v9 <= 0x1000;
    v12 = v2;
    if ( v11 )
      v10 = v8;
    if ( v2 <= v10 )
      v12 = v10;
    if ( v12 <= 0xFFFFFFFE )
    {
      v4 = v10;
      if ( v2 > v10 )
        v4 = v2;
    }
    v13 = 8 * v4;
    if ( is_mul_ok(v4, 8uLL) )
    {
      v14 = (char *)CoTaskMemRealloc(*(LPVOID *)v3, 8 * v4);
      if ( !v14 )
        return (unsigned int)-2147024882;
      if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
      {
        v15 = ((__int64 (__fastcall *)(LPMALLOC, char *))ppMalloc->lpVtbl->GetSize)(ppMalloc, v14);
        ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
        if ( v15 > v13 )
          memset_0(&v14[v13], 0, v15 - v13);
      }
      v6 = 0;
      *((_QWORD *)v3 + 3) = v4;
      *(_QWORD *)v3 = v14;
    }
    else
    {
      v6 = -2147024362;
    }
    goto LABEL_19;
  }
  return (unsigned int)v6;
}
