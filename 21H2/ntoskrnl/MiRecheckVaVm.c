/*
 * XREFs of MiRecheckVaVm @ 0x140369744
 * Callers:
 *     MiCrcStillIntact @ 0x140367D24 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x140368510 (MiSharePages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiRecheckVaVm(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int64 v3; // rsi
  __int64 v4; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int16 v7; // dx
  __int64 v8; // rax

  v2 = 1;
  v3 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = *(_QWORD *)v3;
  if ( !MiPteInShadowRange(v3)
    || (MiFlags & 0xC00000) == 0
    || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
  {
    goto LABEL_2;
  }
  if ( (v4 & 1) != 0 )
  {
    if ( (v4 & 0x20) == 0 || (v4 & 0x42) == 0 )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v7 = v4 | 0x20;
        v8 = *((_QWORD *)&Flink->Flink + ((v3 >> 3) & 0x1FF));
        if ( (v8 & 0x20) == 0 )
          v7 = v4;
        LOWORD(v4) = v7;
        if ( (v8 & 0x42) != 0 )
          LOWORD(v4) = v7 | 0x42;
      }
    }
LABEL_2:
    if ( (v4 & 1) != 0 )
      return v2;
  }
  if ( (v4 & 0xC00) != 0x800 )
    return 0;
  return v2;
}
