/*
 * XREFs of GreSetDCOwnerEx @ 0x1C0090550
 * Callers:
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C00130B0 (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     InitUserScreen @ 0x1C00139D8 (InitUserScreen.c)
 *     CreateCacheDC @ 0x1C00141E0 (CreateCacheDC.c)
 *     DestroyCacheDC @ 0x1C0030D30 (DestroyCacheDC.c)
 *     DestroyProcessInfo @ 0x1C0078F74 (DestroyProcessInfo.c)
 *     ReleaseCacheDC @ 0x1C008BB80 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C008DE30 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C0093FA0 (GetMonitorDC.c)
 * Callees:
 *     GreIncQuotaCount @ 0x1C003BBA0 (GreIncQuotaCount.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0071C74 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0071CB4 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00821C0 (GreReleaseHmgrSemaphore.c)
 *     ?SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x1C0083F78 (-SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z.c)
 *     HmgAllocateDcAttr @ 0x1C0083FC8 (HmgAllocateDcAttr.c)
 *     HmgFreeDcAttr @ 0x1C0086408 (HmgFreeDcAttr.c)
 *     HmgDecProcessHandleCount @ 0x1C00864EC (HmgDecProcessHandleCount.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C008689C (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C0086B1C (-FreeDCAttributes@@YAXPEAVDC@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C008A000 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C008A360 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C008B0F0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C008BB60 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C00903E0 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00A5C20 (GreAcquireHmgrSemaphore.c)
 *     GreSetBrushOwner @ 0x1C00A7400 (GreSetBrushOwner.c)
 *     HmgIncProcessHandleCountEx @ 0x1C00CF930 (HmgIncProcessHandleCountEx.c)
 */

__int64 __fastcall GreSetDCOwnerEx(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned int v4; // esi
  unsigned int v5; // ebx
  BOOL v6; // r13d
  unsigned int v7; // edi
  struct _DC_ATTR *DcAttr; // r12
  _DWORD *v9; // r14
  struct OBJECT *EntryObject; // rax
  HBRUSH **v11; // r15
  BOOL v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 CurrentProcessWin32Process; // rax
  bool v17; // cf
  unsigned int v18; // ebx
  unsigned int CurrentProcessId; // eax
  unsigned int v20; // ecx
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // r8d
  _DWORD *v25; // [rsp+30h] [rbp-28h] BYREF
  int v26; // [rsp+38h] [rbp-20h]
  char v27; // [rsp+A0h] [rbp+48h] BYREF
  int v28; // [rsp+A8h] [rbp+50h]
  int v29; // [rsp+B0h] [rbp+58h]
  unsigned int v30; // [rsp+B8h] [rbp+60h]

  v30 = a4;
  v29 = a3;
  v4 = a2;
  v5 = a1;
  v6 = a3 == 0;
  v7 = 0;
  DcAttr = 0LL;
  if ( (_DWORD)a2 == -2147483646 && !a3 )
    DcAttr = (struct _DC_ATTR *)HmgAllocateDcAttr(a1);
  GreAcquireHmgrSemaphore(a1, a2);
  v25 = 0LL;
  v26 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v25, (unsigned __int16)v5 | (v5 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v26 )
  {
    v9 = v25;
    EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *v25 & 0xFFFFFF);
    v11 = (HBRUSH **)EntryObject;
    if ( *((_BYTE *)v9 + 14) == 1 && *((_WORD *)v9 + 6) == HIWORD(v5) )
    {
      if ( !*((_WORD *)EntryObject + 6) )
      {
LABEL_10:
        if ( v4 != -2147483630 )
        {
          if ( (v9[2] & 0xFFFFFFFE) == 0x80000012 )
            GrepValidateVisRgn(EntryObject, *((struct _RECTL **)EntryObject + 140));
          if ( v4 )
          {
            v12 = v6;
            if ( v4 == -2147483646 )
            {
              v13 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
              v14 = v9[2] & 0xFFFFFFFE;
              if ( v14 == v13 || v14 == -2147483630 || !v14 )
              {
                v28 = 0;
                v7 = 1;
                if ( v14 == v13 )
                {
LABEL_23:
                  if ( !*((_QWORD *)v9 + 2) )
                  {
                    if ( DcAttr )
                    {
                      SetupDCAttributes((struct DC *)v11, DcAttr);
                      DcAttr = 0LL;
                    }
                    else
                    {
                      v17 = v29 != 0;
                      v29 = -v29;
                      v7 &= -v17;
                    }
                  }
                  if ( v7 )
                  {
                    HANDLELOCK::Pid((HANDLELOCK *)&v25, v13);
                  }
                  else if ( v28 )
                  {
                    HmgDecProcessHandleCount(v13);
                  }
                  goto LABEL_33;
                }
                v7 = HmgIncProcessHandleCountEx(v13, 0LL, v30);
                if ( v7 )
                {
LABEL_22:
                  v28 = 1;
                  goto LABEL_23;
                }
                if ( v29 )
                {
                  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
                  GreIncQuotaCount(CurrentProcessWin32Process);
                  v7 = 1;
                  goto LABEL_22;
                }
              }
LABEL_33:
              v12 = v6;
            }
LABEL_40:
            if ( v4 != -2147483630 && v7 && v12 && (unsigned int)GreSetBrushOwner(*v11[17], v4) )
              GreSetBrushOwner(*v11[18], v4);
            goto LABEL_45;
          }
        }
        v18 = v9[2] & 0xFFFFFFFE;
        if ( v18 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        {
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v27, (struct _EX_PUSH_LOCK *)&gDCOwnershipChangeLock);
          FreeDCAttributes((struct DC *)v11);
          HANDLELOCK::Pid((HANDLELOCK *)&v25, v4);
          CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
          HmgDecProcessHandleCount(CurrentProcessId & 0xFFFFFFFC);
          v7 = 1;
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v27);
          goto LABEL_33;
        }
        v20 = v9[2] & 0xFFFFFFFE;
        if ( v20 == -2147483630 )
        {
          HANDLELOCK::Pid((HANDLELOCK *)&v25, v4);
          v12 = v6;
        }
        else
        {
          v12 = v6;
          if ( v20 || v4 )
            goto LABEL_40;
          v12 = 0;
        }
        v7 = 1;
        goto LABEL_40;
      }
      if ( *((struct _KTHREAD **)EntryObject + 2) == KeGetCurrentThread() )
      {
        v9 = v25;
        goto LABEL_10;
      }
    }
LABEL_45:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v25);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v25);
  GreReleaseHmgrSemaphore(v22, v21, v23);
  if ( DcAttr )
    HmgFreeDcAttr((__int64)DcAttr);
  return v7;
}
