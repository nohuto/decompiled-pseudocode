/*
 * XREFs of ?ReferenceAdapter@CTokenManager@@UEAAJU_LUID@@PEAPEAUIAdapter@@@Z @ 0x1C0019280
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTokenManager::ReferenceAdapter(CTokenManager *this, struct _LUID a2, struct IAdapter **a3)
{
  char *v3; // rsi
  DWORD LowPart; // ebx
  unsigned int v7; // ebp
  struct IAdapter *v8; // r14
  char *v9; // r9
  char *v10; // rdx
  __int64 v11; // rdi
  __int64 result; // rax
  LONG HighPart; // [rsp+4Ch] [rbp+14h]

  HighPart = a2.HighPart;
  v3 = (char *)this + 152;
  LowPart = a2.LowPart;
  v7 = -1073741275;
  v8 = 0LL;
  ExAcquirePushLockSharedEx((char *)this + 152, 0LL);
  v3[8] = 0;
  v9 = (char *)this + 136;
  v10 = (char *)*((_QWORD *)this + 18);
  if ( v10 != (char *)this + 136 )
  {
    while ( 1 )
    {
      v11 = (unsigned __int64)(v10 - 8) & -(__int64)(v10 != 0LL);
      if ( LowPart == *(_DWORD *)(v11 + 0x18)
        && HighPart == *(_DWORD *)(((unsigned __int64)(v10 - 8) & -(__int64)(v10 != 0LL)) + 0x1C) )
      {
        break;
      }
      v10 = (char *)*((_QWORD *)v10 + 1);
      if ( v10 == v9 )
        goto LABEL_5;
    }
    (**(void (__fastcall ***)(__int64))v11)((unsigned __int64)(v10 - 8) & -(__int64)(v10 != 0LL));
    v7 = 0;
    v8 = (struct IAdapter *)v11;
  }
LABEL_5:
  if ( v3[8] )
    ExReleasePushLockExclusiveEx(v3, 0LL);
  else
    ExReleasePushLockSharedEx(v3, 0LL);
  result = v7;
  *a3 = v8;
  return result;
}
