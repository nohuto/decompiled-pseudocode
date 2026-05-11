/*
 * XREFs of USBMidiInStateChangePin @ 0x1C0007F30
 * Callers:
 *     <none>
 * Callees:
 *     USBMidiInGetCurrentTime @ 0x1C0003D50 (USBMidiInGetCurrentTime.c)
 */

__int64 __fastcall USBMidiInStateChangePin(__int64 a1, int a2, int a3)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  int v5; // r8d
  unsigned __int64 CurrentTime; // rbx
  KIRQL v7; // dl
  KIRQL v8; // al
  _QWORD *v9; // rdx
  KIRQL v10; // r9
  __int64 v11; // rax
  _QWORD *v12; // r8
  _QWORD *v13; // rcx

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(v3 + 152);
  v5 = a3 - 2;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      CurrentTime = USBMidiInGetCurrentTime();
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 112));
      *(_BYTE *)(v4 + 32) = 1;
      *(_QWORD *)(v4 + 56) = CurrentTime;
LABEL_12:
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 112), v7);
    }
  }
  else if ( a2 == 3 )
  {
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 112));
    *(_BYTE *)(v4 + 32) = 0;
    v9 = (_QWORD *)(v4 + 64);
    v10 = v8;
    while ( 1 )
    {
      v13 = (_QWORD *)*v9;
      if ( (_QWORD *)*v9 == v9 )
        break;
      if ( (_QWORD *)v13[1] != v9
        || (v11 = *v13, *(_QWORD **)(*v13 + 8LL) != v13)
        || (*v9 = v11,
            *(_QWORD *)(v11 + 8) = v9,
            *(_OWORD *)v13 = 0LL,
            *((_OWORD *)v13 + 1) = 0LL,
            v12 = *(_QWORD **)(v4 + 88),
            *v12 != v4 + 80) )
      {
        __fastfail(3u);
      }
      *v13 = v4 + 80;
      v13[1] = v12;
      *v12 = v13;
      *(_QWORD *)(v4 + 88) = v13;
    }
    v7 = v10;
    goto LABEL_12;
  }
  return 0LL;
}
