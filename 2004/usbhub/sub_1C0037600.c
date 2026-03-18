/*
 * XREFs of sub_1C0037600 @ 0x1C0037600
 * Callers:
 *     sub_1C003A2BC @ 0x1C003A2BC (sub_1C003A2BC.c)
 * Callees:
 *     sub_1C0002648 @ 0x1C0002648 (sub_1C0002648.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

void __fastcall sub_1C0037600(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rdi
  KIRQL v5; // al
  __int64 v6; // r10
  KIRQL v7; // bp
  __int64 v8; // r9
  __int64 v9; // r11
  __int64 v10; // rcx
  _QWORD *v11; // r10
  __int64 v12; // r11
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // [rsp+20h] [rbp-18h]

  v2 = (KSPIN_LOCK *)(a2 + 440);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v6 = *(_QWORD *)(a2 + 464);
  v7 = v5;
  *(_DWORD *)(a2 + 448) = 1;
  while ( v6 != a2 + 456 )
  {
    sub_1C000FD80(*(_QWORD *)(a2 + 16), 4, 1717858865, v6 - 16, *(unsigned __int16 *)(a2 + 4));
    v10 = *(_QWORD *)(a2 + 16);
    v15 = *(unsigned __int16 *)(a2 + 4);
    if ( *(_DWORD *)(v9 + 8) == 0x20000 )
    {
      sub_1C000FD80(v10, 4, 1717858866, v8, v15);
      v13 = *v11;
      if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v14 = (_QWORD *)v11[1], (_QWORD *)*v14 != v11) )
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      sub_1C0002648(a1, a2, v12, 1);
      break;
    }
    sub_1C000FD80(v10, 4, 1717858867, v8, v15);
  }
  *(_DWORD *)(a2 + 448) = 0;
  KeReleaseSpinLock(v2, v7);
}
