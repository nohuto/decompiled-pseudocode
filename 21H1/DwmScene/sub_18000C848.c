/*
 * XREFs of sub_18000C848 @ 0x18000C848
 * Callers:
 *     ?_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z @ 0x18000C950 (-_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z.c)
 * Callees:
 *     sub_18000CEB4 @ 0x18000CEB4 (sub_18000CEB4.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall sub_18000C848(unsigned __int64 a1, _BYTE *a2, __int64 a3))(_QWORD, _QWORD)
{
  char v3; // bp
  __int64 v4; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 CurrentThreadId; // r10
  __int64 i; // rbx
  _QWORD *v10; // rbx
  __int64 v11; // rbx
  char v12; // al
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  *a2 = 0;
  v3 = 0;
  v4 = qword_180218348;
  v7 = a1;
  if ( qword_180218348 )
  {
    CurrentThreadId = GetCurrentThreadId();
    a1 = 10 * (CurrentThreadId / 0xA);
    for ( i = *(_QWORD *)(v4 + 8 * (CurrentThreadId % 0xA)); i; i = *(_QWORD *)(i + 8) )
    {
      if ( *(_DWORD *)i == (_DWORD)CurrentThreadId )
      {
        v10 = (_QWORD *)(i + 16);
        goto LABEL_7;
      }
    }
  }
  v10 = 0LL;
LABEL_7:
  if ( v10 && *v10 )
  {
    *a2 = 0;
    if ( (unsigned __int8)sub_18000CEB4(v7, *v10, a2, a3) )
      *(_QWORD *)(v7 + 64) = a2;
    v11 = *v10;
    do
    {
      v12 = (***(__int64 (__fastcall ****)(_QWORD, unsigned __int64))(v11 + 8))(*(_QWORD *)(v11 + 8), v7);
      v11 = *(_QWORD *)(v11 + 16);
      v3 |= v12;
    }
    while ( v11 );
  }
  result = qword_180218390;
  if ( qword_180218390 )
  {
    LOBYTE(a1) = v3;
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_180218390(a1, v7);
  }
  return result;
}
