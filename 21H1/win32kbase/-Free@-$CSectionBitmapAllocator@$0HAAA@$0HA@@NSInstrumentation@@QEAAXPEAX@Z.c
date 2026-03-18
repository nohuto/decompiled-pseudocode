/*
 * XREFs of ?Free@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0006080
 * Callers:
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0129144 (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C00D2E00 (memset.c)
 */

void __fastcall NSInstrumentation::CSectionBitmapAllocator<28672,112>::Free(__int64 *a1, void *a2)
{
  __int64 v3; // rbx
  ULONG v5; // esi

  if ( a2 )
  {
    v3 = *a1;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v3, 0LL);
    v5 = ((unsigned __int16)a2 & 0xFFFu) / 0x70
       + 36 * ((unsigned int)((_DWORD)a2 - (*((_DWORD *)a1 + 4) ^ *((_DWORD *)a1 + 2))) >> 12);
    RtlClearBit((PRTL_BITMAP)(a1[2] ^ a1[3]), v5);
    memset(a2, 0, 0x70uLL);
    *((_DWORD *)a1 + 8) = v5;
    ExReleasePushLockExclusiveEx(v3, 0LL);
    KeLeaveCriticalRegion();
  }
}
