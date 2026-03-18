/*
 * XREFs of ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0144370
 * Callers:
 *     GreIntersectClipRect @ 0x1C007EB80 (GreIntersectClipRect.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C0024110 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C0031FF0 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 *     ?bCloseFigure@EPATHOBJ@@QEAAHXZ @ 0x1C0033C60 (-bCloseFigure@EPATHOBJ@@QEAAHXZ.c)
 *     EngSetLastError @ 0x1C0049420 (EngSetLastError.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0079C20 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0079D00 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C007B580 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C00809E0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0080B34 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0081030 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0081350 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0082170 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     PopThreadGuardedObject @ 0x1C0084420 (PopThreadGuardedObject.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C00860F0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C00863B0 (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0086FC0 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0089E90 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C009A120 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 */

__int64 __fastcall DC::iCombine(DC *this, struct EXFORMOBJ *a2, struct _RECTL *a3, int a4)
{
  LONG left; // r9d
  LONG top; // edx
  int v9; // r15d
  unsigned int v10; // edi
  __int64 v12; // r14
  struct _ENTRY *EntryFromObject; // rax
  REGION *v14; // rbx
  REGION *v15; // rcx
  bool v16; // zf
  REGION *v17; // rcx
  __int64 v18; // rdx
  int v19; // r8d
  LONG v20; // edi
  LONG v21; // r12d
  _DWORD *v22; // rbx
  int v23; // r14d
  int v24; // r8d
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // eax
  LONG v28; // edi
  int v29; // eax
  _BYTE v30[8]; // [rsp+20h] [rbp-E0h] BYREF
  REGION *v31; // [rsp+28h] [rbp-D8h] BYREF
  int v32; // [rsp+30h] [rbp-D0h]
  REGION *v33; // [rsp+38h] [rbp-C8h] BYREF
  int v34; // [rsp+40h] [rbp-C0h]
  struct _RECTL v35; // [rsp+48h] [rbp-B8h] BYREF
  REGION *v36; // [rsp+58h] [rbp-A8h] BYREF
  int v37; // [rsp+60h] [rbp-A0h]
  _BYTE v38[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v39; // [rsp+78h] [rbp-88h]
  _QWORD v40[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v41; // [rsp+E0h] [rbp-20h]
  struct _POINTL v42; // [rsp+F0h] [rbp-10h] BYREF
  struct _POINTL v43; // [rsp+F8h] [rbp-8h] BYREF
  LONG x; // [rsp+100h] [rbp+0h]
  LONG bottom; // [rsp+104h] [rbp+4h]
  LONG v46; // [rsp+108h] [rbp+8h]
  LONG v47; // [rsp+10Ch] [rbp+Ch]

  left = a3->left;
  top = a3->top;
  v43.x = a3->right;
  x = v43.x;
  bottom = a3->bottom;
  v47 = bottom;
  v42.x = left;
  v42.y = top;
  v43.y = top;
  v46 = left;
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v38);
  v9 = 0;
  if ( !v39 )
  {
    EngSetLastError(8u);
LABEL_3:
    v10 = 0;
    goto LABEL_4;
  }
  if ( !(unsigned int)EPATHOBJ::bMoveTo((EPATHOBJ *)v38, a2, &v42)
    || !(unsigned int)EPATHOBJ::bPolyLineTo((EPATHOBJ *)v38, a2, &v43, 3)
    || !(unsigned int)EPATHOBJ::bCloseFigure((EPATHOBJ *)v38) )
  {
    goto LABEL_3;
  }
  v32 = 0;
  RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v31, (struct EPATHOBJ *)v38, 1u, 0LL);
  if ( !v31 )
  {
    EngSetLastError(8u);
    v10 = 0;
    goto LABEL_39;
  }
  *((_DWORD *)this + 9) |= 0x10u;
  v10 = 0;
  v12 = *((_QWORD *)this + 20);
  EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, this);
  *((_BYTE *)EntryFromObject + 15) |= 4u;
  if ( v12 )
  {
    v34 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v33, 0x70u);
    v14 = v33;
    if ( v33 )
    {
      *(_QWORD *)&v35.left = v12;
      v10 = RGNOBJ::iCombine((RGNOBJ *)&v33, (struct RGNOBJ *)&v35, (struct RGNOBJ *)&v31, a4);
      if ( v10 )
      {
        v14 = v33;
        v15 = *(REGION **)&v35.left;
        ++*((_DWORD *)v33 + 8);
        *((_QWORD *)this + 20) = v14;
        v16 = (*((_DWORD *)v15 + 8))-- == 1;
        if ( v16 )
          REGION::vDeleteREGION(v15);
      }
      else
      {
        REGION::vDeleteREGION(v33);
        v14 = 0LL;
      }
    }
    REGION::vDeleteREGION(v31);
    v16 = v34 == 1;
    goto LABEL_37;
  }
  if ( a4 != 1 )
  {
    v37 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v36, 0x70u);
    v14 = v36;
    *(_QWORD *)&v35.left = 0LL;
    if ( !v36 )
    {
LABEL_36:
      REGION::vDeleteREGION(v31);
      v16 = v37 == 1;
LABEL_37:
      v31 = 0LL;
      if ( v16 )
        REGION::vDeleteREGION(v14);
      goto LABEL_39;
    }
    v34 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v33, 0x70u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v33);
    if ( v33 )
    {
      DC::vGet_sizlWindow(this, (struct tagSIZE *)&v35);
      v20 = v35.left;
      v21 = v35.top;
      v22 = (_DWORD *)*((_QWORD *)this + 6);
      if ( *((_QWORD *)this + 62) )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v30, v18, v19);
        v23 = 0;
        if ( (v22[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
        {
          v23 = v22[646];
          v20 += v23;
          v9 = v22[647];
          v21 += v9;
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v24);
        if ( ghsemDynamicModeChange )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
          PsLeavePriorityRegion(v25);
        }
      }
      else
      {
        v23 = 0;
      }
      v26 = *((_DWORD *)this + 10) & 1;
      v27 = *((_DWORD *)this + 2 * v26 + 254);
      v28 = v20 - v27;
      v35.left = v23 - v27;
      v29 = *((_DWORD *)this + 2 * v26 + 255);
      v35.top = v9 - v29;
      v35.bottom = v21 - v29;
      v35.right = v28;
      RGNOBJ::vSet((struct _RECTL **)&v33, &v35);
      v10 = RGNOBJ::iCombine((RGNOBJ *)&v36, (struct RGNOBJ *)&v33, (struct RGNOBJ *)&v31, a4);
      if ( v10 )
      {
        v14 = v36;
        ++*((_DWORD *)v36 + 8);
        *((_QWORD *)this + 20) = v14;
        goto LABEL_35;
      }
      v17 = v36;
    }
    else
    {
      v17 = v14;
    }
    REGION::vDeleteREGION(v17);
    v14 = 0LL;
LABEL_35:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v33);
    goto LABEL_36;
  }
  ++*((_DWORD *)v31 + 8);
  *((_QWORD *)this + 20) = v31;
  v10 = RGNOBJ::iComplexity((RGNOBJ *)&v31);
LABEL_39:
  if ( v32 == 1 )
  {
    REGION::vDeleteREGION(v31);
    v31 = 0LL;
  }
LABEL_4:
  EPATHOBJ::vUnlock((EPATHOBJ *)v38);
  if ( v41 )
    PopThreadGuardedObject(v40);
  return v10;
}
