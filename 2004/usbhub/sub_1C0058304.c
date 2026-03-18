/*
 * XREFs of sub_1C0058304 @ 0x1C0058304
 * Callers:
 *     sub_1C0053F94 @ 0x1C0053F94 (sub_1C0053F94.c)
 * Callees:
 *     sub_1C0002310 @ 0x1C0002310 (sub_1C0002310.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 */

__int64 __fastcall sub_1C0058304(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9
  _DWORD *v6; // rax
  _DWORD *v7; // rax
  __int64 result; // rax
  __int64 v9; // rbx
  struct _KEVENT *v10; // rax
  __int64 v11; // rcx

  sub_1C000FD80(a1, 256, 1936745588, a2, a3);
  v6 = sub_1C0011220(v5);
  sub_1C000FD80(a1, 256, 1936745552, a2, *((unsigned __int16 *)v6 + 714));
  v7 = sub_1C0011220(a2);
  result = sub_1C0016CA0(a1, *((_WORD *)v7 + 714));
  v9 = result;
  if ( result )
  {
    v10 = (struct _KEVENT *)sub_1C0011220(a2);
    KeResetEvent(v10 + 54);
    result = sub_1C0002310(v11, a2, 0LL, 1279349827);
    *(_QWORD *)(v9 + 392) = result;
    if ( result )
    {
      _InterlockedExchange((volatile __int32 *)(v9 + 428), 1);
      result = (__int64)sub_1C0011220(result);
      *(_DWORD *)(result + 1424) |= 8u;
    }
    else
    {
      _InterlockedExchange((volatile __int32 *)(v9 + 428), 0);
    }
  }
  return result;
}
