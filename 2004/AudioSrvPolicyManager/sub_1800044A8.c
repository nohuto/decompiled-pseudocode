/*
 * XREFs of sub_1800044A8 @ 0x1800044A8
 * Callers:
 *     sub_1800047D0 @ 0x1800047D0 (sub_1800047D0.c)
 * Callees:
 *     sub_18000419C @ 0x18000419C (sub_18000419C.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

int __fastcall sub_1800044A8(__int64 a1, __int64 a2)
{
  _UNKNOWN **v2; // rax
  _UNKNOWN **v3; // rbx
  int v4; // ebp
  HANDLE ProcessHeap; // rax
  _WORD *v8; // rdi
  HANDLE v9; // rax
  _DWORD *v10; // rcx
  _DWORD *v11; // rbx
  volatile signed __int32 *v12; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v2 = &retaddr;
  v3 = *(_UNKNOWN ***)(a1 + 24);
  v4 = *(_DWORD *)(a1 + 16);
  if ( v3 )
    goto LABEL_20;
  if ( v4 )
  {
    ProcessHeap = GetProcessHeap();
    v2 = (_UNKNOWN **)HeapAlloc(ProcessHeap, 8u, 0x190uLL);
    v8 = v2;
    v3 = v2;
    if ( qword_18004FD18 )
    {
      v9 = GetProcessHeap();
      LODWORD(v2) = ((__int64 (__fastcall *)(HANDLE, _UNKNOWN **))qword_18004FD18)(v9, v3);
    }
    *(_QWORD *)(a1 + 24) = v8;
    if ( v8 )
    {
      v2 = (_UNKNOWN **)(v8 + 200);
      *(_DWORD *)(a1 + 32) = 5;
      do
      {
        *v8 = 80;
        v8 += 40;
      }
      while ( v8 != (_WORD *)v2 );
      v3 = *(_UNKNOWN ***)(a1 + 24);
    }
  }
  if ( v3 )
  {
LABEL_20:
    if ( !v4 || (v10 = &v3[10 * *(unsigned __int16 *)(a1 + 32)], v3 == (_UNKNOWN **)v10) )
    {
LABEL_16:
      v12 = *(volatile signed __int32 **)(a1 + 8);
      *(_WORD *)(a1 + 34) = ((unsigned int)*(unsigned __int16 *)(a1 + 34) + 1) % *(unsigned __int16 *)(a1 + 32);
      LODWORD(v2) = sub_18000419C(
                      *(_QWORD *)(a1 + 24) + 80LL * *(unsigned __int16 *)(a1 + 34),
                      a2,
                      _InterlockedIncrement(v12));
    }
    else
    {
      v11 = v3 + 1;
      while ( 1 )
      {
        if ( *(v11 - 1) > *(_DWORD *)(a1 + 16) )
        {
          LODWORD(v2) = *(_DWORD *)(a2 + 4);
          if ( *v11 == (_DWORD)v2 )
            break;
        }
        v11 += 20;
        if ( v11 - 2 == v10 )
          goto LABEL_16;
      }
    }
  }
  return (int)v2;
}
