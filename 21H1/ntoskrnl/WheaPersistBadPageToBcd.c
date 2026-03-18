/*
 * XREFs of WheaPersistBadPageToBcd @ 0x1405B6A80
 * Callers:
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x1403B68B8 (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     EmpRemoveBadS3PageWorker @ 0x140886180 (EmpRemoveBadS3PageWorker.c)
 *     WheapAttemptPhysicalPageOffline @ 0x140958CBC (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     ExFreeHeapPool @ 0x14024C790 (ExFreeHeapPool.c)
 *     BcdCloseStore @ 0x14076DC24 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x14076E658 (BcdOpenStore.c)
 *     BcdOpenObject @ 0x14076F250 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14076F3DC (BcdCloseObject.c)
 *     WheapCountBadPageExtents @ 0x140959080 (WheapCountBadPageExtents.c)
 *     WheapIsPageInList @ 0x1409590CC (WheapIsPageInList.c)
 *     WheapSortBadPages @ 0x1409590F4 (WheapSortBadPages.c)
 *     BcdCreateObject @ 0x14096A390 (BcdCreateObject.c)
 *     BcdGetElementData @ 0x14096ABA0 (BcdGetElementData.c)
 *     BcdSetElementData @ 0x14096ABC0 (BcdSetElementData.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WheaPersistBadPageToBcd(__int64 a1)
{
  ULONG_PTR v1; // rdi
  int v3; // ebx
  __int64 v4; // rsi
  int ElementData; // eax
  unsigned int v6; // r14d
  int v7; // ebx
  PVOID PoolWithTag; // rax
  __int64 v9; // rbx
  _DWORD v11[4]; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v12; // [rsp+78h] [rbp+48h] BYREF
  __int64 v13; // [rsp+80h] [rbp+50h] BYREF
  __int64 v14; // [rsp+88h] [rbp+58h] BYREF

  v13 = 0LL;
  v1 = 0LL;
  v14 = 0LL;
  v3 = BcdOpenStore(a1, 0LL, &v13);
  if ( v3 < 0 )
    goto LABEL_20;
  if ( (int)BcdOpenObject(v13, &GUID_BAD_MEMORY_GROUP, &v14) < 0 )
  {
    v11[0] = 1;
    v11[1] = 537919488;
    v3 = ((__int64 (__fastcall *)(__int64, GUID *, _DWORD *, __int64 *))BcdCreateObject)(
           v13,
           &GUID_BAD_MEMORY_GROUP,
           v11,
           &v14);
    if ( v3 < 0 )
    {
      v4 = v14;
      goto LABEL_18;
    }
  }
  v4 = v14;
  v12 = 0;
  ElementData = BcdGetElementData(v14, 385875978LL, 0LL, &v12);
  v6 = v12;
  if ( ElementData != -1073741789 )
    v6 = 0;
  v7 = ElementData;
  v12 = v6;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6 + 8LL, 0x61656857u);
  v1 = (ULONG_PTR)PoolWithTag;
  if ( !PoolWithTag )
  {
    v3 = -1073741670;
    goto LABEL_18;
  }
  if ( v7 != -1073741789 )
  {
LABEL_12:
    v9 = v6 >> 3;
    if ( (unsigned __int8)WheapIsPageInList(v1, v9, a1) )
    {
      v3 = 0;
    }
    else
    {
      *(_QWORD *)(v1 + 8 * v9) = a1;
      WheapSortBadPages(v1, (unsigned int)(v9 + 1));
      if ( (unsigned int)WheapCountBadPageExtents(v1, (unsigned int)(v9 + 1)) <= 0x40 )
      {
        v3 = BcdSetElementData(v4, 385875978LL, v1, v6 + 8);
        if ( v3 >= 0 )
          v3 = 0;
      }
      else
      {
        v3 = -1073741823;
      }
    }
    goto LABEL_18;
  }
  v3 = BcdGetElementData(v4, 385875978LL, PoolWithTag, &v12);
  if ( v3 >= 0 )
  {
    v6 = v12;
    goto LABEL_12;
  }
LABEL_18:
  if ( v4 )
    BcdCloseObject(v4);
LABEL_20:
  if ( v13 )
    BcdCloseStore(v13);
  if ( v1 )
    ExFreeHeapPool(v1);
  return (unsigned int)v3;
}
