/*
 * XREFs of sub_1C001CB8C @ 0x1C001CB8C
 * Callers:
 *     sub_1C0013AE0 @ 0x1C0013AE0 (sub_1C0013AE0.c)
 * Callees:
 *     sub_1C0002648 @ 0x1C0002648 (sub_1C0002648.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

char __fastcall sub_1C001CB8C(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rsi
  char v4; // di
  KIRQL v6; // al
  __int64 v7; // r10
  KIRQL v8; // r14
  __int64 v10; // r9
  __int64 v11; // r11
  __int64 v12; // rcx
  _QWORD *v13; // r10
  __int64 v14; // r11
  __int64 v15; // r8
  _QWORD *v16; // rax
  __int64 v17; // [rsp+20h] [rbp-28h]

  v2 = (KSPIN_LOCK *)(a2 + 440);
  v4 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v7 = *(_QWORD *)(a2 + 464);
  v8 = v6;
  *(_DWORD *)(a2 + 448) = 1;
  while ( v7 != a2 + 456 )
  {
    sub_1C000FD80(*(_QWORD *)(a2 + 16), 4, 1668379697, v7 - 16, *(unsigned __int16 *)(a2 + 4));
    v12 = *(_QWORD *)(a2 + 16);
    v17 = *(unsigned __int16 *)(a2 + 4);
    if ( *(_DWORD *)(v11 + 8) == 0x10000 )
    {
      sub_1C000FD80(v12, 4, 1668768050, v10, v17);
      v15 = *v13;
      if ( *(_QWORD **)(*v13 + 8LL) != v13 || (v16 = (_QWORD *)v13[1], (_QWORD *)*v16 != v13) )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      sub_1C0002648(a1, a2, v14, 0);
      *(_DWORD *)(a2 + 696) = 0;
      v4 = 1;
      break;
    }
    sub_1C000FD80(v12, 4, 1668768051, v10, v17);
  }
  *(_DWORD *)(a2 + 448) = 0;
  KeReleaseSpinLock(v2, v8);
  return v4;
}
