/*
 * XREFs of KiEpfComplete @ 0x14057AFDC
 * Callers:
 *     KiEpfDrainCompletionQueue @ 0x14057B0EC (KiEpfDrainCompletionQueue.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeSignalGate @ 0x14024B0B4 (KeSignalGate.c)
 */

void __fastcall KiEpfComplete(unsigned __int64 a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rcx

  v2 = KiEpfHashTable + 32LL * (((unsigned int)a1 + (unsigned int)(a1 >> 12)) % 0x25);
  KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 16));
  v3 = *(_QWORD **)v2;
  v4 = *(_QWORD **)v2;
  if ( *(_QWORD *)v2 == v2 )
  {
    ++*(_DWORD *)(v2 + 24);
    v4 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      v5 = (_QWORD *)*v4;
      if ( v4[2] == a1 )
        break;
      v4 = (_QWORD *)*v4;
      if ( v5 == (_QWORD *)v2 )
      {
        v4 = *(_QWORD **)v2;
        if ( v3[1] == v2 )
        {
          v6 = *v3;
          if ( *(_QWORD **)(*v3 + 8LL) == v3 )
          {
            *(_QWORD *)v2 = v6;
            *(_QWORD *)(v6 + 8) = v2;
            goto LABEL_12;
          }
        }
LABEL_10:
        __fastfail(3u);
      }
    }
    if ( (_QWORD *)v5[1] != v4 )
      goto LABEL_10;
    v7 = (_QWORD *)v4[1];
    if ( (_QWORD *)*v7 != v4 )
      goto LABEL_10;
    *v7 = v5;
    v5[1] = v7;
  }
LABEL_12:
  KxReleaseSpinLock((PKSPIN_LOCK)(v2 + 16));
  if ( v4 )
  {
    _InterlockedIncrement(&dword_140C2A8A4);
    KeSignalGate((_DWORD *)v4 + 6, 0);
  }
}
