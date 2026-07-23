/*
 * XREFs of KiEpfComplete @ 0x14052428C
 * Callers:
 *     KiEpfDrainCompletionQueue @ 0x1405243E8 (KiEpfDrainCompletionQueue.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeSignalGate @ 0x140241090 (KeSignalGate.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 */

void __fastcall KiEpfComplete(unsigned __int64 a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rax

  v2 = KiEpfHashTable + 32LL * (((unsigned int)a1 + (unsigned int)(a1 >> 12)) % 0x25);
  KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 16));
  v3 = *(_QWORD **)v2;
  v4 = *(_QWORD **)v2;
  if ( *(_QWORD *)v2 == v2 )
  {
LABEL_5:
    ++*(_DWORD *)(v2 + 24);
    v4 = 0LL;
    goto LABEL_12;
  }
  do
  {
    v5 = (_QWORD *)*v4;
    if ( v4[2] == a1 )
    {
      if ( (_QWORD *)v5[1] == v4 )
      {
        v6 = (_QWORD *)v4[1];
        if ( (_QWORD *)*v6 == v4 )
        {
          *v6 = v5;
          v5[1] = v6;
          goto LABEL_12;
        }
      }
LABEL_15:
      __fastfail(3u);
    }
    v4 = (_QWORD *)*v4;
  }
  while ( v5 != (_QWORD *)v2 );
  if ( v3 == (_QWORD *)v2 )
    goto LABEL_5;
  v4 = *(_QWORD **)v2;
  if ( v3[1] != v2 )
    goto LABEL_15;
  v7 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 )
    goto LABEL_15;
  *(_QWORD *)v2 = v7;
  *(_QWORD *)(v7 + 8) = v2;
LABEL_12:
  KxReleaseSpinLock((PKSPIN_LOCK)(v2 + 16));
  if ( v4 )
  {
    _InterlockedIncrement(&dword_140C2B104);
    KeSignalGate((__int64)(v4 + 3), 0);
  }
}
