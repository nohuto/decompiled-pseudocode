/*
 * XREFs of GreIntersectVisRect @ 0x1C0155C90
 * Callers:
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C014C634 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 * Callees:
 *     EngSetLastError @ 0x1C003C4D0 (EngSetLastError.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0074EF0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C00757F4 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0075940 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0075A70 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0075DA0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C007F140 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0083120 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008C364 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008CC7C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0090828 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00B4C68 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00C5914 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall GreIntersectVisRect(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  unsigned int v8; // r13d
  struct OBJECT *v9; // rsi
  __int64 v10; // rdx
  int v11; // r8d
  __int64 v12; // rbx
  unsigned int v13; // edx
  struct OBJECT *v14; // rdx
  struct _ENTRY *EntryFromObject; // rax
  __int64 v16; // rax
  __int64 v18; // [rsp+28h] [rbp-71h] BYREF
  __int64 v19; // [rsp+30h] [rbp-69h] BYREF
  int v20; // [rsp+38h] [rbp-61h]
  struct _RECTL *v21; // [rsp+40h] [rbp-59h] BYREF
  int v22; // [rsp+48h] [rbp-51h]
  struct _RECTL v23; // [rsp+50h] [rbp-49h] BYREF
  __int64 v24; // [rsp+60h] [rbp-39h] BYREF
  struct OBJECT *v25[2]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v26[32]; // [rsp+78h] [rbp-21h] BYREF
  _QWORD v27[2]; // [rsp+98h] [rbp-1h] BYREF
  __int16 v28; // [rsp+A8h] [rbp+Fh]

  v8 = 0;
  if ( a2 >= a4 || a3 >= a5 || a2 < -134217728 || a4 > 0x7FFFFFF || a3 < -134217728 || a5 > 0x7FFFFFF )
    return 0LL;
  DCOBJA::DCOBJA((DCOBJA *)v25, a1);
  v9 = v25[0];
  if ( v25[0] )
  {
    v24 = *((_QWORD *)v25[0] + 6);
    v27[0] = 0LL;
    v27[1] = 0LL;
    v28 = 256;
    DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v26, (struct PDEVOBJ *)&v24);
    if ( (v26[24] & 1) != 0 )
    {
      v12 = *((_QWORD *)v9 + 140);
      v22 = 0;
      v18 = v12;
      v23.left = a2;
      v23.top = a3;
      v23.right = a4;
      v23.bottom = a5;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v21, 0x70u);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v21);
      v13 = *(_DWORD *)(v12 + 80);
      v20 = 0;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v19, v13);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v19);
      if ( v21 && v19 )
      {
        RGNOBJ::vSet(&v21, &v23);
        RGNOBJ::vCopy((RGNOBJ *)&v19, (struct RGNOBJ *)&v18);
        if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v18, (struct RGNOBJ *)&v21, (struct RGNOBJ *)&v19, 1) )
        {
          *((_QWORD *)v9 + 140) = v18;
          v14 = v25[0];
          *(_DWORD *)(v18 + 28) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
          *((_DWORD *)v14 + 9) |= 0x10u;
          EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, v14);
          v8 = 1;
          *((_BYTE *)EntryFromObject + 15) |= 4u;
        }
      }
      else
      {
        EngSetLastError(8u);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v19);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v21);
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v26, v10, v11);
    v16 = v27[0];
    if ( v27[0] )
    {
      if ( (_BYTE)v28 )
      {
        *(_DWORD *)(v27[0] + 40LL) &= ~2u;
        v16 = v27[0];
        LOBYTE(v28) = 0;
      }
      if ( v16 )
        XDCOBJ::vUnlockFast((XDCOBJ *)v27);
    }
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v25);
  }
  return v8;
}
