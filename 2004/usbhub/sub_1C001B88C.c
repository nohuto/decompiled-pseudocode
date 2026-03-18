/*
 * XREFs of sub_1C001B88C @ 0x1C001B88C
 * Callers:
 *     sub_1C00018E8 @ 0x1C00018E8 (sub_1C00018E8.c)
 *     sub_1C0011C40 @ 0x1C0011C40 (sub_1C0011C40.c)
 *     sub_1C0013AE0 @ 0x1C0013AE0 (sub_1C0013AE0.c)
 *     DeferredRoutine @ 0x1C002D220 (DeferredRoutine.c)
 *     sub_1C002D93C @ 0x1C002D93C (sub_1C002D93C.c)
 *     sub_1C002D9E8 @ 0x1C002D9E8 (sub_1C002D9E8.c)
 *     sub_1C002DCC0 @ 0x1C002DCC0 (sub_1C002DCC0.c)
 *     sub_1C002F6C0 @ 0x1C002F6C0 (sub_1C002F6C0.c)
 *     sub_1C002F830 @ 0x1C002F830 (sub_1C002F830.c)
 *     sub_1C0038F30 @ 0x1C0038F30 (sub_1C0038F30.c)
 *     sub_1C003B508 @ 0x1C003B508 (sub_1C003B508.c)
 *     sub_1C003B8F0 @ 0x1C003B8F0 (sub_1C003B8F0.c)
 *     sub_1C00412E4 @ 0x1C00412E4 (sub_1C00412E4.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 *     sub_1C004AC90 @ 0x1C004AC90 (sub_1C004AC90.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 */

void __fastcall sub_1C001B88C(__int64 a1, __int64 a2)
{
  KIRQL v4; // r14
  _DWORD *v5; // rax
  _QWORD *v6; // rcx
  _DWORD *v7; // rdi
  _QWORD *v8; // rbx
  _QWORD *v9; // r8
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  int v12; // eax

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels);
  stru_1C006B480.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)&stru_1C006B480.Dpc.DeferredContext;
  v5 = sub_1C000F050(a1);
  v6 = 0LL;
  v7 = v5;
  v8 = v5 + 628;
  if ( *((_DWORD **)v5 + 314) != v5 + 628 )
    v6 = (_QWORD *)*((_QWORD *)v5 + 314);
  v9 = 0LL;
  if ( !v6 )
    goto LABEL_19;
  while ( v6 != v8 )
  {
    v9 = v6 - 3;
    if ( v6 != (_QWORD *)24 && *(_DWORD *)v9 == 1397515890 )
    {
      if ( v9[2] == a2 )
        break;
      v6 = (_QWORD *)*v6;
      if ( v6 )
        continue;
    }
    sub_1C002DC78(a1, a1);
  }
  if ( v9 && v6 != v8 )
  {
    v10 = (_QWORD *)*v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v11 = (_QWORD *)v6[1], (_QWORD *)*v11 != v6) )
      __fastfail(3u);
    *v11 = v10;
    v10[1] = v11;
    ExFreePoolWithTag(v9, 0);
  }
  else
  {
LABEL_19:
    v12 = v5[632];
    if ( v12 )
      v7[632] = v12 - 1;
  }
  if ( (_QWORD *)*v8 == v8 && !v7[632] )
    KeSetEvent((PRKEVENT)(v7 + 622), 0, 0);
  stru_1C006B480.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v4);
}
