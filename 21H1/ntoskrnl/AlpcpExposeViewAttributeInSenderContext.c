/*
 * XREFs of AlpcpExposeViewAttributeInSenderContext @ 0x140615DDC
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x14060C1E0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x14060DDF0 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     AlpcpUnlockBlob @ 0x14060CF00 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1406103F0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReferenceBlob @ 0x140610770 (AlpcpReferenceBlob.c)
 *     AlpcpCreateView @ 0x140612B1C (AlpcpCreateView.c)
 *     AlpcpDeleteView @ 0x140612DF8 (AlpcpDeleteView.c)
 *     AlpcpLocateView @ 0x140615F6C (AlpcpLocateView.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14061606C (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmUnsecureVirtualMemory @ 0x140635790 (MmUnsecureVirtualMemory.c)
 *     AlpcpRestoreWriteAccess @ 0x14063864C (AlpcpRestoreWriteAccess.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14064942C (AlpcpLockForCachedReferenceBlob.c)
 */

__int64 __fastcall AlpcpExposeViewAttributeInSenderContext(_QWORD *Object, __int64 a2)
{
  ULONG_PTR v2; // rdi
  int v5; // r14d
  ULONG_PTR i; // rsi
  ULONG_PTR View; // rax
  ULONG_PTR v8; // rbx
  int v9; // eax
  __int64 v10; // rax
  int v12; // eax
  __int64 v13; // rax
  _DWORD *v14; // r9
  __int64 v15; // r8
  _DWORD *v16; // r9
  _DWORD *v17; // r9
  __int64 v18; // r8
  _DWORD *v19; // r9
  ULONG_PTR v20; // [rsp+20h] [rbp-40h] BYREF
  _OWORD v21[3]; // [rsp+28h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a2 + 144);
  memset(v21, 0, sizeof(v21));
  v5 = 0;
  for ( i = *(_QWORD *)(v2 + 16); ; AlpcpUnlockBlob(i) )
  {
    AlpcpLockForCachedReferenceBlob(i);
    View = AlpcpLocateView(i, Object);
    v20 = View;
    v8 = View;
    if ( !View || AlpcpReferenceBlob(View) > 0 )
      break;
  }
  if ( (*(_DWORD *)(i + 48) & 1) != 0 )
  {
    if ( v8 == *(_QWORD *)(i + 80) )
    {
LABEL_12:
      *(_DWORD *)(a2 + 40) |= 0x4000u;
      *(_QWORD *)(a2 + 144) = v8;
      ++*(_DWORD *)(v8 + 76);
      goto LABEL_13;
    }
    if ( v8 && v8 == *(_QWORD *)(i + 72) )
    {
      v12 = *(_DWORD *)(v2 + 72);
      if ( (v12 & 8) == 0 )
      {
        v13 = MmSecureVirtualMemoryAgainstWrites(*(_QWORD *)(v2 + 32), *(_QWORD *)(v2 + 40), *(_QWORD *)(v2 + 48));
        if ( !v13 )
        {
          if ( *(_QWORD *)(v8 + 64) )
          {
            KiStackAttachProcess(*(_KPROCESS **)(v8 + 32), 0LL, (__int64)v21, v14);
            MmUnsecureVirtualMemory(*(HANDLE *)(v8 + 64));
            KiUnstackDetachProcess((__int64)v21, 0LL, v15, v16);
            *(_QWORD *)(v8 + 64) = 0LL;
          }
          *(_DWORD *)(v8 + 72) |= 1u;
          AlpcpDereferenceBlobEx(v8, 1);
          *(_QWORD *)(i + 72) = 0LL;
          *(_QWORD *)(i + 80) = 0LL;
          *(_DWORD *)(i + 48) &= ~1u;
          goto LABEL_12;
        }
        *(_QWORD *)(v2 + 64) = v13;
        v12 = *(_DWORD *)(v2 + 72);
      }
      *(_DWORD *)(v2 + 72) = v12 & 0xFFFFFFFE;
      AlpcpReferenceBlob(v2);
      if ( *(_QWORD *)(v8 + 64) )
      {
        KiStackAttachProcess(*(_KPROCESS **)(v8 + 32), 0LL, (__int64)v21, v17);
        MmUnsecureVirtualMemory(*(HANDLE *)(v8 + 64));
        KiUnstackDetachProcess((__int64)v21, 0LL, v18, v19);
        *(_QWORD *)(v8 + 64) = 0LL;
      }
      *(_DWORD *)(v8 + 72) |= 1u;
      *(_QWORD *)(i + 72) = v2;
      *(_QWORD *)(i + 80) = v8;
      AlpcpDereferenceBlobEx(v8, 1);
      goto LABEL_12;
    }
    v9 = *(_DWORD *)(v2 + 72);
    if ( (v9 & 8) != 0 )
      goto LABEL_9;
    v10 = MmSecureVirtualMemoryAgainstWrites(*(_QWORD *)(v2 + 32), *(_QWORD *)(v2 + 40), *(_QWORD *)(v2 + 48));
    if ( v10 )
    {
      *(_QWORD *)(v2 + 64) = v10;
      v9 = *(_DWORD *)(v2 + 72);
LABEL_9:
      *(_DWORD *)(v2 + 72) = v9 & 0xFFFFFFFE;
      AlpcpReferenceBlob(v2);
      *(_QWORD *)(i + 80) = 0LL;
      *(_QWORD *)(i + 72) = v2;
      if ( v8 )
      {
        *(_QWORD *)(i + 80) = v8;
        goto LABEL_12;
      }
      v5 = AlpcpCreateView(i, Object, &v20);
      if ( v5 >= 0 )
        goto LABEL_11;
      AlpcpRestoreWriteAccess(v2);
      AlpcpDereferenceBlobEx(v2, 1);
      goto LABEL_35;
    }
    *(_QWORD *)(i + 72) = 0LL;
    *(_QWORD *)(i + 80) = 0LL;
    *(_DWORD *)(i + 48) &= ~1u;
  }
  else if ( v8 )
  {
    goto LABEL_12;
  }
  v5 = AlpcpCreateView(i, Object, &v20);
  if ( v5 >= 0 )
  {
LABEL_11:
    v8 = v20;
    goto LABEL_12;
  }
LABEL_35:
  *(_QWORD *)(a2 + 144) = 0LL;
LABEL_13:
  --*(_DWORD *)(v2 + 76);
  if ( (*(_DWORD *)(v2 + 72) & 2) != 0 )
  {
    AlpcpDeleteView(v2);
    *(_DWORD *)(v2 + 72) &= ~2u;
  }
  AlpcpUnlockBlob(i);
  AlpcpDereferenceBlobEx(v2, 1);
  return (unsigned int)v5;
}
