/*
 * XREFs of sub_1C003D218 @ 0x1C003D218
 * Callers:
 *     sub_1C0009690 @ 0x1C0009690 (sub_1C0009690.c)
 *     sub_1C003D000 @ 0x1C003D000 (sub_1C003D000.c)
 *     sub_1C0055C3C @ 0x1C0055C3C (sub_1C0055C3C.c)
 *     sub_1C0057020 @ 0x1C0057020 (sub_1C0057020.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001CDA8 @ 0x1C001CDA8 (sub_1C001CDA8.c)
 */

void __fastcall sub_1C003D218(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v3; // rdi
  _DWORD *v4; // rax
  __int64 v5; // rcx
  KIRQL v6; // al
  _DWORD *v7; // rax
  KIRQL v8; // dl

  v3 = (KSPIN_LOCK *)sub_1C0011220(a2);
  v4 = sub_1C0011220(a2);
  sub_1C001CDA8(v5, (__int64)(v4 + 236), 12);
  if ( sub_1C0011220(a2)[281] == 3 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(v3 + 152);
    *((_DWORD *)v3 + 196) = 1;
    KeReleaseSpinLock(v3 + 152, v6);
  }
  v7 = sub_1C0011220(a2);
  v7[270] = 0;
  stru_1C006B480.Dpc.DeferredRoutine = 0LL;
  v8 = *((_BYTE *)v7 + 1076);
  v7[258] = 1734964085;
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v8);
}
