/*
 * XREFs of ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0070FB0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0071CF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     GreGetObjectOwner @ 0x1C000EF40 (GreGetObjectOwner.c)
 *     HMChangeOwnerPheProcessWorker @ 0x1C002D308 (HMChangeOwnerPheProcessWorker.c)
 *     FixupGlobalCursor @ 0x1C0046250 (FixupGlobalCursor.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C007049C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMAssignmentUnlock @ 0x1C0073400 (HMAssignmentUnlock.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DestroyProcessesObjects(struct tagPROCESSINFO *a1)
{
  _BOOL8 v2; // r14
  char *v3; // rbx
  __int64 v4; // rsi
  char *v5; // rdi
  struct _HANDLEENTRY *v6; // rbx
  __int64 *v7; // rdi
  struct _HANDLEENTRY *v8; // rsi
  __int64 v9; // rdx
  char v10; // al
  unsigned int CurrentProcessId; // ebx

  v2 = *(_QWORD *)a1 == (_QWORD)gpepCSRSS;
  if ( qword_1C0253310 )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    if ( (unsigned int)GreGetObjectOwner((unsigned int)qword_1C0253308, 1) == (CurrentProcessId & 0xFFFFFFFC) )
    {
      if ( qword_1C0258AB0 )
        qword_1C0258AB0();
    }
  }
  v3 = (char *)&gcachedCaptions;
  v4 = 5LL;
  v5 = (char *)&gcachedCaptions;
  do
  {
    if ( *(_QWORD *)v3 && *(struct tagPROCESSINFO **)(*(_QWORD *)v3 + 24LL) == a1 )
      HMAssignmentUnlock(v5);
    v5 += 16;
    v3 += 16;
    --v4;
  }
  while ( v4 );
  GetDomainLockRef(14LL);
  v6 = qword_1C0250D48;
  v7 = (__int64 *)gpKernelHandleTable;
  v8 = (struct _HANDLEENTRY *)((char *)qword_1C0250D48 + 32 * (unsigned int)giheLast);
  if ( qword_1C0250D48 <= v8 )
  {
    do
    {
      v9 = *((unsigned __int8 *)v6 + 24);
      if ( (_BYTE)v9 && (*((_BYTE *)&unk_1C020B6DC + 24 * v9) & 2) != 0 && (struct tagPROCESSINFO *)v7[1] == a1 )
      {
        if ( v2 && (_BYTE)v9 == 3 )
          FixupGlobalCursor(*v7, (__int64)a1);
        if ( (*((_BYTE *)v6 + 25) & 1) == 0 )
          HMDestroyUnlockedObjectWorker(v6);
        v10 = *((_BYTE *)v6 + 24);
        if ( v10 && gptiRit )
        {
          if ( v10 == 3 )
          {
            if ( qword_1C0258728 && (int)qword_1C0258728() >= 0 )
            {
              if ( qword_1C0258730 )
                qword_1C0258730(*v7);
            }
          }
          else
          {
            HMChangeOwnerPheProcessWorker((__int64)v6, (__int64)gptiRit);
          }
        }
      }
      v6 = (struct _HANDLEENTRY *)((char *)v6 + 32);
      v7 += 3;
    }
    while ( v6 <= v8 );
  }
}
