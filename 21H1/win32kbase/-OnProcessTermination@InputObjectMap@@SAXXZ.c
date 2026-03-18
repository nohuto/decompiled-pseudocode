/*
 * XREFs of ?OnProcessTermination@InputObjectMap@@SAXXZ @ 0x1C002EB64
 * Callers:
 *     DestroyProcessInfo @ 0x1C006B620 (DestroyProcessInfo.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002EC24 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

void __fastcall InputObjectMap::OnProcessTermination(__int64 a1, __int64 a2)
{
  __int64 CurrentProcess; // rbp
  struct _EX_PUSH_LOCK *v3; // rdx
  _QWORD *v4; // rsi
  PVOID **v5; // rdi
  _QWORD *i; // rdx
  PVOID **v7; // rbx
  _QWORD *j; // rcx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  CurrentProcess = PsGetCurrentProcess(a1, a2);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v9, v3);
  v4 = Buffer;
  v5 = (PVOID **)Buffer;
  while ( 1 )
  {
    if ( !v5 )
      goto LABEL_3;
    v7 = (PVOID **)*v5;
    if ( ((unsigned __int64)*v5 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v7 = (PVOID **)*v5;
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
LABEL_3:
      for ( i = v4 + 1; ; ++i )
      {
        if ( i >= (_QWORD *)((char *)Buffer + 8 * ((unsigned __int64)(unsigned int)dword_1C02563EC >> 5)) )
        {
          v7 = 0LL;
          goto LABEL_6;
        }
        if ( (*i & 1) == 0 )
          break;
      }
      v5 = (PVOID **)*i;
      v4 = i;
      v7 = (PVOID **)*i;
    }
    else
    {
      v5 = v7;
    }
LABEL_6:
    if ( !v7 )
      break;
    if ( v7[3][8] == (PVOID)CurrentProcess )
    {
      for ( j = v4; (*j & 1) == 0; j = (_QWORD *)*j )
      {
        if ( (PVOID **)*j == v5 )
        {
          *j = *v5;
          --InputObjectMap::s_hashTable;
          *v5 = (PVOID *)((unsigned __int64)*v5 | 0x8000000000000002uLL);
          v5 = (PVOID **)j;
          break;
        }
      }
      ObfDereferenceObject(v7[3]);
      ExFreePoolWithTag(v7, 0);
    }
  }
  ExReleasePushLockExclusiveEx(v9, 0LL);
  KeLeaveCriticalRegion();
}
