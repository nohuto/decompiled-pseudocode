/*
 * XREFs of ?Release@CCompositionFrame@@UEAAJXZ @ 0x1C0012D40
 * Callers:
 *     <none>
 * Callees:
 *     ?ReturnLegacyTokenBuffer@CCompositionFrame@@IEAAXXZ @ 0x1C0012FA4 (-ReturnLegacyTokenBuffer@CCompositionFrame@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionFrame::Release(CCompositionFrame *this)
{
  unsigned __int32 v2; // ebx
  bool v4; // zf
  CCompositionFrame **v5; // r14
  CCompositionFrame **v6; // rax
  CCompositionFrame *v7; // rcx
  CCompositionFrame **v8; // r14
  CCompositionFrame **v9; // rax
  CCompositionFrame *v10; // rcx
  CCompositionFrame **v11; // rdi
  CCompositionFrame *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  CCompositionFrame **v16; // rdi
  CCompositionFrame *v17; // rcx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
  {
    v4 = *((_DWORD *)this + 22) == 3;
    *(_QWORD *)this = &CCompositionFrame::`vftable';
    if ( !v4 )
    {
      if ( *((_QWORD *)this + 12) )
      {
        do
        {
          v13 = (***((__int64 (__fastcall ****)(_QWORD))this + 12))(*((_QWORD *)this + 12));
          LOBYTE(v14) = 1;
          v15 = v13;
          (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 8LL))(*((_QWORD *)this + 12), v14);
          *((_QWORD *)this + 12) = v15;
        }
        while ( v15 );
      }
      *((_DWORD *)this + 22) = 3;
      CCompositionFrame::ReturnLegacyTokenBuffer(this);
      v5 = (CCompositionFrame **)((char *)this + 144);
      v6 = (CCompositionFrame **)*((_QWORD *)this + 18);
      if ( v6[1] == (CCompositionFrame *)((char *)this + 144) )
      {
        v7 = *v6;
        if ( *((CCompositionFrame ***)*v6 + 1) == v6 )
        {
          *v5 = v7;
          *((_QWORD *)v7 + 1) = v5;
          if ( v6 == v5 )
          {
LABEL_9:
            v8 = (CCompositionFrame **)((char *)this + 160);
            v9 = (CCompositionFrame **)*((_QWORD *)this + 20);
            if ( v9[1] == (CCompositionFrame *)((char *)this + 160) )
            {
              v10 = *v9;
              if ( *((CCompositionFrame ***)*v9 + 1) == v9 )
              {
                *v8 = v10;
                *((_QWORD *)v10 + 1) = v8;
                if ( v9 == v8 )
                  goto LABEL_12;
                while ( 1 )
                {
                  v16 = v9 - 6;
                  (*((void (__fastcall **)(CCompositionFrame **))*(v9 - 1) + 7))(v9 - 1);
                  ObfDereferenceObject(v16);
                  v9 = (CCompositionFrame **)*v8;
                  if ( *((CCompositionFrame ***)*v8 + 1) != v8 )
                    break;
                  v17 = *v9;
                  if ( *((CCompositionFrame ***)*v9 + 1) != v9 )
                    break;
                  *v8 = v17;
                  *((_QWORD *)v17 + 1) = v8;
                  if ( v9 == v8 )
                    goto LABEL_12;
                }
              }
            }
          }
          else
          {
            while ( 1 )
            {
              v11 = v6 - 1;
              (*((void (__fastcall **)(CCompositionFrame **))*(v6 - 1) + 7))(v6 - 1);
              (*(void (__fastcall **)(CCompositionFrame **, __int64))*v11)(v11, 1LL);
              v6 = (CCompositionFrame **)*v5;
              if ( *((CCompositionFrame ***)*v5 + 1) != v5 )
                break;
              v12 = *v6;
              if ( *((CCompositionFrame ***)*v6 + 1) != v6 )
                break;
              *v5 = v12;
              *((_QWORD *)v12 + 1) = v5;
              if ( v6 == v5 )
                goto LABEL_9;
            }
          }
        }
      }
      __fastfail(3u);
    }
LABEL_12:
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 8LL))(*((_QWORD *)this + 22));
    ExFreePoolWithTag(this, 0);
  }
  return v2;
}
