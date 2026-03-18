/*
 * XREFs of MiQueryLoadedPatches @ 0x140976F90
 * Callers:
 *     NtManageHotPatch @ 0x1406C9390 (NtManageHotPatch.c)
 * Callees:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     RtlCopySid @ 0x14066A4E0 (RtlCopySid.c)
 *     MiFindUserSidHotPatchContext @ 0x14097339C (MiFindUserSidHotPatchContext.c)
 */

__int64 __fastcall MiQueryLoadedPatches(PSID SourceSid, _QWORD *a2, _DWORD *a3, __int64 a4, unsigned int a5)
{
  struct _KTHREAD *CurrentThread; // r15
  _DWORD *v6; // r14
  int *v9; // rdi
  unsigned __int64 k; // rbx
  _QWORD *UserSidHotPatchContext; // rax
  unsigned int v12; // esi
  unsigned __int64 v13; // rdx
  _QWORD *i; // rax
  unsigned __int64 j; // rcx
  unsigned __int64 v16; // r8
  _QWORD **v17; // rax
  _QWORD *v18; // r8
  unsigned int v19; // ebx
  int v20; // r12d
  _DWORD *Pool; // rax
  _DWORD *v22; // rdi
  __int64 v23; // rax
  UNICODE_STRING *v24; // r14
  char *v25; // rbp
  char *v26; // rsi
  wchar_t *v27; // r13
  unsigned __int16 v28; // ax
  unsigned __int64 v29; // rcx
  __int64 Length; // rax
  _QWORD **v31; // rax
  _QWORD *v32; // rcx
  bool v33; // zf

  CurrentThread = KeGetCurrentThread();
  v6 = a3;
  v9 = 0LL;
  k = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C533C0, 0LL);
  if ( !SourceSid )
  {
    v9 = &qword_140C533B0;
LABEL_7:
    for ( i = *(_QWORD **)v9; i; i = (_QWORD *)*i )
      k = (unsigned __int64)i;
    j = k;
    v13 = 96LL;
    v12 = 0;
    while ( j )
    {
      ++v12;
      v16 = j;
      v13 += *(unsigned __int16 *)(j + 32) + 24LL;
      v17 = *(_QWORD ***)(j + 8);
      if ( v17 )
      {
        v18 = *v17;
        for ( j = *(_QWORD *)(j + 8); v18; v18 = (_QWORD *)*v18 )
          j = (unsigned __int64)v18;
      }
      else
      {
        while ( 1 )
        {
          j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !j || *(_QWORD *)j == v16 )
            break;
          v16 = j;
        }
      }
    }
    goto LABEL_19;
  }
  UserSidHotPatchContext = MiFindUserSidHotPatchContext(SourceSid);
  if ( UserSidHotPatchContext )
    v9 = (int *)(UserSidHotPatchContext + 3);
  v12 = 0;
  v13 = 96LL;
  if ( v9 )
    goto LABEL_7;
LABEL_19:
  if ( a5 >= v13 )
  {
    v20 = v13;
    Pool = MiAllocatePool(256, (unsigned int)v13, 0x71486D4Du);
    v22 = Pool;
    if ( !Pool )
    {
      v19 = -1073741670;
      goto LABEL_41;
    }
    *Pool = 2;
    if ( SourceSid )
      RtlCopySid(0x44u, Pool + 1, SourceSid);
    if ( v12 )
    {
      v23 = v12;
      v24 = (UNICODE_STRING *)(v22 + 24);
      *((_QWORD *)v22 + 10) = v22 + 24;
      v25 = (char *)v22 - a4;
      v26 = (char *)&v22[4 * v12 + 24];
      *((_QWORD *)v22 + 11) = v26;
      v27 = (wchar_t *)&v26[8 * v23];
      if ( k )
      {
        do
        {
          *(_DWORD *)v26 = *(_DWORD *)(k + 24);
          *((_DWORD *)v26 + 1) = *(_DWORD *)(k + 28);
          v28 = *(_WORD *)(k + 32);
          v24->Length = v28;
          v24->MaximumLength = v28;
          v24->Buffer = v27;
          RtlCopyUnicodeString(v24, (PCUNICODE_STRING)(k + 32));
          v24->Buffer = (wchar_t *)((char *)v24->Buffer - v25);
          v26 += 8;
          ++v22[18];
          v29 = k;
          Length = v24->Length;
          ++v24;
          v27 = (wchar_t *)((char *)v27 + Length);
          v31 = *(_QWORD ***)(k + 8);
          if ( v31 )
          {
            v32 = *v31;
            for ( k = *(_QWORD *)(k + 8); v32; v32 = (_QWORD *)*v32 )
              k = (unsigned __int64)v32;
          }
          else
          {
            while ( 1 )
            {
              k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              if ( !k || *(_QWORD *)k == v29 )
                break;
              v29 = k;
            }
          }
        }
        while ( k );
        v26 = (char *)*((_QWORD *)v22 + 11);
        v24 = (UNICODE_STRING *)*((_QWORD *)v22 + 10);
      }
      *((_QWORD *)v22 + 10) = (char *)v24 - v25;
      v6 = a3;
      *((_QWORD *)v22 + 11) = v26 - v25;
    }
    *a2 = v22;
    *v6 = v20;
  }
  else
  {
    if ( v13 > 0xFFFFFFFF )
    {
      v19 = -1073741675;
      goto LABEL_41;
    }
    *a2 = 0LL;
    *v6 = v13;
  }
  v19 = 0;
LABEL_41:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C533C0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C533C0);
  KeAbPostRelease((ULONG_PTR)&qword_140C533C0);
  v33 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v33 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v19;
}
