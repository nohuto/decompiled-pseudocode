/*
 * XREFs of sub_180003D50 @ 0x180003D50
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800038C8 @ 0x1800038C8 (sub_1800038C8.c)
 *     sub_180003BA8 @ 0x180003BA8 (sub_180003BA8.c)
 *     sub_180003C44 @ 0x180003C44 (sub_180003C44.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180003D50(unsigned __int64 a1, _BYTE *a2, __int64 a3)
{
  char v3; // bp
  __int64 v4; // rbx
  __int64 v7; // rdi
  unsigned __int64 CurrentThreadId; // r10
  __int64 i; // rbx
  __int64 *v10; // rbx
  __int64 v11; // rbx
  char v12; // al
  DWORD v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rax

  *a2 = 0;
  v3 = 0;
  v4 = qword_18005ABA8;
  v7 = a1;
  if ( qword_18005ABA8 )
  {
    CurrentThreadId = GetCurrentThreadId();
    a1 = 10 * (CurrentThreadId / 0xA);
    for ( i = *(_QWORD *)(v4 + 8 * (CurrentThreadId % 0xA)); i; i = *(_QWORD *)(i + 8) )
    {
      if ( *(_DWORD *)i == (_DWORD)CurrentThreadId )
      {
        v10 = (__int64 *)(i + 16);
        goto LABEL_7;
      }
    }
  }
  v10 = 0LL;
LABEL_7:
  if ( v10 && *v10 )
  {
    *a2 = 0;
    if ( sub_180003C44(v7, *v10, a2, a3) )
      *(_QWORD *)(v7 + 64) = a2;
    v11 = *v10;
    do
    {
      v12 = (***(__int64 (__fastcall ****)(_QWORD, __int64))(v11 + 8))(*(_QWORD *)(v11 + 8), v7);
      v11 = *(_QWORD *)(v11 + 16);
      v3 |= v12;
    }
    while ( v11 );
  }
  if ( qword_18005ABB8 )
  {
    LOBYTE(a1) = v3;
    qword_18005ABB8(a1, v7);
  }
  v13 = GetCurrentThreadId();
  if ( dword_18005AC6C != v13 )
  {
    if ( _InterlockedIncrement(&dword_18005AC80) < 4 )
    {
      dword_18005AC6C = v13;
      v15 = sub_180003BA8(0, v14);
      if ( v15 )
        sub_1800038C8(v15, v7);
      dword_18005AC6C = 0;
    }
    _InterlockedDecrement(&dword_18005AC80);
  }
}
