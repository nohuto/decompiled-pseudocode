/*
 * XREFs of ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0056B00
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 * Callees:
 *     GreGetObjectOwner @ 0x1C001F270 (GreGetObjectOwner.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     HMAssignmentUnlock @ 0x1C0054AD0 (HMAssignmentUnlock.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0055648 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMChangeOwnerPheProcessWorker @ 0x1C00A53C8 (HMChangeOwnerPheProcessWorker.c)
 *     FixupGlobalCursor @ 0x1C00B4310 (FixupGlobalCursor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DestroyProcessesObjects(struct tagPROCESSINFO *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BOOL8 v5; // r14
  char *v6; // rbx
  __int64 v7; // rsi
  __int64 *v8; // rdi
  struct _HANDLEENTRY *v9; // rbx
  _QWORD *v10; // rdi
  struct _HANDLEENTRY *v11; // rsi
  __int64 v12; // rdx
  char v13; // al
  unsigned int CurrentProcessId; // ebx

  v5 = *(_QWORD *)a1 == (_QWORD)gpepCSRSS;
  if ( qword_1C024B370 )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    if ( (unsigned int)GreGetObjectOwner((unsigned int)qword_1C024B368, 1) == (CurrentProcessId & 0xFFFFFFFC) )
    {
      if ( qword_1C0250AF0 )
        qword_1C0250AF0();
    }
  }
  v6 = (char *)&gcachedCaptions;
  v7 = 5LL;
  v8 = (__int64 *)&gcachedCaptions;
  do
  {
    if ( *(_QWORD *)v6 && *(struct tagPROCESSINFO **)(*(_QWORD *)v6 + 24LL) == a1 )
      HMAssignmentUnlock(v8, a2, a3, a4);
    v8 += 2;
    v6 += 16;
    --v7;
  }
  while ( v7 );
  GetDomainLockRef(14LL, a2, a3, a4);
  v9 = qword_1C0248D48;
  v10 = gpKernelHandleTable;
  v11 = (struct _HANDLEENTRY *)((char *)qword_1C0248D48 + 32 * (unsigned int)giheLast);
  if ( qword_1C0248D48 <= v11 )
  {
    do
    {
      v12 = *((unsigned __int8 *)v9 + 24);
      if ( (_BYTE)v12 && (*((_BYTE *)&unk_1C020365C + 24 * v12) & 2) != 0 && (struct tagPROCESSINFO *)v10[1] == a1 )
      {
        if ( v5 && (_BYTE)v12 == 3 )
          FixupGlobalCursor(*v10, a1);
        if ( (*((_BYTE *)v9 + 25) & 1) == 0 )
          HMDestroyUnlockedObjectWorker(v9);
        v13 = *((_BYTE *)v9 + 24);
        if ( v13 && gptiRit )
        {
          if ( v13 == 3 )
          {
            if ( qword_1C0250768 && (int)qword_1C0250768() >= 0 )
            {
              if ( qword_1C0250770 )
                qword_1C0250770(*v10);
            }
          }
          else
          {
            HMChangeOwnerPheProcessWorker(v9);
          }
        }
      }
      v9 = (struct _HANDLEENTRY *)((char *)v9 + 32);
      v10 += 3;
    }
    while ( v9 <= v11 );
  }
}
