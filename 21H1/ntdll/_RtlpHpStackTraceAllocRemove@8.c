/*
 * XREFs of _RtlpHpStackTraceAllocRemove@8 @ 0x4B36E197
 * Callers:
 *     _RtlpHpStackTraceRemoveStack@8 @ 0x4B36E701 (_RtlpHpStackTraceRemoveStack@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpStackTraceAllocFindMapping@8 @ 0x4B36E11F (_RtlpHpStackTraceAllocFindMapping@8.c)
 *     _RtlpHpMetadataFree@12 @ 0x4B379479 (_RtlpHpMetadataFree@12.c)
 */

int __fastcall RtlpHpStackTraceAllocRemove(_RTL_SRWLOCK *a1, int a2)
{
  _DWORD *Mapping; // eax
  _DWORD *v5; // edi
  int v6; // esi
  _DWORD *i; // edx
  int v9; // [esp+Ch] [ebp-4h]

  RtlAcquireSRWLockExclusive(a1 + 1);
  a1->0 = ($64EDA4DD838E80CF9A7DD220E06F3FD2)NtCurrentTeb()->ClientId.UniqueThread;
  Mapping = (_DWORD *)RtlpHpStackTraceAllocFindMapping((int)a1, a2);
  v5 = Mapping;
  if ( Mapping )
  {
    v9 = Mapping[1] & (-1 << (a1[3].Value & 0x1F));
    for ( i = (_DWORD *)(a1[4].Value
                       + 4
                       * ((HIBYTE(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883)))) & ((a1[3].Value >> 5) - 1)));
          (*i & 1) == 0;
          i = (_DWORD *)*i )
    {
      if ( (_DWORD *)*i == Mapping )
      {
        *i = *Mapping;
        --a1[2].Value;
        *Mapping |= 0x80000002;
        break;
      }
    }
    v6 = Mapping[2];
  }
  else
  {
    v6 = 0;
  }
  a1->Value = 0;
  RtlReleaseSRWLockExclusive(a1 + 1);
  if ( v5 )
    RtlpHpMetadataFree(RtlpHpEnvHandle, dword_4B3A446C);
  return v6;
}
