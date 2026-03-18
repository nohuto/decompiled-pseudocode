/*
 * XREFs of ?ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C007E380
 * Callers:
 *     ?Complete@CFlipPresentUpdate@@UEAAXXZ @ 0x1C00817E0 (-Complete@CFlipPresentUpdate@@UEAAXXZ.c)
 * Callees:
 *     ?EnqueueConsumerUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C007D5B8 (-EnqueueConsumerUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x1C007D8EC (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x1C007DED8 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     ?Remove@CFlipQueuedObject@@QEAAXXZ @ 0x1C007E9E8 (-Remove@CFlipQueuedObject@@QEAAXXZ.c)
 */

void __fastcall CFlipManager::ProcessCompletedProducerPresentUpdate(PRKEVENT *this, struct CFlipPresentUpdate *a2)
{
  __int64 v2; // r9
  CFlipManager::PresentHistory *v5; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax
  _QWORD **v7; // rdi
  _QWORD *v8; // rdx
  struct CFlipPresentUpdate *v9; // r8
  CFlipManager::PresentHistory *v10; // rcx
  struct CFlipManager::PresentHistory::Entry *v11; // rax
  char *v12; // rcx
  char *v13; // rax
  char **v14; // rdx
  CFlipManager::PresentHistory *v15; // rcx
  struct CFlipManager::PresentHistory::Entry *v16; // rax

  v2 = *((_QWORD *)a2 + 8);
  if ( (PRKEVENT)v2 == this[30] )
  {
    CFlipManager::EnqueueConsumerUpdate(this, a2);
    v5 = (CFlipManager::PresentHistory *)this[3];
    if ( v5 )
    {
      NextEntry = CFlipManager::PresentHistory::GetNextEntry(v5);
      *((_DWORD *)NextEntry + 10) = 2;
      *((_QWORD *)NextEntry + 2) = *((_QWORD *)a2 + 8);
    }
    v7 = (_QWORD **)(this + 22);
    if ( *v7 != v7 )
    {
      while ( 1 )
      {
        v8 = *v7;
        if ( *v7 == v7 )
          break;
        while ( *(PRKEVENT *)(((unsigned __int64)(v8 - 3) & -(__int64)(v8 != 0LL)) + 0x40) != this[30] )
        {
          v8 = (_QWORD *)*v8;
          if ( v8 == v7 )
            return;
        }
        CFlipQueuedObject::Remove((CFlipQueuedObject *)(((unsigned __int64)(v8 - 3) & -(__int64)(v8 != 0LL)) + 16));
        CFlipManager::EnqueueConsumerUpdate(this, v9);
        v10 = (CFlipManager::PresentHistory *)this[3];
        if ( v10 )
        {
          v11 = CFlipManager::PresentHistory::GetNextEntry(v10);
          *((_DWORD *)v11 + 10) = 5;
          *((_QWORD *)v11 + 2) = *((_QWORD *)a2 + 8);
        }
      }
    }
  }
  else if ( this[6] == (PRKEVENT)1 )
  {
    CFlipManager::MarkAsLost((__int64)this, -1073741823, 15, v2);
  }
  else
  {
    v12 = (char *)(this + 22);
    v13 = (char *)a2 + 24;
    v14 = (char **)*((_QWORD *)v12 + 1);
    if ( *v14 != v12 )
      __fastfail(3u);
    *(_QWORD *)v13 = v12;
    *((_QWORD *)v13 + 1) = v14;
    *v14 = v13;
    *((_QWORD *)v12 + 1) = v13;
    v15 = (CFlipManager::PresentHistory *)this[3];
    if ( v15 )
    {
      v16 = CFlipManager::PresentHistory::GetNextEntry(v15);
      *((_DWORD *)v16 + 10) = 6;
      *((_QWORD *)v16 + 2) = *((_QWORD *)a2 + 8);
    }
  }
}
