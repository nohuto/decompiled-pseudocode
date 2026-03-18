/*
 * XREFs of ChildProcessRootSynthesizedMouseInput @ 0x1C01B11A0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00B5BD0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00B8618 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ @ 0x1C01B1010 (-GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ.c)
 *     SynthesizeMouseInputForPTP @ 0x1C01B1E40 (SynthesizeMouseInputForPTP.c)
 */

void ChildProcessRootSynthesizedMouseInput()
{
  __int64 *Instance; // rsi
  __int64 v1; // r8
  __int64 v2; // rdi
  __int64 v3; // rax
  unsigned int v4; // r14d
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rbp
  __int64 v7; // r15
  unsigned __int128 v8; // rax
  unsigned __int64 i; // rbp

  Instance = (__int64 *)InputVirtualization::RootSynthesizedMouseList::GetInstance();
  CPushLock::AcquireLockExclusive((CPushLock *)(Instance + 2));
  while ( 1 )
  {
    v2 = *Instance;
    if ( (__int64 *)*Instance == Instance )
      break;
    if ( *(__int64 **)(v2 + 8) != Instance || (v3 = *(_QWORD *)v2, *(_QWORD *)(*(_QWORD *)v2 + 8LL) != v2) )
      __fastfail(3u);
    *Instance = v3;
    v4 = 0;
    *(_QWORD *)(v3 + 8) = Instance;
    v5 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
    v6 = ((v5 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64) * gliQpcFreq.QuadPart;
    v7 = (v5 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    v8 = v6 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
    for ( i = v6 / 0x3E8; v4 < *(_DWORD *)(v2 + 32); ++v4 )
      SynthesizeMouseInputForPTP(
        *(_QWORD *)(v2 + 16),
        28 * v4 + v2 + 36,
        v7,
        i,
        *(_QWORD *)(v2 + 24),
        *(_DWORD *)(28LL * v4 + v2 + 36 + 24),
        0LL);
    Win32FreePool(v2, *((__int64 *)&v8 + 1), v1);
  }
  CPushLock::ReleaseLock((CPushLock *)(Instance + 2));
}
