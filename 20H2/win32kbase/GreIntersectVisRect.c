/*
 * XREFs of GreIntersectVisRect @ 0x1C014D3A0
 * Callers:
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C0143E44 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 * Callees:
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0037C30 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C003C1F0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003C344 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C003C9D0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003CAC0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C00406D0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0041720 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0044450 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004BA04 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C004BB94 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C004C148 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     EngSetLastError @ 0x1C00AAA00 (EngSetLastError.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00C52A4 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall GreIntersectVisRect(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  unsigned int v8; // r13d
  struct OBJECT *v9; // rsi
  __int64 v10; // rbx
  unsigned int v11; // edx
  struct OBJECT *v12; // rdx
  struct _ENTRY *EntryFromObject; // rax
  __int64 v15; // [rsp+28h] [rbp-71h] BYREF
  __int64 v16; // [rsp+30h] [rbp-69h] BYREF
  int v17; // [rsp+38h] [rbp-61h]
  struct _RECTL *v18; // [rsp+40h] [rbp-59h] BYREF
  int v19; // [rsp+48h] [rbp-51h]
  struct _RECTL v20; // [rsp+50h] [rbp-49h] BYREF
  __int64 v21; // [rsp+60h] [rbp-39h] BYREF
  struct OBJECT *v22[2]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v23[32]; // [rsp+78h] [rbp-21h] BYREF
  _QWORD v24[2]; // [rsp+98h] [rbp-1h] BYREF
  __int16 v25; // [rsp+A8h] [rbp+Fh]

  v8 = 0;
  if ( a2 >= a4 || a3 >= a5 || a2 < -134217728 || a4 > 0x7FFFFFF || a3 < -134217728 || a5 > 0x7FFFFFF )
    return 0LL;
  DCOBJA::DCOBJA((DCOBJA *)v22, a1);
  v9 = v22[0];
  if ( v22[0] )
  {
    v21 = *((_QWORD *)v22[0] + 6);
    v24[0] = 0LL;
    v24[1] = 0LL;
    v25 = 256;
    DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v23, (struct PDEVOBJ *)&v21);
    if ( (v23[24] & 1) != 0 )
    {
      v10 = *((_QWORD *)v9 + 140);
      v19 = 0;
      v15 = v10;
      v20.left = a2;
      v20.top = a3;
      v20.right = a4;
      v20.bottom = a5;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v18, 0x70u);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v18);
      v11 = *(_DWORD *)(v10 + 80);
      v17 = 0;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v16, v11);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v16);
      if ( v18 && v16 )
      {
        RGNOBJ::vSet(&v18, &v20);
        RGNOBJ::vCopy((RGNOBJ *)&v16, (struct RGNOBJ *)&v15);
        if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v15, (struct RGNOBJ *)&v18, (struct RGNOBJ *)&v16, 1) )
        {
          *((_QWORD *)v9 + 140) = v15;
          v12 = v22[0];
          *(_DWORD *)(v15 + 28) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
          *((_DWORD *)v12 + 9) |= 0x10u;
          EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, v12);
          v8 = 1;
          *((_BYTE *)EntryFromObject + 15) |= 4u;
        }
      }
      else
      {
        EngSetLastError(8u);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v18);
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v23);
    if ( v24[0] )
    {
      if ( (_BYTE)v25 )
      {
        *(_DWORD *)(v24[0] + 40LL) &= ~2u;
        LOBYTE(v25) = 0;
      }
      XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v24);
    }
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v22);
  }
  return v8;
}
