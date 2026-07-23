/*
 * XREFs of EtwpEnqueueAvailableBuffer @ 0x1402541D0
 * Callers:
 *     EtwpSwitchBuffer @ 0x140253E34 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x14025437C (EtwpPrepareDirtyBuffer.c)
 *     EtwpAllocateFreeBuffers @ 0x14029E658 (EtwpAllocateFreeBuffers.c)
 *     EtwpRelinquishCompressionTarget @ 0x1405AD9A4 (EtwpRelinquishCompressionTarget.c)
 *     EtwpRotateCompressionTarget @ 0x1405AD9F4 (EtwpRotateCompressionTarget.c)
 *     EtwpCompleteBuffer @ 0x1406398EC (EtwpCompleteBuffer.c)
 * Callees:
 *     EtwpUnlockBufferList @ 0x14025426C (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1402542B8 (EtwpLockBufferList.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall EtwpEnqueueAvailableBuffer(__int64 a1, unsigned int *a2, unsigned int a3)
{
  ULONG_PTR BugCheckParameter4; // rax
  ULONG_PTR v5; // rcx
  _QWORD *v8; // rcx
  __int64 result; // rax
  _QWORD *v10; // r8
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  int v13; // eax
  int v14; // r9d
  char v15; // [rsp+40h] [rbp+8h] BYREF

  BugCheckParameter4 = *a2;
  v5 = *(unsigned int *)(a1 + 4);
  v15 = 0;
  if ( (_DWORD)v5 != (_DWORD)BugCheckParameter4 )
    KeBugCheckEx(0x11Du, 7uLL, (ULONG_PTR)a2, v5, BugCheckParameter4);
  a2[11] = a3;
  *((_QWORD *)a2 + 3) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 824));
  EtwpLockBufferList(a1, &v15);
  if ( (*(_DWORD *)(a1 + 12) & 0x4000000) == 0
    || (v10 = (_QWORD *)(a1 + 72), (v11 = *(_QWORD *)(a1 + 72)) == 0)
    || a3 == 4 )
  {
    v8 = a2 + 8;
    goto LABEL_4;
  }
  if ( a3 )
  {
    v12 = 0LL;
    do
    {
      v13 = *(_DWORD *)(v11 + 12);
      if ( (!v12 && (v14 = *(_DWORD *)(v11 + 12), v13) || (v14 = *(_DWORD *)(v11 + 12), v13 == 6))
        && (v12 = v10, v14 == 6) )
      {
        *v10 = *(_QWORD *)v11;
        if ( *(_QWORD *)v11 )
          *(_QWORD *)v11 = 0LL;
        else
          *(_QWORD *)(a1 + 64) = v10;
        *(_QWORD *)v11 = *(_QWORD *)(a1 + 1168);
        *(_QWORD *)(a1 + 1168) = v11;
      }
      else
      {
        v10 = (_QWORD *)v11;
      }
      v11 = *v10;
    }
    while ( *v10 );
    v8 = a2 + 8;
    if ( v12 )
    {
      *v8 = *v12;
      *v12 = v8;
      if ( v12 != *(_QWORD **)(a1 + 64) )
        goto LABEL_6;
      goto LABEL_5;
    }
LABEL_4:
    *v8 = 0LL;
    **(_QWORD **)(a1 + 64) = v8;
LABEL_5:
    *(_QWORD *)(a1 + 64) = v8;
    goto LABEL_6;
  }
  *((_QWORD *)a2 + 4) = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = a2 + 8;
  if ( a1 + 72 == *(_QWORD *)(a1 + 64) )
    *(_QWORD *)(a1 + 64) = a2 + 8;
LABEL_6:
  result = EtwpUnlockBufferList(a1, &v15);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 244));
  return result;
}
