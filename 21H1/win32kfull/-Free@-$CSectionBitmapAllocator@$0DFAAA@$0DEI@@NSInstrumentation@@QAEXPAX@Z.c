/*
 * XREFs of ?Free@?$CSectionBitmapAllocator@$0DFAAA@$0DEI@@NSInstrumentation@@QAEXPAX@Z @ 0xD1144
 * Callers:
 *     ?Free@?$CTypeIsolation@$0DFAAA@$0DEI@@NSInstrumentation@@IAEXPAX@Z @ 0xD1070 (-Free@-$CTypeIsolation@$0DFAAA@$0DEI@@NSInstrumentation@@IAEXPAX@Z.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 */

void __thiscall NSInstrumentation::CSectionBitmapAllocator<217088,840>::Free(int *this, void *a2)
{
  int v3; // esi
  int v4; // ebx
  ULONG v5; // edi

  if ( a2 )
  {
    v3 = *this;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v3, 0);
    v4 = this[2];
    v5 = ((unsigned __int16)a2 & 0xFFFu) / 0x348 + 4 * (((unsigned int)a2 - (v4 ^ this[1])) >> 12);
    RtlClearBit((PRTL_BITMAP)(v4 ^ this[3]), v5);
    memset(a2, 0, 0x348u);
    this[4] = v5;
    ExReleasePushLockExclusiveEx(v3, 0);
    KeLeaveCriticalRegion();
  }
}
