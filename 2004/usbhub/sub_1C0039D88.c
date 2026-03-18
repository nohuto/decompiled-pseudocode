/*
 * XREFs of sub_1C0039D88 @ 0x1C0039D88
 * Callers:
 *     sub_1C00173C0 @ 0x1C00173C0 (sub_1C00173C0.c)
 *     sub_1C003AEF8 @ 0x1C003AEF8 (sub_1C003AEF8.c)
 *     sub_1C003C654 @ 0x1C003C654 (sub_1C003C654.c)
 *     sub_1C0056E30 @ 0x1C0056E30 (sub_1C0056E30.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0010D74 @ 0x1C0010D74 (sub_1C0010D74.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0016B5C @ 0x1C0016B5C (sub_1C0016B5C.c)
 *     sub_1C00171A0 @ 0x1C00171A0 (sub_1C00171A0.c)
 *     sub_1C001CDA8 @ 0x1C001CDA8 (sub_1C001CDA8.c)
 *     sub_1C0039F00 @ 0x1C0039F00 (sub_1C0039F00.c)
 */

__int64 __fastcall sub_1C0039D88(struct _DEVICE_OBJECT *a1, __int64 a2, struct _DEVICE_OBJECT *a3)
{
  _DWORD *v6; // rbx
  __int64 v7; // rsi
  _DWORD *v8; // rax
  __int64 v9; // rcx
  int v10; // ebx
  KIRQL v11; // dl

  v6 = sub_1C0011220((__int64)a3);
  v7 = sub_1C0016B5C((__int64)a1, *((_WORD *)v6 + 714), 0LL, 0x70534D52u);
  sub_1C000FD80((__int64)a1, 8, 1920167280, *((unsigned __int16 *)v6 + 714), v7);
  v8 = sub_1C000F050((__int64)a1);
  if ( v7 && a3 == (struct _DEVICE_OBJECT *)v7 && (v8[640] & 0x10) == 0 )
  {
    sub_1C001CDA8(v9, a2, 15);
    if ( sub_1C0011220((__int64)a3)[281] == 3 )
    {
      *(_DWORD *)(a2 + 136) = 0;
      stru_1C006B480.Dpc.DeferredRoutine = 0LL;
      *(_DWORD *)(a2 + 88) = 1734964085;
      KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a2 + 132));
      v10 = sub_1C0039F00(a1);
    }
    else
    {
      *(_DWORD *)(a2 + 136) = 0;
      v10 = -1073741810;
      stru_1C006B480.Dpc.DeferredRoutine = 0LL;
      v11 = *(_BYTE *)(a2 + 132);
      *(_DWORD *)(a2 + 88) = 1734964085;
      KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v11);
    }
  }
  else
  {
    v10 = -1073741810;
  }
  if ( v7 )
    sub_1C00171A0((__int64)a1, v7, 0LL, 0x70534D52u);
  if ( v10 >= 0 )
    sub_1C0010D74(a3, (POWER_STATE)1);
  return (unsigned int)v10;
}
