/*
 * XREFs of KiPreprocessFault @ 0x1402618D0
 * Callers:
 *     KiDispatchException @ 0x1402612C0 (KiDispatchException.c)
 * Callees:
 *     KiOpDecode @ 0x140261E80 (KiOpDecode.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     KiOpPreprocessSecureFault @ 0x140514E40 (KiOpPreprocessSecureFault.c)
 *     KiCheckForAtlThunk @ 0x140524784 (KiCheckForAtlThunk.c)
 */

char __fastcall KiPreprocessFault(ULONG_PTR a1, ULONG_PTR a2, char a3)
{
  int v6; // r8d
  __int16 v7; // ax
  void *v8; // rcx
  void *v9; // rdx
  bool v10; // cf
  int v11; // esi
  int v12; // eax
  __int64 v13; // rbp
  char v14; // di
  unsigned __int16 v16; // ax
  struct _KTHREAD *CurrentThread; // rcx
  void *v18; // rax
  unsigned __int16 SListFaultCount; // ax
  _QWORD v20[14]; // [rsp+30h] [rbp-78h] BYREF

  memset(v20, 0, 0x68uLL);
  switch ( *(_DWORD *)a1 )
  {
    case 0x10000001:
      v11 = 0x80000000;
      break;
    case 0x10000002:
      v11 = 0x40000000;
      *(_DWORD *)a1 = -1073741795;
      goto LABEL_10;
    case 0x10000003:
      v11 = 0x20000000;
      *(_DWORD *)a1 = -1073741676;
      goto LABEL_10;
    case 0x10000004:
LABEL_5:
      v7 = *(_WORD *)(a2 + 56);
      if ( v7 == 16 )
      {
        v8 = &ExpInterlockedPopEntrySListFault;
        v9 = &ExpInterlockedPopEntrySListResume;
      }
      else
      {
        if ( v7 != 51 )
          goto LABEL_8;
        v8 = (void *)KeUserPopEntrySListFault;
        v9 = (void *)KeUserPopEntrySListResume;
      }
      if ( *(void **)(a2 + 248) != v8 )
      {
LABEL_8:
        v10 = *(_DWORD *)(a1 + 24) < 2u;
        v11 = 0x10000000;
        *(_DWORD *)a1 = -1073741819;
        if ( v10 || (*(_BYTE *)(a1 + 32) & 8) == 0 )
          goto LABEL_10;
        if ( a3 )
        {
          v11 = 0x8000000;
          goto LABEL_10;
        }
        return 0;
      }
      if ( v7 != 16 )
      {
        CurrentThread = KeGetCurrentThread();
        v18 = *(void **)(a1 + 40);
        if ( v18 == CurrentThread->SListFaultAddress )
        {
          SListFaultCount = CurrentThread->SListFaultCount;
          v6 = 1024;
          if ( SListFaultCount > 0x400u )
          {
            CurrentThread->SListFaultCount = 0;
            goto LABEL_8;
          }
          v16 = SListFaultCount + 1;
        }
        else
        {
          CurrentThread->SListFaultAddress = v18;
          v16 = 0;
        }
        CurrentThread->SListFaultCount = v16;
      }
      *(_QWORD *)(a2 + 248) = v9;
      return 1;
    case 0x10000006:
      if ( (unsigned __int8)KiOpPreprocessSecureFault(a1, a2) )
        return 1;
      goto LABEL_5;
    case 0x10000007:
      v11 = 0x4000000;
      break;
    default:
      return 0;
  }
  *(_DWORD *)a1 = -1073741819;
LABEL_10:
  LOBYTE(v6) = a3;
  v12 = KiOpDecode(a1, a2, v6, v11, v20);
  if ( v12 < 0 )
  {
    v13 = 0LL;
  }
  else
  {
    v13 = v20[11];
    if ( v20[11] )
      v12 = (*(__int64 (__fastcall **)(_QWORD *))(v20[11] + 16LL))(v20);
  }
  v14 = 0;
  if ( v12 < 0 || !v13 || (v14 = v20[12]) == 0 )
  {
    if ( v11 == 0x80000000 )
    {
      if ( *(_DWORD *)a1 == -1073741819 && !BYTE1(v20[12]) )
      {
        *(_QWORD *)(a1 + 40) = -1LL;
        *(_DWORD *)(a1 + 24) = 2;
        *(_QWORD *)(a1 + 32) = 0LL;
      }
    }
    else if ( v11 == 0x8000000 && (int)KiCheckForAtlThunk(v20) >= 0 )
    {
      return v20[12];
    }
  }
  return v14;
}
