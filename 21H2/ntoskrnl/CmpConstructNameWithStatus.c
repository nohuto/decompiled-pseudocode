/*
 * XREFs of CmpConstructNameWithStatus @ 0x1407C0690
 * Callers:
 *     CmQueryLayeredKey @ 0x140226200 (CmQueryLayeredKey.c)
 *     CmpTraceHiveSaveStart @ 0x14065C91C (CmpTraceHiveSaveStart.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140677DC0 (CmpSetSecurityDescriptorInfo.c)
 *     CmpTraceSecurityChanging @ 0x140678454 (CmpTraceSecurityChanging.c)
 *     CmpLinkHiveToMaster @ 0x14067C9E8 (CmpLinkHiveToMaster.c)
 *     CmpDoWritethroughReparse @ 0x140680100 (CmpDoWritethroughReparse.c)
 *     CmpConstructAndCacheName @ 0x1406815C0 (CmpConstructAndCacheName.c)
 *     CmAddLogForAction @ 0x14071784C (CmAddLogForAction.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x140720E20 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmpConstructName @ 0x1407C05CC (CmpConstructName.c)
 *     CmpLoadHiveVolatile @ 0x14090D4E8 (CmpLoadHiveVolatile.c)
 *     CmEtwRunDown @ 0x1409103FC (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x140910724 (CmpEtwDumpKcb.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1409147B4 (CmpIsHiveAlreadyLoaded.c)
 *     CmpDumpKeyBodyList @ 0x140914E64 (CmpDumpKeyBodyList.c)
 *     CmVirtualKCBToRealPath @ 0x140916454 (CmVirtualKCBToRealPath.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1409188E8 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmpSetKcbAtLayerHeight @ 0x1406B98FC (CmpSetKcbAtLayerHeight.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1406E137C (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpStartKcbStack @ 0x1407C07F4 (CmpStartKcbStack.c)
 *     CmpConstructNameFromKeyNodes @ 0x1407C8830 (CmpConstructNameFromKeyNodes.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall CmpConstructNameWithStatus(__int64 a1, _QWORD *a2, __int64 a3)
{
  char v5; // bp
  __int64 v6; // rdx
  __int64 v7; // rcx
  int started; // ebx
  __int64 v9; // r8
  __int16 v10; // dx
  __int64 i; // r10
  __int64 v12; // r10
  __int16 v13; // dx
  struct _PRIVILEGE_SET *v14; // rdi
  unsigned __int16 j; // cx
  PPRIVILEGE_SET v16; // rax
  int v17; // eax
  __int128 v19; // [rsp+20h] [rbp-38h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+30h] [rbp-28h]
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF

  v21 = 0LL;
  v19 = 0LL;
  WORD1(v19) = -1;
  *(_OWORD *)Privileges = 0LL;
  v5 = CmpAcquireShutdownRundown(a1, a2, a3);
  started = CmpStartKcbStack(&v19, *(unsigned __int16 *)(a1 + 66));
  if ( started < 0 )
  {
    v14 = Privileges[1];
  }
  else
  {
    v10 = *(_WORD *)(a1 + 66);
    WORD1(v19) = v10;
    if ( v10 )
    {
      for ( i = *(_QWORD *)(a1 + 192); i; v10 = v13 - 1 )
      {
        CmpSetKcbAtLayerHeight((__int64)&v19, v10, *(_QWORD *)(i + 16));
        i = *(_QWORD *)(v12 + 24);
      }
    }
    else
    {
      *((_QWORD *)&v19 + 1) = a1;
    }
    v14 = Privileges[1];
    if ( v5 )
    {
      for ( j = WORD1(v19); (j & 0x8000u) == 0; --j )
      {
        v16 = j < 2u ? Privileges[j - 1] : (PPRIVILEGE_SET)*((_QWORD *)Privileges[1] + j - 2);
        if ( HIWORD(v16[3].Control) && BYTE1(v16[3].Control) == 1 )
          break;
        if ( v16[2].PrivilegeCount != -1 )
        {
          if ( *(_DWORD *)(a1 + 40) != -1 || (*(_DWORD *)(a1 + 184) & 0x40000) == 0 )
          {
            v17 = CmpConstructNameFromKeyNodes(&v19, &v21);
            v14 = Privileges[1];
            goto LABEL_16;
          }
          break;
        }
      }
    }
    v17 = CmpConstructNameFromKcbNameBlocks(a1, &v21);
LABEL_16:
    started = v17;
    if ( v17 >= 0 )
    {
      started = 0;
      *a2 = v21;
    }
  }
  if ( v14 )
    CmSiFreeMemory(v14);
  if ( v5 )
    CmpReleaseShutdownRundown(v7, v6, v9);
  return (unsigned int)started;
}
