/*
 * XREFs of sub_1800CD434 @ 0x1800CD434
 * Callers:
 *     sub_180037D70 @ 0x180037D70 (sub_180037D70.c)
 *     sub_180043BD0 @ 0x180043BD0 (sub_180043BD0.c)
 * Callees:
 *     <none>
 */

__int64 sub_1800CD434(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v3; // rax
  __int64 v5; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 v7; // [rsp+90h] [rbp+28h]
  __int64 v8; // [rsp+98h] [rbp+30h]
  va_list va1; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v5 = va_arg(va1, _QWORD);
  v7 = va_arg(va1, _QWORD);
  v8 = va_arg(va1, _QWORD);
  if ( v8 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *(_WORD *)(v8 + 2 * v3) );
  }
  return EtwTraceMessage(a1, 43LL, &unk_18015DF00, a2, (__int64 *)va);
}
