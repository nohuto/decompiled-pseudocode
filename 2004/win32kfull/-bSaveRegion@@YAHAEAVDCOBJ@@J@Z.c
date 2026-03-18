/*
 * XREFs of ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C00F3DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E9B8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002ECE4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026FA74 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall bSaveRegion(struct DCOBJ *a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v4; // rcx
  __int64 v5; // rcx
  DC *v6; // r9
  struct _DC_ATTR *UserAttr; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  struct _DC_ATTR *v10; // rax
  __int64 v11; // rbx
  __int64 v13; // kr00_8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  DYNAMICMODECHANGESHARELOCK *v17; // rcx
  DC *v18; // [rsp+20h] [rbp-40h] BYREF
  __int64 v19; // [rsp+28h] [rbp-38h]
  _BYTE v20[4]; // [rsp+30h] [rbp-30h] BYREF
  int v21; // [rsp+34h] [rbp-2Ch] BYREF
  __int64 v22; // [rsp+38h] [rbp-28h] BYREF
  int v23; // [rsp+40h] [rbp-20h]
  struct _RECTL v24; // [rsp+48h] [rbp-18h] BYREF

  v2 = 1;
  v4 = *(_QWORD *)a1;
  if ( (_DWORD)a2 != 1 )
  {
    v5 = *(_QWORD *)(v4 + 112);
    LOBYTE(a2) = 1;
    v19 = 0LL;
    v18 = (DC *)HmgLockEx(v5, a2, 0LL);
    v6 = v18;
    if ( v18 )
    {
      if ( (*((_DWORD *)v18 + 11) & 2) == 0 )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v18);
        if ( UserAttr && !DC::SaveAttributes(v18, UserAttr) )
        {
          _InterlockedDecrement((volatile signed __int32 *)v18 + 3);
          v6 = 0LL;
          v18 = 0LL;
          goto LABEL_31;
        }
        *((_DWORD *)v18 + 11) |= 2u;
        v6 = v18;
        LODWORD(v19) = 1;
      }
      if ( (*((_DWORD *)v6 + 130) & 4) == 0 )
      {
LABEL_7:
        if ( v6 )
        {
          v8 = *((_QWORD *)v6 + 21);
          if ( v8 )
          {
            ++*(_DWORD *)(v8 + 32);
            v6 = v18;
          }
          v9 = *((_QWORD *)v6 + 20);
          if ( v9 )
          {
            ++*(_DWORD *)(v9 + 32);
            v6 = v18;
          }
          goto LABEL_12;
        }
LABEL_31:
        v2 = 0;
LABEL_12:
        if ( v6 )
        {
          if ( (_DWORD)v19 && (*((_DWORD *)v6 + 11) & 2) != 0 )
          {
            if ( !HIDWORD(v19) )
            {
              v10 = XDCOBJ::GetUserAttr((XDCOBJ *)&v18);
              if ( v10 )
                DC::RestoreAttributes(v18, v10);
              v6 = v18;
            }
            *((_DWORD *)v6 + 11) &= ~2u;
            v6 = v18;
            LODWORD(v19) = 0;
          }
          v21 = 0;
          v11 = *(_QWORD *)v6;
          HmgDecrementExclusiveReferenceCountEx(v6, HIDWORD(v19), &v21);
          if ( v21 )
            bDeleteDCInternalEx(v11, 0LL);
        }
        return v2;
      }
      DC::vMarkTransformDirty(v6);
    }
    else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
    {
      PsGetWin32KFilterSet();
    }
    v6 = v18;
    goto LABEL_7;
  }
  v13 = *(_QWORD *)(v4 + 512);
  v24.top = HIDWORD(v13);
  v24.right = v13;
  v24.left = 0;
  v24.bottom = 0;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v22);
  if ( v22 )
  {
    if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v20, v14, v15, v16);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v17);
    }
    RGNOBJ::vSet((RGNOBJ *)&v22, &v24);
    *(_QWORD *)(*(_QWORD *)a1 + 1120LL) = v22;
    if ( v23 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v22);
    return v2;
  }
  if ( v23 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v22);
  return 0LL;
}
