/*
 * XREFs of sub_1800047D0 @ 0x1800047D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800044A8 @ 0x1800044A8 (sub_1800044A8.c)
 *     sub_180004608 @ 0x180004608 (sub_180004608.c)
 *     sub_1800046D4 @ 0x1800046D4 (sub_1800046D4.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

int __fastcall sub_1800047D0(unsigned __int64 a1, _BYTE *a2, __int64 a3)
{
  char v3; // bp
  __int64 v4; // rbx
  __int64 v7; // rdi
  unsigned __int64 CurrentThreadId; // r10
  __int64 i; // rbx
  __int64 *v10; // rbx
  __int64 v11; // rbx
  char v12; // al
  __int64 v13; // rax

  *a2 = 0;
  v3 = 0;
  v4 = qword_18004FCF0;
  v7 = a1;
  if ( qword_18004FCF0 )
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
    if ( sub_1800046D4(v7, *v10, a2, a3) )
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
  if ( qword_18004FD00 )
  {
    LOBYTE(a1) = v3;
    qword_18004FD00(a1, v7);
  }
  LODWORD(v13) = GetCurrentThreadId();
  if ( dword_18004FDA4 != (_DWORD)v13 )
  {
    if ( _InterlockedIncrement(&dword_18004FDA8) < 4 )
    {
      dword_18004FDA4 = v13;
      v13 = sub_180004608();
      if ( v13 )
        LODWORD(v13) = sub_1800044A8(v13, v7);
      dword_18004FDA4 = 0;
    }
    _InterlockedDecrement(&dword_18004FDA8);
  }
  return v13;
}
