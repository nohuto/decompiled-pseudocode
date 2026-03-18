/*
 * XREFs of MiCaptureDeleteHierarchy @ 0x14032CB70
 * Callers:
 *     MiDeleteEmptyPageTableCommit @ 0x140233E34 (MiDeleteEmptyPageTableCommit.c)
 *     MiRemoveVad @ 0x14030DA80 (MiRemoveVad.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiMakeSystemAddressValid @ 0x14032CE60 (MiMakeSystemAddressValid.c)
 */

void __fastcall MiCaptureDeleteHierarchy(unsigned __int64 a1, unsigned __int64 a2, unsigned __int8 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rbp
  _KPROCESS *Process; // r12
  unsigned int v8; // r14d
  __int64 v9; // rbx
  unsigned __int64 *v10; // r15
  char v11; // si
  unsigned __int64 v12; // rdi
  int SystemAddressValid; // r10d
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // ebp
  __int64 v17; // rcx
  struct _LIST_ENTRY *Flink; // r9
  __int64 v19; // rax
  __int64 v20; // r9
  struct _LIST_ENTRY *v21; // r9
  __int64 v22; // rax
  __int64 v23; // r9
  unsigned __int64 v24; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-60h]
  unsigned __int64 v26; // [rsp+40h] [rbp-58h]
  __int64 v27; // [rsp+48h] [rbp-50h]
  unsigned __int64 v28; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v29; // [rsp+58h] [rbp-40h]
  unsigned __int64 v30; // [rsp+60h] [rbp-38h]
  __int64 v31; // [rsp+68h] [rbp-30h]

  CurrentThread = KeGetCurrentThread();
  v5 = a4;
  *(_DWORD *)a4 = 0;
  Process = CurrentThread->ApcState.Process;
  v24 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v25 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v26 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v27 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v28 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v29 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v30 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v31 = ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 0;
LABEL_2:
  v9 = 3LL;
  v10 = &v24 + 4 * v8;
  v11 = 2;
  while ( 1 )
  {
    v12 = v10[v9];
    SystemAddressValid = MiMakeSystemAddressValid(v12, 0, 0, a3, 8);
    if ( SystemAddressValid < 0 )
      break;
    v14 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v15 = *(_QWORD *)v12;
    if ( v12 >= 0xFFFFF6FB7DBED000uLL
      && v12 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v15 & 1) != 0
      && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v19 = *((_QWORD *)&Flink->Flink + ((v12 >> 3) & 0x1FF));
        v20 = v15 | 0x20;
        if ( (v19 & 0x20) == 0 )
          v20 = *(_QWORD *)v12;
        v15 = v20;
        if ( (v19 & 0x42) != 0 )
          v15 = v20 | 0x42;
      }
    }
    if ( !v15 )
      goto LABEL_26;
    v16 = 0;
    if ( !v8 )
      goto LABEL_7;
LABEL_8:
    if ( v14 )
      MiUnlockPageTableInternal((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], v14);
    if ( !v16 )
    {
      v5 = a4;
      --v11;
      if ( --v9 >= 1 )
        continue;
    }
    if ( ++v8 >= 2 )
      return;
    v5 = a4;
    goto LABEL_2;
  }
  v14 = 0LL;
LABEL_26:
  *(_BYTE *)(v8 + v5) = 1 << v11;
  v16 = 1;
  if ( v8 )
    goto LABEL_8;
  if ( v14 || ((v12 ^ *(&v28 + v9)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
  {
LABEL_7:
    if ( v9 == 1 && ((v12 ^ v29) & 0xFFFFFFFFFFFFF000uLL) == 0 )
    {
      v10 = &v28;
      v8 = 1;
      if ( SystemAddressValid < 0 )
        goto LABEL_25;
      v17 = *(_QWORD *)v29;
      if ( v29 >= 0xFFFFF6FB7DBED000uLL
        && v29 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v17 & 1) != 0
        && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
      {
        v21 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v21 )
        {
          v22 = *((_QWORD *)&v21->Flink + ((v29 >> 3) & 0x1FF));
          v23 = v17 | 0x20;
          if ( (v22 & 0x20) == 0 )
            v23 = *(_QWORD *)v29;
          v17 = v23;
          if ( (v22 & 0x42) != 0 )
            v17 = v23 | 0x42;
        }
      }
      if ( !v17 )
LABEL_25:
        *(_BYTE *)(a4 + 1) = 1 << v11;
    }
    goto LABEL_8;
  }
  *(_BYTE *)(a4 + 1) = 1 << v11;
}
