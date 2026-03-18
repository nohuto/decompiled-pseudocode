/*
 * XREFs of GreSetDCOwnerEx @ 0x1C004A4E0
 * Callers:
 *     InitUserScreen @ 0x1C001F2FC (InitUserScreen.c)
 *     CreateCacheDC @ 0x1C001FB00 (CreateCacheDC.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C0020570 (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     DestroyCacheDC @ 0x1C0020B80 (DestroyCacheDC.c)
 *     ReleaseCacheDC @ 0x1C00418A0 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C0047DC0 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C004D710 (GetMonitorDC.c)
 *     DestroyProcessInfo @ 0x1C00620F8 (DestroyProcessInfo.c)
 * Callees:
 *     GreSetBrushOwner @ 0x1C001C210 (GreSetBrushOwner.c)
 *     HmgAllocateDcAttr @ 0x1C001D474 (HmgAllocateDcAttr.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     HmgFreeDcAttr @ 0x1C003E544 (HmgFreeDcAttr.c)
 *     ?SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x1C003E610 (-SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C003E660 (HmgDecProcessHandleCount.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C003EA1C (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C0040A10 (-FreeDCAttributes@@YAXPEAVDC@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C00445F0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0044950 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C0045660 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C00460A0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C004A370 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C005EA20 (GreAcquireHmgrSemaphore.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00626AC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00626E0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     GreIncQuotaCount @ 0x1C00A5520 (GreIncQuotaCount.c)
 *     HmgIncProcessHandleCountEx @ 0x1C00CF1F8 (HmgIncProcessHandleCountEx.c)
 */

__int64 __fastcall GreSetDCOwnerEx(unsigned int a1, unsigned int a2, int a3, unsigned int a4)
{
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
  __int64 v16; // r8
  __int64 v17; // r9
  struct _W32PROCESS *CurrentProcessWin32Process; // rax
  bool v19; // cf
  unsigned int v20; // ebx
  unsigned int CurrentProcessId; // eax
  unsigned int v22; // ecx
  __int64 v23; // rdx
  int v24; // ecx
  int v25; // r8d
  _DWORD *v27; // [rsp+30h] [rbp-28h] BYREF
  int v28; // [rsp+38h] [rbp-20h]
  char v29; // [rsp+A0h] [rbp+48h] BYREF
  int v30; // [rsp+A8h] [rbp+50h]
  int v31; // [rsp+B0h] [rbp+58h]
  unsigned int v32; // [rsp+B8h] [rbp+60h]

  v32 = a4;
  v31 = a3;
  v6 = a3 == 0;
  v7 = 0;
  DcAttr = 0LL;
  if ( a2 == -2147483646 && !a3 )
    DcAttr = (struct _DC_ATTR *)HmgAllocateDcAttr();
  GreAcquireHmgrSemaphore();
  v27 = 0LL;
  v28 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v27, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v28 )
  {
    v9 = v27;
    EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *v27 & 0xFFFFFF);
    v11 = (HBRUSH **)EntryObject;
    if ( *((_BYTE *)v9 + 14) == 1 && *((_WORD *)v9 + 6) == HIWORD(a1) )
    {
      if ( !*((_WORD *)EntryObject + 6) )
      {
LABEL_10:
        if ( a2 != -2147483630 )
        {
          if ( (v9[2] & 0xFFFFFFFE) == 0x80000012 )
            GrepValidateVisRgn(EntryObject, *((struct _RECTL **)EntryObject + 140));
          if ( a2 )
          {
            v12 = v6;
            if ( a2 == -2147483646 )
            {
              v13 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
              v14 = v9[2] & 0xFFFFFFFE;
              if ( v14 == v13 || v14 == -2147483630 || !v14 )
              {
                v30 = 0;
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
                      v19 = v31 != 0;
                      v31 = -v31;
                      v7 &= -v19;
                    }
                  }
                  if ( v7 )
                  {
                    HANDLELOCK::Pid((HANDLELOCK *)&v27, v13);
                  }
                  else if ( v30 )
                  {
                    HmgDecProcessHandleCount(v13);
                  }
                  goto LABEL_33;
                }
                v7 = HmgIncProcessHandleCountEx(v13, 0LL, v32);
                if ( v7 )
                {
LABEL_22:
                  v30 = 1;
                  goto LABEL_23;
                }
                if ( v31 )
                {
                  CurrentProcessWin32Process = (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v15, 0LL, v16, v17);
                  GreIncQuotaCount(CurrentProcessWin32Process);
                  v7 = 1;
                  goto LABEL_22;
                }
              }
LABEL_33:
              v12 = v6;
            }
LABEL_40:
            if ( a2 != -2147483630 && v7 && v12 && (unsigned int)GreSetBrushOwner(*v11[17], a2) )
              GreSetBrushOwner(*v11[18], a2);
            goto LABEL_45;
          }
        }
        v20 = v9[2] & 0xFFFFFFFE;
        if ( v20 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        {
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v29, (struct _EX_PUSH_LOCK *)&gDCOwnershipChangeLock);
          FreeDCAttributes((struct DC *)v11);
          HANDLELOCK::Pid((HANDLELOCK *)&v27, a2);
          CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
          HmgDecProcessHandleCount(CurrentProcessId & 0xFFFFFFFC);
          v7 = 1;
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v29);
          goto LABEL_33;
        }
        v22 = v9[2] & 0xFFFFFFFE;
        if ( v22 == -2147483630 )
        {
          HANDLELOCK::Pid((HANDLELOCK *)&v27, a2);
          v12 = v6;
        }
        else
        {
          v12 = v6;
          if ( v22 || a2 )
            goto LABEL_40;
          v12 = 0;
        }
        v7 = 1;
        goto LABEL_40;
      }
      if ( *((struct _KTHREAD **)EntryObject + 2) == KeGetCurrentThread() )
      {
        v9 = v27;
        goto LABEL_10;
      }
    }
LABEL_45:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v27);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v27);
  GreReleaseHmgrSemaphore(v24, v23, v25);
  if ( DcAttr )
    HmgFreeDcAttr((__int64)DcAttr);
  return v7;
}
