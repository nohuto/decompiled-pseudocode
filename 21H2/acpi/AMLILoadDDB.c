/*
 * XREFs of AMLILoadDDB @ 0x1C00BD7A8
 * Callers:
 *     ACPIInitializeDDBs @ 0x1C00BD6E4 (ACPIInitializeDDBs.c)
 * Callees:
 *     RtlStringCchCopyNA @ 0x1C0020438 (RtlStringCchCopyNA.c)
 *     LoadDDB @ 0x1C00225B8 (LoadDDB.c)
 *     NewContext @ 0x1C0022674 (NewContext.c)
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     AMLIDebugger @ 0x1C0067034 (AMLIDebugger.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 *     SyncLoadDDB @ 0x1C00BC4EC (SyncLoadDDB.c)
 */

__int64 __fastcall AMLILoadDDB(int *a1, _QWORD *a2)
{
  char v4; // cl
  unsigned int DDB; // ebx
  char *v6; // rdi
  struct _SLIST_ENTRY *v7; // rcx
  __int128 v9; // [rsp+30h] [rbp-30h] BYREF
  __int128 v10; // [rsp+40h] [rbp-20h]
  __int64 v11; // [rsp+50h] [rbp-10h]
  int pszSrc; // [rsp+88h] [rbp+28h] BYREF
  PVOID Entry; // [rsp+90h] [rbp+30h] BYREF

  Entry = 0LL;
  dword_1C0081AC8 = 0;
  v11 = 0LL;
  v9 = 0LL;
  byte_1C0081ACC[0] = 0;
  v10 = 0LL;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  if ( (gDebugger & 8) != 0 )
  {
    pszSrc = *a1;
    RtlStringCchCopyNA(pszDest, 5uLL, (STRSAFE_PCNZCH)&pszSrc, 4uLL);
    PrintDebugMessage(85, KeGetCurrentThread(), pszDest, a1, 0LL);
  }
  v4 = 0;
  pszSrc = 0;
  if ( ghQueryDLMSupportHandler )
  {
    ghQueryDLMSupportHandler(&pszSrc);
    v4 = pszSrc;
  }
  gDeviceLockMutexSupported = v4;
  DDB = NewContext(&Entry);
  if ( !DDB )
  {
    v6 = (char *)Entry;
    v7 = (struct _SLIST_ENTRY *)Entry;
    *((_QWORD *)Entry + 40) = gpheapGlobal;
    DDB = LoadDDB(v7, (__int64)a1, gpnsNameSpaceRoot, (__int64)&v9);
    if ( !DDB )
      DDB = SyncLoadDDB(v6);
  }
  if ( a2 )
    *a2 = v10;
  if ( (gdwfAMLIInit & 2) != 0 )
  {
    PrintDebugMessage(16, 0LL, 0LL, 0LL, 0LL);
    AMLIDebugger();
  }
  return DDB;
}
